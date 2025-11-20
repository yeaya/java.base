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

#ifndef _java_lang_ClassInfo_h_
#define _java_lang_ClassInfo_h_

#include <java/lang/Array.h>

#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/TypeAnnotation.h>

namespace java {
    namespace lang {

class $import ClassInfo {
public:
	ClassInfo(
		int16_t flags = 0,
		const char* name = nullptr,
		const char* superClass = nullptr,
		const char* interfaces = nullptr,
		FieldInfo* fields = nullptr,
		MethodInfo* methods = nullptr,
		const char* signature = nullptr,
		EnclosingMethodInfo* enclosingMethod = nullptr,
		InnerClassInfo* innerClasses = nullptr,
		CompoundAttribute* annotations = nullptr,
		TypeAnnotation* typeAnnotations = nullptr,
		const char* nestMembers = nullptr,
		const char* nestHost = nullptr) :
			flags(flags),
			name(name),
			superClass(superClass),
			interfaces(interfaces),
			fields(fields),
			methods(methods),
			signature(signature),
			enclosingMethod(enclosingMethod),
			innerClasses(innerClasses),
			annotations(annotations),
			typeAnnotations(typeAnnotations),
			nestMembers(nestMembers),
			nestHost(nestHost) {
	}

	int16_t flags;
	const char* name;
	const char* superClass;
	const char* interfaces;
	// trans_local TODO
	FieldInfo* fields;
	MethodInfo* methods;
	const char* signature;
	EnclosingMethodInfo* enclosingMethod;
	InnerClassInfo* innerClasses;
	CompoundAttribute* annotations;
	TypeAnnotation* typeAnnotations;
	const char* nestMembers;
	const char* nestHost;

	$bytes* rawAnnotations = nullptr;
	$bytes* rawTypeAnnotations = nullptr;

	void encode(::java::io::DataOutputStream* os, ::jdk::internal::reflect::ConstantPool* constantPool);
	void visit(::jdk::internal::reflect::ConstantPool* constantPool);
	static $bytes* getRawAnnotations(CompoundAttribute* annotations, ::jdk::internal::reflect::ConstantPool* constantPool);
	static $bytes* getRawTypeAnnotations(TypeAnnotation* typeAnnotations, ::jdk::internal::reflect::ConstantPool* constantPool);
	static $bytes* getRawAttribute(Attribute* attribute, ::jdk::internal::reflect::ConstantPool* constantPool);
	static $bytes* getRawParamAnnotations(int32_t paramCount, ParameterAnnotation* annotations, ::jdk::internal::reflect::ConstantPool* constantPool);
};

    } // lang
} // java

#endif // _java_lang_ClassInfo_h_