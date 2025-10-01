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
#include "ObjectSynchronizer.h"
#include "Arguments.h"
#include "ObjectMonitor.h"
#include "OSThread.h"
#include "JavaThread.h"

#include "Platform.h"
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/Machine.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/Shutdown.h>
#include <java/lang/ObjectManagerInternal.h>
#include <jcpp.h>

using ::java::lang::ObjectManager;
using ::java::lang::ObjectManagerInternal;
using ::java::lang::Shutdown;

extern struct JNINativeInterface_* getJniNativeInterface();

size_t JavaThread::stackSizeAtCreate = 0;

thread_local JavaThread* JavaThread::currentThread = nullptr;

void JavaThread::initCurrentThread() {
	currentThread = this;
}

void JavaThread::clearCurrentThread() {
	currentThread = nullptr;
}

void JavaThread::setStackBaseAndSize() {
	setStackBase(OS::getCurrentStackBase());
	setStackSize(OS::getCurrentStackSize());
}

void JavaThread::clearStackObjects() {
	stackObjectsSaved = false;
}

void JavaThread::setStackObjectsSaved() {
	stackObjectsSaved = true;
}

bool JavaThread::isStackObjectsSaved() {
	return stackObjectsSaved;
}

void JavaThread::saveStackObject(void* obj) {
	uint64_t value = (uint64_t)obj;
	if (value == 0 || (value & 0x7) != 0) {
		return;
	}
	ObjectManagerInternal::saveStackObject(localController, obj);
}

void JavaThread::snapshotStackObjects() {
	ObjectManagerInternal::snapshotStackObjects(localController);
}

char* JavaThread::getName() {
	return threadName;
}

void JavaThread::callRun() {
	try {
		this->preRun();
		this->run();
	} catch (::java::lang::ThreadDeath&) {
		$var(::java::lang::ThreadDeath, e, $catch());
		// try {
		//	 e->printStackTrace();
		// } catch (...) {
		// }
	} catch (::java::lang::Throwable&) {
		$var(::java::lang::Throwable, e, $catch());
		 try {
		 	threadObject->dispatchUncaughtException(e);
		 } catch (::java::lang::Throwable&) {
			 printf("dispatchUncaughtException fail\n");
		 }
	}
	try {
		this->postRun();
	} catch (::java::lang::ThreadDeath&) {
		$var(::java::lang::ThreadDeath, e, $catch());
		// try {
		//	 e->printStackTrace();
		// } catch (...) {
		// }
	} catch (::java::lang::Throwable&) {
		$var(::java::lang::Throwable, e, $catch());
		//threadObject->dispatchUncaughtException(e);
		try {
			threadObject->dispatchUncaughtException(e);
		} catch (::java::lang::Throwable&) {
			printf("dispatchUncaughtException fail\n");
		}
	}
}

void JavaThread::setPriority(JavaThread* thread, int32_t priority) {
}

void JavaThread::start(JavaThread* thread) {
	thread->setThreadStatus(Status::RUNNABLE);
	ObjectManagerInternal::beforeThreadStart(thread->getThreadObject());
	OSThread* osthread = thread->getOsThread();
	osthread->start();
}

$Thread* JavaThread::getThreadObject() const {
	return threadObject;
}

void JavaThread::setThreadObject($Thread* threadObject) {
	this->threadObject = threadObject;
}

JavaThread::JavaThread() :
		currentPendingMonitor(nullptr),
		currentWaitingMonitor(nullptr),
		suspended(false),
		threadState(_thread_new) {
	setStackBase(nullptr);
	setStackSize(0);
	setOsThread(nullptr);
	threadName[0] = '\0';
	sleepEvent = OS::createParkEvent();
	parkEvent = OS::createParkEvent();
	jniEnv.functions = getJniNativeInterface();
	stackObjectsSaved = false;
}

JavaThread::Status JavaThread::getThreadStatus() {
	return (Status)(int32_t)threadObject->threadStatus;
}

void JavaThread::setThreadStatus(Status status) {
	threadObject->threadStatus = (int32_t)status;
}

void JavaThread::registerMainThread($Thread* thread) {
	JavaThread* jthread = new JavaThread();
	jthread->setStackBaseAndSize();
	jthread->localController = ObjectManagerInternal::registerMainThread(thread, jthread, jthread->stackBase, jthread->stackSize);

	OSThread::createAttached(jthread);

	jthread->initCurrentThread();
	jthread->prepare(thread);
	jthread->setThreadStatus(Status::RUNNABLE);
}

