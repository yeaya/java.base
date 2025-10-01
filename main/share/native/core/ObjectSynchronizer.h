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

#ifndef _core_ObjectSynchronizer_h_
#define _core_ObjectSynchronizer_h_

#include <java/lang/Object.h>
#include <java/lang/ObjectHead.h>

class JavaThread;
class ObjectMonitor;

class ObjectSynchronizer {
public:
	static void enter(const $Object0* obj, JavaThread* current);
	static bool tryEnter(const $Object0* obj, JavaThread* current);
	static void exit(const $Object0* obj, JavaThread* current);
	static int wait(const $Object0* obj, jlong millis, JavaThread* current);
	static void notify(const $Object0* obj, JavaThread* current);
	static void notifyAll(const $Object0* obj, JavaThread* current);
	static ObjectMonitor* getCreateMonitor(::java::lang::ObjectHead* oh);
	static void freeMonitor(::java::lang::ObjectHead* oh);
	static bool holdsLock(JavaThread* current, const $Object0* obj);
	static void releaseMonitors(JavaThread* current);
	static void upgradeMonitor(::java::lang::ObjectHead* oh, JavaThread* current);
};

class ObjectLocker {
private:
	JavaThread* thread;
	const $Object0* obj;
public:
	ObjectLocker(const $Object0* obj, JavaThread* current);
	~ObjectLocker();
	void notifyAll(JavaThread* current);
};

#endif // _core_ObjectSynchronizer_h_