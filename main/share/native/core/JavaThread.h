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

#ifndef _core_JavaThread_h_
#define _core_JavaThread_h_

#include "jni.h"
#include "coreDef.h"
#include "ThreadMonitor.h"
#include "OS.h"
#include "OSThread.h"

#include <java/lang/Array.h>
#include <java/lang/Throwable.h>
#include <java/lang/List.h>
#include <java/lang/CoreObject.h>
#include <java/lang/fence.h>

class ObjectMonitor;

namespace java {
	namespace lang {
		class Object;
		class Thread;
		class ThreadGroup;
		class String;
		class Throwable;
		class StackTraceElement;
	}
}

enum JavaThreadState {
	_thread_new = 2, // just starting up, i.e., in process of being initialized
	_thread_in_native = 4, // running in native code
	_thread_in_vm = 6, // running in VM
	_thread_in_Java = 8, // running in Java or in stub code
	_thread_blocked = 10//, // blocked in vm
};

#define JVMTI_THREAD_STATE_ALIVE 0x0001
#define JVMTI_THREAD_STATE_TERMINATED 0x0002
#define JVMTI_THREAD_STATE_RUNNABLE 0x0004
#define JVMTI_THREAD_STATE_WAITING_INDEFINITELY 0x0010
#define JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT 0x0020
#define JVMTI_THREAD_STATE_SLEEPING 0x0040
#define JVMTI_THREAD_STATE_WAITING 0x0080
#define JVMTI_THREAD_STATE_IN_OBJECT_WAIT 0x0100
#define JVMTI_THREAD_STATE_PARKED 0x0200
#define JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER 0x0400

class JavaThread : public ::java::lang::CoreObject {
private:
	// must before other field, make sure offsetof(JavaThread,jniEnv) is 0.
	JNIEnv jniEnv;
public:
	inline static JavaThread* toJavaThread(JNIEnv* env) {
		if (env != nullptr) {
			const size_t offset = $offsetof(JavaThread, jniEnv);
			JavaThread* thread = (JavaThread*)((intptr_t)env - offset);
			// JavaThread* thread = (JavaThread*)env;
			// assert(thread->getJNIEnv() == env)
			return thread;
		} else {
			return nullptr;
		}
	}

	JNIEnv* getJNIEnv() {
		return &jniEnv;
	}

private:
	static thread_local JavaThread* currentThread;
public:
	void initCurrentThread();
	static void clearCurrentThread();

	void callRun();
	static inline JavaThread* sureCurrentThread() {
		JavaThread* current = getCurrentThread();
		// TODO ASSERTS if NULL
		return current;
	}
	static inline JavaThread* getCurrentThread() {
		return currentThread;
	}

	static void setPriority(JavaThread* thread, int32_t priority);
	static void start(JavaThread* thread);

	void setNativeThreadName($String* name);

	OSThread* getOsThread() const {
		return osThread;
	}
	void setOsThread(OSThread* thread) {
		osThread = thread;
	}

protected:
	void* localController = nullptr;
	char threadName[32];
	OSThread* osThread;
	address stackBase;
	size_t stackSize;
	volatile bool stackObjectsSaved;
public:
	address getStackBase() const {
		return stackBase;
	}
	void setStackBase(address base) {
		stackBase = base;
	}
	size_t getStackSize() const {
		return stackSize;
	}
	void setStackSize(size_t size) {
		stackSize = size;
	}
	address getStackEnd() const {
		return getStackBase() - getStackSize();
	}
	void setStackBaseAndSize();

	void clearStackObjects();
	void setStackObjectsSaved();
	bool isStackObjectsSaved();
	void saveStackObject(void* obj);
	void snapshotStackObjects();
	char* getName();
public:
	OS::ParkEvent* parkEvent;

public:

