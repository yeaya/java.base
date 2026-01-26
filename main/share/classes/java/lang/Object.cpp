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

#include <java/lang/Object.h>

#include <jcpp.h>
#include "Platform.h"

namespace java {
	namespace lang {

MethodInfo _Object_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Object, init$, void)},
	{"getClass", "()Ljava/lang/Class;", nullptr, $PUBLIC | $FINAL | $NATIVE, $constMethod(Object, getClass, Class*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $NATIVE, $virtualMethod(Object, hashCode, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Object, equals, bool, Object$*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE, $virtualMethod(Object, clone, Object*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Object, toString, String*)},
	{"notify", "()V", nullptr, $PUBLIC | $FINAL | $NATIVE, $constMethod(Object, notify, void)},
	{"notifyAll", "()V", nullptr, $PUBLIC | $FINAL | $NATIVE, $constMethod(Object, notifyAll, void)},
	{"wait", "()V", nullptr, $PUBLIC | $FINAL, $constMethod(Object, wait, void)},
	{"wait", "(J)V", nullptr, $PUBLIC | $FINAL | $NATIVE, $constMethod(Object, wait, void, int64_t)},
	{"wait", "(JI)V", nullptr, $PUBLIC | $FINAL, $constMethod(Object, wait, void, int64_t, int32_t)},
	{"finalize", "()V", nullptr, $PROTECTED | $DEPRECATED, $virtualMethod(Object, finalize, void)},
	{}
};

ClassInfo _Object_ClassInfo_ = {
	$PUBLIC,
	"java.lang.Object", // name
	nullptr, // superClass
	nullptr, // interfaces
	nullptr, // fields
	_Object_MethodInfo_, // methods
	nullptr, // signature;
	nullptr, // enclosingMethod;
	nullptr, // innerClasses;
	nullptr, // annotations
	nullptr  // typeAnnotations
};

Class* Object::class$ = nullptr;

void Object::wait() const {
	wait(0);
}

void Object::wait(int64_t timeoutMs) const {
	Platform::JVM_MonitorWait(this, timeoutMs);
}

void Object::notify() const {
	Platform::JVM_MonitorNotify(this);
}

void Object::notifyAll() const {
	Platform::JVM_MonitorNotifyAll(this);
}

Class* Object::getClass() const {
	// getClass is not virtual method, to Object0 first
	Object0* obj = $toObject0(this);
	return obj->getClass();
}

int32_t Object::hashCode() {
	return (int32_t)(intptr_t)$toObject0(this);
}

bool Object::equals(Object$* obj) {
	return obj != nullptr ? $toObject0(this) == $toObject0(obj) : false;
}

Object* Object::clone() {
	return ObjectManager::clone($toObject0(this));
}

String* Object::toString() {
	Object0* obj0 = $toObject0(this);
	return String::valueOf({$(obj0->getClass()->getName()), "@"_s, $(Integer::toHexString(obj0->hashCode())) });
}

void Object::wait(int64_t timeoutMillis, int32_t nanos) const {
	if (timeoutMillis < 0) {
		$throwNew(IllegalArgumentException, "timeoutMillis value is negative"_s);
	}
	if (nanos < 0 || nanos > 999999) {
		$throwNew(IllegalArgumentException, "nanosecond timeout value out of range"_s);
	}
	if (nanos > 0 && timeoutMillis < Long::MAX_VALUE) {
		++timeoutMillis;
	}
	this->wait(timeoutMillis);
}

void Object::finalize() {
}

Object* allocate$Object(Class* clazz) {
	return $alloc<Object>();
}

Class* Object::load$(String* name, bool initialize) {
	$loadClass(Object, name, initialize, &_Object_ClassInfo_, allocate$Object);
	return class$;
}

int32_t Object0::hashCode() {
	return (int32_t)(intptr_t)(this);
}

bool Object0::equals(Object$* obj) {
	return obj != nullptr ? this == $toObject0(obj) : false;
}

Object* Object0::clone() {
	return ObjectManager::clone(this);
}

String* Object0::toString() {
	return String::valueOf({$(getClass()->getName()), "@"_s, $(Integer::toHexString(hashCode()))});
}

void Object0::lock(const Object0* obj) {
	if (obj != nullptr) {
		obj->lock();
	}
}

bool Object0::trylock(const Object0* obj) {
	if (obj != nullptr) {
		return obj->trylock();
	}
	return false;
}

void Object0::unlock(const Object0* obj) {
	if (obj != nullptr) {
		obj->unlock();
	}
}

void Object0::lock() const {
	Platform::enterMonitor(this);
}

bool Object0::trylock() const {
	return Platform::tryEnterMonitor(this);
}

void Object0::unlock() const {
	Platform::exitMonitor(this);
}

	} // lang
} // java