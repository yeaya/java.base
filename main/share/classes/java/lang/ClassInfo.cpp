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

#include <java/lang/ClassInfo.h>

#include <java/lang/Class.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataOutputStream.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <jcpp.h>

using namespace ::java::lang;
using namespace ::java::io;

namespace java {
	namespace lang {

void ClassInfo::encode(::java::io::DataOutputStream* os, ::jdk::internal::reflect::ConstantPool* cp) {

}

$bytes* cloneStaticBytes($bytes* bytes) {
	$bytes* staticBytes = $allocStatic<$bytes>(bytes->length);
	staticBytes->setArray(0, bytes);
	return staticBytes;
}

void ClassInfo::visit(::jdk::internal::reflect::ConstantPool* cp) {
	cp->putUTF8($cstr(this->name));

	if (superClass != nullptr) {
		cp->putUTF8($cstr(this->superClass));
	}

	if (interfaces != nullptr) {
		$var(String, interfacesStr, $str(interfaces));
		$var($StringArray, sa, interfacesStr->split(","));
		for (int32_t i = 0; i < sa->length; i++) {
			cp->putUTF8($fcast<String>(sa->get(i)));
		}
	}

	FieldInfo* field = fields;
	for (; field != nullptr && field->name != nullptr; field++) {
		field->visit(cp);
		$var($bytes, annotations, ClassInfo::getRawAnnotations(field->annotations, cp));
		$var($bytes, typeAnnotations, ClassInfo::getRawTypeAnnotations(field->typeAnnotations, cp));
		if (field->rawAnnotations == nullptr && annotations != nullptr) {
			field->rawAnnotations = cloneStaticBytes(annotations);
		}
		if (field->rawTypeAnnotations == nullptr && typeAnnotations != nullptr) {
			field->rawTypeAnnotations = cloneStaticBytes(typeAnnotations);
		}
	}

	MethodInfo* method = methods;
	for (; method != nullptr && method->descriptor != nullptr; method++) {
		method->visit(cp);
		$var($bytes, annotations, ClassInfo::getRawAnnotations(method->annotations, cp));
		$var($bytes, typeAnnotations, ClassInfo::getRawTypeAnnotations(method->typeAnnotations, cp));
		$var($StringArray, sa, Class::parseMethodDescriptor($$str(method->descriptor)));
		$var($bytes, parameterAnnotations, ClassInfo::getRawParamAnnotations(sa->length - 1, method->paramAnnotations, cp));
		$var($bytes, defaultValue, ClassInfo::getRawAttribute(method->defaultValue, cp));

		if (method->rawAnnotations == nullptr && annotations != nullptr) {
			method->rawAnnotations = cloneStaticBytes(annotations);
		}
		if (method->rawTypeAnnotations == nullptr && typeAnnotations != nullptr) {
			method->rawTypeAnnotations = cloneStaticBytes(typeAnnotations);
		}
		if (method->rawParameterAnnotations == nullptr && parameterAnnotations != nullptr) {
			method->rawParameterAnnotations = cloneStaticBytes(parameterAnnotations);
		}
		if (method->rawDefaultValue == nullptr && defaultValue != nullptr) {
			method->rawDefaultValue = cloneStaticBytes(defaultValue);
		}
	}

	if (enclosingMethod != nullptr) {
		enclosingMethod->visit(cp);
	}

	InnerClassInfo* innerClass = innerClasses;
	for (; innerClass != nullptr && innerClass->innerClass != nullptr; innerClass++) {
		innerClass->visit(cp);
	}

	CompoundAttribute* annotation = annotations;
	for (; annotation != nullptr && annotation->descriptor != nullptr; annotation++) {
		annotation->visit(cp);
	}
	$var($bytes, annotationsBytes, ClassInfo::getRawAnnotations(this->annotations, cp));
	if (this->rawAnnotations == nullptr && annotationsBytes != nullptr) {
		this->rawAnnotations = cloneStaticBytes(annotationsBytes);
	}

	TypeAnnotation* typeAnnotation = typeAnnotations;
	for (; typeAnnotation != nullptr && typeAnnotation->descriptor != nullptr; typeAnnotation++) {
		typeAnnotation->visit(cp);
	}
	$var($bytes, typeAnnotationsBytes, ClassInfo::getRawTypeAnnotations(this->typeAnnotations, cp));
	if (this->rawTypeAnnotations == nullptr && typeAnnotationsBytes != nullptr) {
		this->rawTypeAnnotations = cloneStaticBytes(typeAnnotationsBytes);
	}
}

$bytes* ClassInfo::getRawAnnotations(CompoundAttribute* annotations, ::jdk::internal::reflect::ConstantPool* constantPool) {
	if (annotations != nullptr) {
		$var(ByteArrayOutputStream, buffer, $new<ByteArrayOutputStream>());
		$var(DataOutputStream, os, $new<DataOutputStream>(buffer));

		CompoundAttribute* annotation = annotations;
		int32_t count = 0;
		for (; annotation != nullptr && !annotation->isEnd(); annotation++) {
			count++;
		}
		os->writeShort(count);
		annotation = annotations;
		for (; annotation != nullptr && !annotation->isEnd(); annotation++) {
			annotation->encode(os, constantPool);
		}
		return buffer->toByteArray();
	}
	return nullptr;
}

$bytes* ClassInfo::getRawTypeAnnotations(TypeAnnotation* typeAnnotations, ::jdk::internal::reflect::ConstantPool* constantPool) {
	if (typeAnnotations != nullptr) {
		$var(ByteArrayOutputStream, buffer, $new<ByteArrayOutputStream>());
		$var(DataOutputStream, os, $new<DataOutputStream>(buffer));

		TypeAnnotation* annotation = typeAnnotations;
		int32_t count = 0;
		for (; annotation != nullptr && !annotation->isEnd(); annotation++) {
			count++;
		}
		os->writeShort(count);
		annotation = typeAnnotations;
		for (; annotation != nullptr && !annotation->isEnd(); annotation++) {
			annotation->encode(os, constantPool);
		}
		return buffer->toByteArray();
	}
	return nullptr;
}

$bytes* ClassInfo::getRawAttribute(Attribute* attribute, ::jdk::internal::reflect::ConstantPool* constantPool) {
	if (attribute != nullptr) {
		$var(ByteArrayOutputStream, buffer, $new<ByteArrayOutputStream>());
		$var(DataOutputStream, os, $new<DataOutputStream>(buffer));
		attribute->encode(os, constantPool);
		return buffer->toByteArray();
	}
	return nullptr;
}

//int16_t getParamAnnotationsMaxIndex(ParameterAnnotation* annotations) {
//	int16_t maxIndex = -1;
//	ParameterAnnotation* annotation = annotations;
//	for (; annotation != nullptr && !annotation->isEnd(); annotation++) {
//		if (annotation->index > maxIndex) {
//			maxIndex = annotation->index;
//		}
//	}
//	return maxIndex;
//}

int16_t getParamAnnotationsCount(ParameterAnnotation* annotations, int16_t index) {
	int16_t count = 0;
	ParameterAnnotation* annotation = annotations;
	for (; annotation != nullptr && !annotation->isEnd(); annotation++) {
		if (annotation->index == index) {
			count++;
		}
	}
	return count;
}

$bytes* ClassInfo::getRawParamAnnotations(int32_t paramCount, ParameterAnnotation* annotations, ::jdk::internal::reflect::ConstantPool* constantPool) {
	if (annotations != nullptr) {
		$var(ByteArrayOutputStream, buffer, $new<ByteArrayOutputStream>());
		$var(DataOutputStream, os, $new<DataOutputStream>(buffer));
	//	int32_t paramCount = getParamAnnotationsMaxIndex(annotations) + 1;
		os->writeByte(paramCount);

		for (int16_t index = 0; index < paramCount; index++) {
			int16_t paramAnnotationsCount = getParamAnnotationsCount(annotations, index);
			os->writeShort(paramAnnotationsCount);
			if (paramAnnotationsCount > 0) {
				ParameterAnnotation* annotation = annotations;
				for (; annotation != nullptr && !annotation->isEnd(); annotation++) {
					if (annotation->index == index) {
						annotation->encode(os, constantPool);
					}
				}
			}
		}
		return buffer->toByteArray();
	}
	return nullptr;
}

	} // lang
} // java