void JavaThread::park($Thread* threadObject, bool isAbsolute, int64_t time) {
	JavaThread* current = sureCurrentThread();
	current->checkAndHandleAsyncExceptions();
	if (threadObject != nullptr) {
		JavaThread* thread = (JavaThread*)threadObject->eetop;
		if (thread != nullptr) {
			JavaThreadParkedStatus jtps(thread, time);
			thread->park(isAbsolute, time);
		}
	}
}

void JavaThread::unpark($Thread* threadObject) {
	JavaThread* current = sureCurrentThread();
	current->checkAndHandleAsyncExceptions();
	if (threadObject != nullptr) {
		JavaThread* thread = (JavaThread*)threadObject->eetop;
		if (thread != nullptr) {
			thread->unpark();
		}
	} 
}

void JavaThread::JVM_StartThread($Thread* thread) {
	JavaThread::sureCurrentThread()->checkAndHandleAsyncExceptions();
	JavaThread* javaThread = nullptr;
	if (thread->eetop != 0) {
		$throwNew(::java::lang::IllegalArgumentException);
	} else {
		javaThread = new JavaThread(thread->stackSize);
		if (javaThread->getOsThread() != nullptr) {
			javaThread->prepare(thread);
		}
	}
	if (javaThread->getOsThread() == nullptr) {
		delete javaThread;
		javaThread = nullptr;
		$throwNew(::java::lang::OutOfMemoryError);
	}
	JavaThread::start(javaThread);
}

bool JavaThread::JVM_IsThreadAlive($Thread* thread) {
	JavaThread::sureCurrentThread()->checkAndHandleAsyncExceptions();
	return thread->eetop != 0;
}

void JavaThread::JVM_SetThreadPriority($Thread* thread, int32_t priority) {
	JavaThread::sureCurrentThread()->checkAndHandleAsyncExceptions();
	thread->priority = priority;
	JavaThread* receiver = (JavaThread*)thread->eetop;
	JavaThread::setPriority(receiver, priority);
}

void JavaThread::JVM_StopThread($Thread* threadObject, ::java::lang::Object* e) {
	JavaThread::sureCurrentThread()->checkAndHandleAsyncExceptions();
	if (e == nullptr) {
		$throwNew(::java::lang::NullPointerException);
	}
	JavaThread* receiver = (JavaThread*)threadObject->eetop;
	JavaThread* thread = JavaThread::sureCurrentThread();
	if (receiver != nullptr) {
		if (thread == receiver) {
			$throw((::java::lang::Throwable*)e);
		} else {
			receiver->sendThreadStop((::java::lang::Throwable*)e);
		}
	} else {
		threadObject->stillborn = true;
	}
}

void JavaThread::JVM_SuspendThread($Thread* thread) {
	JavaThread::sureCurrentThread()->checkAndHandleAsyncExceptions();
	JavaThread* receiver = (JavaThread*)thread->eetop;
	if (receiver != nullptr) {
		receiver->suspend();
	}
}

void JavaThread::JVM_ResumeThread($Thread* thread) {
	JavaThread::sureCurrentThread()->checkAndHandleAsyncExceptions();
	JavaThread* receiver = (JavaThread*)thread->eetop;
	if (receiver != nullptr) {
		receiver->resume();
	}
}

void JavaThread::JVM_Interrupt($Thread* thread) {
	JavaThread::sureCurrentThread()->checkAndHandleAsyncExceptions();
	JavaThread* receiver = (JavaThread*)$nullcheck(thread)->eetop;
	if (receiver != nullptr) {
		receiver->interrupt();
	}
}

void JavaThread::clearInterruptEvent() {
	JavaThread* current = JavaThread::sureCurrentThread();
	current->checkAndHandleAsyncExceptions();
	current->getOsThread()->setInterrupted(false);
}

void JavaThread::JVM_SetNativeThreadName($Thread* jthread, ::java::lang::String* name) {
	JavaThread::sureCurrentThread()->checkAndHandleAsyncExceptions();
	JavaThread* javaThread = (JavaThread*)jthread->eetop;
	if (javaThread != nullptr && javaThread == JavaThread::getCurrentThread()) {
		OS::setNativeThreadName(name);
	}
}

