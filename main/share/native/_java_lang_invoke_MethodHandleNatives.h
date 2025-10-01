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
			class CallSite;
			class MemberName;
			class MethodHandle;
			class MethodHandleNatives$CallSiteContext;
		}
	}
}

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	init
 * Signature: (Ljava/lang/invoke/MemberName;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_MethodHandleNatives_init(/*JNIEnv *, jclass,*/ ::java::lang::invoke::MemberName*, jobject);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	expand
 * Signature: (Ljava/lang/invoke/MemberName;)V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_MethodHandleNatives_expand(/*JNIEnv *, jclass,*/ ::java::lang::invoke::MemberName*);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	resolve
 * Signature: (Ljava/lang/invoke/MemberName;Ljava/lang/Class;IZ)Ljava/lang/invoke/MemberName;
 */
JNIEXPORT ::java::lang::invoke::MemberName* JNICALL _Java_java_lang_invoke_MethodHandleNatives_resolve(/*JNIEnv *, jclass,*/ ::java::lang::invoke::MemberName*, jclass, jint, jboolean);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	getMembers
 * Signature: (Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;ILjava/lang/Class;I[Ljava/lang/invoke/MemberName;)I
 */
JNIEXPORT jint JNICALL _Java_java_lang_invoke_MethodHandleNatives_getMembers(/*JNIEnv *, jclass,*/ jclass, jstring, jstring, jint, jclass, jint, $Array<::java::lang::invoke::MemberName>*);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	objectFieldOffset
 * Signature: (Ljava/lang/invoke/MemberName;)J
 */
JNIEXPORT jlong JNICALL _Java_java_lang_invoke_MethodHandleNatives_objectFieldOffset(/*JNIEnv *, jclass,*/ ::java::lang::invoke::MemberName*);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	staticFieldOffset
 * Signature: (Ljava/lang/invoke/MemberName;)J
 */
JNIEXPORT jlong JNICALL _Java_java_lang_invoke_MethodHandleNatives_staticFieldOffset(/*JNIEnv *, jclass,*/ ::java::lang::invoke::MemberName*);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	staticFieldBase
 * Signature: (Ljava/lang/invoke/MemberName;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_MethodHandleNatives_staticFieldBase(/*JNIEnv *, jclass,*/ ::java::lang::invoke::MemberName*);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	getMemberVMInfo
 * Signature: (Ljava/lang/invoke/MemberName;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL _Java_java_lang_invoke_MethodHandleNatives_getMemberVMInfo(/*JNIEnv *, jclass,*/ ::java::lang::invoke::MemberName*);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	setCallSiteTargetNormal
 * Signature: (Ljava/lang/invoke/CallSite;Ljava/lang/invoke/MethodHandle;)V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_MethodHandleNatives_setCallSiteTargetNormal(/*JNIEnv *, jclass,*/ ::java::lang::invoke::CallSite*, ::java::lang::invoke::MethodHandle*);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	setCallSiteTargetVolatile
 * Signature: (Ljava/lang/invoke/CallSite;Ljava/lang/invoke/MethodHandle;)V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_MethodHandleNatives_setCallSiteTargetVolatile(/*JNIEnv *, jclass,*/ ::java::lang::invoke::CallSite*, ::java::lang::invoke::MethodHandle*);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	copyOutBootstrapArguments
 * Signature: (Ljava/lang/Class;[III[Ljava/lang/Object;IZLjava/lang/Object;)V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_MethodHandleNatives_copyOutBootstrapArguments(/*JNIEnv *, jclass,*/ jclass, jintArray, jint, jint, jobjectArray, jint, jboolean, jobject);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	clearCallSiteContext
 * Signature: (Ljava/lang/invoke/MethodHandleNatives/CallSiteContext;)V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_MethodHandleNatives_clearCallSiteContext(/*JNIEnv *, jclass,*/ ::java::lang::invoke::MethodHandleNatives$CallSiteContext*);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	registerNatives
 * Signature: ()V
 */
JNIEXPORT void JNICALL _Java_java_lang_invoke_MethodHandleNatives_registerNatives(/*JNIEnv *, jclass*/);

/*
 * Class:	 java_lang_invoke_MethodHandleNatives
 * Method:	getNamedCon
 * Signature: (I[Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL _Java_java_lang_invoke_MethodHandleNatives_getNamedCon(/*JNIEnv *, jclass,*/ jint, jobjectArray);