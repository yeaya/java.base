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

#include "OSThread.h"
#include "ObjectMonitor.h"
#include "JavaThread.h"

#include <java/lang/IllegalMonitorStateException.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

#include <algorithm>

using ::java::lang::IllegalMonitorStateException;
using ::java::lang::ObjectManager;

static int MAX_SPIN_COUNT = 500;

ObjectMonitor::ObjectMonitor(const ::java::lang::Object* object) :
	prev(nullptr),
	next(nullptr),
	object(object),
	owner(nullptr),
	recursions(0),
	trySpinThreadCount(0) {
}

ObjectMonitor::~ObjectMonitor() {
}

void begenJavaThreadStateInVMBlockEnter(JavaThread* current) {
	current->setThreadState(_thread_blocked);
}

bool endJavaThreadStateInVMBlockEnter(JavaThread* current, ObjectMonitor* objectMonitor) {
	bool suspended = false;
	if (current->shouldSuspend()) {
		if (current->isSuspended()) {
			objectMonitor->clearRecursions();
			objectMonitor->exit(current, false);
			suspended = true;
			current->setCurrentPendingMonitor(objectMonitor);
		}
		current->processSuspendIfRequest();
	}
	current->setThreadState(_thread_in_vm);
	return suspended;
}

void ObjectMonitor::clearOwner() {
	JavaThread* prev = owner;
	if (prev != nullptr) {
		prev->removeObjectMonitor(this);
		owner.store(nullptr, std::memory_order_release);
	}
}

JavaThread* ObjectMonitor::trySetOwner(JavaThread* newValue) {
	JavaThread* prev = nullptr;
	if (owner.compare_exchange_strong(prev, newValue)) {
		if (newValue != nullptr) {
			newValue->addObjectMonitor(this);
		}
	}
	return prev;
}

bool ObjectMonitor::tryEnter(JavaThread* current) {
	JavaThread* cur = trySetOwner(current);
	if (cur == nullptr) {
		return true;
	}
	if (cur == current) {
		recursions++;
		return true;
	}
	return false;
}

void ObjectMonitor::enter(JavaThread* current) {
	JavaThread* cur = trySetOwner(current);
	if (cur == nullptr) {
		return;
	}
	if (cur == current) {
		recursions++;
		return;
	}
	if (trySpinLock(current)) {
		return;
	}

	{
		JavaThreadBlockedOnMonitorEnterStatus jtbmes(current);
		current->setCurrentPendingMonitor(this);
		while (true) {
			begenJavaThreadStateInVMBlockEnter(current);
			enter0(current);
			current->setCurrentPendingMonitor(nullptr);
			bool suspended = endJavaThreadStateInVMBlockEnter(current, this);
			if (!suspended) {
				break;
			}
		}
	}
}

bool ObjectMonitor::tryLock(JavaThread* current) {
	JavaThread* owner = getOwner();
	if (owner != nullptr) {
		return false;
	}
	if (trySetOwner(current) == nullptr) {
		return true;
	}
	return false;
}

#define MAX_RECHECK_INTERVAL_MS 1000

void ObjectMonitor::enter0(JavaThread* current) {
	if (tryLock(current)) {
		return;
	}
	if (trySpinLock(current)) {
		return;
	}

	ObjectMonitorNode node(current);
	current->parkEvent->reset();

	bool responsible = blockList.isEmpty();
	blockList.append(&node);

	int recheckMillis = 1;
	while (true) {
		if (tryLock(current)) {
			break;
		}
		if (responsible) {
			current->parkEvent->park(recheckMillis);
			if (recheckMillis < MAX_RECHECK_INTERVAL_MS) {
				recheckMillis = std::min(recheckMillis * 2, MAX_RECHECK_INTERVAL_MS);
			}
			if (!blockList.onlyOne(&node)) {
				responsible = false;
			}
		} else {
			current->parkEvent->park();
		}
		if (tryLock(current)) {
			break;
		}
		if (trySpinLock(current)) {
			break;
		}
		$fence();
	}
	blockList.remove(&node);
	return;
}

void ObjectMonitor::reenter0(JavaThread* current, ObjectMonitorNode* currentNode) {
	while (true) {
		if (tryLock(current)) {
			break;
		}
		if (trySpinLock(current)) {
			break;
		}

		{
			JavaThreadStateInVMBlock jtsivb(current);
			current->parkEvent->park();
		}

		$fence();
	}
	blockList.remove(currentNode);
	$fence();
}

bool ObjectMonitor::exit(JavaThread* current, bool force) {
	JavaThread* owner = getOwner();
	if (current != owner) {
		return false;
	}

	if (recursions != 0) {
		if (force) {
			recursions = 0;
		} else {
			recursions--;
			return true;
		}
	}

	while (true) {
		clearOwner();
		$storeload();
		if (blockList.isEmpty() || trySpinThreadCount > 0) {
			return true;
		}
		// locked by other thread
		if (trySetOwner(current) != nullptr) {
			return true;
		}
		guarantee(getOwner() == current, "invariant");
		ObjectMonitorNode* wakee = blockList.first();
		if (wakee != nullptr) {
			exit0(wakee);
			return true;
		}
	}
	return true;
}

