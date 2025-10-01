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

#ifndef _java_lang_FieldInfo_h_
#define _java_lang_FieldInfo_h_

#include <java/lang/Array.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/TypeAnnotation.h>

//typedef int32_t $offsetType;
//typedef void* $staticOffsetType;
//typedef int64_t $constType;
namespace java {
    namespace lang {
		namespace reflect {
			class Field;
		}
	}
}

#define $offsetof(type, member) ((int64_t)&reinterpret_cast<char const volatile&>((((type*)0)->member)))

#define $constField(type, member) ((int64_t)type::member)
#define $staticField(type, member) ((void*)&type::member)
#define $field(type, member) ((int32_t)$offsetof(type, member))

namespace java {
    namespace lang {

class $import FieldInfo {
public:
	FieldInfo() {}
	FieldInfo(
		const char* name ,
		const char* descriptor = nullptr,
		const char* signature = nullptr,
		int32_t modifiers = 0,
		int32_t offset = 0,
		CompoundAttribute* annotations = nullptr,
		TypeAnnotation* typeAnnotations = nullptr) :
		name(name), descriptor(descriptor), signature(signature), annotations(annotations), typeAnnotations(typeAnnotations),
		modifiers(modifiers), offset((int64_t)offset), constValue(0) {
	}
	FieldInfo(
		const char* name ,
		const char* descriptor = nullptr,
		const char* signature = nullptr,
		int32_t modifiers = 0,
		void* ptrOfStatic = nullptr,
		CompoundAttribute* annotations = nullptr,
		TypeAnnotation* typeAnnotations = nullptr) :
		name(name), descriptor(descriptor), signature(signature), annotations(annotations), typeAnnotations(typeAnnotations),
		modifiers(modifiers), offset((int64_t)ptrOfStatic), constValue(0) {
	}
	FieldInfo(
		const char* name ,
		const char* descriptor = nullptr,
		const char* signature = nullptr,
		int32_t modifiers = 0,
		int64_t constValue = 0,
		CompoundAttribute* annotations = nullptr,
		TypeAnnotation* typeAnnotations = nullptr) :
		name(name), descriptor(descriptor), signature(signature), annotations(annotations), typeAnnotations(typeAnnotations),
		modifiers(modifiers), constValue(constValue) {
			this->offset = (int64_t)&this->constValue;
	}
	const char* name = nullptr;
	const char* descriptor = nullptr;
	const char* signature = nullptr;

	CompoundAttribute* annotations = nullptr;
	TypeAnnotation* typeAnnotations = nullptr;
	int32_t modifiers = 0;
//	int32_t slot = -1;
	int64_t offset = 0;
	int64_t constValue = 0;
	::java::lang::Class* type = nullptr;

	::java::lang::reflect::Field* ref = nullptr;
	$bytes* rawAnnotations = nullptr;
	$bytes* rawTypeAnnotations = nullptr;

	bool isEnd();
	void encode(::java::io::DataOutputStream* os, ::jdk::internal::reflect::ConstantPool* constantPool);
	void visit(::jdk::internal::reflect::ConstantPool* constantPool);
};

    } // lang
} // java

#endif // _java_lang_FieldInfo_h_