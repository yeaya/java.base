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

#include "jvm.h"
#include "OS.h"

#include <stdio.h>
#include <stdarg.h>

void reportWarning(const char* format, ...) {
#ifdef OUT_WARNING
	FILE* const err = stderr;
	jio_fprintf(err, "warning: ");
	va_list ap;
	va_start(ap, format);
	vfprintf(err, format, ap);
	va_end(ap);
	fputc('\n', err);
}
#endif
}

void reportError(const char* file, int line, const char* message) {
	reportError(file, line, message, "%s", "");
}

static void printError(const char* message, const char* format, va_list ap) {
	FILE* const err = stderr;
	jio_fprintf(err, "error: ");
	if (message != nullptr && message[0] != '\0') {
		jio_fprintf(err, "%s ", message);
	}
	vfprintf(err, format, ap);
	fputc('\n', err);
}

void reportError(const char* file, int line, const char* message, const char* format, ...) {
	va_list args;
	va_start(args, format);
	printError(message, format, args);
	va_end(args);
	OS::printStackTrace(stderr);
	OS::die();
	OS::breakpoint();
}

void reportFatal(const char* file, int line, const char* format, ...) {
	va_list args;
	va_start(args, format);
	printError("", format, args);
	va_end(args);
	OS::printStackTrace(stderr);
	OS::die();
	OS::breakpoint();
}

void reportOutOfMemory(const char* file, int line, size_t size, const char* format, ...) {
	va_list args;
	va_start(args, format);
	printError("", format, args);
	va_end(args);
	OS::printStackTrace(stderr);
	OS::die();
	OS::breakpoint();
}