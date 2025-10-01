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

#include <jdk/internal/reflect/ConstantString.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <jcpp.h>

namespace jdk {
	namespace internal {
		namespace reflect {

ConstantString::ConstantString() {

}

void ConstantString::init$(int32_t index, int32_t utf8Index) {
	ConstantBase::init$(Tag_String, index);
	this->utf8Index = utf8Index;
}

void ConstantString::init(ConstantPool* cp) {
	$set(this, utf8, cp->getUTF8(utf8Index));
}

		}
	}
}