	enum class Status : int {
		NEW = 0,
		RUNNABLE = JVMTI_THREAD_STATE_ALIVE + // runnable / running
			JVMTI_THREAD_STATE_RUNNABLE,
		SLEEPING = JVMTI_THREAD_STATE_ALIVE + // Thread.sleep()
			JVMTI_THREAD_STATE_WAITING +
			JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT +
			JVMTI_THREAD_STATE_SLEEPING,
		IN_OBJECT_WAIT = JVMTI_THREAD_STATE_ALIVE + // Object.wait()
			JVMTI_THREAD_STATE_WAITING +
			JVMTI_THREAD_STATE_WAITING_INDEFINITELY +
			JVMTI_THREAD_STATE_IN_OBJECT_WAIT,
		IN_OBJECT_WAIT_TIMED = JVMTI_THREAD_STATE_ALIVE + // Object.wait(long)
			JVMTI_THREAD_STATE_WAITING +
			JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT +
			JVMTI_THREAD_STATE_IN_OBJECT_WAIT,
		PARKED = JVMTI_THREAD_STATE_ALIVE + // LockSupport.park()
			JVMTI_THREAD_STATE_WAITING +
			JVMTI_THREAD_STATE_WAITING_INDEFINITELY +
			JVMTI_THREAD_STATE_PARKED,
		PARKED_TIMED = JVMTI_THREAD_STATE_ALIVE + // LockSupport.park(long)
			JVMTI_THREAD_STATE_WAITING +
			JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT +
			JVMTI_THREAD_STATE_PARKED,
		BLOCKED_ON_MONITOR_ENTER = JVMTI_THREAD_STATE_ALIVE + // (re-)entering a synchronization block
			JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER,
		TERMINATED = JVMTI_THREAD_STATE_TERMINATED
	};

	::java::lang::Thread* threadObject;
	Status getThreadStatus();
	void setThreadStatus(Status status);
	static void registerMainThread(::java::lang::Thread* thread);
	static void park(::java::lang::Thread* thread, bool isAbsolute, int64_t time);
	static void unpark(::java::lang::Thread* thread);
	static void JVM_StartThread(::java::lang::Thread* thread);
	static bool JVM_IsThreadAlive(::java::lang::Thread* thread);
	static void JVM_SetThreadPriority(::java::lang::Thread* thread, int32_t prio);
	static void JVM_StopThread(::java::lang::Thread* thread, ::java::lang::Object* throwable);
	static void JVM_SuspendThread(::java::lang::Thread* thread);
	static void JVM_ResumeThread(::java::lang::Thread* thread);
	static void JVM_Interrupt(::java::lang::Thread* thread);
	static void clearInterruptEvent();
	static void JVM_SetNativeThreadName(::java::lang::Thread* thread, ::java::lang::String* name);
	static void JVM_Yield();
	static void JVM_Sleep(int64_t millis__);
	static bool JVM_HoldsLock(::java::lang::Object0* obj);
	static $Array<::java::lang::StackTraceElement, 2>* JVM_DumpThreads($Array<::java::lang::Thread>* threads);
	static ::java::lang::Thread* JVM_CurrentThread();

	void waitSignal(Semaphore* semaphore);

	std::atomic<ObjectMonitor*> currentPendingMonitor;
	std::atomic<ObjectMonitor*> currentWaitingMonitor;

public:
	void setCurrentPendingMonitor(ObjectMonitor* monitor) {
		currentPendingMonitor.store(monitor);
	}
	void setCurrentWaitingMonitor(ObjectMonitor* monitor) {
		currentWaitingMonitor.store(monitor);
	}

public:
	inline void setPendingAsyncException(::java::lang::Throwable* e);
	void checkAndHandleAsyncExceptions();
	void sendThreadStop(::java::lang::Throwable* throwable);

	std::atomic<JavaThreadState> threadState;

public:
	JavaThread();
	JavaThread(int64_t stackSize);
	~JavaThread();

	void exit(bool jniDetach);

	::java::lang::Thread* getThreadObject() const;
	void setThreadObject(::java::lang::Thread* thread);

	void prepare(::java::lang::Thread* threadObject);

