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
#include <java/io/FileSystem.h>
#include <java/io/File.h>
#include <java/io/UnixFileSystem.h>
#include <jcpp.h>

using namespace ::java::lang;
using namespace ::java::io;

#include <unistd.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/stat.h>
#ifdef MACOSX
#include <sys/param.h>
#include <sys/mount.h>
#else
#include <sys/statvfs.h>
#endif
#include <string.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <limits.h>
#include <errno.h>
#include <fcntl.h>
#include <dirent.h>

#include "jni.h"
#include "_jni_util.h"
#include "jlong.h"
#include "jdk_util.h"
#include "_io_util.h"
#include "_io_util_md.h"

#if defined(_AIX)
#if !defined(NAME_MAX)
#define NAME_MAX MAXNAMLEN
#endif
#define DIR DIR64
#define dirent dirent64
#define opendir opendir64
#define readdir readdir64
#define closedir closedir64
#define stat stat64
#endif

#if defined(_ALLBSD_SOURCE)
#ifndef MACOSX
#define statvfs64 statvfs
#define stat64 stat
#endif
#endif

extern "C" {
	// jboolean statMode(const char *path, int *mode);
	static jboolean statMode(const char* path, int* mode) {
		struct stat64 sb;
		if (stat64(path, &sb) == 0) {
			*mode = sb.st_mode;
			return JNI_TRUE;
		}
		return JNI_FALSE;
	}
}

JNIEXPORT void JNICALL _Java_java_io_UnixFileSystem_initIDs() {
}

/* -- Path operations -- */

