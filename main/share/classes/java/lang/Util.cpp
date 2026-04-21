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

#include <java/lang/Util.h>
#include <jcpp.h>

namespace java {
	namespace lang {

$StringArray* Util::split(const char* s, char separatorChar) {
	int32_t count = 1;
	for (int32_t i = 0; s[i] != '\0'; i++) {
		if (s[i] == separatorChar) {
			count++;
		}
	}
	$var($StringArray, sa, $new($StringArray, count));
	int32_t offset = 0;
	for (int32_t i = 0; i < sa->length; i++) {
		char buffer[512] = {};
		int32_t bufferIndex = 0;
		for (; s[offset] != '\0' && bufferIndex < sizeof(buffer);) {
			char c = s[offset];
			offset++;
			if (c == ' ') {
				continue;
			}
			if (c == separatorChar) {
				break;
			}
			buffer[bufferIndex] = c;
			bufferIndex++;
		}
		buffer[bufferIndex] = 0;
		$var(String, s, $str(buffer));
		sa->set(i, s);
	}
	return sa;
}

String* Util::subStr(String* origin, String* start, String* end) {
	int32_t index = $nullcheck(origin)->indexOf(start);
	if (index == -1) {
		return nullptr;
	}
	index += start->length();
	int32_t endIndex = origin->indexOf(end, index);
	if (endIndex == -1) {
		return nullptr;
	}
	return origin->substring(index, endIndex);
}

	}
}