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

#include "OS.h"
#include "OSThread.h"
#include "JavaThread.h"

#include <process.h>

void OSThread::init0() {
	setThreadHandle(nullptr);
	setThreadId(0);
	setInterruptEvent(nullptr);
}

void OSThread::deinit0() {
	if (interruptEvent != nullptr) {
		CloseHandle(interruptEvent);
		interruptEvent = nullptr;
	}
}

static unsigned __stdcall threadEntry(JavaThread* thread) {
	OSThread* osThread = thread->getOsThread();
	osThread->run(thread);
	return (unsigned)OS::exitThread(20115);
}

void OSThread::run(JavaThread* thread) {
	thread->callRun();
}

bool OSThread::create(JavaThread* thread, int64_t stackSize) {
	OSThread* osthread = new OSThread();
	if (osthread == nullptr) {
		return false;
	}
	HANDLE interruptEvent = CreateEvent(nullptr, true, false, nullptr);
	if (interruptEvent == nullptr) {
		delete osthread;
		return false;
	}
	osthread->setInterruptEvent(interruptEvent);
	thread->setOsThread(osthread);
	if (stackSize < 0) {
		stackSize = 0;
	}
	if (stackSize == 0) {
		if (JavaThread::getStackSizeAtCreate() > 0) {
			stackSize = JavaThread::getStackSizeAtCreate();
		}
	}
	unsigned int threadId;
	HANDLE threadHandle = (HANDLE)_beginthreadex(nullptr,
		(unsigned)stackSize,
		(unsigned(__stdcall*)(void*))threadEntry,
		thread,
		CREATE_SUSPENDED | STACK_SIZE_PARAM_IS_A_RESERVATION,
		&threadId);
	if (threadHandle == nullptr) {
		thread->setOsThread(nullptr);
		delete osthread;
		return false;
	}
	osthread->setThreadHandle(threadHandle);
	osthread->setThreadId(threadId);
	osthread->setState(INITIALIZED);
	return true;
}

bool OSThread::createAttached(JavaThread* thread) {
	HANDLE handle;
	if (!DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(),
		&handle, THREAD_ALL_ACCESS, false, 0)) {
		fatal("DuplicateHandle failed\n");
	}
	OSThread* osthread = new OSThread();
	if (osthread == nullptr) {
		return false;
	}
	HANDLE event = CreateEvent(nullptr, true, false, nullptr);
	if (event == nullptr) {
		delete osthread;
		return false;
	}
	osthread->setInterruptEvent(event);
	osthread->setThreadHandle(handle);
	osthread->setThreadId(GetCurrentThreadId());
	osthread->setState(RUNNABLE);
	thread->setOsThread(osthread);
	return true;
}

void OSThread::free(OSThread* osThread) {
	if (osThread != nullptr) {
		CloseHandle(osThread->getThreadHandle());
		delete osThread;
	}
}

void OSThread::start0() {
	ResumeThread(getThreadHandle());
}

void OSThread::setInterrupted(bool flag) {
	if (flag) {
		SetEvent(interruptEvent);
	} else {
		ResetEvent(interruptEvent);
	}
}