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
			class MethodHandle;
		}
	}
}

/*
 * Class:	 java_lang_invoke_MethodHandle
 * Method:	invokeExact
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_MethodHandle_invokeExact(/* JNIEnv *, */::java::lang::invoke::MethodHandle*, jobjectArray);

/*
 * Class:	 java_lang_invoke_MethodHandle
 * Method:	invoke
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_MethodHandle_invoke(/* JNIEnv *, */::java::lang::invoke::MethodHandle*, jobjectArray);

/*
 * Class:	 java_lang_invoke_MethodHandle
 * Method:	invokeBasic
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_MethodHandle_invokeBasic(/* JNIEnv *, */::java::lang::invoke::MethodHandle*, jobjectArray);

/*
 * Class:	 java_lang_invoke_MethodHandle
 * Method:	linkToVirtual
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_MethodHandle_linkToVirtual(/* JNIEnv *, jclass,*/ jobjectArray);

/*
 * Class:	 java_lang_invoke_MethodHandle
 * Method:	linkToStatic
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_MethodHandle_linkToStatic(/* JNIEnv *, jclass,*/ jobjectArray);

/*
 * Class:	 java_lang_invoke_MethodHandle
 * Method:	linkToSpecial
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_MethodHandle_linkToSpecial(/* JNIEnv *, jclass,*/ jobjectArray);

/*
 * Class:	 java_lang_invoke_MethodHandle
 * Method:	linkToInterface
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_MethodHandle_linkToInterface(/* JNIEnv *, jclass,*/ jobjectArray);

/*
 * Class:	 java_lang_invoke_MethodHandle
 * Method:	linkToNative
 * Signature: ([Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_MethodHandle_linkToNative(/* JNIEnv *, jclass,*/ jobjectArray);