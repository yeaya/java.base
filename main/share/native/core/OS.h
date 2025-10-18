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

#ifndef _core_OS_h_
#define _core_OS_h_

#include "jvm_md.h"
#include "coreDef.h"

#if defined(LINUX) || defined(AIX)
	#include "UnixSemaphore.h"
#elif defined(__APPLE__)
	#include "MacosSemaphore.h"
#elif defined(_WINDOWS)
	#include "WindowsSemaphore.h"
#endif

#include <java/lang/Object.h>
#include <atomic>

class JavaThread;
class OSThread;

enum OSReturn {
	OS_OK = 0,
	OS_ERR = -1,
	OS_INTRPT = -2,
	OS_TIMEOUT = -3,
	OS_NOMEM = -5,
	OS_NORESOURCE = -6
};

class OS {
public:
	static void init(void);
	static bool init2(void);
	static jlong getTimeMillis();
	static jlong getTimeNanos();
	static void getTimeSystemUTC(jlong& seconds, jlong& nanos);
	static jlong getElapsedCounter();
	static jlong getAvailableMemory();
	static jlong getPhysicalMemory();
	static int32_t getActiveProcessorCount();
	static void setNativeThreadName($String* name);
	static int32_t getPageSize();
	static int64_t getCurrentThreadId();
	static int32_t getCurrentProcessId();
	static bool suspendThread(void* handle);
	static bool resumeThread(void* handle);
	static void sleep(jlong ms);
	static void nanoSleep(jlong ns);
	static void yield();
	static void breakpoint();
	static address getCurrentStackBase();
	static size_t getCurrentStackSize();
	static int64_t getCurrentStackPointer();
	static bool snapshotStackObjects(void* jthread);
	static void exit(int num);
	static void shutdown();
	static void abort(bool dump_core, void* siginfo, const void* context);
	static void abort(bool dump_core = true);
	static void die();
	static char* toNativePath(char* path);
	static const char* getTempDirectory(char* buf, int bufLen);
	static const char* getCurrentDirectory(char* buf, int bufLen);
	static bool addressToFunctionName(address addr, char* buf, int bufLen);
	static bool getLibraryWithAddress(address addr, char* buf, int buflen);
	static void* loadLibrary(const char* name, char* ebuf, int ebuflen);
	static void* getFromLibrary(void* handle, const char* name);
	static void unloadLibrary(void* lib);
	static void* getDefaultProcessHandle();
	static int vsnprintf(char* buf, size_t len, const char* fmt, va_list args);
	static int snprintf(char* buf, size_t len, const char* fmt, ...);
	static size_t getLastErrorDesc(char* buf, size_t len);
	static const char* getErrorDesc(int e);
	static const char* getErrorName(int e);
	static int32_t getSignalNumber(const char* signalName);
	static void getJavaBasePath(char* buf, jint buflen);
	static void initSystemProperties();
	static int32_t getBackTrace(address* stack, int size, int toSkip = 0);
	static void initSignalSupport();
	static void notifySignal(int sig);
	static void* signal(int sig, void* handler);
	static void raiseSignal(int sig);
	static int waitSignal();
	static void* getUserHandler();
	static int64_t spinPause();
	static int64_t getSpinPauseCount();
	static void printStackTrace();

#include OS_HEADER(OS)

	static ParkEvent* createParkEvent();
	static void freeParkEvent(ParkEvent* e);

public:
	struct SignalInfo {
		int32_t sig;
		const char* name;
	};
#define DEFINE_SIGNAL_INFO(x) {x, #x}
	static int32_t getSignalNumber0(const char* signalName, const SignalInfo* signalInfos);
};

#endif // _core_OS_h_