void ObjectMonitor::exit0(ObjectMonitorNode* wakee) {
	OS::ParkEvent* parkEvent = wakee->thread->parkEvent;
	clearOwner();
	$fence();
	parkEvent->unpark();
}

void ObjectMonitor::wait(jlong millis, bool interruptible, JavaThread* current) {
	checkOwner(current);

	if (interruptible && current->isInterrupted(true) && !ObjectManager::hasPendingException()) {
		current->checkAndHandleAsyncExceptions();
		$throwNew(::java::lang::InterruptedException);
	}

	current->setCurrentWaitingMonitor(this);

	ObjectMonitorNode node(current);
	current->parkEvent->reset();
	$fence();

	waitList.prepend(&node);

	int64_t save = recursions;
	recursions = 0;
	exit(current, false);
	guarantee(getOwner() != current, "invariant");

	bool wasNotified = false;
	bool interrupted = interruptible && current->isInterrupted(false);

	{
		{
			JavaThreadStateInVMBlock jtsivb(current);
			if (interrupted || ObjectManager::hasPendingException()) {
				// NOTHING
			} else if (waitList.exists(&node)) {
				if (millis <= 0) {
					current->parkEvent->park();
				} else {
					current->parkEvent->park(millis);
				}
			}
		}

		bool removed = waitList.remove(&node);
		if (removed) {
			enter(current);
		} else {
			$loadload();
			wasNotified = true;
			$fence();
			JavaThreadBlockedOnMonitorReenterStatus jtbomrs(current);
			reenter0(current, &node);
		}
	}

	current->setCurrentWaitingMonitor(nullptr);

	guarantee(recursions == 0, "invariant");
	recursions = save;

	// notify has precedence over interrupt
	if (!wasNotified) {
		if (interruptible && current->isInterrupted(true) && !ObjectManager::hasPendingException()) {
			current->checkAndHandleAsyncExceptions();
			$throwNew(java::lang::InterruptedException);
		}
	}
}

bool ObjectMonitor::notify0() {
	return waitList.moveFirstPrepend(&blockList);
}

void ObjectMonitor::notify(JavaThread* current) {
	checkOwner(current);
	notify0();
}

void ObjectMonitor::notifyAll(JavaThread* current) {
	checkOwner(current);
	while (notify0()) {
	}
}

bool ObjectMonitor::trySpinLock(JavaThread* current) {
	if (trySpinLockCount++ % 1000 == 0) {
		spinLockCount = 0;
		spinLockSuccessCount = 0;
	}
	bool useSpinLock = true;
	if (spinLockCount > 100 && spinLockSuccessCount < 20) {
		useSpinLock = false;
	}
	bool ret = false;
	if (useSpinLock) {
		trySpinThreadCount++;
		spinLockCount++;
		for (int i = 0; i < MAX_SPIN_COUNT; i++) {
			if (tryLock(current)) {
				ret = true;
				spinLockSuccessCount++;
				break;
			}
			OS::spinPause();
		}
		trySpinThreadCount--;
		if (ret) {
			return ret;
		}
	}
	if (tryLock(current)) {
		ret = true;
	}
	return ret;
}

ObjectMonitorNode::ObjectMonitorNode(JavaThread* current) {
	next = nullptr;
	prev = nullptr;
	list = nullptr;
	thread = current;
}

inline void ObjectMonitor::checkOwner(JavaThread* current) {
	if (getOwner() != current) {
		$throwNew(IllegalMonitorStateException, "current thread is not owner"_s);
	}
}

void ObjectMonitorNodeList::prepend(ObjectMonitorNode* node) {
	spinLock.lock();
	list.prepend(node);
	node->list = this;
	spinLock.unlock();
}

void ObjectMonitorNodeList::append(ObjectMonitorNode* node) {
	spinLock.lock();
	list.append((volatile ObjectMonitorNode*)node);
	node->list = this;
	spinLock.unlock();
}

ObjectMonitorNode* ObjectMonitorNodeList::first() {
	spinLock.lock();
	ObjectMonitorNode* node = (ObjectMonitorNode*)list.first();
	spinLock.unlock();
	return node;
}

ObjectMonitorNode* ObjectMonitorNodeList::removeFirst() {
	spinLock.lock();
	ObjectMonitorNode* node = (ObjectMonitorNode*)list.removeFirst();
	if (node != nullptr) {
		node->list = nullptr;
	}
	spinLock.unlock();
	return node;
}

bool ObjectMonitorNodeList::moveFirstPrepend(ObjectMonitorNodeList* target) {
	bool ret = false;
	spinLock.lock();
	ObjectMonitorNode* node = (ObjectMonitorNode*)list.removeFirst();
	if (node != nullptr) {
		node->list = nullptr;
		target->prepend(node);
		ret = true;
	}
	spinLock.unlock();
	return ret;
}

bool ObjectMonitorNodeList::remove(ObjectMonitorNode* node) {
	bool ret = false;
	spinLock.lock();
	if (node != nullptr && node->list == this) {
		list.remove(node);
		node->list = nullptr;
		ret = true;
	}
	spinLock.unlock();
	return ret;
}

bool ObjectMonitorNodeList::exists(ObjectMonitorNode* node) {
	bool ret = false;
	spinLock.lock();
	if (node != nullptr && node->list == this) {
		ret = true;
	}
	spinLock.unlock();
	return ret;
}