void JavaThread::JVM_Yield() {
	JavaThread::sureCurrentThread()->checkAndHandleAsyncExceptions();
	OS::yield();
}

void JavaThread::JVM_Sleep(int64_t millis) {
	JavaThread* current = (JavaThread*)JavaThread::sureCurrentThread();
	current->checkAndHandleAsyncExceptions();
	if (millis < 0) {
		$throwNew(::java::lang::IllegalArgumentException, "timeout value is negative"_s);
	}
	if (current->isInterrupted(true) && !ObjectManager::hasPendingException()) {
		current->checkAndHandleAsyncExceptions();
		$throwNew(::java::lang::InterruptedException, "sleep interrupted"_s);
	}
	JavaThreadSleepStatus jtss(current);
	if (millis == 0) {
		OS::yield();
	} else {
		if (!current->sleep(millis)) { // interrupted
			if (!ObjectManager::hasPendingException()) {
				current->checkAndHandleAsyncExceptions();
				$throwNew(::java::lang::InterruptedException, "sleep interrupted"_s);
			}
		}
	}
	current->checkAndHandleAsyncExceptions();
	current->processSuspendIfRequest();
}

bool JavaThread::JVM_HoldsLock(::java::lang::Object0* obj) {
	if (obj == nullptr) {
		$throwNew(::java::lang::NullPointerException);
	}
	JavaThread* current = (JavaThread*)JavaThread::sureCurrentThread();
	current->checkAndHandleAsyncExceptions();
	return ObjectSynchronizer::holdsLock(current, obj);
}

$Array<::java::lang::StackTraceElement, 2>* JavaThread::JVM_DumpThreads($Array<$Thread>* threads) {
	JavaThread::sureCurrentThread()->checkAndHandleAsyncExceptions();
	return ($new<$Array<::java::lang::StackTraceElement, 2>>(threads->length)); // TODO
}

$Thread* JavaThread::JVM_CurrentThread() {
	JavaThread* current = JavaThread::sureCurrentThread();
	current->checkAndHandleAsyncExceptions();
	// TODO
	return ($Thread*)current->getThreadObject();
}

void JavaThread::waitSignal(Semaphore* semaphore) {
	JavaThreadInObjectWaitStatus jtows(this, 0);
	JavaThreadStateInVMBlock tbivm(this);
	semaphore->wait();
}

void JavaThread::interrupt() {
	getOsThread()->setInterrupted(true);

	sleepEvent->unpark();

	this->unpark();

	parkEvent->unpark();
}

bool JavaThread::isInterrupted(bool clearInterrupted) {
	if (threadObject == nullptr) {
		return false;
	}
	bool interrupted = threadObject->interrupted$;
	if (interrupted && clearInterrupted) {
		threadObject->interrupted$ = false;
		getOsThread()->setInterrupted(false);
	}
	return interrupted;
}

JavaThread::JavaThread(int64_t stackSize) : JavaThread() {
	if (stackSize <= 0) {
		stackSize = ObjectManagerInternal::getXss();
	}
	OSThread::create(this, stackSize);
}

JavaThread::~JavaThread() {
	OS::freeParkEvent(sleepEvent);
	sleepEvent = nullptr;

	OS::freeParkEvent(parkEvent);
	parkEvent = nullptr;

	if (osThread != nullptr) {
		OSThread::free(osThread);
		osThread = nullptr;
	}

	if (this == JavaThread::getCurrentThread()) {
		JavaThread::clearCurrentThread();
	}
}

void JavaThread::preRun() {
	setStackBaseAndSize();
	initCurrentThread();
}

void JavaThread::run() {
	this->setThreadState(_thread_in_vm);
	if (!ObjectManager::hasPendingException() && !threadObject->stillborn) {
		localController = ObjectManagerInternal::onThreadStart(threadObject, this, this->stackBase, this->stackSize);
		setNativeThreadName($ref(threadObject->getName()));
		threadObject->run();
	}
}

void JavaThread::setNativeThreadName($String* name) {
	OS::setNativeThreadName(name);
	if (name != nullptr) {
		name->utf8String(threadName, sizeof(threadName));
	} else {
		threadName[0] = 0;
	}
}

void JavaThread::postRun() {
	this->exit(false);
	ObjectManagerInternal::onThreadEnd();
	threadObject = nullptr;
}

