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

#ifndef _core_ObjectMonitor_h_
#define _core_ObjectMonitor_h_

#include <java/lang/List.h>
#include <java/lang/CoreObject.h>
#include <java/lang/SpinLock.h>

#include "OS.h"
#include "JavaThread.h"

class ObjectMonitor;

namespace java {
	namespace lang {
		class Object;
	}
}

class ObjectMonitorNodeList;

class ObjectMonitorNode {
public:
	ObjectMonitorNode(JavaThread* current);
	volatile ObjectMonitorNode* prev;
	volatile ObjectMonitorNode* next;
	std::atomic<ObjectMonitorNodeList*> list;
	JavaThread* thread;
};

class ObjectMonitorNodeList {
public:
	void prepend(ObjectMonitorNode* node);
	void append(ObjectMonitorNode* node);
	ObjectMonitorNode* first();
	ObjectMonitorNode* removeFirst();
	bool moveFirstPrepend(ObjectMonitorNodeList* target);
	bool remove(ObjectMonitorNode* node);
	bool isEmpty() {
		return list.isEmpty();
	}
	bool onlyOne(ObjectMonitorNode* node) {
		return list.only(node);
	}
	bool exists(ObjectMonitorNode* node);
	::java::lang::List<volatile ObjectMonitorNode> list;
	::java::lang::SpinLock spinLock;
};

class ObjectMonitor : public ::java::lang::CoreObject {
	friend class ObjectSynchronizer;
	friend class ObjectWaiter;
	friend class ::java::lang::List<ObjectMonitor>;
public:
	ObjectMonitor(const ::java::lang::Object* object);
	~ObjectMonitor();
	bool isEntered(JavaThread* current) const {
		JavaThread* owner = getOwner();
		if (current == owner) {
			return true;
		}
		return false;
	}

	JavaThread* getOwner() const {
		return owner.load();
	}

	void clearOwner();
	JavaThread* trySetOwner(JavaThread* newValue);
	bool tryEnter(JavaThread* current);
	void enter(JavaThread* current);
	bool exit(JavaThread* current, bool force);
	void wait(jlong millis, bool interruptible, JavaThread* thread);
	void notify(JavaThread* thread);
	void notifyAll(JavaThread* thread);
	void clearRecursions() {
		recursions = 0;
	}
private:
	void checkOwner(JavaThread* current);
	bool notify0();
	void enter0(JavaThread* current);
	void reenter0(JavaThread* current, ObjectMonitorNode* current_node);
	bool tryLock(JavaThread* current);
	bool trySpinLock(JavaThread* current);
	void exit0(ObjectMonitorNode* wakee);

	ObjectMonitor* prev;
	ObjectMonitor* next;
	const ::java::lang::Object* object;
	volatile int64_t recursions;
	std::atomic_int trySpinThreadCount;
	std::atomic_int trySpinLockCount;
	std::atomic_int spinLockCount;
	std::atomic_int spinLockSuccessCount;
	std::atomic<JavaThread*> owner;
	ObjectMonitorNodeList waitList;
	ObjectMonitorNodeList blockList;
};

#endif // _core_ObjectMonitor_h_