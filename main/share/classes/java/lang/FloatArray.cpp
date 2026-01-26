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

#include <java/lang/FloatArray.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Machine.h>
#include <jcpp.h>
#include <string.h>

namespace java {
	namespace lang {

Class* FloatArray::class$ = nullptr;

MethodInfo _FloatArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(FloatArray, init$, void, int32_t)},
	{}
};

ClassInfo _FloatArray_ClassInfo_ = {
	$PUBLIC | $FINAL,
	"[F",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	nullptr,
	_FloatArray_MethodInfo_
};

Object* FloatArray::box(int32_t index) const {
	return $of(get(index));
}

void FloatArray::unbox(int32_t index, Object$* value) {
	set(index, $floatValue(value));
}

void FloatArray::unbox(int32_t index, Object0* value) {
	set(index, $floatValue(value));
}

void FloatArray::setValue(int32_t index, $Value value) {
	set(index, value.floatValue());
}

void FloatArray::fill(float value) {
	float* values = begin();
	for (int32_t i = 0; i < length; i++) {
		values[i] = value;
	}
}

void FloatArray::fill(int32_t fromIndex, int32_t toIndex, float value) {
	rangeCheck(fromIndex, fromIndex);
	float* values = begin();
	for (int32_t i = fromIndex; i < toIndex; i++) {
		values[i] = value;
	}
}

void FloatArray::getRegion(int32_t index, int32_t length, float* buf) const {
	check(index, length);
	float* src = begin() + index;
	memmove(buf, src, sizeof(float) * length);
}

void FloatArray::setRegion(int32_t index, int32_t length, const float* buf) {
	check(index, length);
	float* dst = begin() + index;
	memmove(dst, buf, sizeof(float) * length);
}

void FloatArray::setArray(int32_t index, const ::std::initializer_list<float>& elements) {
	check(index, (int32_t)elements.size());
	float* values = begin() + index;
	::std::initializer_list<float>::iterator it = elements.begin();
	for (int32_t i = 0; i < length; i++, it++) {
		values[i] = *it;
	}
}

void FloatArray::setArray(int32_t index, const FloatArray* srcArray) {
	setArray(index, srcArray, 0, $nullcheck(srcArray)->length);
}

void FloatArray::setArray(int32_t index, const FloatArray* srcArray, int32_t srcIndex, int32_t length) {
	check(index, length);
	$nullcheck(srcArray)->check(srcIndex, length);
	float* src = srcArray->begin() + srcIndex;
	float* dst = this->begin() + index;
	if (srcArray == this) {
		memmove(dst, src, sizeof(float) * length);
	} else {
		memcpy(dst, src, sizeof(float) * length);
	}
}

FloatArray* FloatArray::subArray(int32_t index, int32_t length) const {
	check(index, length);
	$var(FloatArray, subArray, $new<FloatArray>(length));
	subArray->setArray(0, this, index, length);
	return subArray;
}

void FloatArray::check(int32_t index) const {
	if ((uint32_t)index >= (uint32_t)length) {
		$throwNew(ArrayIndexOutOfBoundsException, index);
	}
}

void FloatArray::check(int32_t index, int32_t length) const {
	if (index < 0) {
		$throwNew(ArrayIndexOutOfBoundsException, index);
	}
	if (index + length > this->length) {
		$throwNew(ArrayIndexOutOfBoundsException, index + length);
	}
}

void FloatArray::rangeCheck(int32_t fromIndex, int32_t toIndex) const {
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

bool FloatArray::equals(FloatArray* x, FloatArray* y) {
	if (x == y) {
		return true;
	}
	if (x == nullptr || y == nullptr) {
		return false;
	}
	if (x->length == y->length) {
		float* datax = x->begin();
		float* datay = y->begin();
		for (int32_t i = 0; i < x->length; i++) {
			if (datax[i] != datay[i]) {
				return false;
			}
		}
		return true;
	}
	return false;
}

Class* FloatArray::load$(String* name, bool initialize) {
	int64_t arrayBaseSize = sizeof(FloatArray) - sizeof(FloatArray::data);
	Machine::loadClass(&class$, arrayBaseSize, $getMark(FloatArray), &_FloatArray_ClassInfo_);
	return class$;
}

	} // lang
} // java