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
			class Inflater;
		}
	}
}

/*
 * Signature: ()V
 */
JNIEXPORT void JNICALL _Java_java_util_zip_Inflater_initIDs
(/*JNIEnv *, jclass*/);

/*
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL _Java_java_util_zip_Inflater_init
(/*JNIEnv *, jclass,*/ jboolean);

/*
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL _Java_java_util_zip_Inflater_setDictionary
(/*JNIEnv *, jclass,*/ jlong, jbyteArray, jint, jint);

/*
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL _Java_java_util_zip_Inflater_setDictionaryBuffer
(/*JNIEnv *, jclass,*/ jlong, jlong, jint);

/*
 * Signature: (J[BII[BII)J
 */
JNIEXPORT jlong JNICALL _Java_java_util_zip_Inflater_inflateBytesBytes
(/*JNIEnv *,*/ ::java::util::zip::Inflater*, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Signature: (J[BIIJI)J
 */
JNIEXPORT jlong JNICALL _Java_java_util_zip_Inflater_inflateBytesBuffer
(/*JNIEnv *,*/ ::java::util::zip::Inflater*, jlong, jbyteArray, jint, jint, jlong, jint);

/*
 * Signature: (JJI[BII)J
 */
JNIEXPORT jlong JNICALL _Java_java_util_zip_Inflater_inflateBufferBytes
(/*JNIEnv *,*/ ::java::util::zip::Inflater*, jlong, jlong, jint, jbyteArray, jint, jint);

/*
 * Signature: (JJIJI)J
 */
JNIEXPORT jlong JNICALL _Java_java_util_zip_Inflater_inflateBufferBuffer
(/*JNIEnv *,*/ ::java::util::zip::Inflater*, jlong, jlong, jint, jlong, jint);

/*
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL _Java_java_util_zip_Inflater_getAdler
(/*JNIEnv *, jclass,*/ jlong);

/*
 * Signature: (J)V
 */
JNIEXPORT void JNICALL _Java_java_util_zip_Inflater_reset
(/*JNIEnv *, jclass,*/ jlong);

/*
 * Signature: (J)V
 */
JNIEXPORT void JNICALL _Java_java_util_zip_Inflater_end
(/*JNIEnv *, jclass,*/ jlong);