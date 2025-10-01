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

#ifndef _core_coreDef_h_
#define _core_coreDef_h_

#include "jni.h"
#include "debug.h"

#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <inttypes.h>
#include <cstddef>

#include <jcpp.h>

const int ThreadStackSize = 1024;

#if defined(LINUX) || defined(_ALLBSD_SOURCE)
	#ifndef __OpenBSD__
		#ifndef _XOPEN_SOURCE
			#define _XOPEN_SOURCE 600 // for macosx
		#endif
	#endif
	#include <pthread.h>
#endif

const size_t K = 1024;
const size_t M = (1024 * K);
const size_t G = (1024 * M);

const jint MILLISEC_PER_SEC = 1000;
const jlong NANOSECS_PER_SEC = 1000000000;
const jint NANOSECS_PER_MILLISEC = 1000000;
const jint NANOSECS_PER_MICROSEC = 1000;

inline int64_t nanosToMillis(int64_t nanos) {
	return nanos / NANOSECS_PER_MILLISEC;
}

inline int64_t millisToNanos(int64_t millis) {
	return millis * NANOSECS_PER_MILLISEC;
}

typedef char* address;

inline size_t deltaPointer(const void* left, const void* right) {
	return (((uintptr_t)left) - ((uintptr_t)right));
}

#ifdef AARCH64
#define AARCH64_ONLY(x) x
#else
#define AARCH64_ONLY(x)
#endif

#define STR(x) #x
#define XSTR(x) STR(x)
#define CPU_HEADER(basename) XSTR($connectMacro(basename, INCLUDE_SUFFIX_CPU).h)
#define OS_HEADER(basename) XSTR($connectMacro(basename, INCLUDE_SUFFIX_OS).h)
#define OS_CPU_HEADER(basename) XSTR($connectMacro(basename, $connectMacro(INCLUDE_SUFFIX_OS, INCLUDE_SUFFIX_CPU)).h)

#endif // _core_coreDef_h_