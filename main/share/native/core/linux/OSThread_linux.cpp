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

#include "ThreadMonitor.h"
#include "OSThread.h"
#include "JavaThread.h"

#include <signal.h>
#include <pthread.h>

void OSThread::init0() {
	threadId = 0;
	pthreadId = 0;
	sigInfo = nullptr;
	sigemptyset(&callerSigMask);
	startLock = new ThreadMonitor();
}

void OSThread::deinit0() {
	delete (ThreadMonitor*)startLock;
}

static void* threadEntry(JavaThread* thread) {
	OSThread* osthread = thread->getOsThread();
	osthread->run(thread);
	return 0;
}

void OSThread::run(JavaThread* thread) {
	setThreadId(OS::getCurrentThreadId());
	OS::Unix::initSigMask(this);
	{
		ThreadMonitor* sync = (ThreadMonitor*)getStartLock();
		ThreadMonitorLocker tml(thread, sync);
		setState(INITIALIZED);
		sync->notifyAll();
		while (getState() == INITIALIZED) {
			sync->wait();
		}
	}
	thread->callRun();
}

bool OSThread::create(JavaThread* thread, int64_t reqStackSize) {
	OSThread* osthread = new OSThread();
	if (osthread == nullptr) {
		return false;
	}
	thread->setOsThread(osthread);
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
	if (reqStackSize < 0) {
		reqStackSize = 0;
	}
	size_t stackSize = OS::Unix::getInitialStackSize(reqStackSize);
	int status = pthread_attr_setstacksize(&attr, stackSize);
	if (status != 0) {
		thread->setOsThread(nullptr);
		delete osthread;
		return false;
	}

	{
		pthread_t ptid;
		int ret = pthread_create(&ptid, &attr, (void* (*)(void*))threadEntry, thread);
		pthread_attr_destroy(&attr);

		if (ret != 0) {
			thread->setOsThread(nullptr);
			delete osthread;
			return false;
		}
		osthread->setPthreadId(ptid);
		{
			ThreadMonitor* sync = (ThreadMonitor*)osthread->getStartLock();
			ThreadMonitorLocker tml(sync);
			while (osthread->getState() == CREATED) {
				sync->wait();
			}
		}
	}
	return true;
}

bool OSThread::createAttached(JavaThread* thread) {
	OSThread* osthread = new OSThread();
	if (osthread == nullptr) {
		return false;
	}
	osthread->setThreadId(OS::getCurrentThreadId());
	osthread->setPthreadId(::pthread_self());
	osthread->setState(RUNNABLE);
	OS::Unix::initSigMask(osthread);
	thread->setOsThread(osthread);
	return true;
}

void OSThread::free(OSThread* osThread) {
	if (osThread != nullptr) {
		OS::Unix::deinitSigMask(osThread);
		delete osThread;
	}
}

void OSThread::start0() {
	ThreadMonitor* sync = (ThreadMonitor*)getStartLock();
	ThreadMonitorLocker tml(sync);
	sync->notify();
}

void OSThread::setInterrupted(bool flag) {
}