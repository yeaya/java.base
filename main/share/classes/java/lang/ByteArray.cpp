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

#include <java/lang/ByteArray.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Machine.h>
#include <jcpp.h>
#include <string.h>

namespace java {
	namespace lang {

Class* ByteArray::class$ = nullptr;

MethodInfo _ByteArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ByteArray, init$, void, int32_t)},
	{}
};

ClassInfo _ByteArray_ClassInfo_ = {
	$PUBLIC | $FINAL,
	"[B",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	nullptr,
	_ByteArray_MethodInfo_
};

Object* ByteArray::box(int32_t index) const {
	return $of(get(index));
}

void ByteArray::unbox(int32_t index, Object$* value) {
	set(index, $byteValue(value));
}

void ByteArray::unbox(int32_t index, Object0* value) {
	set(index, $byteValue(value));
}

void ByteArray::setValue(int32_t index, $Value value) {
	set(index, value.byteValue());
}

void ByteArray::fill(int8_t value) {
	int8_t* values = begin();
	for (int32_t i = 0; i < length; i++) {
		values[i] = value;
	}
}

void ByteArray::fill(int32_t fromIndex, int32_t toIndex, int8_t value) {
	rangeCheck(fromIndex, fromIndex);
	int8_t* values = begin();
	for (int32_t i = fromIndex; i < toIndex; i++) {
		values[i] = value;
	}
}

void ByteArray::getRegion(int32_t index, int32_t length, int8_t* buf) const {
	check(index, length);
	int8_t* src = begin() + index;
	memmove(buf, src, sizeof(int8_t) * length);
}

void ByteArray::setRegion(int32_t index, int32_t length, const int8_t* buf) {
	check(index, length);
	int8_t* dst = begin() + index;
	memmove(dst, buf, sizeof(int8_t) * length);
}

void ByteArray::setArray(int32_t index, const ::std::initializer_list<int8_t>& elements) {
	check(index, (int32_t)elements.size());
	int8_t* values = begin() + index;
	::std::initializer_list<int8_t>::iterator it = elements.begin();
	for (int32_t i = 0; i < length; i++, it++) {
		values[i] = *it;
	}
}

void ByteArray::setArray(int32_t index, const ByteArray* srcArray) {
	setArray(index, srcArray, 0, $nullcheck(srcArray)->length);
}

void ByteArray::setArray(int32_t index, const ByteArray* srcArray, int32_t srcIndex, int32_t length) {
	check(index, length);
	$nullcheck(srcArray)->check(srcIndex, length);
	int8_t* src = srcArray->begin() + srcIndex;
	int8_t* dst = this->begin() + index;
	if (srcArray == this) {
		memmove(dst, src, sizeof(int8_t) * length);
	} else {
		memcpy(dst, src, sizeof(int8_t) * length);
	}
}

ByteArray* ByteArray::subArray(int32_t index, int32_t length) const {
	check(index, length);
	$var(ByteArray, subArray, $new<ByteArray>(length));
	subArray->setArray(0, this, index, length);
	return subArray;
}

void ByteArray::check(int32_t index) const {
	if ((uint32_t)index >= (uint32_t)length) {
		$throwNew(ArrayIndexOutOfBoundsException, index);
	}
}

void ByteArray::check(int32_t index, int32_t length) const {
	if (index < 0) {
		$throwNew(ArrayIndexOutOfBoundsException, index);
	}
	if (index + length > this->length) {
		$throwNew(ArrayIndexOutOfBoundsException, index + length);
	}
}

void ByteArray::rangeCheck(int32_t fromIndex, int32_t toIndex) const {
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

bool ByteArray::equals(ByteArray* x, ByteArray* y) {
	if (x == y) {
		return true;
	}
	if (x == nullptr || y == nullptr) {
		return false;
	}
	if (x->length == y->length) {
		int8_t* datax = x->begin();
		int8_t* datay = y->begin();
		for (int32_t i = 0; i < x->length; i++) {
			if (datax[i] != datay[i]) {
				return false;
			}
		}
		return true;
	}
	return false;
}

Class* ByteArray::load$(String* name, bool initialize) {
	int64_t arrayBaseSize = sizeof(ByteArray) - sizeof(ByteArray::data);
	Machine::loadClass(&class$, arrayBaseSize, $getMark(ByteArray), &_ByteArray_ClassInfo_);
	return class$;
}

	} // lang
} // java