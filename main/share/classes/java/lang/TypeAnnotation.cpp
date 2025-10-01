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

#include <java/lang/TypeAnnotation.h>

#include <java/lang/String.h>
#include <java/lang/Integer.h>
#include <java/io/DataOutputStream.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <sun/reflect/annotation/TypeAnnotationParser.h>
#include <java/lang/Util.h>

#include <jcpp.h>

using ::java::io::DataOutputStream;
using ::sun::reflect::annotation::TypeAnnotationParser;

namespace java {
	namespace lang {

TypeAnnotation::TypeAnnotation(const char* descriptor, NamedAttribute* attributes, const char* position)
	: CompoundAttribute(descriptor, attributes) {
	this->position = position;
}

int32_t getPosValue(String* posStr, const char* key) {
	$var(String, keyStr, $str(key));
	int32_t index = posStr->indexOf(keyStr);
	if (index == -1) {
		// TODO
	}
	index += keyStr->length();
	index = posStr->indexOf("=", index);
	if (index == -1) {
		// TODO
	}
	index++;
	int32_t endIndex = posStr->indexOf($cstr(","), index);
	$var(String, valueStr, nullptr);
	if (endIndex == -1) {
		$assign(valueStr, posStr->substring(index));
	} else {
		$assign(valueStr, posStr->substring(index, endIndex));
	}
	$assign(valueStr, valueStr->trim());
	return Integer::parseInt(valueStr);
}

int32_t getlvarOffsetCount(String* posStr) {
	int32_t count = 0;
	$var(String, startPc, $cstr("start_pc"));
	int32_t index = posStr->indexOf(startPc);
	while (index >= 0) {
		count++;
		index = posStr->indexOf(startPc, index + startPc->length());
	}
	return count;
}

void outputlvarOffset(String* posValues, ::java::io::DataOutputStream* os) {
	int32_t lvarOffsetCount = getlvarOffsetCount(posValues);
	os->writeShort(lvarOffsetCount);
	$var(String, startPc, $cstr("start_pc"));

	int32_t index = posValues->indexOf(startPc);
	if (index == -1) {
		// TODO
	}
	$var(String, posValue, posValues->substring(index));
	for (int32_t i = 0; i < lvarOffsetCount; i++) {
		int32_t startPcValue = getPosValue(posValue, "start_pc");
		int32_t lengthValue = getPosValue(posValue, "length");
		int32_t indexValue = getPosValue(posValue, "index");
		os->writeShort(startPcValue);
		os->writeShort(lengthValue);
		os->writeShort(indexValue);
		index = posValues->indexOf(startPc, index + startPc->length());
		$assign(posValue, posValues->substring(index));
	}
}

void outputLocation(String* posValues, ::java::io::DataOutputStream* os) {
	$var(String, locationStr, $cstr("location"));
	int32_t index = posValues != nullptr ? posValues->indexOf(locationStr) : -1;
	if (index >= 0) {
		index = posValues->indexOf($cstr("("), index + locationStr->length());
		if (index == -1) {
			// TODO
			// throw
		}
		index++;
		int32_t endIndex = posValues->lastIndexOf($cstr(")"));
		if (endIndex == -1) {
			// TODO
			// throw
		}
		$var(String, locationValue, posValues->substring(index, endIndex));
		$var($StringArray, sa, locationValue->split(","));
		os->writeByte(sa->length);
		for (int32_t i = 0; i < sa->length; i++) {
			$var(String, typePathEntry, sa->get(i));
			if (typePathEntry->equals("ARRAY")) {
				os->writeByte(0);
				os->writeByte(0);
			} else if (typePathEntry->equals("INNER_TYPE")) {
				os->writeByte(1);
				os->writeByte(0);
			} else if (typePathEntry->equals("WILDCARD")) {
				os->writeByte(2);
				os->writeByte(0);
			} else { // TYPE_ARGUMENT
				os->writeByte(3);
				$var(String, argStr, Util::subStr(typePathEntry, $cstr("("), $cstr(")")));
				int32_t arg = Integer::parseInt(argStr);
				os->writeByte(arg);
			}
		//	int32_t v = Integer::parseInt($fcast<String>(sa->get(i)));
		//	os->writeByte(v);
		}
	} else {
		os->writeByte(0);
	}
}

void TypeAnnotation::encode(::java::io::DataOutputStream* os, ::jdk::internal::reflect::ConstantPool* cp) {
//	os->writeByte(positionTargetType);
	$var(String, posStr, $str(position));
	int32_t index = posStr->indexOf(",");
	$var(String, posType, nullptr);
	$var(String, posValues, nullptr);
	if (index == -1) {
		$assign(posType, posStr);
	} else {
		$assign(posType, posStr->substring(0, index));
		$assign(posValues, posStr->substring(index + 1));
	}
	$assign(posType, posType->trim());
	if (posType->equalsIgnoreCase("INSTANCEOF")) {
		os->writeByte(TypeAnnotationParser::INSTANCEOF);
		os->writeShort(getPosValue(posValues, "offset"));
	} else if (posType->equalsIgnoreCase("NEW")) {
		os->writeByte(TypeAnnotationParser::NEW);
		os->writeShort(getPosValue(posValues, "offset"));
	} else if (posType->equalsIgnoreCase("CONSTRUCTOR_REFERENCE")) {
		os->writeByte(TypeAnnotationParser::CONSTRUCTOR_REFERENCE);
		os->writeShort(getPosValue(posValues, "offset"));
	} else if (posType->equalsIgnoreCase("METHOD_REFERENCE")) {
		os->writeByte(TypeAnnotationParser::METHOD_REFERENCE);
		os->writeShort(getPosValue(posValues, "offset"));
	} else if (posType->equalsIgnoreCase("LOCAL_VARIABLE")) {
		os->writeByte(TypeAnnotationParser::LOCAL_VARIABLE);
		outputlvarOffset(posValues, os);
	} else if (posType->equalsIgnoreCase("RESOURCE_VARIABLE")) {
		os->writeByte(TypeAnnotationParser::RESOURCE_VARIABLE);
		outputlvarOffset(posValues, os);
	} else if (posType->equalsIgnoreCase("EXCEPTION_PARAMETER")) {
		os->writeByte(TypeAnnotationParser::EXCEPTION_PARAMETER);
		os->writeShort(getPosValue(posValues, "exception_index"));
	} else if (posType->equalsIgnoreCase("METHOD_RECEIVER")) {
		os->writeByte(TypeAnnotationParser::METHOD_RECEIVER);
	} else if (posType->equalsIgnoreCase("CLASS_TYPE_PARAMETER")) {
		os->writeByte(TypeAnnotationParser::CLASS_TYPE_PARAMETER);
		os->writeByte(getPosValue(posValues, "param_index"));
	} else if (posType->equalsIgnoreCase("METHOD_TYPE_PARAMETER")) {
		os->writeByte(TypeAnnotationParser::METHOD_TYPE_PARAMETER);
		os->writeByte(getPosValue(posValues, "param_index"));
	} else if (posType->equalsIgnoreCase("CLASS_TYPE_PARAMETER_BOUND")) {
		os->writeByte(TypeAnnotationParser::CLASS_TYPE_PARAMETER_BOUND);
		os->writeByte(getPosValue(posValues, "param_index"));
		os->writeByte(getPosValue(posValues, "bound_index"));
	} else if (posType->equalsIgnoreCase("METHOD_TYPE_PARAMETER_BOUND")) {
		os->writeByte(TypeAnnotationParser::METHOD_TYPE_PARAMETER_BOUND);
		os->writeByte(getPosValue(posValues, "param_index"));
		os->writeByte(getPosValue(posValues, "bound_index"));
	} else if (posType->equalsIgnoreCase("CLASS_EXTENDS")) {
		os->writeByte(TypeAnnotationParser::CLASS_EXTENDS);
		os->writeShort(getPosValue(posValues, "type_index"));
	} else if (posType->equalsIgnoreCase("THROWS")) {
		os->writeByte(TypeAnnotationParser::THROWS);
		os->writeShort(getPosValue(posValues, "type_index"));
	} else if (posType->equalsIgnoreCase("METHOD_FORMAL_PARAMETER")) {
		os->writeByte(TypeAnnotationParser::METHOD_FORMAL_PARAMETER);
		os->writeByte(getPosValue(posValues, "param_index"));
	} else if (posType->equalsIgnoreCase("CAST")) {
		os->writeByte(TypeAnnotationParser::CAST);
		os->writeShort(getPosValue(posValues, "offset"));
		os->writeByte(getPosValue(posValues, "type_index"));
	} else if (posType->equalsIgnoreCase("CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT")) {
		os->writeByte(TypeAnnotationParser::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT);
		os->writeShort(getPosValue(posValues, "offset"));
		os->writeByte(getPosValue(posValues, "type_index"));
	} else if (posType->equalsIgnoreCase("METHOD_INVOCATION_TYPE_ARGUMENT")) {
		os->writeByte(TypeAnnotationParser::METHOD_INVOCATION_TYPE_ARGUMENT);
		os->writeShort(getPosValue(posValues, "offset"));
		os->writeByte(getPosValue(posValues, "type_index"));
	} else if (posType->equalsIgnoreCase("CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT")) {
		os->writeByte(TypeAnnotationParser::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT);
		os->writeShort(getPosValue(posValues, "offset"));
		os->writeByte(getPosValue(posValues, "type_index"));
	} else if (posType->equalsIgnoreCase("METHOD_REFERENCE_TYPE_ARGUMENT")) {
		os->writeByte(TypeAnnotationParser::METHOD_REFERENCE_TYPE_ARGUMENT);
		os->writeShort(getPosValue(posValues, "offset"));
		os->writeByte(getPosValue(posValues, "type_index"));
	} else if (posType->equalsIgnoreCase("METHOD_RETURN")) {
		os->writeByte(TypeAnnotationParser::METHOD_RETURN);
	} else if (posType->equalsIgnoreCase("FIELD")) {
		os->writeByte(TypeAnnotationParser::FIELD);
	} else {
		// TODO
	}
	outputLocation(posValues, os);
	CompoundAttribute::encode(os, cp);
}

void TypeAnnotation::visit(::jdk::internal::reflect::ConstantPool* cp) {
	CompoundAttribute::visit(cp);
}

	} // lang
} // java