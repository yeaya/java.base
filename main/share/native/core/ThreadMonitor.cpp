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
#include "OS.h"
#include "OSThread.h"
#include "JavaThread.h"

ThreadMonitor::ThreadMonitor() : owner(nullptr) {
}

ThreadMonitor::~ThreadMonitor() {
}

void ThreadMonitor::lock(JavaThread* self) {
	monitor.lock();
	setOwner(self);
}

void ThreadMonitor::lock() {
	lock(JavaThread::sureCurrentThread());
}

bool ThreadMonitor::tryLock0() {
	JavaThread* const self = JavaThread::sureCurrentThread();
	if (getOwner() == self) {
		return false;
	}
	if (monitor.tryLock()) {
		setOwner(self);
		return true;
	}
	return false;
}

bool ThreadMonitor::tryLock() {
	return tryLock0();
}

void ThreadMonitor::unlock() {
	setOwner(nullptr);
	monitor.unlock();
}

void ThreadMonitor::notify() {
	monitor.notify();
}

void ThreadMonitor::notifyAll() {
	monitor.notifyAll();
}

bool ThreadMonitor::wait(int64_t timeout) {
	JavaThread* self = JavaThread::sureCurrentThread();
	setOwner(nullptr);
	bool ret = monitor.wait(timeout);
	setOwner(self);
	return ret;
}

bool ThreadMonitor::wait() {
	return wait(0);
}