void JavaThread::exit(bool jniDetach) {
	if (ObjectManager::hasPendingException()) {
		$var($Throwable, e, ObjectManager::catchPendingException())
		threadObject->dispatchUncaughtException(e);
	}
	
	for (int i = 0; i < 3 && threadObject->getThreadGroup() != nullptr; i++) {
		threadObject->exit();
	}

	ObjectLocker lock($of(threadObject), this);
	//threadObject->threadStatus = (int32_t)Status::TERMINATED;
	threadObject->eetop = 0;
	lock.notifyAll(this);

	// if (jniDetach) {
		ObjectSynchronizer::releaseMonitors(this);
	// }

	sleepEvent->unpark();

	this->unpark();

	parkEvent->unpark();

	setThreadStatus(Status::TERMINATED);
}

inline void JavaThread::setPendingAsyncException(::java::lang::Throwable* e) {
	$set(threadObject, pendingAsyncException, e);
}

void JavaThread::checkAndHandleAsyncExceptions() {
	if (this->threadObject != nullptr && this->threadObject->pendingAsyncException != nullptr) {
		$var(::java::lang::Throwable, exception, threadObject->pendingAsyncException);
		$set(threadObject, pendingAsyncException, nullptr);
		$throw(exception);
	}
}

void JavaThread::sendThreadStop(::java::lang::Throwable* e) {
	if (threadObject->pendingAsyncException == nullptr || !::java::lang::ThreadDeath::class$->isInstance(e)) {
		setPendingAsyncException(e);
		suspendLock.notifyAll();
	}

	// wake up from a potential wait()/sleep()/park()
	this->threadObject->interrupted$ = true;
	this->interrupt();
}

void JavaThread::prepare($Thread* threadObject) {
	setThreadObject(threadObject);
	threadObject->eetop = (int64_t)this;
	JavaThread::setPriority(this, threadObject->priority);
}

bool JavaThread::sleep(jlong millis) {
	sleepEvent->reset();
	$fence();

	jlong prevtime = OS::getTimeNanos();

	while (true) {
		this->checkAndHandleAsyncExceptions();

		if (this->isInterrupted(true)) {
			return false;
		}

		if (millis <= 0) {
			return true;
		}

		{
			JavaThreadStateInVMBlock tbivm(this);
			sleepEvent->park(millis);
		}

		jlong newtime = OS::getTimeNanos();
		if (newtime - prevtime > 0) {
			millis -= (newtime - prevtime) / NANOSECS_PER_MILLISEC;
		}
		prevtime = newtime;
	}
}

void JavaThread::doSelfSuspend() {
	while (isSuspended()) {
		suspendLock.wait();
	}
}

void JavaThread::processAsyncExeception() {
	if (this->threadObject != nullptr && this->threadObject->pendingAsyncException != nullptr) {
		$var(::java::lang::Throwable, exception, threadObject->pendingAsyncException);
		$set(threadObject, pendingAsyncException, nullptr);
		$throw(exception);
	}
}

bool JavaThread::shouldSuspend() {
	return suspendReqestCount > 0;
}

bool JavaThread::processSuspendIfRequest() {
	int value = suspendReqestCount.exchange(0);
	if (value > 0) {
		JavaThreadStateInVMBlock tbivm(this);
		ThreadMonitorLocker tml(&suspendLock);
		this->setSuspended(true);
		this->doSelfSuspend();
		return true;
	}
	return false;
}

bool JavaThread::suspend() {
	JavaThread* current = JavaThread::sureCurrentThread();
	if (this == current) {
		JavaThreadStateInVMBlock tbivm(current);
		ThreadMonitorLocker tml(current, &suspendLock);
		this->setSuspended(true);
		this->doSelfSuspend();
		return true;
	} else {
		ThreadMonitorLocker tml(current, &suspendLock);
		if (this->isSuspended()) {
			return false;
		}
		this->suspendReqestCount++;
		return true;
	}
}

bool JavaThread::resume() {
	ThreadMonitorLocker tml(&suspendLock);
	if (this->suspendReqestCount > 0) {
		this->suspendReqestCount = 0;
	}
	if (!this->isSuspended()) {
		return false;
	}
	this->setSuspended(false);
	suspendLock.notify();
	return true;
}

void JavaThread::addObjectMonitor(ObjectMonitor* monitor) {
	holdObjectMonitorList.prepend(monitor);
}

void JavaThread::removeObjectMonitor(ObjectMonitor* monitor) {
	holdObjectMonitorList.remove(monitor);
}