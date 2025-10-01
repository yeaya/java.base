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

#include <java/lang/Object.h>

#include "jni.h"
#include "_jni_util.h"

#ifdef _ALLBSD_SOURCE
#include <fcntl.h>
#ifndef O_SYNC
#define O_SYNC  O_FSYNC
#endif
#ifndef O_DSYNC
#define O_DSYNC O_FSYNC
#endif
#elif !defined(O_DSYNC) || !defined(O_SYNC)
#define O_SYNC  (0x0800)
#define O_DSYNC (0x2000)
#endif

 /*
  * IO helper functions
  */
namespace java {
	namespace io {
		class FileDescriptor;
	}
}

int32_t _readSingle(::java::io::FileDescriptor* fd);
int32_t _readBytes($bytes* bytes, int32_t off,
	int32_t len, ::java::io::FileDescriptor* fd);
void _writeSingle(int32_t byte, bool append, ::java::io::FileDescriptor* fd);
void _writeBytes($bytes* bytes, int32_t off,
	int32_t len, bool append, ::java::io::FileDescriptor* fd);
void _fileOpen(::java::lang::String* path, ::java::io::FileDescriptor* fd, int32_t flags);
void _throwFileNotFoundException(::java::lang::String* path);

#define _WITH_PLATFORM_STRING(strexp, var) \
	if (1) { \
		$var($bytes, _##var##bytes, (strexp)->utf8Bytes()); \
		const char* var = (const char*)_##var##bytes->begin();

#define _END_PLATFORM_STRING(var) \
	} else ((void)NULL)

#define _WITH_UNICODE_STRING(strexp, charTye, var) \
	if (1) { \
		charTye *var; \
		$var(::java::lang::CharArray, _##var##ca, strexp->toCharArray()); \
		if (_##var##ca == NULL) { \
			_JNU_ThrowNullPointerException(NULL); \
			goto _##var##end; \
		} \
		var = (charTye*)malloc((_##var##ca->length + 1) * sizeof(charTye)); \
		if (var == NULL) goto _##var##end; \
		for (int32_t i = 0; i < _##var##ca->length; i++) { \
			var[i] = _##var##ca->get(i); \
		} \
		var[_##var##ca->length] = 0;

#define _END_UNICODE_STRING(var) \
		if (var != nullptr) { \
			free(var); \
			var = nullptr; \
		} \
	_##var##end: ; \
	} else ((void)NULL)
