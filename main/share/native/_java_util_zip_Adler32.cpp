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

#include "jni_util.h"

#include <zlib/zlib.h>
#include <jcpp.h>

int32_t _Java_java_util_zip_Adler32_update(int32_t adler, int32_t b) {
	Bytef buf[1];
	buf[0] = (Bytef)b;
	return adler32(adler, buf, 1);
}

int32_t _Java_java_util_zip_Adler32_updateBytes(int32_t adler, $bytes* b, int32_t off, int32_t len) {
	Bytef* buf = (Bytef*)b->begin();
	if (buf) {
		adler = adler32(adler, buf + off, len);
	}
	return adler;
}

int32_t _Java_java_util_zip_Adler32_updateByteBuffer(int32_t adler, int64_t address, int32_t off, int32_t len) {
	Bytef* buf = (Bytef*)jlong_to_ptr(address);
	if (buf) {
		adler = adler32(adler, buf + off, len);
	}
	return adler;
}