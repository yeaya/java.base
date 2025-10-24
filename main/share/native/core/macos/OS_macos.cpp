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
#include "Arguments.h"
#include "JavaThread.h"
#include "MacosDecoder.h"
#include <dlfcn.h>
#include <pwd.h>
#include <signal.h>
#include <sys/mman.h>
#include <sys/sysctl.h>
#include <sys/time.h>
#include <sys/times.h>
#include <unistd.h>
#include <mach-o/dyld.h>
#include <atomic>
#include <mach/mach.h>

#include <jcpp.h>

jlong initialTimeNanos = 0;
MacosDecoder macosDecoder;

jlong OS::getAvailableMemory() {
	uint64_t available = getPhysicalMemory() >> 2;
	mach_msg_type_number_t count = HOST_VM_INFO64_COUNT;
	vm_statistics64_data_t vmstat;
	kern_return_t kerr = host_statistics64(mach_host_self(), HOST_VM_INFO64,
		(host_info64_t)&vmstat, &count);
	if (kerr == KERN_SUCCESS) {
		available = vmstat.free_count * OS::getPageSize();
	}
	return available;
}

jlong OS::getPhysicalMemory() {
	int mib[2];
	mib[0] = CTL_HW;
	mib[1] = HW_MEMSIZE;
	jlong physicalMemory;
	size_t len = sizeof(physicalMemory);
	if (sysctl(mib, 2, &physicalMemory, &len, nullptr, 0) == -1) {
		physicalMemory = 256 * 1024 * 1024;
	}
	return physicalMemory;
}

static const char* getHome() {
	const char* home = ::getenv("HOME");
	if ((home == nullptr) || (*home == '\0')) {
		struct passwd* passwd_info = getpwuid(geteuid());
		if (passwd_info != nullptr) {
			home = passwd_info->pw_dir;
		}
	}
	return home;
}

void OS::initSystemProperties() {
#ifndef DEFAULT_LIBPATH
	#define DEFAULT_LIBPATH "/lib:/usr/lib"
#endif

	// Base path of extensions installed on the system.
#define SYS_EXT_DIR "/usr/java/packages"
#define EXTENSIONS_DIR  "/lib/ext"

#define SYS_EXTENSIONS_DIR   "/Library/Java/Extensions"
#define SYS_EXTENSIONS_DIRS  SYS_EXTENSIONS_DIR ":/Network" SYS_EXTENSIONS_DIR ":/System" SYS_EXTENSIONS_DIR ":/usr/lib/java"

	char buf[MAXPATHLEN];
	{
		OS::getJavaBasePath(buf, sizeof(buf));
		Arguments::setJavaBasePath(buf);
		*(strrchr(buf, '/')) = '\0';
		char* pslash = strrchr(buf, '/');
		if (pslash != NULL) {
			*pslash = '\0';
		}
#ifdef STATIC_BUILD
		strcat(buf, "/lib");
#endif

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
		const char* home = getHome();

		const char* javaLibPath = ::getenv("JAVA_LIBRARY_PATH");
		const char* javaLibPathColon = ":";
		if (javaLibPath == NULL) {
			javaLibPath = "";
			javaLibPathColon = "";
		}

		const char* dyldLibPath = ::getenv("DYLD_LIBRARY_PATH");
		const char* dyldLibPathColon = ":";
		if (dyldLibPath == NULL) { dyldLibPath = ""; dyldLibPathColon = ""; }

		int len = MAXPATHLEN + strlen(dyldLibPath) + 1 + strlen(javaLibPath) + 1 +
			strlen(home) + sizeof(SYS_EXTENSIONS_DIR) + sizeof(SYS_EXTENSIONS_DIRS) + 3;
		char* ld_library_path = $allocRaw<char>(len);
		snprintf(ld_library_path, len, "%s%s%s%s%s" SYS_EXTENSIONS_DIR ":" SYS_EXTENSIONS_DIRS ":.",
			dyldLibPath, dyldLibPathColon, javaLibPath, javaLibPathColon, home);
		Arguments::setJavaLibraryPath(ld_library_path);
		$freeRaw(ld_library_path);
	}
}

