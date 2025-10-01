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
	namespace io {
		class File;
		class UnixFileSystem;
	}
}

JNIEXPORT void JNICALL
_Java_java_io_UnixFileSystem_initIDs();

/* -- Path operations -- */

JNIEXPORT::java::lang::String* JNICALL
_Java_java_io_UnixFileSystem_canonicalize0(::java::io::UnixFileSystem*,
	::java::lang::String* pathname);

JNIEXPORT jint JNICALL
_Java_java_io_UnixFileSystem_getBooleanAttributes0(::java::io::UnixFileSystem*,
	::java::io::File* file);

JNIEXPORT jboolean JNICALL
_Java_java_io_UnixFileSystem_checkAccess(::java::io::UnixFileSystem*,
	::java::io::File* file, jint a);

JNIEXPORT jboolean JNICALL
_Java_java_io_UnixFileSystem_setPermission(::java::io::UnixFileSystem*,
	::java::io::File* file,
	jint access,
	jboolean enable,
	jboolean owneronly);

JNIEXPORT jlong JNICALL
_Java_java_io_UnixFileSystem_getLastModifiedTime(::java::io::UnixFileSystem*,
	::java::io::File* file);
JNIEXPORT jlong JNICALL
_Java_java_io_UnixFileSystem_getLength(::java::io::UnixFileSystem*,
	::java::io::File* file);

JNIEXPORT jboolean JNICALL
_Java_java_io_UnixFileSystem_createFileExclusively(::java::io::UnixFileSystem*,
	::java::lang::String* pathname);


JNIEXPORT jboolean JNICALL
_Java_java_io_UnixFileSystem_delete0(::java::io::UnixFileSystem*,
	::java::io::File* file);

JNIEXPORT $Array<::java::lang::String>* JNICALL
_Java_java_io_UnixFileSystem_list(::java::io::UnixFileSystem*,
	::java::io::File* file);

JNIEXPORT jboolean JNICALL
_Java_java_io_UnixFileSystem_createDirectory(::java::io::UnixFileSystem*,
	::java::io::File* file);

JNIEXPORT jboolean JNICALL
_Java_java_io_UnixFileSystem_rename0(::java::io::UnixFileSystem*,
	::java::io::File* from, ::java::io::File* to);

JNIEXPORT jboolean JNICALL
_Java_java_io_UnixFileSystem_setLastModifiedTime(::java::io::UnixFileSystem*,
	::java::io::File* file, jlong time);

JNIEXPORT jboolean JNICALL
_Java_java_io_UnixFileSystem_setReadOnly(::java::io::UnixFileSystem*,
	::java::io::File* file);

JNIEXPORT jlong JNICALL
_Java_java_io_UnixFileSystem_getSpace(::java::io::UnixFileSystem*,
	::java::io::File* file, jint t);

JNIEXPORT jlong JNICALL
_Java_java_io_UnixFileSystem_getNameMax0(::java::io::UnixFileSystem*,
	::java::lang::String* pathname);