	inline JavaThreadState getThreadState() const {
		return threadState.load(std::memory_order_acquire);
	}
	inline void setThreadState(JavaThreadState s) {
		threadState.store(s, std::memory_order_release);
	}

public:
	std::atomic_bool suspended;
	std::atomic_int suspendReqestCount = 0; // suspend from other thread 
	bool isSuspended() {
		return suspended;
	}
	void setSuspended(bool to) {
		// printf("setSuspended %d\n", to);
		suspended.store(to);
	}
	ThreadMonitor suspendLock;
	bool shouldSuspend();
	bool processSuspendIfRequest();
	void processAsyncExeception();
	bool suspend();
	bool resume();
	void doSelfSuspend();

protected:
	void preRun();
	void run();
	void postRun();

private:
	static size_t stackSizeAtCreate;

public:
	static inline size_t getStackSizeAtCreate() {
		return stackSizeAtCreate;
	}
	static inline void setStackSizeAtCreate(size_t value) {
		stackSizeAtCreate = value;
	}
private:
	OS::Parker parker;
public:
	void park(bool isAbsolute, int64_t time) {
		parker.park(isAbsolute, time);
	}
	void unpark() {
		parker.unpark();
	}

	OS::ParkEvent* sleepEvent;
public:
	bool sleep(jlong millis);

	void interrupt();
	bool isInterrupted(bool clearInterrupted);

	void addObjectMonitor(ObjectMonitor* monitor);
	void removeObjectMonitor(ObjectMonitor* monitor);

	::java::lang::List<ObjectMonitor> holdObjectMonitorList;
};

class JavaThreadStateInVMBlock {
public:
	JavaThreadStateInVMBlock(JavaThread* thread) : thread(thread) {
		thread->setThreadState(_thread_blocked);
	}
	~JavaThreadStateInVMBlock() {
		if (thread->shouldSuspend()) {
			thread->processSuspendIfRequest();
		}
		thread->setThreadState(_thread_in_vm);
	}
private:
	JavaThread* thread;
};

class JavaThreadStatus {
public:
	JavaThreadStatus(JavaThread* thread, JavaThread::Status state) : oldStatus(JavaThread::Status::NEW) {
		saveOldStatus(thread);
		setThreadStatus(state);
	}

	JavaThreadStatus(JavaThread* thread) : oldStatus(JavaThread::Status::NEW) {
		saveOldStatus(thread);
	}

	~JavaThreadStatus() {
		setThreadStatus(oldStatus);
	}

protected:
	void setThreadStatus(JavaThread::Status state) {
		if (alive) {
			thread->setThreadStatus(state);
		}
	}

	static bool isAlive(JavaThread* thread) {
		return thread != nullptr && thread->getThreadObject() != nullptr;
	}

	void saveOldStatus(JavaThread* thread) {
		this->thread = thread;
		alive = isAlive(thread);
		if (alive) {
			oldStatus = thread->getThreadStatus();
		}
	}

	JavaThread::Status oldStatus;
	JavaThread* thread;
	bool alive;
};

class JavaThreadInObjectWaitStatus : public JavaThreadStatus {
public:
	JavaThreadInObjectWaitStatus(JavaThread* thread, int64_t timeoutMs) :
		JavaThreadStatus(thread, timeoutMs != 0 ? JavaThread::Status::IN_OBJECT_WAIT_TIMED : JavaThread::Status::IN_OBJECT_WAIT) {
	}
};

class JavaThreadParkedStatus : public JavaThreadStatus {
public:
	JavaThreadParkedStatus(JavaThread* thread, int64_t time) :
		JavaThreadStatus(thread, time != 0 ? JavaThread::Status::PARKED_TIMED : JavaThread::Status::PARKED) {
	}
};

class JavaThreadBlockedOnMonitorEnterStatus : public JavaThreadStatus {
public:
	JavaThreadBlockedOnMonitorEnterStatus(JavaThread* thread) :
		JavaThreadStatus(thread, JavaThread::Status::BLOCKED_ON_MONITOR_ENTER) {
	}
};

class JavaThreadBlockedOnMonitorReenterStatus : public JavaThreadStatus {
public:
	JavaThreadBlockedOnMonitorReenterStatus(JavaThread* thread) :
		JavaThreadStatus(thread, JavaThread::Status::BLOCKED_ON_MONITOR_ENTER) {
		oldStatus = JavaThread::Status::RUNNABLE;
	}
};

class JavaThreadSleepStatus : public JavaThreadStatus {
public:
	JavaThreadSleepStatus(JavaThread* thread) :
		JavaThreadStatus(thread, JavaThread::Status::SLEEPING) {
	}
};

#endif // _core_JavaThread_h_