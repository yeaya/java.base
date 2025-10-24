/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "jvm.h"

#include "OS.h"
#include "ElfDecoder.h"
#include "Arguments.h"
#include "JavaThread.h"

#include <sys/mman.h>
#include <pthread.h>
#include <signal.h>
#include <dlfcn.h>
#include <sys/sysinfo.h>
#include <link.h>

#ifndef _GNU_SOURCE
  #define _GNU_SOURCE
  #include <sched.h>
  #undef _GNU_SOURCE
#else
  #include <sched.h>
#endif

#include <jcpp.h>

int (*_pthread_setname_np)(pthread_t, const char*) = NULL;
int OS::pageSize = -1;
static jlong initialTimeNanos = 0;

ElfDecoder elfDecoder;

jlong OS::getAvailableMemory() {
	// if (OSContainer::isContainerized()) {
	//   jlong mem_limit = OSContainer::getMemoryLimit();
	//   jlong mem_usage = OSContainer::getMemoryUsage();
	//   if (mem_limit > 0 && mem_usage > 0 ) {
	//	 return mem_limit > mem_usage ? (julong)mem_limit - (julong)mem_usage : 0;
	//	 return avail_mem;
	//   }
	// }

	struct sysinfo si;
	sysinfo(&si);
	jlong availMem = (jlong)si.freeram * si.mem_unit;
	return availMem;
}

jlong OS::getPhysicalMemory() {
	// if (OSContainer::isContainerized()) {
	//   jlong mem_limit = OSContainer::getMemoryLimit();
	//   if (mem_limit > 0) {
	//	 return mem_limit;
	//   }
	// }

	jlong physMem = (jlong)sysconf(_SC_PHYS_PAGES) * (jlong)sysconf(_SC_PAGESIZE);
	return physMem;
}

void OS::initSystemProperties() {
#ifndef DEFAULT_LIBPATH
	#if defined(_LP64)
		#define DEFAULT_LIBPATH "/usr/lib64:/lib64:/lib:/usr/lib"
	#else
		#define DEFAULT_LIBPATH "/lib:/usr/lib"
	#endif
#endif

#define SYS_EXT_DIR "/usr/java/packages"

	// sysclasspath, java_home, dll_dir
	{
		char buf[MAXPATHLEN];
		OS::getJavaBasePath(buf, sizeof(buf));
		Arguments::setJavaBasePath(buf);
		char* pslash = strrchr(buf, '/');
		if (pslash != NULL) {
			*pslash = '\0';
		}
		// pslash = strrchr(buf, '/');
		// if (pslash != NULL) {
		//   *pslash = '\0';
		// }
		Arguments::setBootLibraryPath(buf);
		if (pslash != NULL) {
			pslash = strrchr(buf, '/');
			if (pslash != NULL) {
				*pslash = '\0';
			}
		}
		Arguments::setJavaHome(buf);
	}

	{
		const char* envPath = ::getenv("LD_LIBRARY_PATH");
		const char* colon = ":";
		if (envPath == nullptr) {
			envPath = "";
			colon = "";
		}
		char* libraryPath = $allocRaw<char>(strlen(envPath) + 1 + sizeof(SYS_EXT_DIR) + sizeof("/lib/") + sizeof(DEFAULT_LIBPATH) + 1);
		sprintf(libraryPath, "%s%s" SYS_EXT_DIR "/lib:" DEFAULT_LIBPATH, envPath, colon);
		Arguments::setJavaLibraryPath(libraryPath);
		$freeRaw(libraryPath);
	}
}

void OS::breakpoint() {
}

jlong OS::getElapsedCounter() {
	return getTimeNanos() - initialTimeNanos;
}

int64_t OS::getCurrentThreadId() {
	return (int64_t)::pthread_self();
}

int OS::getCurrentProcessId() {
	return ::getpid();
}

bool OS::suspendThread(void* handle) {
	return false;
}

bool OS::resumeThread(void* handle) {
	return false;
}

const char* OS::getTempDirectory(char* buf, int bufLen) {
	strncpy(buf, "/tmp", bufLen - 1);
	buf[bufLen] = '\0';
	return buf;
}

bool OS::addressToFunctionName(address addr, char* buf, int buflen) {
	Dl_info dlinfo;
	if (dladdr(addr, &dlinfo) != 0) {
		if (dlinfo.dli_saddr != NULL && dlinfo.dli_sname != NULL) {
			if (!(elfDecoder.demangle(dlinfo.dli_sname, buf, buflen))) {
				jio_snprintf(buf, buflen, "%s", dlinfo.dli_sname);
				return true;
			}
		}
		if (dlinfo.dli_fname != NULL && dlinfo.dli_fbase != NULL) {
			return elfDecoder.decode((address)(addr - (address)dlinfo.dli_fbase), buf, buflen, dlinfo.dli_fname);
		}
	}
	buf[0] = '\0';
	return false;
}

