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

#ifndef _JNI_UTIL_H
#define _JNI_UTIL_H

#include <java/lang/Object.h>
#include <java/lang/Array.h>
#include "jni.h"
#include "jlong.h"

namespace java {
	namespace lang {
		class String;
		class Throwable;
	}
}

JNIEXPORT void JNICALL _JNU_ThrowSyncFailedException(const char *message);

JNIEXPORT void JNICALL _JNU_ThrowNullPointerException(const char *msg);

JNIEXPORT void JNICALL _JNU_ThrowIndexOutOfBoundsException(const char *msg);

JNIEXPORT void JNICALL _JNU_ThrowOutOfMemoryError(const char *msg);

JNIEXPORT void JNICALL _JNU_ThrowIllegalArgumentException(const char *msg);

JNIEXPORT void JNICALL _JNU_ThrowInternalError(const char *msg);

JNIEXPORT void JNICALL _JNU_ThrowIOException(const char *msg);

JNIEXPORT void JNICALL _JNU_SetThrowableWithLastError(::java::lang::Throwable* ex, const char* defaultDetail);

JNIEXPORT void JNICALL _JNU_ThrowByThrowableWithLastError(::java::lang::Throwable* ex, const char *defaultDetail);

JNIEXPORT void JNICALL _JNU_SetThrowableWithMessageAndLastError(::java::lang::Throwable* ex, const char* message);

JNIEXPORT void JNICALL _JNU_ThrowByThrowableWithMessageAndLastError(::java::lang::Throwable* ex, const char *message);

JNIEXPORT void JNICALL _JNU_ThrowIOExceptionWithLastError(const char *defaultDetail);

JNIEXPORT $bytes* JNICALL _GetStringPlatformChars(::java::lang::String* str);

JNIEXPORT int32_t JNICALL _JNU_CopyObjectArray(::java::lang::ObjectArray* dst, ::java::lang::ObjectArray* src,
					int32_t count);

#endif /* _JNI_UTIL_H */