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

#ifndef _core_windows_OS_h_
#define _core_windows_OS_h_

static size_t defaultStackSize;
static size_t getDefaultStackSize() {
	return defaultStackSize;
}

static void initSystemInfo();
static void exitProcess(bool die, int exitCode);
static int exitThread(int exitCode);

class ParkEvent : public ::java::lang::CoreObject {
public:
	ParkEvent() {
		event = 0;
		parkHandle = CreateEvent(nullptr, false, false, nullptr);
		guarantee(parkHandle != nullptr, "invariant");
	}
	~ParkEvent() {
		CloseHandle(parkHandle);
	}
	void reset() {
		event = 0;
	}
	void park();
	void unpark();
	int  park(jlong millis);
private:
	std::atomic_int event;
	HANDLE parkHandle;
};

class Parker {
public:
	Parker() {
		parkHandle = CreateEvent(nullptr, true, false, nullptr);
		guarantee(parkHandle != nullptr, "invariant");
	}
	~Parker() {
		CloseHandle(parkHandle);
	}
	void park(bool isAbsolute, jlong time);
	void unpark();

protected:
	HANDLE parkHandle;
	volatile void* owner = nullptr;
};

class PlatformMutex : public ::java::lang::CoreObject {
public:
	PlatformMutex() {
		InitializeCriticalSection(&mutex);
	}
	~PlatformMutex() {
		DeleteCriticalSection(&mutex);
	}
	void lock() {
		EnterCriticalSection(&mutex);
	}
	void unlock() {
		LeaveCriticalSection(&mutex);
	}
	bool tryLock() {
		return TryEnterCriticalSection(&mutex);
	}
protected:
	CRITICAL_SECTION mutex;
};

class PlatformMonitor : public PlatformMutex {
public:
	PlatformMonitor() {
		InitializeConditionVariable(&cond);
	}
	~PlatformMonitor() {
	}
	bool wait(jlong millis);
	void notify() {
		WakeConditionVariable(&cond);
	}
	void notifyAll() {
		WakeAllConditionVariable(&cond);
	}
private:
	CONDITION_VARIABLE cond;
};

#endif // _core_windows_OS_h_