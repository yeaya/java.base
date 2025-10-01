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

#include <java/lang/MethodInfo.h>

#include <java/lang/String.h>
#include <java/io/DataOutputStream.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <jcpp.h>

namespace java {
	namespace lang {

const char* MethodInfo::getSignature() {
	if (signature != nullptr) {
		return signature;
	} else {
		return descriptor;
	}
}

bool MethodInfo::isEnd() {
	return name == nullptr;
}

void MethodInfo::encode(::java::io::DataOutputStream* os, ::jdk::internal::reflect::ConstantPool* cp) {

}

void MethodInfo::visit(::jdk::internal::reflect::ConstantPool* cp) {
	//cp->putUTF8At($cstr(this->name));
	//if (superClass != nullptr) {
	//	cp->putUTF8At($cstr(this->superClass));
	//}
	//if (interfaces != nullptr) {
	//	for (int32_t i = 0; interfaces[i] != nullptr; i++) {
	//		cp->putUTF8At($cstr(interfaces[i]));
	//	}
	//}
	//FieldInfo* field = fields;
	//for (; field != nullptr; field++) {

	//}
}

	} // lang
} // java