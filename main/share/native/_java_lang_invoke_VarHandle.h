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
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_get
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_VarHandle_set
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getVolatile
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_VarHandle_setVolatile
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getOpaque
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_VarHandle_setOpaque
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAcquire
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_VarHandle_setRelease
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL _Java_java_lang_invoke_VarHandle_compareAndSet
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_compareAndExchange
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_compareAndExchangeAcquire
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_compareAndExchangeRelease
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL _Java_java_lang_invoke_VarHandle_weakCompareAndSetPlain
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL _Java_java_lang_invoke_VarHandle_weakCompareAndSet
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL _Java_java_lang_invoke_VarHandle_weakCompareAndSetAcquire
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL _Java_java_lang_invoke_VarHandle_weakCompareAndSetRelease
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndSet
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndSetAcquire
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndSetRelease
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndAdd
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndAddAcquire
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndAddRelease
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndBitwiseOr
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndBitwiseOrAcquire
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndBitwiseOrRelease
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndBitwiseAnd
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndBitwiseAndAcquire
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndBitwiseAndRelease
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndBitwiseXor
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndBitwiseXorAcquire
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);

/*
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_VarHandle_getAndBitwiseXorRelease
(/*JNIEnv *, */::java::lang::invoke::VarHandle*, jobjectArray);