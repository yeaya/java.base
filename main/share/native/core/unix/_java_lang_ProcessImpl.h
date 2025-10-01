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
	namespace {
		class ProcessImpl;
	}
}

/*
 * Class:     java_lang_ProcessImpl
 * Method:    forkAndExec
 * Signature: (I[B[B[BI[BI[B[IZ)I
 */
JNIEXPORT jint JNICALL _Java_java_lang_ProcessImpl_forkAndExec
(::java::lang::ProcessImpl*, jint, jbyteArray, jbyteArray, jbyteArray, jint, jbyteArray, jint, jbyteArray, jintArray, jboolean);

/*
 * Class:     java_lang_ProcessImpl
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL _Java_java_lang_ProcessImpl_init
();