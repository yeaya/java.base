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

#include "_jni_util.h"

#define FD jint

extern "C" {
	// io_util_md.c
	FD handleOpen(const char* path, int oflag, int mode);
	ssize_t handleRead(FD fd, void* buf, jint len);
	ssize_t handleWrite(FD fd, const void* buf, jint len);
}

#define _getFD(fdo) (fdo == NULL ? -1 : fdo->fd)

#define _THIS_FD(obj) obj->fd

#define IO_Read handleRead
#define IO_Write handleWrite
#define IO_Append handleWrite

#ifdef _ALLBSD_SOURCE
#define open64 open
#define fstat64 fstat
#define stat64 stat
#define lseek64 lseek
#define ftruncate64 ftruncate
#define IO_Lseek lseek
#else
#define IO_Lseek lseek64
#endif

#define _RESTARTABLE(_cmd, _result)	\
	do { \
		_result = _cmd; \
	} while ((_result == -1) && (errno == EINTR))
