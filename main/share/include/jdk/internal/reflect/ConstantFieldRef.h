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

#ifndef _jdk_internal_reflect_ConstantFieldRef_h_
#define _jdk_internal_reflect_ConstantFieldRef_h_
//$ class jdk.internal.reflect.ConstantFieldRef
//$ extends jdk.internal.reflect.ConstantBase

#include <jdk/internal/reflect/ConstantBase.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class $import ConstantFieldRef : public ConstantBase {
public:
	ConstantFieldRef();
	void init$(int32_t index, int32_t classIndex, int32_t nameAndTypeIndex);
	virtual void init(ConstantPool* cp) override;

	int32_t classIndex = 0;
	int32_t nameAndTypeIndex = 0;
	::java::lang::String* clazz = nullptr;
	::java::lang::String* name = nullptr;
	::java::lang::String* descriptor = nullptr;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ConstantFieldRef_h_