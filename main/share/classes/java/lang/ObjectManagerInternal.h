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

#ifndef _java_lang_ObjectManagerInternal_h_
#define _java_lang_ObjectManagerInternal_h_

#include <java/lang/Object.h>
#include <java/lang/ObjectHead.h>
#include <java/lang/Array.h>
#include <atomic>

namespace java {
	namespace lang {
		namespace ref {
			class Reference;
			class WeakReference;
		}
	}
}

enum ObjectStackType {
	OBJECT_STACK_TYPE_DEFAULT = 0,
	OBJECT_STACK_TYPE_NATIVE,
	OBJECT_STACK_TYPE_NATIVE_MAGIC,
};

namespace java {
	namespace lang {

class CoreObject;
class ObjectHead;
class ObjectArray;
class Thread;

class StackObjects {
public:
	void add(void* obj) {
		stackObjects[length] = obj;
		length++;
	}
	void* remove() {
		if (length > 0) {
			length--;
			return stackObjects[length];
		}
		return nullptr;
	}
	void clear() {
		length = 0;
	}
	void* stackObjects[8192];
	int length = 0;
};

class ObjectManagerInternal {
public:
	static void init0();
	static void init();
	static void init2();
	static void init3();
	static void deinit();
	static void beforeExit();

	static int32_t availableProcessors();
	static int64_t freeMemory();
	static int64_t totalMemory();
	static int64_t maxMemory();
	static void gc();

	static void setXms(int64_t size);
	static void setXmx(int64_t size);
	static void setXss(int64_t size);
	static int64_t getXss();

	static void setObjectStackType(ObjectStackType objectStackType);
	static ObjectStackType getObjectStackType();

	static void* registerMainThread(Thread* thread, CoreObject* javaThread, void* stackBase, int64_t stackSize);
	static void beforeThreadStart(Thread* thread);
	static void* onThreadStart(Thread* thread, CoreObject* javaThread, void* stackBase, int64_t stackSize);
	static void onThreadEnd();
	static void attachCurrentThread(CoreObject* javaThread);
	static CoreObject* getCurrentJavaThread();

	static ::java::lang::ref::Reference* getAndClearReferencePendingList();
	static bool hasReferencePendingList();
	static void waitForReferencePendingList();

	static $Array<Thread>* getAllThreads();

	static String* allocString(int8_t* bytes, int64_t length, int8_t coder);
	static String* allocConstString(int8_t* bytes, int64_t length, int8_t coder);
	static String* concatLatinString(String* s1, String* s2);

	static void snapshotStackObjects(void* localController);
	static void saveStackObject(void* localController, void* obj);
};

#define ON_IO_BEFORE()
#define ON_IO_AFTER()

	} // lang
} // java

#endif // _java_lang_ObjectManagerInternal_h_