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

#include "_def.h"

namespace java {
	namespace util {
		namespace zip {
			class Deflater;
		}
	}
}

/*
 * Signature: (IIZ)J
 */
JNIEXPORT jlong JNICALL _Java_java_util_zip_Deflater_init
(/*JNIEnv *, jclass,*/ jint, jint, jboolean);

/*
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL _Java_java_util_zip_Deflater_setDictionary
(/*JNIEnv *, jclass,*/ jlong, jbyteArray, jint, jint);

/*
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL _Java_java_util_zip_Deflater_setDictionaryBuffer
(/*JNIEnv *, jclass,*/ jlong, jlong, jint);

/*
 * Signature: (J[BII[BIIII)J
 */
JNIEXPORT jlong JNICALL _Java_java_util_zip_Deflater_deflateBytesBytes
(/*JNIEnv *,*/ ::java::util::zip::Deflater*, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint, jint, jint);

/*
 * Signature: (J[BIIJIII)J
 */
JNIEXPORT jlong JNICALL _Java_java_util_zip_Deflater_deflateBytesBuffer
(/*JNIEnv *,*/ ::java::util::zip::Deflater*, jlong, jbyteArray, jint, jint, jlong, jint, jint, jint);

/*
 * Signature: (JJI[BIIII)J
 */
JNIEXPORT jlong JNICALL _Java_java_util_zip_Deflater_deflateBufferBytes
(/*JNIEnv *,*/ ::java::util::zip::Deflater*, jlong, jlong, jint, jbyteArray, jint, jint, jint, jint);

/*
 * Signature: (JJIJIII)J
 */
JNIEXPORT jlong JNICALL _Java_java_util_zip_Deflater_deflateBufferBuffer
(/*JNIEnv *,*/ ::java::util::zip::Deflater*, jlong, jlong, jint, jlong, jint, jint, jint);

/*
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL _Java_java_util_zip_Deflater_getAdler
(/*JNIEnv *, jclass,*/ jlong);

/*
 * Signature: (J)V
 */
JNIEXPORT void JNICALL _Java_java_util_zip_Deflater_reset
(/*JNIEnv *, jclass,*/ jlong);

/*
 * Signature: (J)V
 */
JNIEXPORT void JNICALL _Java_java_util_zip_Deflater_end
(/*JNIEnv *, jclass,*/ jlong);