struct AddressToLibraryName {
	address addr;
	size_t  buflen;
	char* fname;
	address base;
};

static int handleAddressToLibraryName(struct dl_phdr_info* info, size_t size, void* data) {
	bool found = false;
	address libbase = nullptr;
	struct AddressToLibraryName* addressToLibraryName = (struct AddressToLibraryName*)data;
	for (int i = 0; i < info->dlpi_phnum; i++) {
		address segbase = (address)(info->dlpi_addr + info->dlpi_phdr[i].p_vaddr);
		if (info->dlpi_phdr[i].p_type == PT_LOAD) {
			if (libbase == nullptr || libbase > segbase) {
				libbase = segbase;
			}
			if (segbase <= addressToLibraryName->addr && addressToLibraryName->addr < segbase + info->dlpi_phdr[i].p_memsz) {
				found = true;
			}
		}
	}
	if (found && info->dlpi_name && info->dlpi_name[0]) {
		addressToLibraryName->base = libbase;
		if (addressToLibraryName->fname != nullptr) {
			jio_snprintf(addressToLibraryName->fname, addressToLibraryName->buflen, "%s", info->dlpi_name);
		}
		return 1;
	}
	return 0;
}

bool OS::getLibraryWithAddress(address addr, char* buf, int buflen) {
	Dl_info dlinfo;
	struct AddressToLibraryName data;
	data.addr = addr;
	data.fname = buf;
	data.buflen = buflen;
	data.base = NULL;
	int ret = dl_iterate_phdr(handleAddressToLibraryName, (void*)&data);
	if (ret) {
		return true;
	}
	if (dladdr((void*)addr, &dlinfo) != 0) {
		if (dlinfo.dli_fname != NULL) {
			jio_snprintf(buf, buflen, "%s", dlinfo.dli_fname);
		}
		return true;
	}
	buf[0] = '\0';
	return false;
}

void* OS::loadLibrary(const char* filename, char* ebuf, int ebuflen) {
	void* result = ::dlopen(filename, RTLD_LAZY);
	if (result == NULL) {
		const char* error = ::dlerror();
		if (error == NULL) {
			error = "dlerror returned no error description";
		}
		if (ebuf != NULL && ebuflen > 0) {
			::strncpy(ebuf, error, ebuflen - 1);
			ebuf[ebuflen - 1] = '\0';
		}
	}
	return result;
}

void* OS::getFromLibrary(void* handle, const char* name) {
	return dlsym(handle, name);
}

void* OS::getDefaultProcessHandle() {
	return (void*)::dlopen(NULL, RTLD_LAZY);
}

typedef int (*LoadedModulesCallbackFunc)(const char*, address, address, void*);

struct LoadedModulesInfoParam {
	LoadedModulesCallbackFunc callback;
	void* param;
};

static int dl_iterate_callback(struct dl_phdr_info* info, size_t size, void* data) {
	if ((info->dlpi_name == NULL) || (*info->dlpi_name == '\0')) {
		return 0;
	}

	struct LoadedModulesInfoParam* loadedModulesInfoParam = reinterpret_cast<struct LoadedModulesInfoParam*>(data);
	address base = NULL;
	address top = NULL;
	for (int idx = 0; idx < info->dlpi_phnum; idx++) {
		const ElfW(Phdr)* phdr = info->dlpi_phdr + idx;
		if (phdr->p_type == PT_LOAD) {
			address raw_phdr_base = reinterpret_cast<address>(info->dlpi_addr + phdr->p_vaddr);

			address phdr_base = $align_down(raw_phdr_base, phdr->p_align);
			if ((base == NULL) || (base > phdr_base)) {
				base = phdr_base;
			}

			address phdr_top = $align_up(raw_phdr_base + phdr->p_memsz, phdr->p_align);
			if ((top == NULL) || (top < phdr_top)) {
				top = phdr_top;
			}
		}
	}

	return loadedModulesInfoParam->callback(info->dlpi_name, base, top, loadedModulesInfoParam->param);
}

int get_loaded_modules_info(LoadedModulesCallbackFunc callback, void* param) {
	struct LoadedModulesInfoParam loadedModulesInfoParam = { callback, param };
	return dl_iterate_phdr(&dl_iterate_callback, &loadedModulesInfoParam);
}

