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

#ifndef _core_ThreadMonitor_h_
#define _core_ThreadMonitor_h_

#include "OS.h"

class ThreadMonitor : public ::java::lang::CoreObject {
public:
	ThreadMonitor();
	~ThreadMonitor();
	void lock();
	void lock(JavaThread* self);
	void unlock();
	bool tryLock();
	bool wait(int64_t timeout);
	bool wait();
	void notify();
	void notifyAll();

private:
	bool tryLock0();
	JavaThread* getOwner() const {
		return owner;
	}
	void setOwner(JavaThread* owner) {
		this->owner.store(owner);
	}
	OS::PlatformMonitor monitor;
	std::atomic<JavaThread*> owner;
};

class ThreadMonitorLocker {
public:
	ThreadMonitorLocker(ThreadMonitor* monitor) : monitor(monitor) {
		if (monitor != nullptr) {
			monitor->lock();
		}
	}

	ThreadMonitorLocker(JavaThread* thread, ThreadMonitor* monitor) : monitor(monitor) {
		if (monitor != nullptr) {
			monitor->lock(thread);
		}
	}

	~ThreadMonitorLocker() {
		if (monitor != nullptr) {
			monitor->unlock();
		}
	}
protected:
	ThreadMonitor* monitor;
};

#endif // _core_ThreadMonitor_h_