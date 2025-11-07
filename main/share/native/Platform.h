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

#ifndef _Platform_h_
#define _Platform_h_

#include <java/lang/Object.h>
#include <java/lang/Array.h>
#include <java/lang/ref/WeakReference.h>

#include <stdarg.h>

namespace java {
	namespace lang {
		class Object;
		class ObjectHead;
		class Thread;
		class StackTraceElement;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}

union jvalue;

class ObjectMonitor;

class Platform {
public:
	static void init();
	static void init2();
	static bool isSupportedVersion(int32_t version);
	static int64_t getTimeMillis();
	static int64_t getTimeNanos();
	static int64_t getAvailableMemory();
	static int64_t getPhysicalMemory();
	static int32_t getActiveProcessorCount();
	static int32_t getAddressSize();
	static int32_t getPageSize();
	static void* getCurrentStackBase();
	static size_t getCurrentStackSize();
	static int64_t getCurrentStackPointer();
	static bool snapshotStackObjects(void* jthread);
	static bool suspendThread(void* handle);
	static bool resumeThread(void* handle);
	static bool isBigEndian();
	static bool isUnalignedAccess();
	static int32_t getDataCacheLineFlushSize();

	static void freeObjectMonitor(::java::lang::ObjectHead* oh);
	static void JVM_MonitorWait(const Object$* obj, int64_t timeoutMs);
	static void JVM_MonitorNotify(const Object$* obj);
	static void JVM_MonitorNotifyAll(const Object$* obj);
	static void enterMonitor(const ::java::lang::Object0* obj);
	static bool tryEnterMonitor(const ::java::lang::Object0* obj);
	static void exitMonitor(const ::java::lang::Object0* obj);
	static void upgradeMonitor(::java::lang::ObjectHead* oh);

	static void yield();

	// Thread
	static void registerMainThread(::java::lang::Thread* thread);
	static void park(::java::lang::Thread* thread, bool isAbsolute, int64_t time);
	static void unpark(::java::lang::Thread* thread);
	static void JVM_StartThread(::java::lang::Thread* thread);
	static bool JVM_IsThreadAlive(::java::lang::Thread* thread);
	static void JVM_SetThreadPriority(::java::lang::Thread* thread, int32_t prio);
	static void JVM_StopThread(::java::lang::Thread* thread, Object$* throwable);
	static void JVM_SuspendThread(::java::lang::Thread* thread);
	static void JVM_ResumeThread(::java::lang::Thread* thread);
	static void JVM_Interrupt(::java::lang::Thread* thread);
	static void clearInterruptEvent();
	static void JVM_SetNativeThreadName(::java::lang::Thread* thread, ::java::lang::String* name);
	static void JVM_Yield();
	static void JVM_Sleep(int64_t millis__);
	static bool JVM_HoldsLock(Object$* obj);
	static void* getDefaultProcessHandle();
	static const char* getExecutionFilePath(char* buf, int bufLen);
	static void* loadLibrary(const char* filename, char* ebuf, int ebuflen);
	static bool getLibraryWithAddress(void* addr, char* buf, int buflen);
	static void* findLibraryEntry(void* handle, const char* name);
	static size_t getLastErrorDesc(char* buf, size_t len);
	static void* getJNIEnv();

	static $Array<::java::lang::Thread>* JVM_GetAllThreads();
	static $Array<::java::lang::StackTraceElement, 2>* JVM_DumpThreads($Array<::java::lang::Thread>* threads);
	static ::java::lang::Thread* JVM_CurrentThread();
	static $Array<::java::lang::reflect::Method>* getVirtualMethods(::java::lang::Class* clazz);
	static $Array<::java::lang::reflect::Method>* getBaseClassVirtualMethods(::java::lang::Class* clazz, ::java::lang::Class* baseClass);

	static $bytes* makeVirtualFunctionTable(int32_t objectOffset, int32_t count, void** addresses, void* opt);
	static int8_t* makeRTTIAndVFTable(Object$* obj, int32_t objectOffset, int32_t count, void** addresses, void* opt);
	static void** rttiToVFTable(int8_t* rttiData);
	static void assembleVfTab(Object$* obj, int32_t objectOffset, $bytes* data);
	static int32_t getObjectOffset(Object$* obj);
	static void* getOpt(const Object$* obj);
	static void* getVirtualInvokeAddress(Object$* obj, int32_t offset, int32_t index);
	static bool setVirtualInvokeAddress(::java::lang::reflect::Method* method);
	static void* getVirtualInvokeAddress(Object$* obj, ::java::lang::reflect::Method* method);
	static $Value invokev(bool special, ::java::lang::reflect::Method* method, Object$* obj, $Value* argv);
	static $Value invokeJni(bool special, ::java::lang::reflect::Method* method, Object$* jobj, va_list args);
	static $Value invokeJni(bool special, ::java::lang::reflect::Method* method, Object$* jobj, const jvalue* args);
	static $Object* invoke(::java::lang::reflect::Method* method, Object$* obj, $Value* argv);
	static $Object* invokeSpecial(::java::lang::reflect::Method* method, Object$* obj, $Value* argv);
	static void initInstance(::java::lang::reflect::Constructor* constructor, Object$* obj, $Value* argv);
	static void initInstanceJni(::java::lang::reflect::Constructor* constructor, Object$* jobj, va_list args);
	static void initInstanceJni(::java::lang::reflect::Constructor* constructor, Object$* jobj, const jvalue* args);
	static $bytes* prepareParameterTypes(bool isStatic, $ClassArray* parameterTypes);
	static void* prepareClosure(int32_t toObject0Offset, ::java::lang::reflect::Method* method);

	static $Object* resolveRef(Object$* ref);
	static bool isGlobalRef(Object$* ref);

};

#endif // _Platform_h_