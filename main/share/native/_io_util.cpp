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

#include <java/io/FileDescriptor.h>
#include <java/io/FileNotFoundException.h>
#include <java/lang/String.h>
#include <jcpp.h>
#include <java/lang/ObjectManagerInternal.h>

#include <stdlib.h>
#include <string.h>
#include <stddef.h>

#include "jni.h"
#include "jni_util.h"
#include "_jni_util.h"
#include "jvm.h"
#include "_io_util.h"
#include "_io_util_md.h"

using namespace ::java::lang;

int32_t _readSingle(::java::io::FileDescriptor* fdo) {
	int32_t nread;
	char ret;
	FD fd = _getFD(fdo);
	if (fd == -1) {
		_JNU_ThrowIOException("Stream Closed");
		return -1;
	}
	ON_IO_BEFORE();
	nread = IO_Read(fd, &ret, 1);
	ON_IO_AFTER();
	if (nread == 0) { /* EOF */
		return -1;
	} else if (nread == -1) { /* error */
		_JNU_ThrowIOExceptionWithLastError("Read error");
	}
	return ret & 0xFF;
}

/* The maximum size of a stack-allocated buffer.
 */
#define BUF_SIZE 8192

 /*
  * Returns true if the array slice defined by the given offset and length
  * is out of bounds.
  */
static bool outOfBounds(int32_t off, int32_t len, $bytes* array) {
	return ((off < 0) ||
		(len < 0) ||
		// We are very careful to avoid signed integer overflow,
		// the result of which is undefined in C.
		(array->length - off < len));
}

int32_t _readBytes($bytes* bytes, int32_t off,
	int32_t len, ::java::io::FileDescriptor* fdo) {
	int32_t nread;
	//  char stackBuf[BUF_SIZE];
	char* buf = NULL;
	FD fd;

	if (bytes == nullptr) {
		_JNU_ThrowNullPointerException(NULL);
		return -1;
	}

	if (outOfBounds(off, len, bytes)) {
		_JNU_ThrowIndexOutOfBoundsException(NULL);
		return -1;
	}

	if (len == 0) {
		return 0;
		/*   } else if (len > BUF_SIZE) {
			   buf = malloc(len);
			   if (buf == NULL) {
				   JNU_ThrowOutOfMemoryError(NULL);
				   return 0;
			   }
		   } else {
			   buf = stackBuf;*/
	}

	buf = (char*)(bytes->begin() + off);

	fd = _getFD(fdo);
	if (fd == -1) {
		_JNU_ThrowIOException("Stream Closed");
		nread = -1;
	} else {
		ON_IO_BEFORE();
		nread = IO_Read(fd, buf, len);
		ON_IO_AFTER();
		if (nread > 0) {
			//  (*env)->SetByteArrayRegion(bytes, off, nread, (jbyte *)buf);
		} else if (nread == -1) {
			_JNU_ThrowIOExceptionWithLastError("Read error");
		} else { /* EOF */
			nread = -1;
		}
	}

	//   if (buf != stackBuf) {
	//	   free(buf);
	//   }
	return nread;
}

void _writeSingle(int32_t byte, bool append, ::java::io::FileDescriptor* fdo) {
	// Discard the 24 high-order bits of byte. See OutputStream#write(int)
	char c = (char)byte;
	int32_t n;
	FD fd = _getFD(fdo);
	if (fd == -1) {
		_JNU_ThrowIOException("Stream Closed");
		return;
	}
	ON_IO_BEFORE();
	if (append == JNI_TRUE) {
		n = IO_Append(fd, &c, 1);
	} else {
		n = IO_Write(fd, &c, 1);
	}
	ON_IO_AFTER();
	if (n == -1) {
		_JNU_ThrowIOExceptionWithLastError("Write error");
	}
}

void _writeBytes($bytes* bytes, int32_t off,
	int32_t len, bool append, ::java::io::FileDescriptor* fdo) {
	int32_t n;
	// char stackBuf[BUF_SIZE];
	char* buf = NULL;
	FD fd;

	if (bytes == nullptr) {
		_JNU_ThrowNullPointerException(NULL);
		return;
	}

	if (outOfBounds(off, len, bytes)) {
		_JNU_ThrowIndexOutOfBoundsException(NULL);
		return;
	}

	if (len == 0) {
		return;
		/*   } else if (len > BUF_SIZE) {
			   buf = (char*)malloc(len);
			   if (buf == NULL) {
				   JNU_ThrowOutOfMemoryError(NULL);
				   return;
			   }
		   } else {
			   buf = stackBuf;*/
	}
	buf = (char*)(bytes->begin() + off);
	//(*env)->GetByteArrayRegion(env, bytes, off, len, (jbyte *)buf);

	//if (!(*env)->ExceptionOccurred(env)) {
	off = 0;
	while (len > 0) {
		fd = _getFD(fdo);
		if (fd == -1) {
			_JNU_ThrowIOException("Stream Closed");
			break;
		}
		ON_IO_BEFORE();
		if (append == JNI_TRUE) {
			n = IO_Append(fd, buf + off, len);
		} else {
			n = IO_Write(fd, buf + off, len);
		}
		ON_IO_AFTER();
		if (n == -1) {
			_JNU_ThrowIOExceptionWithLastError("Write error");
			break;
		}
		off += n;
		len -= n;
	}
	//  }
	//  if (buf != stackBuf) {
	//	  free(buf);
	//  }
}

void _throwFileNotFoundException(::java::lang::String* path) {
	char buf[512];
	size_t n = getLastErrorString(buf, sizeof(buf));
	$var(::java::lang::String, why, ::java::lang::String::valueOf(buf));
	$throw($new<::java::io::FileNotFoundException>(path, why));
}
