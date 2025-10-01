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

#include <java/lang/CharArray.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/NegativeArraySizeException.h>
#include <jcpp.h>
#include <string.h>

namespace java {
	namespace lang {

Class* CharArray::class$ = nullptr;

MethodInfo _CharArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CharArray::*)(int32_t)>(&CharArray::init$))},
	{}
};

ClassInfo _CharArray_ClassInfo_ = {
	$PUBLIC | $FINAL,
	"[C",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	nullptr,
	_CharArray_MethodInfo_
};

Object* CharArray::box(int32_t index) const {
	return $of(get(index));
}

void CharArray::unbox(int32_t index, Object$* value) {
	set(index, $charValue(value));
}

void CharArray::unbox(int32_t index, Object0* value) {
	set(index, $charValue(value));
}

void CharArray::setValue(int32_t index, $Value value) {
	set(index, value.charValue());
}

void CharArray::fill(char16_t value) {
	char16_t* values = begin();
	for (int32_t i = 0; i < length; i++) {
		values[i] = value;
	}
}

void CharArray::fill(int32_t fromIndex, int32_t toIndex, char16_t value) {
	rangeCheck(fromIndex, fromIndex);
	char16_t* values = begin();
	for (int32_t i = fromIndex; i < toIndex; i++) {
		values[i] = value;
	}
}

void CharArray::getRegion(int32_t index, int32_t length, char16_t* buf) const {
	check(index, length);
	char16_t* src = begin() + index;
	memmove(buf, src, sizeof(char16_t) * length);
}

void CharArray::setRegion(int32_t index, int32_t length, const char16_t* buf) {
	check(index, length);
	char16_t* dst = begin() + index;
	memmove(dst, buf, sizeof(char16_t) * length);
}

void CharArray::setArray(int32_t index, const ::std::initializer_list<char16_t>& elements) {
	check(index, (int32_t)elements.size());
	char16_t* values = begin() + index;
	::std::initializer_list<char16_t>::iterator it = elements.begin();
	for (int32_t i = 0; i < length; i++, it++) {
		values[i] = *it;
	}
}

void CharArray::setArray(int32_t index, const CharArray* srcArray) {
	setArray(index, srcArray, 0, $nullcheck(srcArray)->length);
}

void CharArray::setArray(int32_t index, const CharArray* srcArray, int32_t srcIndex, int32_t length) {
	check(index, length);
	$nullcheck(srcArray)->check(srcIndex, length);
	char16_t* src = srcArray->begin() + srcIndex;
	char16_t* dst = this->begin() + index;
	if (srcArray == this) {
		memmove(dst, src, sizeof(char16_t) * length);
	} else {
		memcpy(dst, src, sizeof(char16_t) * length);
	}
}

CharArray* CharArray::subArray(int32_t index, int32_t length) const {
	check(index, length);
	$var(CharArray, subArray, $new<CharArray>(length));
	subArray->setArray(0, this, index, length);
	return subArray;
}

void CharArray::check(int32_t index) const {
	if ((uint32_t)index >= (uint32_t)length) { \
		$nullcheck(this); \
		$throwNew(ArrayIndexOutOfBoundsException, index); \
	}
}

void CharArray::check(int32_t index, int32_t length) const {
	if (index < 0) {
		$nullcheck(this);
		$throwNew(ArrayIndexOutOfBoundsException, index);
	}
	if (index + length > this->length) {
		$nullcheck(this);
		$throwNew(ArrayIndexOutOfBoundsException, index + length);
	}
}

void CharArray::rangeCheck(int32_t fromIndex, int32_t toIndex) const {
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

bool CharArray::equals(CharArray* x, CharArray* y) {
	if (x == y) {
		return true;
	}
	if (x == nullptr || y == nullptr) {
		return false;
	}
	if (x->length == y->length) {
		char16_t* datax = x->begin();
		char16_t* datay = y->begin();
		for (int32_t i = 0; i < x->length; i++) {
			if (datax[i] != datay[i]) {
				return false;
			}
		}
		return true;
	}
	return false;
}

Class* CharArray::load$(String* name, bool initialize) {
	int64_t arrayBaseSize = sizeof(CharArray) - sizeof(CharArray::data);
	Class::loadClass(&class$, arrayBaseSize, $getMark(CharArray), &_CharArray_ClassInfo_);
	return class$;
}

	} // lang
} // java