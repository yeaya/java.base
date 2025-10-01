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

#ifndef _java_lang_ShortArray_h_
#define _java_lang_ShortArray_h_
//$ class [S
//$ extends java.lang.Object
//$ implements java.lang.Cloneable,java.io.Serializable

#include <java/lang/BaseArray.h>
#include <initializer_list>

namespace java {
	namespace lang {

class $import ShortArray : public BaseArray {
	$class(ShortArray, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	ShortArray(int32_t length) : BaseArray(length) {}
	void init$(int32_t length) {};

	virtual Object* box(int32_t index) const override;
	virtual void unbox(int32_t index, Object$* value) override;
	virtual void unbox(int32_t index, Object0* value) override;
	virtual Value getValue(int32_t index) const override {
		return get(index);
	}
	virtual void setValue(int32_t index, Value value) override;

	inline int16_t& operator[](int32_t index) {
		if ((uint32_t)index >= (uint32_t)length) {
			check(index);
		}
		int16_t* values = begin();
		return values[index];
	}
	inline int16_t get(int32_t index) const {
		if ((uint32_t)index >= (uint32_t)length) {
			check(index);
		}
		int16_t* values = begin();
		return values[index];
	}
	inline int16_t set(int32_t index, int16_t value) {
		if ((uint32_t)index >= (uint32_t)length) {
			check(index);
		}
		int16_t* values = begin();
		values[index] = value;
		return value;
	}

	void fill(int16_t value);
	void fill(int32_t fromIndex, int32_t toIndex, int16_t value);

	inline int16_t* begin() const {
		return (int16_t*)getData();
	}
	inline int16_t* end() const {
		return begin() + length;
	}

	void getRegion(int32_t index, int32_t length, int16_t* buf) const;
	void setRegion(int32_t index, int32_t length, const int16_t* buf);

	void setArray(int32_t index, const ::std::initializer_list<int16_t>& elements);
	void setArray(int32_t index, const ShortArray* srcArray);
	void setArray(int32_t index, const ShortArray* srcArray, int32_t srcIndex, int32_t length);
	ShortArray* subArray(int32_t index, int32_t length) const;

	void check(int32_t index) const;
	void check(int32_t index, int32_t length) const;
	void rangeCheck(int32_t fromIndex, int32_t toIndex) const;

	static bool equals(ShortArray* x, ShortArray* y);
private:
	int16_t data[debugDataSize / sizeof(int16_t)];
};

	} // lang
} // java

#endif // _java_lang_ShortArray_h_