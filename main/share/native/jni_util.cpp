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

#include <stdlib.h>
#include <string.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Class.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/InternalError.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/io/IOException.h>
#include <java/io/SyncFailedException.h>
#include <java/lang/Machine.h>
#include <jcpp.h>

using namespace ::java::lang;

using ::java::io::IOException;
using ::java::io::SyncFailedException;

#include "jni_util.h"
#include "_jni_util.h"

JNIEXPORT void JNICALL _JNU_ThrowSyncFailedException(const char* message) {
    $throwNew(::java::io::SyncFailedException, $$str(message));
}

JNIEXPORT void JNICALL _JNU_ThrowByThrowable(::java::lang::Throwable* ex, const char* msg) {
    $set(ex, detailMessage, String::valueOf(msg));
    $throw(ex);
}

JNIEXPORT void JNICALL _JNU_ThrowNullPointerException(const char* msg) {
    $throwNew(NullPointerException, $$str(msg));
}

JNIEXPORT void JNICALL _JNU_ThrowIndexOutOfBoundsException(const char* msg) {
    $throwNew(IndexOutOfBoundsException, $$str(msg));
}

JNIEXPORT void JNICALL _JNU_ThrowOutOfMemoryError(const char* msg) {
    $throwNew(OutOfMemoryError, $$str(msg));
}

JNIEXPORT void JNICALL _JNU_ThrowIllegalArgumentException(const char* msg) {
    $throwNew(IllegalArgumentException, $$str(msg));
}

JNIEXPORT void JNICALL _JNU_ThrowInternalError(const char* msg) {
    $throwNew(InternalError, $$str(msg));
}

JNIEXPORT void JNICALL _JNU_ThrowClassNotFoundException(const char* msg) {
    $throwNew(ClassNotFoundException, $$str(msg));
}

JNIEXPORT void JNICALL _JNU_ThrowIOException(const char* msg) {
    $throwNew(::java::io::IOException, $$str(msg));
}

JNIEXPORT void JNICALL _JNU_ThrowByNameWithMessageAndLastError(const char* name, const char* message) {
    $var(String, className, $str(name));
    $assign(className, className->replace('/', '.'));
    Class* clazz = Class::forName(className);//Machine::FindClass(name);
    $var(Throwable, ex, (Throwable*)(clazz->newInstance()));
    _JNU_ThrowByThrowableWithLastError(ex, message);
}

JNIEXPORT void JNICALL _JNU_SetThrowableWithLastError(::java::lang::Throwable* ex, const char* defaultDetail) {
    char buf[256];
    size_t n = getLastErrorString(buf, sizeof(buf));
    if (n > 0) {
        $set(ex, detailMessage, String::valueOf(buf));
    } else {
        $set(ex, detailMessage, String::valueOf(defaultDetail));
    }
}

JNIEXPORT void JNICALL _JNU_ThrowByThrowableWithLastError(::java::lang::Throwable* ex, const char* defaultDetail) {
    _JNU_SetThrowableWithLastError(ex, defaultDetail);
    $throw(ex);
}

JNIEXPORT void JNICALL _JNU_SetThrowableWithMessageAndLastError(::java::lang::Throwable* ex, const char* message) {
    char buf[256];
    size_t n = getLastErrorString(buf, sizeof(buf));
    size_t messagelen = message == NULL ? 0 : strlen(message);
    if (n > 0) {
        $var(String, s, String::valueOf(buf));
        if (messagelen) {
            $assign(s, s->concat($$str(" (")));
            $assign(s, s->concat($$str(message)));
            $assign(s, s->concat($$str(")")));
        }
        $set(ex, detailMessage, s);
    } else {
        if (messagelen > 0) {
            $set(ex, detailMessage, String::valueOf(message));
        } else {
            $set(ex, detailMessage, String::valueOf("no further information"));
        }
    }
}

JNIEXPORT void JNICALL _JNU_ThrowByThrowableWithMessageAndLastError(::java::lang::Throwable* ex, const char* message) {
    _JNU_SetThrowableWithMessageAndLastError(ex, message);
    $throw(ex);
}

JNIEXPORT void JNICALL _JNU_ThrowByName(const char* name, const char* message) {
    $var(String, className, $str(name));
    $assign(className, className->replace('/', '.'));
    Class* clazz = Class::forName(className);//Machine::FindClass(name);
    $var(Throwable, ex, (Throwable*)clazz->newInstance());
    $var(String, msg, nullptr);

    $assign(msg, String::valueOf(message));
    $set(ex, detailMessage, msg);
    $throw(ex);
}

JNIEXPORT void JNICALL _JNU_ThrowByNameWithLastError(const char* name, const char* defaultDetail) {
    char buf[256];
    size_t n = getLastErrorString(buf, sizeof(buf));
    if (n > 0) {
        _JNU_ThrowByName(name, buf);
    } else {
        _JNU_ThrowByName(name, defaultDetail);
    }
}

JNIEXPORT void JNICALL _JNU_ThrowIOExceptionWithLastError(const char* defaultDetail) {
    char buf[256];
    size_t n = getLastErrorString(buf, sizeof(buf));
    if (n > 0) {
        $throwNew(::java::io::IOException, $$str(buf));
    }
    $throwNew(::java::io::IOException, $$str(defaultDetail));
}

JNIEXPORT $bytes* JNICALL _GetStringPlatformChars(::java::lang::String* str) {
    return str->utf8Bytes();
}

//JNIEXPORT void JNICALL _JNU_ReleaseStringPlatformChars(const char* str) {
//    free((void*)str);
//}

JNIEXPORT int32_t JNICALL _JNU_CopyObjectArray(::java::lang::ObjectArray* dst, ::java::lang::ObjectArray* src, int32_t count) {
    for (int32_t i = 0; i < count; i++) {
        dst->set(i, src->get(i));
    }
    return 0;
}