void OS::getJavaBasePath(char* buf, jint buflen) {
	char library[MAXPATHLEN];
	library[0] = '\0';
	bool ret = getLibraryWithAddress((address)OS::getJavaBasePath, library, sizeof(library));
	if (ret && library[0] != '\0') {
		OS::Unix::realpath(library, buf, buflen);
	}
}

int OS::getPageSize() {
	return pageSize;
}

void OS::yield() {
	sched_yield();
}

void OS::init(void) {
	long pageSize = sysconf(_SC_PAGESIZE);
	if (pageSize == -1) {
		fatal("sysconf(_SC_PAGESIZE) failed (%s)", OS::getErrorDesc(errno));
	}
	OS::pageSize = (pageSize);
	_pthread_setname_np = (int(*)(pthread_t, const char*))dlsym(RTLD_DEFAULT, "pthread_setname_np");
	OS::Unix::init();
	initialTimeNanos = getTimeNanos();
}

bool OS::init2(void) {
	// OS::Unix::init2();
	if (Unix::initSignals()) {
		return true;
	}
	return false;
}

int OS::getActiveProcessorCount0() {
	cpu_set_t cpus;
	cpu_set_t* cpus_p = &cpus;
	int cpus_size = sizeof(cpu_set_t);
	int cpu_count = 0;
	if (sched_getaffinity(0, cpus_size, cpus_p) == 0) {
		cpu_count = CPU_COUNT(cpus_p);
	} else {
		cpu_count = ::sysconf(_SC_NPROCESSORS_ONLN);
		reportWarning("sched_getaffinity failed (%s)- using online processor count (%d) "
			"which may exceed available processors", OS::getErrorDesc(errno), cpu_count);
	}
	return cpu_count;
}

int OS::getActiveProcessorCount() {
	// if (OSContainer::isContainerized()) {
	//   return OSContainer::getActiveProcessorCount();
	// } else {
	return getActiveProcessorCount0();
	// }
}

void OS::setNativeThreadName($String* name) {
	if (name != nullptr) {
		char threadName[512];
		name->utf8String((char*)threadName, sizeof(threadName));
		if (_pthread_setname_np) {
			char buf[16]; // according to glibc manpage
			snprintf(buf, sizeof(buf), "%s", threadName);
			buf[sizeof(buf) - 1] = '\0';
			_pthread_setname_np(pthread_self(), buf);
		}
	}
}

static void getCurrentStackRegion(address* bottom, size_t* size) {
	pthread_attr_t attr;
	int ret = pthread_getattr_np(pthread_self(), &attr);
	if (ret != 0) {
		if (ret == ENOMEM) {
			exitForOutOfMemory(0, "pthread_getattr_np");
		} else {
			fatal("pthread_getattr_np failed with error = %d", ret);
		}
	}

	if (pthread_attr_getstack(&attr, (void**)bottom, size) != 0) {
		fatal("Cannot locate current stack attributes!");
	}

	size_t guardSize = 0;
	ret = pthread_attr_getguardsize(&attr, &guardSize);
	if (ret != 0) {
		fatal("pthread_attr_getguardsize failed with error = %d", ret);
	}
	*bottom += guardSize;
	*size -= guardSize;

	pthread_attr_destroy(&attr);
}

address OS::getCurrentStackBase() {
	address bottom;
	size_t size;
	getCurrentStackRegion(&bottom, &size);
	return (bottom + size);
}

size_t OS::getCurrentStackSize() {
	address bottom;
	size_t size;
	getCurrentStackRegion(&bottom, &size);
	return size;
}

int64_t OS::getCurrentStackPointer() {
	int64_t var = 0;
	return (int64_t)&var;
}

#ifdef AMD64
	#define REG_PC REG_RIP
#else
	#define REG_PC REG_EIP
#endif // AMD64

address OS::Unix::getPc(const ucontext_t* uc) {
	return (address)uc->uc_mcontext.gregs[REG_PC];
}

void OS::Unix::setPc(ucontext_t* uc, address pc) {
	uc->uc_mcontext.gregs[REG_PC] = (intptr_t)pc;
}

void OS::Unix::saveStackObjectRegs(ucontext_t* uc, JavaThread* thread) {
	for (int i = 0; i < $lengthOf(uc->uc_mcontext.gregs); i++) {
		greg_t reg = uc->uc_mcontext.gregs[i];
		thread->saveStackObject((void*)reg);
	}
}

bool OS::Unix::handleSignal(int sig, siginfo_t* info, ucontext_t* uc, JavaThread* thread) {
	return false;
}

size_t OS::Unix::getDefaultStackSize() {
	return 1 * M;
}