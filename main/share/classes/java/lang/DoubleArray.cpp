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

#include <java/lang/DoubleArray.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Machine.h>
#include <jcpp.h>
#include <string.h>

namespace java {
	namespace lang {

Class* DoubleArray::class$ = nullptr;

MethodInfo _DoubleArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(DoubleArray, init$, void, int32_t)},
	{}
};

ClassInfo _DoubleArray_ClassInfo_ = {
	$PUBLIC | $FINAL,
	"[D",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	nullptr,
	_DoubleArray_MethodInfo_
};

Object* DoubleArray::box(int32_t index) const {
	return $of(get(index));
}

void DoubleArray::unbox(int32_t index, Object$* value) {
	set(index, $doubleValue(value));
}

void DoubleArray::unbox(int32_t index, Object0* value) {
	set(index, $doubleValue(value));
}

void DoubleArray::setValue(int32_t index, $Value value) {
	set(index, value.doubleValue());
}

void DoubleArray::fill(double value) {
	double* values = begin();
	for (int32_t i = 0; i < length; i++) {
		values[i] = value;
	}
}

void DoubleArray::fill(int32_t fromIndex, int32_t toIndex, double value) {
	rangeCheck(fromIndex, fromIndex);
	double* values = begin();
	for (int32_t i = fromIndex; i < toIndex; i++) {
		values[i] = value;
	}
}

void DoubleArray::getRegion(int32_t index, int32_t length, double* buf) const {
	check(index, length);
	double* src = begin() + index;
	memmove(buf, src, sizeof(double) * length);
}

void DoubleArray::setRegion(int32_t index, int32_t length, const double* buf) {
	check(index, length);
	double* dst = begin() + index;
	memmove(dst, buf, sizeof(double) * length);
}

void DoubleArray::setArray(int32_t index, const ::std::initializer_list<double>& elements) {
	check(index, (int32_t)elements.size());
	double* values = begin() + index;
	::std::initializer_list<double>::iterator it = elements.begin();
	for (int32_t i = 0; i < length; i++, it++) {
		values[i] = *it;
	}
}

void DoubleArray::setArray(int32_t index, const DoubleArray* srcArray) {
	setArray(index, srcArray, 0, $nullcheck(srcArray)->length);
}

void DoubleArray::setArray(int32_t index, const DoubleArray* srcArray, int32_t srcIndex, int32_t length) {
	check(index, length);
	$nullcheck(srcArray)->check(srcIndex, length);
	double* src = srcArray->begin() + srcIndex;
	double* dst = this->begin() + index;
	if (srcArray == this) {
		memmove(dst, src, sizeof(double) * length);
	} else {
		memcpy(dst, src, sizeof(double) * length);
	}
}

DoubleArray* DoubleArray::subArray(int32_t index, int32_t length) const {
	check(index, length);
	$var(DoubleArray, subArray, $new<DoubleArray>(length));
	subArray->setArray(0, this, index, length);
	return subArray;
}

void DoubleArray::check(int32_t index) const {
	if ((uint32_t)index >= (uint32_t)length) {
		$throwNew(ArrayIndexOutOfBoundsException, index);
	}
}

void DoubleArray::check(int32_t index, int32_t length) const {
	if (index < 0) {
		$throwNew(ArrayIndexOutOfBoundsException, index);
	}
	if (index + length > this->length) {
		$throwNew(ArrayIndexOutOfBoundsException, index + length);
	}
}

void DoubleArray::rangeCheck(int32_t fromIndex, int32_t toIndex) const {
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

bool DoubleArray::equals(DoubleArray* x, DoubleArray* y) {
	if (x == y) {
		return true;
	}
	if (x == nullptr || y == nullptr) {
		return false;
	}
	if (x->length == y->length) {
		double* datax = x->begin();
		double* datay = y->begin();
		for (int32_t i = 0; i < x->length; i++) {
			if (datax[i] != datay[i]) {
				return false;
			}
		}
		return true;
	}
	return false;
}

Class* DoubleArray::load$(String* name, bool initialize) {
	int64_t arrayBaseSize = sizeof(DoubleArray) - sizeof(DoubleArray::data);
	Machine::loadClass(&class$, arrayBaseSize, $getMark(DoubleArray), &_DoubleArray_ClassInfo_);
	return class$;
}

	} // lang
} // java