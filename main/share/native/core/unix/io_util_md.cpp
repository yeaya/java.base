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

#include <java/lang/String.h>
#include <java/io/FileDescriptor.h>

#include "jni.h"
#include "_jni_util.h"
#include "jvm.h"
#include "_io_util.h"
#include "_io_util_md.h"
#include "_jni_util.h"

#include <string.h>
#include <unistd.h>
#include <jcpp.h>

#if defined(__linux__) || defined(_ALLBSD_SOURCE) || defined(_AIX)
#include <sys/ioctl.h>
#endif

#if defined(__linux__)
#include <linux/fs.h>
#include <sys/stat.h>
#endif

void _fileOpen(::java::lang::String* path, ::java::io::FileDescriptor* fileDescriptor, int32_t flags) {
	char ps[4000];
	path->utf8String(ps, sizeof(ps));
#if defined(__linux__) || defined(_ALLBSD_SOURCE)
	char *p = (char *)ps + strlen(ps) - 1;
	while ((p > ps) && (*p == '/')) {
		*p-- = '\0';
	}
#endif
	FD fd = handleOpen(ps, flags, 0666);
	if (fd != -1) {
		fileDescriptor->fd = fd;
		bool append = (flags & O_APPEND) == 0 ? false : true;
		fileDescriptor->append = append;
	} else {
		_throwFileNotFoundException(path);
	}
}