void OS::breakpoint() {
}

#define OBJC_LIB "/usr/lib/libobjc.dylib"
#define OBJC_GCREGISTER "objc_registerThreadWithCollector"
typedef void (*objc_registerThreadWithCollector_t)();
extern "C" objc_registerThreadWithCollector_t objc_registerThreadWithCollectorFunction;
objc_registerThreadWithCollector_t objc_registerThreadWithCollectorFunction = NULL;

jlong OS::getElapsedCounter() {
	return getTimeNanos() - initialTimeNanos;
}

int64_t OS::getCurrentThreadId() {
	mach_port_t port = mach_thread_self();
	guarantee(MACH_PORT_VALID(port), "just checking");
	mach_port_deallocate(mach_task_self(), port);
	return (pid_t)port;
	//return (int64_t)::pthread_self();
}

int OS::getCurrentProcessId() {
	return (int)(getpid());
}

bool OS::suspendThread(void* handle) {
	return false;
}

bool OS::resumeThread(void* handle) {
	return false;
}

const char* OS::getTempDirectory(char* buf, int bufLen) {
	int pathSize = confstr(_CS_DARWIN_USER_TEMP_DIR, buf, bufLen);
	if (pathSize == 0 || pathSize > PATH_MAX) {
		strlcpy(buf, "/tmp/", bufLen);
	}
	return buf;
}

#define MACH_MAXSYMLEN 256

bool OS::addressToFunctionName(address addr, char* buf, int buflen) {
	Dl_info dlinfo;
	char localbuf[MACH_MAXSYMLEN];

	if (dladdr((void*)addr, &dlinfo) != 0) {
		// see if we have a matching symbol
		if (dlinfo.dli_saddr != NULL && dlinfo.dli_sname != NULL) {
			if (!(macosDecoder.demangle(dlinfo.dli_sname, buf, buflen))) {
				jio_snprintf(buf, buflen, "%s", dlinfo.dli_sname);
			}
			return true;
		}
		// no matching symbol so try for just file info
		if (dlinfo.dli_fname != NULL && dlinfo.dli_fbase != NULL) {
			if (macosDecoder.decode((address)(addr - (address)dlinfo.dli_fbase),
				buf, buflen, dlinfo.dli_fname)) {
				return true;
			}
		}

		// Handle non-dynamic manually:
		if (dlinfo.dli_fbase != NULL &&
			macosDecoder.decode(addr, localbuf, MACH_MAXSYMLEN, dlinfo.dli_fbase)) {
			if (!(macosDecoder.demangle(localbuf, buf, buflen))) {
				jio_snprintf(buf, buflen, "%s", localbuf);
			}
			return true;
		}
	}
	buf[0] = '\0';
	return false;
}

bool OS::getLibraryWithAddress(address addr, char* buf, int buflen) {
	Dl_info dlinfo;
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
#ifdef STATIC_BUILD
	return OS::getDefaultProcessHandle();
#else
	void* result = ::dlopen(filename, RTLD_LAZY);
	if (result != NULL) {
		return result;
	}

	const char* error_report = ::dlerror();
	if (error_report == NULL) {
		error_report = "dlerror returned no error description";
	}
	if (ebuf != NULL && ebuflen > 0) {
		// Read system error message into ebuf
		::strncpy(ebuf, error_report, ebuflen - 1);
		ebuf[ebuflen - 1] = '\0';
	}

	return NULL;
#endif // STATIC_BUILD
}

void* OS::getDefaultProcessHandle() {
	// return (void*)::dlopen(NULL, RTLD_FIRST);
	return (void*)::dlopen(NULL, RTLD_LAZY);
}

void* OS::getFromLibrary(void* handle, const char* name) {
	return dlsym(handle, name);
}

typedef int (*LoadedModulesCallbackFunc)(const char*, address, address, void*);

