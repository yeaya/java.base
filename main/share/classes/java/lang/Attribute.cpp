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

#include <java/lang/Attribute.h>

#include <java/io/DataOutputStream.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <jcpp.h>

using namespace ::java::lang;
using namespace ::java::io;

namespace java {
	namespace lang {

Attribute::Attribute(char typeTag, const void* value) {
	this->typeTag = typeTag;
	this->value = value;
}

bool Attribute::isEnd() {
	return typeTag == '-' || value == nullptr;
}

void Attribute::encode(::java::io::DataOutputStream* os, ::jdk::internal::reflect::ConstantPool* cp) {
	os->writeByte(typeTag);
	switch (typeTag) {
	case u'e':
	{
		const char* value = (const char*)this->value;
		$var(String, s, $str(value));
		int32_t index = s->indexOf(u' ');
		$var(String, descriptor, s->substring(0, index));
		$var(String, name, s->substring(index + 1));
		index = cp->putUTF8(descriptor);
		os->writeShort(index);
		index = cp->putUTF8(name);
		os->writeShort(index);
		break;
	}
	case u'c':
	{
		const char* value = (const char*)this->value;
		int32_t index = cp->putUTF8($$str(value));
		os->writeShort(index);
		break;
	}
	case u'@':
	{
		CompoundAttribute* compoundAttribute = (CompoundAttribute*)this->value;
		compoundAttribute->encode(os, cp);
		break;
	}
	case u'[':
	{
		Attribute* values = (Attribute*)this->value;
		Attribute* value = values;
		int32_t count = 0;
		for (; value != nullptr && !value->isEnd(); value++) {
			count++;
		}
		os->writeShort(count);
		value = values;
		for (; value != nullptr && !value->isEnd(); value++) {
			value->encode(os, cp);
		}
		break;
	}
	case u'B':
	{
		const char* value = (const char*)this->value;
		int32_t index = cp->putInt(Byte::parseByte($$str(value)));
		os->writeShort(index);
		break;
	}
	case u'C':
	{
		const char* value = (const char*)this->value;
		int32_t index = cp->putInt((char16_t)value[0]);
		os->writeShort(index);
		break;
	}
	case u'D':
	{
		const char* value = (const char*)this->value;
		int32_t index = cp->putDouble(Double::parseDouble($$str(value)));
		os->writeShort(index);
		break;
	}
	case u'F':
	{
		const char* value = (const char*)this->value;
		int32_t index = cp->putFloat(Float::parseFloat($$str(value)));
		os->writeShort(index);
		break;
	}
	case u'I':
	{
		const char* value = (const char*)this->value;
		int32_t index = cp->putInt(Integer::parseInt($$str(value)));
		os->writeShort(index);
		break;
	}
	case u'J':
	{
		const char* value = (const char*)this->value;
		int32_t index = cp->putLong(Long::parseLong($$str(value)));
		os->writeShort(index);
		break;
	}
	case u'S':
	{
		const char* value = (const char*)this->value;
		int32_t index = cp->putInt(Short::parseShort($$str(value)));
		os->writeShort(index);
		break;
	}
	case u'Z':
	{
		const char* value = (const char*)this->value;
		int32_t index = cp->putInt(Boolean::parseBoolean($$str(value)) ? 1 : 0);
		os->writeShort(index);
		break;
	}
	case u's':
	{
		const char* value = (const char*)this->value;
		int32_t index = cp->putUTF8($$str(value));
		os->writeShort(index);
		break;
	}
	//default:
	//{
	//}
	}
}

void Attribute::visit(::jdk::internal::reflect::ConstantPool* cp) {

}

	} // lang
} // java