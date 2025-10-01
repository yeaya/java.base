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

#include "parser.h"

#include <java/lang/IllegalArgumentException.h>
#include <jcpp.h>

using ::java::lang::IllegalArgumentException;

MethodDescriptorParts::MethodDescriptorParts(::java::lang::String* ptr) : offset(0), descriptorPart() {
	this->ptr = ptr;
	if (charAt(0) != '(') {
//		throw ParseError("Descriptor must start with '('");
	}
	readedSize++;
	token();
}

MethodDescriptorParts& MethodDescriptorParts::operator++() {
	readedSize += offset;
	offset = 0;
	descriptorPart = {};
	token();
	return *this;
}

void MethodDescriptorParts::token() {
	char16_t c = charAt(offset);
	switch (c) {
		case '[': {
			++offset; // skip '['
			token();
			descriptorPart.category = 1;
			++descriptorPart.array_dimensions;
			return;
		}
		case 'L': {
			++offset; // skip 'L'
			while (!end() && charAt(offset) != ';') {
				++offset;
			}
			++offset; // skip ';'
			descriptorPart.category = 1;
			return;
		}
		case 'D':
		case 'J': {
			++offset;
			descriptorPart.category = 2;
			return;
		}
		case 'B':
		case 'C':
		case 'F':
		case 'I':
		case 'S':
		case 'Z': {
			++offset;
			descriptorPart.category = 1;
			return;
		}
		case ')': {
			if (offset != 0) {
				$throwNew(IllegalArgumentException, "Unexpected ')'"_s);
			}
			readedSize++;

			if (descriptorPart.is_return) {
				$throwNew(IllegalArgumentException, "Found more than one ')'"_s);
			}
			descriptorPart.is_return = true;

			if (charAt(offset) == 'V') {
				++offset;
				descriptorPart.category = 0;
			} else {
				token();
			}
			return;
		}
		default: {
			$throwNew(IllegalArgumentException, "Unexpected character"_s);
		}
	}
}