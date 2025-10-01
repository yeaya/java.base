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

#include <java/lang/BooleanArray.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/NegativeArraySizeException.h>
#include <jcpp.h>
#include <string.h>

namespace java {
	namespace lang {

Class* BooleanArray::class$ = nullptr;

MethodInfo _BooleanArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BooleanArray::*)(int32_t)>(&BooleanArray::init$))},
	{}
};

ClassInfo _BooleanArray_ClassInfo_ = {
	$PUBLIC | $FINAL,
	"[Z",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	nullptr,
	_BooleanArray_MethodInfo_
};

Object* BooleanArray::box(int32_t index) const {
	return $of(get(index));
}

void BooleanArray::unbox(int32_t index, Object$* value) {
	set(index, $booleanValue(value));
}

void BooleanArray::unbox(int32_t index, Object0* value) {
	set(index, $booleanValue(value));
}

void BooleanArray::setValue(int32_t index, $Value value) {
	set(index, value.booleanValue());
}

void BooleanArray::fill(bool value) {
	bool* values = begin();
	for (int32_t i = 0; i < length; i++) {
		values[i] = value;
	}
}

void BooleanArray::fill(int32_t fromIndex, int32_t toIndex, bool value) {
	rangeCheck(fromIndex, fromIndex);
	bool* values = begin();
	for (int32_t i = fromIndex; i < toIndex; i++) {
		values[i] = value;
	}
}

void BooleanArray::getRegion(int32_t index, int32_t length, bool* buf) const {
	check(index, length);
	bool* src = begin() + index;
	memmove(buf, src, sizeof(bool) * length);
}

void BooleanArray::setRegion(int32_t index, int32_t length, const bool* buf) {
	check(index, length);
	bool* dst = begin() + index;
	memmove(dst, buf, sizeof(bool) * length);
}

void BooleanArray::setArray(int32_t index, const ::std::initializer_list<bool>& elements) {
	check(index, (int32_t)elements.size());
	bool* values = begin() + index;
	::std::initializer_list<bool>::iterator it = elements.begin();
	for (int32_t i = 0; i < length; i++, it++) {
		values[i] = *it;
	}
}

void BooleanArray::setArray(int32_t index, const BooleanArray* srcArray) {
	setArray(index, srcArray, 0, $nullcheck(srcArray)->length);
}

void BooleanArray::setArray(int32_t index, const BooleanArray* srcArray, int32_t srcIndex, int32_t length) {
	check(index, length);
	$nullcheck(srcArray)->check(srcIndex, length);
	bool* src = srcArray->begin() + srcIndex;
	bool* dst = this->begin() + index;
	if (srcArray == this) {
		memmove(dst, src, sizeof(bool) * length);
	} else {
		memcpy(dst, src, sizeof(bool) * length);
	}
}

BooleanArray* BooleanArray::subArray(int32_t index, int32_t length) const {
	check(index, length);
	$var(BooleanArray, subArray, $new<BooleanArray>(length));
	subArray->setArray(0, this, index, length);
	return subArray;
}

void BooleanArray::check(int32_t index) const {
	if ((uint32_t)index >= (uint32_t)length) { \
		$nullcheck(this); \
		$throwNew(ArrayIndexOutOfBoundsException, index); \
	}
}

void BooleanArray::check(int32_t index, int32_t length) const {
	if (index < 0) {
		$nullcheck(this);
		$throwNew(ArrayIndexOutOfBoundsException, index);
	}
	if (index + length > this->length) {
		$nullcheck(this);
		$throwNew(ArrayIndexOutOfBoundsException, index + length);
	}
}

void BooleanArray::rangeCheck(int32_t fromIndex, int32_t toIndex) const {
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

bool BooleanArray::equals(BooleanArray* x, BooleanArray* y) {
	if (x == y) {
		return true;
	}
	if (x == nullptr || y == nullptr) {
		return false;
	}
	if (x->length == y->length) {
		bool* datax = x->begin();
		bool* datay = y->begin();
		for (int32_t i = 0; i < x->length; i++) {
			if (datax[i] != datay[i]) {
				return false;
			}
		}
		return true;
	}
	return false;
}

Class* BooleanArray::load$(String* name, bool initialize) {
	int64_t arrayBaseSize = sizeof(BooleanArray) - sizeof(BooleanArray::data);
	Class::loadClass(&class$, arrayBaseSize, $getMark(BooleanArray), &_BooleanArray_ClassInfo_);
	return class$;
}

	} // lang
} // java