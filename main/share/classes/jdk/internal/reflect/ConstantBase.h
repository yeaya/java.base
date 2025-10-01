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

#ifndef _jdk_internal_reflect_ConstantBase_h_
#define _jdk_internal_reflect_ConstantBase_h_
//$ class jdk.internal.reflect.ConstantBase
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class ConstantPool;

class $export ConstantBase : public ::java::lang::Object {
public:
	ConstantBase();
	void init$(int8_t tagCode, int32_t index);
	virtual void init(ConstantPool* cp);

	int8_t tagCode = 0;
	int32_t index = 0;

	static const int8_t Tag_Invalid = 0;
	static const int8_t Tag_Utf8 = 1;
	static const int8_t Tag_Integer = 3;
	static const int8_t Tag_Float = 4;
	static const int8_t Tag_Long = 5;
	static const int8_t Tag_Double = 6;
	static const int8_t Tag_Class = 7;
	static const int8_t Tag_String = 8;
	static const int8_t Tag_FieldRef = 9;
	static const int8_t Tag_MethodRef = 10;
	static const int8_t Tag_InterfaceMethodRef = 11;
	static const int8_t Tag_NameAndType = 12;
	static const int8_t Tag_MethodHandle = 15;
	static const int8_t Tag_MethodType = 16;
	static const int8_t Tag_Dynamic = 17;
	static const int8_t Tag_InvokeDynamic = 18;
	static const int8_t Tag_Module = 19;
	static const int8_t Tag_Package = 20;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ConstantBase_h_