void OS::getJavaBasePath(char* buf, jint buflen) {
	char dli_fname[MAXPATHLEN];
	dli_fname[0] = '\0';
	bool ret = getLibraryWithAddress((address)(OS::getJavaBasePath), dli_fname, sizeof(dli_fname));
	if (ret && dli_fname[0] != '\0') {
		OS::Unix::realpath(dli_fname, buf, buflen);
	}
}

int OS::getPageSize() {
	int pageSize = getpagesize();
	if (pageSize <= 0) {
		fatal("OS::getPageSize: getpagesize failed (%s)", OS::getErrorDesc(errno));
	}
	return pageSize;
}

void OS::yield() {
	sched_yield();
}

void OS::init(void) {
	initialTimeNanos = getTimeNanos();

	OS::Unix::init();
}

bool OS::init2(void) {
	if (!OS::Unix::initSignals()) {
		return false;
	}
	void* handleLibObjc = dlopen(OBJC_LIB, RTLD_LAZY);
	if (handleLibObjc != NULL) {
		objc_registerThreadWithCollectorFunction = (objc_registerThreadWithCollector_t)dlsym(handleLibObjc, OBJC_GCREGISTER);
	}
	return true;
}

void OS::Macos::registerThreadWithCollectorFunction() {
	if (objc_registerThreadWithCollectorFunction != nullptr) {
		objc_registerThreadWithCollectorFunction();
	}
}

int OS::getActiveProcessorCount() {
	int mib[2];
	int activeProcessorCount;
	mib[0] = CTL_HW;
	mib[1] = HW_NCPU;
	size_t len = sizeof(activeProcessorCount);
	if (sysctl(mib, 2, &activeProcessorCount, &len, NULL, 0) != -1 && activeProcessorCount >= 1) {
		return activeProcessorCount;
	} else {
		return 1;
	}
}

void OS::setNativeThreadName($String* name) {
#if MAC_OS_X_VERSION_MIN_REQUIRED > MAC_OS_X_VERSION_10_5
	if (name != nullptr) {
		char threadName[512];
		name->c_utf8((char*)threadName, sizeof(threadName));
		// Snow Leopard and beyond
		char buf[MAXTHREADNAMESIZE];
		snprintf(buf, sizeof(buf), "Java: %s", threadName);
		pthread_setname_np(buf);
	}
#endif
}

address OS::Unix::getPc(const ucontext_t* uc) {
#ifdef AARCH64
	return (address)uc->uc_mcontext->__ss.__pc;
#else
	return (address)uc->uc_mcontext->__ss.__rip;
#endif
}

void OS::Unix::setPc(ucontext_t* uc, address pc) {
#ifdef AARCH64
	uc->uc_mcontext->__ss.__pc = (intptr_t)pc;
#else
	uc->uc_mcontext->__ss.__rip = (intptr_t)pc;
#endif
}

void OS::Unix::saveStackObjectRegs(ucontext_t* uc, JavaThread* thread) {
#ifdef AARCH64
	for (int i = 0; i < $lengthOf(uc->uc_mcontext->__ss.__x); i++) {
		__uint64_t reg = uc->uc_mcontext->__ss.__x[i];
		thread->saveStackObject((void*)reg);
	}
#else
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__r10);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__r11);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__r12);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__r13);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__r14);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__r15);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__r8);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__r9);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__rax);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__rbp);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__rbx);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__rcx);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__rdi);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__rdx);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__rip);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__rsi);
	thread->saveStackObject((void*)uc->uc_mcontext->__ss.__rsp);
#endif
}

bool OS::Unix::handleSignal(int sig, siginfo_t* info, ucontext_t* uc, JavaThread* thread) {
	return false;
}

size_t OS::Unix::getDefaultStackSize() {
	return 1 * M;
}

static void getCurrentStackRegion(address* bottom, size_t* size) {
	pthread_t self = pthread_self();
	void* stacktop = pthread_get_stackaddr_np(self);
	*size = pthread_get_stacksize_np(self);
	*bottom = (address)stacktop - *size;
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

// #if defined(AARCH64)
// void OS::enalbeWriteProtect(bool wxExec) {
//   pthread_jit_write_protect_np(wxExec);
// }
// #endif