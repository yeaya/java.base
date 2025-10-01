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

#ifndef _java_def_h_
#define _java_def_h_

// this file is for _##native header file easy use
#include <java/lang/Array.h>

#ifdef JNIEXPORT
#undef JNIEXPORT
#endif
#define JNIEXPORT

#ifdef JNICALL
#undef JNICALL
#endif
#define JNICALL

#ifdef jbyteArray
#undef jbyteArray
#endif
#define jbyteArray $bytes*

#ifdef jintArray
#undef jintArray
#endif
#define jintArray $ints*

#ifdef jlongArray
#undef jlongArray
#endif
#define jlongArray $longs*

#ifdef jobjectArray
#undef jobjectArray
#endif
#define jobjectArray $ObjectArray*

#ifdef jstring
#undef jstring
#endif
#define jstring ::java::lang::String*

#ifdef jclass
#undef jclass
#endif
#define jclass ::java::lang::Class*

#ifdef jobject
#undef jobject
#endif
#define jobject ::java::lang::Object*


#ifdef jboolean
#undef jboolean
#endif
#define jboolean bool

#ifdef jbyte
#undef jbyte
#endif
#define jbyte int8_t

#ifdef jshort
#undef jshort
#endif
#define jshort int16_t

#ifdef jint
#undef jint
#endif
#define jint int32_t

#ifndef jlong
#define jlong int64_t
#endif

#ifdef jchar
#undef jchar
#endif
#define jchar char16_t

#endif