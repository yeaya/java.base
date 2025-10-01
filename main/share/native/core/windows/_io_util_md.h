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

#include <java/lang/Object.h>

#include "jni.h"
#include "_jni_util.h"

namespace java {
	namespace io {
		class FileDescriptor;
		class File;
	}
}

#define FD jlong

WCHAR* _pathToNTPath(::java::lang::String* path, bool throwFNFE);
WCHAR* _fileToNTPath(::java::io::File* file);
// void _fileDescriptorClose(int64_t& handle);

extern "C" {
	JNIEXPORT WCHAR* getPrefixed(const WCHAR* path, int pathlen);
	WCHAR* currentDir(int di);
	int currentDirLength(const WCHAR* path, int pathlen);
	int handleAvailable(FD fd, jlong* pbytes);
	int handleSync(FD fd);
	jint handleSetLength(FD fd, jlong length);
	jlong handleGetLength(FD fd);
	JNIEXPORT jint handleRead(FD fd, void* buf, jint len);
	jint handleWrite(FD fd, const void* buf, jint len);
	jint handleAppend(FD fd, const void* buf, jint len);
	JNIEXPORT jlong JNICALL handleLseek(FD fd, jlong offset, jint whence);
}

FD _winFileHandleOpen(::java::lang::String* path, int32_t flags);

#define _getFD(fd) (fd == NULL ? -1 : fd->handle)

#define IO_Append handleAppend
#define IO_Write handleWrite
#define IO_Sync handleSync
#define IO_Read handleRead
#define IO_Lseek handleLseek
#define IO_Available handleAvailable
#define IO_SetLength handleSetLength
#define IO_GetLength handleGetLength

#define SET_HANDLE(fd) \
if (fd == 0) { \
    return (jlong)GetStdHandle(STD_INPUT_HANDLE); \
} else if (fd == 1) { \
    return (jlong)GetStdHandle(STD_OUTPUT_HANDLE); \
} else if (fd == 2) { \
    return (jlong)GetStdHandle(STD_ERROR_HANDLE); \
} else { \
    return (jlong)-1; \
}