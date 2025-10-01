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

#ifndef _java_lang_ObjectArray_h_
#define _java_lang_ObjectArray_h_
//$ class [Ljava.lang.Object;
//$ extends java.lang.Object
//$ implements java.lang.Cloneable,java.io.Serializable

#include <java/lang/BaseArray.h>
#include <initializer_list>

namespace java {
	namespace lang {

class $import ObjectArray : public BaseArray {
	$class(ObjectArray, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	ObjectArray(int32_t length) : BaseArray(length) {}
	void init$(int32_t length) {};

	virtual Object* box(int32_t index) const override {
		return get(index);
	}
	virtual void unbox(int32_t index, Object$* value) override {
		set(index, value);
	}
	virtual void unbox(int32_t index, Object0* value) override {
		set(index, value);
	}
	virtual Value getValue(int32_t index) const override {
		return get(index);
	}
	virtual void setValue(int32_t index, Value value) override {
		set(index, value.objectValue());
	}

	inline Object0* get(int32_t index) const {
		if ((uint32_t)index >= (uint32_t)length) {
			check(index);
		}
		Object0** vaules = begin();
		return vaules[index];
	}

	Object$* set(int32_t index, Object$* value);
	Object0* set(int32_t index, Object0* value);
	Object0* set(int32_t index, ::std::nullptr_t);

	void fill(Object$* value);
	void fill(Object0* value);
	void fill(::std::nullptr_t);
	void fill(int32_t fromIndex, int32_t toIndex, Object$* value);
	void fill(int32_t fromIndex, int32_t toIndex, Object0* value);
	void fill(int32_t fromIndex, int32_t toIndex, ::std::nullptr_t);

	String* plusAssign(int32_t index, Object$* value);

	inline Object0** begin() const {
		return (Object0**)getData();
	}
	inline Object0** end() const {
		return begin() + length;
	}

	void setArray(int32_t index, const ::std::initializer_list<Object$*>& elements);
	void setArray(int32_t index, const ObjectArray* srcArray);
	void setArray(int32_t index, const ObjectArray* srcArray, int32_t srcIndex, int32_t length);
	ObjectArray* subArray(int32_t index, int32_t length) const;

	void check(int32_t index) const;
	void check(int32_t index, int32_t lentgh) const;
	void rangeCheck(int32_t fromIndex, int32_t toIndex) const;

	static bool equals(ObjectArray* x, ObjectArray* y);
	static ObjectArray* create(Class* componentType, int32_t length);
	static ObjectArray* EMPTY;
private:
	Object0* data[debugDataSize / sizeof(Object0*)];
};

	} // lang
} // java

#endif // _java_lang_ObjectArray_h_