JNIEXPORT String* JNICALL _Java_java_io_UnixFileSystem_canonicalize0(UnixFileSystem*, String* pathname) {
	$var(String, rv, nullptr);

	_WITH_PLATFORM_STRING(pathname, path) {
		char canonicalPath[PATH_MAX];
		if (JDK_Canonicalize((char*)path,
			canonicalPath, PATH_MAX) < 0) {
			_JNU_ThrowIOExceptionWithLastError("Bad pathname");
		} else {
			$assign(rv, String::valueOf(canonicalPath));
#ifdef MACOSX
			//	 rv = newStringPlatform(canonicalPath);
#else
			//	rv = JNU_NewStringPlatform(canonicalPath);
#endif
		}
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT jint JNICALL _Java_java_io_UnixFileSystem_getBooleanAttributes0(UnixFileSystem*, File* file) {
	jint rv = 0;

	_WITH_PLATFORM_STRING(file->path, path) {
		int mode;
		if (statMode(path, &mode)) {
			int fmt = mode & S_IFMT;
			rv = (jint)(FileSystem::BA_EXISTS
				| ((fmt == S_IFREG) ? FileSystem::BA_REGULAR : 0)
				| ((fmt == S_IFDIR) ? FileSystem::BA_DIRECTORY : 0));
		}
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT jboolean JNICALL _Java_java_io_UnixFileSystem_checkAccess(UnixFileSystem*, File* file, jint a) {
	jboolean rv = JNI_FALSE;
	int mode = 0;
	switch (a) {
	case FileSystem::ACCESS_READ:
		mode = R_OK;
		break;
	case FileSystem::ACCESS_WRITE:
		mode = W_OK;
		break;
	case FileSystem::ACCESS_EXECUTE:
		mode = X_OK;
		break;
	default: assert(0);
	}
	_WITH_PLATFORM_STRING(file->path, path) {
		int res;
		_RESTARTABLE(access(path, mode), res);
		if (res == 0) {
			rv = JNI_TRUE;
		}
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT bool JNICALL _Java_java_io_UnixFileSystem_setPermission(UnixFileSystem*, File* file, int32_t access, bool enable, bool owneronly) {
	jboolean rv = JNI_FALSE;

	_WITH_PLATFORM_STRING(file->path, path) {
		int amode = 0;
		int mode;
		int res;
		switch (access) {
		case FileSystem::ACCESS_READ:
			if (owneronly)
				amode = S_IRUSR;
			else
				amode = S_IRUSR | S_IRGRP | S_IROTH;
			break;
		case FileSystem::ACCESS_WRITE:
			if (owneronly)
				amode = S_IWUSR;
			else
				amode = S_IWUSR | S_IWGRP | S_IWOTH;
			break;
		case FileSystem::ACCESS_EXECUTE:
			if (owneronly)
				amode = S_IXUSR;
			else
				amode = S_IXUSR | S_IXGRP | S_IXOTH;
			break;
		default:
			assert(0);
		}
		if (statMode(path, &mode)) {
			if (enable)
				mode |= amode;
			else
				mode &= ~amode;
			_RESTARTABLE(chmod(path, mode), res);
			if (res == 0) {
				rv = JNI_TRUE;
			}
		}
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT jlong JNICALL _Java_java_io_UnixFileSystem_getLastModifiedTime(UnixFileSystem*, File* file) {
	jlong rv = 0;

	_WITH_PLATFORM_STRING(file->path, path) {
		struct stat64 sb;
		if (stat64(path, &sb) == 0) {
#if defined(_AIX)
			rv = (jlong)sb.st_mtime * 1000;
			rv += (jlong)sb.st_mtime_n / 1000000;
#elif defined(MACOSX)
			rv = (jlong)sb.st_mtimespec.tv_sec * 1000;
			rv += (jlong)sb.st_mtimespec.tv_nsec / 1000000;
#else
			rv = (jlong)sb.st_mtim.tv_sec * 1000;
			rv += (jlong)sb.st_mtim.tv_nsec / 1000000;
#endif
		}
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT jlong JNICALL _Java_java_io_UnixFileSystem_getLength(UnixFileSystem*, File* file) {
	jlong rv = 0;

	_WITH_PLATFORM_STRING(file->path, path) {
		struct stat64 sb;
		if (stat64(path, &sb) == 0) {
			rv = sb.st_size;
		}
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT jboolean JNICALL _Java_java_io_UnixFileSystem_createFileExclusively(UnixFileSystem*, String* pathname) {
	jboolean rv = JNI_FALSE;
	_WITH_PLATFORM_STRING(pathname, path) {
		/* The root directory always exists */
		if (strcmp(path, "/")) {
			FD fd = handleOpen(path, O_RDWR | O_CREAT | O_EXCL, 0666);
			if (fd < 0) {
				if (errno != EEXIST)
					_JNU_ThrowIOExceptionWithLastError("Could not open file");
			} else {
				if (close(fd) == -1)
					_JNU_ThrowIOExceptionWithLastError("Could not close file");
				rv = JNI_TRUE;
			}
		}
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT jboolean JNICALL _Java_java_io_UnixFileSystem_delete0(UnixFileSystem*, File* file) {
	jboolean rv = JNI_FALSE;

	_WITH_PLATFORM_STRING(file->path, path) {
		if (remove(path) == 0) {
			rv = JNI_TRUE;
		}
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT $StringArray* JNICALL _Java_java_io_UnixFileSystem_list(UnixFileSystem*, File* file) {
	DIR* dir = nullptr;
	struct dirent* ptr;
	int len, maxlen;
	// jobjectArray rv, old;
	// jclass str_class;

	 //str_class = JNU_ClassString(env);
	// CHECK_NULL_RETURN(str_class, nullptr);

	_WITH_PLATFORM_STRING(file->path, path) {
		dir = opendir(path);
	} _END_PLATFORM_STRING(path);
	if (dir == nullptr) return nullptr;

	/* Allocate an initial String array */
	len = 0;
	maxlen = 16;
	//rv = (*env)->NewObjectArray(env, maxlen, str_class, nullptr);
   // if (rv == nullptr) goto error;
	$var($StringArray, rv, $new<$StringArray>(maxlen));
	$var($StringArray, old, nullptr);

	/* Scan the directory */
	while ((ptr = readdir(dir)) != nullptr) {
		//  jstring name;
		if (!strcmp(ptr->d_name, ".") || !strcmp(ptr->d_name, ".."))
			continue;
		if (len == maxlen) {
			$assign(old, rv);
			//   rv = (*env)->NewObjectArray(env, maxlen <<= 1, str_class, nullptr);
			maxlen <<= 1;
			$assign(rv, $new<$StringArray>(maxlen));
			//  if (rv == nullptr) goto error;
			rv->setArray(0, old, 0, old->length);
			//   if (JNU_CopyObjectArray(rv, old, len) < 0) goto error;
			 //  (*env)->DeleteLocalRef(env, old);
		}
		$var(String, name, String::valueOf(ptr->d_name));
#ifdef MACOSX
		//   name = newStringPlatform(ptr->d_name);
#else
		//	name = JNU_NewStringPlatform(ptr->d_name);
#endif
	//	if (name == nullptr) goto error;
		rv->set(len++, name);
		//   (*env)->SetObjectArrayElement(env, rv, len++, name);
		 //  (*env)->DeleteLocalRef(env, name);
	}
	closedir(dir);

	/* Copy the final results into an appropriately-sized array */
	if (len < maxlen) {
		$assign(old, rv);
		// rv = (*env)->NewObjectArray(env, len, str_class, nullptr);
		$assign(rv, $new<$StringArray>(len));
		//   if (rv == nullptr) {
		 //	  return nullptr;
		//   }
		rv->setArray(0, old, 0, len);
		//  if (JNU_CopyObjectArray(env, rv, old, len) < 0) {
		//	  return nullptr;
		//  }
	}
	return rv;

error:
	closedir(dir);
	return nullptr;
}

JNIEXPORT jboolean JNICALL _Java_java_io_UnixFileSystem_createDirectory(UnixFileSystem*, File* file) {
	jboolean rv = JNI_FALSE;

	_WITH_PLATFORM_STRING(file->path, path) {
		if (mkdir(path, 0777) == 0) {
			rv = JNI_TRUE;
		}
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT jboolean JNICALL _Java_java_io_UnixFileSystem_rename0(UnixFileSystem*, File* from, File* to) {
	jboolean rv = JNI_FALSE;

	_WITH_PLATFORM_STRING(from->path, fromPath) {
		_WITH_PLATFORM_STRING(to->path, toPath) {
			if (rename(fromPath, toPath) == 0) {
				rv = JNI_TRUE;
			}
		} _END_PLATFORM_STRING(toPath);
	} _END_PLATFORM_STRING(fromPath);
	return rv;
}

JNIEXPORT jboolean JNICALL _Java_java_io_UnixFileSystem_setLastModifiedTime(UnixFileSystem*, File* file, int64_t time) {
	jboolean rv = JNI_FALSE;

	_WITH_PLATFORM_STRING(file->path, path) {
		struct stat64 sb;

		if (stat64(path, &sb) == 0) {
			struct timeval tv[2];

			/* Preserve access time */
#if defined(_AIX)
			tv[0].tv_sec = sb.st_atime;
			tv[0].tv_usec = sb.st_atime_n / 1000;
#elif defined(MACOSX)
			tv[0].tv_sec = sb.st_atimespec.tv_sec;
			tv[0].tv_usec = sb.st_atimespec.tv_nsec / 1000;
#else
			tv[0].tv_sec = sb.st_atim.tv_sec;
			tv[0].tv_usec = sb.st_atim.tv_nsec / 1000;
#endif
			/* Change last-modified time */
			tv[1].tv_sec = time / 1000;
			tv[1].tv_usec = (time % 1000) * 1000;

			if (utimes(path, tv) == 0)
				rv = JNI_TRUE;
		}
	} _END_PLATFORM_STRING(path);

	return rv;
}

JNIEXPORT jboolean JNICALL _Java_java_io_UnixFileSystem_setReadOnly(UnixFileSystem*, File* file) {
	jboolean rv = JNI_FALSE;

	_WITH_PLATFORM_STRING(file->path, path) {
		int mode;
		int res;
		if (statMode(path, &mode)) {
			_RESTARTABLE(chmod(path, mode & ~(S_IWUSR | S_IWGRP | S_IWOTH)), res);
			if (res == 0) {
				rv = JNI_TRUE;
			}
		}
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT jlong JNICALL _Java_java_io_UnixFileSystem_getSpace(UnixFileSystem*, File* file, jint t) {
	jlong rv = 0L;

	_WITH_PLATFORM_STRING(file->path, path) {
#ifdef MACOSX
		struct statfs fsstat;
#else
		struct statvfs64 fsstat;
		int res;
#endif
		memset(&fsstat, 0, sizeof(fsstat));
#ifdef MACOSX
		if (statfs(path, &fsstat) == 0) {
			switch (t) {
			case FileSystem::SPACE_TOTAL:
				rv = jlong_mul(long_to_jlong(fsstat.f_bsize),
					long_to_jlong(fsstat.f_blocks));
				break;
			case FileSystem::SPACE_FREE:
				rv = jlong_mul(long_to_jlong(fsstat.f_bsize),
					long_to_jlong(fsstat.f_bfree));
				break;
			case FileSystem::SPACE_USABLE:
				rv = jlong_mul(long_to_jlong(fsstat.f_bsize),
					long_to_jlong(fsstat.f_bavail));
				break;
			default:
				assert(0);
			}
		}
#else
		_RESTARTABLE(statvfs64(path, &fsstat), res);
		if (res == 0) {
			switch (t) {
			case FileSystem::SPACE_TOTAL:
				rv = jlong_mul(long_to_jlong(fsstat.f_frsize),
					long_to_jlong(fsstat.f_blocks));
				break;
			case FileSystem::SPACE_FREE:
				rv = jlong_mul(long_to_jlong(fsstat.f_frsize),
					long_to_jlong(fsstat.f_bfree));
				break;
			case FileSystem::SPACE_USABLE:
				rv = jlong_mul(long_to_jlong(fsstat.f_frsize),
					long_to_jlong(fsstat.f_bavail));
				break;
			default:
				assert(0);
			}
		}
#endif
	} _END_PLATFORM_STRING(path);
	return rv;
}

JNIEXPORT jlong JNICALL _Java_java_io_UnixFileSystem_getNameMax0(UnixFileSystem*, String* pathname) {
	jlong length = -1;
	_WITH_PLATFORM_STRING(pathname, path) {
		length = (jlong)pathconf(path, _PC_NAME_MAX);
	} _END_PLATFORM_STRING(path);
	return length != -1 ? length : (jlong)NAME_MAX;
}
