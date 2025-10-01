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
 
#ifndef _core_debug_h_
#define _core_debug_h_

#include <stddef.h>

#ifdef _DEBUG
	#define assert(cond, ...) \
		if (!(cond)) { \
			reportError(__FILE__, __LINE__, "assert("#cond") failed", __VA_ARGS__); \
		}
#else
	#define assert(cond, ...)
#endif

#define guarantee(cond, ...) \
	if (!(cond)) { \
		reportError(__FILE__, __LINE__, "guarantee("#cond") failed", __VA_ARGS__); \
	}

#define fatal(...) reportFatal(__FILE__, __LINE__, __VA_ARGS__)
#define exitForOutOfMemory(size, ...) reportOutOfMemory(__FILE__, __LINE__, size, __VA_ARGS__)
#define shouldNotReachHere() reportError(__FILE__, __LINE__, "shouldNotReachHere")

void reportWarning(const char* format, ...);
void reportError(const char* file, int line, const char* message);
void reportError(const char* file, int line, const char* message, const char* format, ...);
void reportFatal(const char* file, int line, const char* format, ...);
void reportOutOfMemory(const char* file, int line, size_t size, const char* format, ...);

#endif // _core_debug_h_