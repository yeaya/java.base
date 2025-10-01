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

#include "ObjectMonitor.h"
#include "ObjectSynchronizer.h"
#include "OS.h"

#include "Platform.h"
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/ObjectHead.h>
#include <mutex>

using namespace java::lang;

inline ObjectMonitor* getObjectMonitor(ObjectHead* oh) {
	ObjectMonitor* om = (ObjectMonitor*)(oh->objectMonitor);
	return om;
}

template<typename T>
inline bool cas(T** mem, T*& expected, T* desired) {
	return std::atomic_compare_exchange_strong((std::atomic<intptr_t>*)mem, (intptr_t*)&expected, (intptr_t)desired);
}

inline ObjectMonitor* createObjectMonitor(ObjectHead* oh) {
	ObjectMonitor* newObjectMonitor = new ObjectMonitor(nullptr);
	ObjectMonitor* oldObjectManager = nullptr;
	if (cas((ObjectMonitor**)&oh->objectMonitor, oldObjectManager, newObjectMonitor)) {
		oh->setMonitor();
		return newObjectMonitor;
	}
	delete newObjectMonitor;
	return (ObjectMonitor*)oldObjectManager;
}

inline bool useLocalMonitor(ObjectHead* oh) {
	if (!oh->isGlobal() && !oh->isMonitor()) {
		return true;
	}
	return false;
}

// must from local object
void ObjectSynchronizer::upgradeMonitor(::java::lang::ObjectHead* oh, JavaThread* current) {
	ObjectMonitor* newObjectMonitor = new ObjectMonitor(fromOh(oh));
	intptr_t objectMonitor = oh->objectMonitor;
	for (int32_t i = 0; i < objectMonitor; i++) {
		newObjectMonitor->enter(current);
	}
	oh->objectMonitor = ((intptr_t)newObjectMonitor);
	oh->setMonitor();
}

void ObjectSynchronizer::enter(const $Object0* obj, JavaThread* current) {
	ObjectHead* oh = toOh(obj);
	if (useLocalMonitor(oh)) {
		oh->objectMonitor++;
	} else {
	// while (true) {
		ObjectMonitor* monitor = getCreateMonitor(oh);
		monitor->enter(current);
			// return;
		// }
	// }
	}
}

bool ObjectSynchronizer::tryEnter(const $Object0* obj, JavaThread* current) {
	ObjectHead* oh = toOh(obj);
	if (useLocalMonitor(oh)) {
		oh->objectMonitor++;
		return true;
	} else {
		ObjectMonitor* monitor = ObjectSynchronizer::getCreateMonitor(oh);
		return monitor->tryEnter(current);
	}
}

void ObjectSynchronizer::exit(const $Object0* obj, JavaThread* current) {
	ObjectHead* oh = toOh(obj);
	if (useLocalMonitor(oh)) {
		oh->objectMonitor--;
	} else {
		ObjectMonitor* monitor = getCreateMonitor(oh);
		monitor->exit(current, false);
	}
}

ObjectLocker::ObjectLocker(const $Object0* obj, JavaThread* current) {
	thread = current;
	this->obj = obj;
	if (obj != nullptr) {
		ObjectSynchronizer::enter(obj, thread);
	}
}

ObjectLocker::~ObjectLocker() {
	if (obj != nullptr) {
		ObjectSynchronizer::exit(obj, thread);
	}
}

int ObjectSynchronizer::wait(const $Object0* obj, jlong millis, JavaThread* current) {
	if (millis < 0) {
		$throwNew(::java::lang::IllegalArgumentException, "timeout value is negative"_s);
	}
	ObjectHead* oh = toOh(obj);
	if (!oh->isGlobal() && !oh->isMonitor()) {
		upgradeMonitor(oh, current);
	}
	ObjectMonitor* monitor = getCreateMonitor(oh);
	monitor->wait(millis, true, current);
	return 0;
}

void ObjectSynchronizer::notify(const $Object0* obj, JavaThread* current) {
	ObjectHead* oh = toOh(obj);
	if (!oh->isGlobal() && !oh->isMonitor()) {
		upgradeMonitor(oh, current);
	}
	ObjectMonitor* monitor = getCreateMonitor(oh);
	monitor->notify(current);
}

void ObjectSynchronizer::notifyAll(const $Object0* obj, JavaThread* current) {
	ObjectHead* oh = toOh(obj);
	if (!oh->isGlobal() && !oh->isMonitor()) {
		upgradeMonitor(oh, current);
	}
	ObjectMonitor* monitor = getCreateMonitor(oh);
	monitor->notifyAll(current);
}

bool ObjectSynchronizer::holdsLock(JavaThread* current, const $Object0* obj) {
	Object0* obj0 = $toObject0(obj);
	ObjectHead* oh = toOh(obj0);
	if (!oh->isMonitor()) {
		return oh->objectMonitor > 0;
	}
	ObjectMonitor* monitor = getObjectMonitor(oh);
	if (monitor != nullptr && monitor->isEntered(current)) {
		return true;
	}
	return false;
}

ObjectMonitor* ObjectSynchronizer::getCreateMonitor(ObjectHead* oh) {
	ObjectMonitor* oldObjectManager = getObjectMonitor(oh);
	if (oldObjectManager != nullptr) {
		return oldObjectManager;
	}
	return createObjectMonitor(oh);
}

void ObjectSynchronizer::freeMonitor(ObjectHead* oh) {
	if (oh->isMonitor()) {
		ObjectMonitor* prev = (ObjectMonitor*)oh->objectMonitor;
		if (prev != nullptr) {
			prev->clearOwner();
			delete prev;
			oh->objectMonitor = 0;
		}
		oh->clearMonitor();
	}
}

void ObjectSynchronizer::releaseMonitors(JavaThread* current) {
	ObjectMonitor* om = current->holdObjectMonitorList.first();
	while (om != nullptr) {
		if (om->exit(current, true)) {
			om = current->holdObjectMonitorList.first();
		} else {
			$shouldNotReachHere();
			current->holdObjectMonitorList.removeFirst();
			om = current->holdObjectMonitorList.first();
		}
	}
}

void ObjectLocker::notifyAll(JavaThread* current) {
	ObjectSynchronizer::notifyAll(obj, current);
}