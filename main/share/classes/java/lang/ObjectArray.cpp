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

#include <java/lang/ObjectArray.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

namespace java {
	namespace lang {

Class* ObjectArray::class$ = nullptr;
ObjectArray* ObjectArray::EMPTY = nullptr;

MethodInfo _ObjectArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectArray::*)(int32_t)>(&ObjectArray::init$))},
	{}
};

ClassInfo _ObjectArray_ClassInfo_ = {
	$PUBLIC | $FINAL,
	"[Ljava.lang.Object;",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	nullptr,
	_ObjectArray_MethodInfo_
};

#define $check(index) \
	if (this == nullptr) { \
		$throwNew(NullPointerException); \
	} \
	if ((uint32_t)index >= (uint32_t)length) { \
		$throwNew(ArrayIndexOutOfBoundsException, index); \
	}

Object$* ObjectArray::set(int32_t index, Object$* value) {
	$check(index);
	Object0** objects = begin();
	ObjectManager::assignArray(this, objects[index], (Object*)value);
	return value;
}

Object0* ObjectArray::set(int32_t index, Object0* value) {
	$check(index);
	Object0** objects = begin();
	return ObjectManager::assignArray(this, objects[index], value);
}

Object0* ObjectArray::set(int32_t index, ::std::nullptr_t) {
	$check(index);
	Object0** objects = begin();
	return ObjectManager::assignArray(this, objects[index], nullptr);
}

void ObjectArray::fill(Object$* value) {
	ObjectManager::fillArray(this, 0, length, value);
}

void ObjectArray::fill(Object0* value) {
	ObjectManager::fillArray(this, 0, length, value);
}

void ObjectArray::fill(::std::nullptr_t) {
	ObjectManager::fillArray(this, 0, length, nullptr);
}

void ObjectArray::fill(int32_t fromIndex, int32_t toIndex, Object$* value) {
	ObjectManager::fillArray(this, fromIndex, toIndex, value);
}

void ObjectArray::fill(int32_t fromIndex, int32_t toIndex, Object0* value) {
	ObjectManager::fillArray(this, fromIndex, toIndex, value);
}

void ObjectArray::fill(int32_t fromIndex, int32_t toIndex, ::std::nullptr_t) {
	ObjectManager::fillArray(this, fromIndex, toIndex, nullptr);
}

String* ObjectArray::plusAssign(int32_t index, Object$* value) {
	Object0* origin = get(index);
	Object* value0 = (Object*)value;
	$var(String, s, $toString(origin));
	$var(String, valueStr, $toString(value0));
	$assign(s, String::concat(s, valueStr));
	set(index, s);
	return s;
}

void ObjectArray::setArray(int32_t index, const ::std::initializer_list<Object$*>& elements) {
	check(index, (int32_t)elements.size());
	Object0** objects = begin() + index;
	::std::initializer_list<Object$*>::iterator it = elements.begin();
	for (int32_t i = 0; i < length; i++, it++) {
		Object* v = (Object*)*it;
		ObjectManager::assignArray(this, objects[i], v);
	}
}

void ObjectArray::setArray(int32_t index, const ObjectArray* srcArray) {
	ObjectManager::copyArray(this, index, srcArray, 0, $nc(srcArray)->length);
}

void ObjectArray::setArray(int32_t index, const ObjectArray* srcArray, int32_t srcIndex, int32_t length) {
	ObjectManager::copyArray(this, index, srcArray, srcIndex, length);
}

ObjectArray* ObjectArray::subArray(int32_t index, int32_t length) const {
	check(index, length);
	Class* componentType = $of(this)->getClass()->getComponentType();
	$var(ObjectArray, subArray, (ObjectArray*)ObjectManager::newArray(componentType, length));
	ObjectManager::copyArray(subArray, 0, this, index, length);
	return subArray;
}

void ObjectArray::check(int32_t index) const {
	$check(index);
}

void ObjectArray::check(int32_t index, int32_t length) const {
	if (index < 0) {
		$throwNew(ArrayIndexOutOfBoundsException, index);
	}
	if (index + length > this->length) {
		$throwNew(ArrayIndexOutOfBoundsException, index + length);
	}
}

void ObjectArray::rangeCheck(int32_t fromIndex, int32_t toIndex) const {
	if (fromIndex > toIndex) {
		$throwNew(IllegalArgumentException, $ref(String::valueOf({"fromIndex("_s, $$str(fromIndex), ") > toIndex("_s, $$str(toIndex), ")"_s})));
	}
	if (fromIndex < 0) {
		$throwNew(ArrayIndexOutOfBoundsException, fromIndex);
	}
	if (toIndex > length) {
		$throwNew(ArrayIndexOutOfBoundsException, toIndex);
	}
}

bool ObjectArray::equals(ObjectArray* x, ObjectArray* y) {
	if (x == y) {
		return true;
	}
	if (x == nullptr || y == nullptr) {
		return false;
	}
	if (x->length == y->length) {
		Object0** datax = x->begin();
		Object0** datay = y->begin();
		for (int32_t i = 0; i < x->length; i++) {
			if (datax[i] != datay[i]) {
				return false;
			}
		}
		return true;
	}
	return false;
}

ObjectArray* ObjectArray::create(Class* componentType, int32_t length) {
	return ObjectManager::newObjectArray(componentType, length);
}

Class* ObjectArray::load$(String* name, bool initialize) {
	int64_t objectArrayBaseSize = sizeof(ObjectArray) - sizeof(ObjectArray::data);
	Class::loadClass(&class$, objectArrayBaseSize, $getMark(ObjectArray), &_ObjectArray_ClassInfo_);
	return class$;
}

	} // lang
} // java