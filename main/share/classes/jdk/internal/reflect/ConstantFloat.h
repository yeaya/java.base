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

#ifndef _jdk_internal_reflect_ConstantFloat_h_
#define _jdk_internal_reflect_ConstantFloat_h_
//$ class jdk.internal.reflect.ConstantFloat
//$ extends jdk.internal.reflect.ConstantBase

#include <jdk/internal/reflect/ConstantBase.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class $export ConstantFloat : public ConstantBase {
public:
	ConstantFloat();
	void init$(int32_t index, float value);

	float value = 0;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ConstantFloat_h_