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

#ifndef _java_lang_BaseArray_h_
#define _java_lang_BaseArray_h_

#include <java/lang/Cloneable.h>
#include <java/io/Serializable.h>

namespace java {
	namespace lang {

class $export BaseArray : public ::java::io::Serializable {
public:
	BaseArray(int32_t length) : length(length), _(0) {}

	inline void* getData() const {
		return ((int8_t*)this + sizeof(BaseArray));
	}

	virtual Object* box(int32_t index) const = 0;
	virtual void unbox(int32_t index, Object$* value) = 0;
	virtual void unbox(int32_t index, Object0* value) = 0;
	virtual Value getValue(int32_t index) const = 0;
	virtual void setValue(int32_t index, Value value) = 0;

	const int32_t length;
	const int32_t _; // align 8

	static Class* getArrayType(Class* componentType, int32_t dim);
	static const int32_t debugDataSize = 1024; // must be a multiple of 16
};

	} // lang
} // java

#endif // _java_lang_BaseArray_h_