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

#ifndef _java_lang_MethodInfo_h_
#define _java_lang_MethodInfo_h_

#include <java/lang/Array.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/ParameterAnnotation.h>

namespace java {
    namespace lang {
		namespace reflect {
			class Executable;
		}
	}
}

template<typename t>
void* $method(t tp) {
    union {
        void* p;
        t tp;
    } u;
    u.tp = tp;
    return u.p;
}

//#define $virtualMethod(type, member) (nullptr)
//#define $staticMethod(type, member) ($funcationToVoidPtr(&type::member))
//#define $method(type, member) ($funcationToVoidPtr(&type::member))

namespace java {
    namespace lang {

class $export MethodInfo {
public:
	MethodInfo(
		const char* name = nullptr,
		const char* descriptor = nullptr,
		const char* signature = nullptr,
		int32_t modifiers = 0,
		void* invokeAddress = nullptr,
		const char* exceptions = nullptr,
		Attribute* defaultValue = nullptr,
		CompoundAttribute* annotations = nullptr,
		TypeAnnotation* typeAnnotations = nullptr,
		ParameterAnnotation* paramAnnotations = nullptr)
		:
		name(name),
		descriptor(descriptor),
		signature(signature),
		modifiers(modifiers),
		slot(0),
		invokeAddress(invokeAddress),
		exceptions(exceptions),
		defaultValue(defaultValue),
		annotations(annotations),
		typeAnnotations(typeAnnotations),
		paramAnnotations(paramAnnotations) {
	}
	const char* name;
	const char* descriptor;
	const char* signature;
	int32_t modifiers;
	int32_t slot;
	void* invokeAddress;
	const char* exceptions;
	Attribute* defaultValue;
	CompoundAttribute* annotations;
	TypeAnnotation* typeAnnotations;
	ParameterAnnotation* paramAnnotations;

	void* nativeAddress = nullptr;
	::java::lang::reflect::Executable* ref = nullptr; // Method or Constructor
	$bytes* rawAnnotations = nullptr;
	$bytes* rawTypeAnnotations = nullptr;
	$bytes* rawParameterAnnotations = nullptr;
	$bytes* rawDefaultValue = nullptr;

	const char* getSignature();
	bool isEnd();
	void encode(::java::io::DataOutputStream* os, ::jdk::internal::reflect::ConstantPool* cp);
	void visit(::jdk::internal::reflect::ConstantPool* cp);
};

    } // lang
} // java

#endif // _java_lang_MethodInfo_h_