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

#ifndef _sun_nio_fs_UnixConstants_h_
#define _sun_nio_fs_UnixConstants_h_
//$ class sun.nio.fs.UnixConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

namespace sun {
    namespace nio {
        namespace fs {

class UnixConstants : public ::java::lang::Object {
    $class(UnixConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
    UnixConstants();
    void init$();

static constexpr int32_t O_RDONLY$ = O_RDONLY;
#undef O_RDONLY
    static constexpr int32_t O_RDONLY = O_RDONLY$;

static constexpr int32_t O_WRONLY$ = O_WRONLY;
#undef O_WRONLY
    static constexpr int32_t O_WRONLY = O_WRONLY$;
	
static constexpr int32_t O_RDWR$ = O_RDWR;
#undef O_RDWR
    static constexpr int32_t O_RDWR = O_RDWR$;
	
static constexpr int32_t O_APPEND$ = O_APPEND;
#undef O_APPEND
    static constexpr int32_t O_APPEND = O_APPEND$;

static constexpr int32_t O_CREAT$ = O_CREAT;
#undef O_CREAT
    static constexpr int32_t O_CREAT = O_CREAT$;
	
static constexpr int32_t O_EXCL$ = O_EXCL;
#undef O_EXCL
    static constexpr int32_t O_EXCL = O_EXCL$;
	
static constexpr int32_t O_TRUNC$ = O_TRUNC;
#undef O_TRUNC
    static constexpr int32_t O_TRUNC = O_TRUNC$;
	
static constexpr int32_t O_SYNC$ = O_SYNC;
#undef O_SYNC
    static constexpr int32_t O_SYNC = O_SYNC$;

#ifndef O_DSYNC
    // At least FreeBSD doesn't define O_DSYNC
    static constexpr int32_t O_DSYNC = O_SYNC$;
#else
static constexpr int32_t O_DSYNC$ = O_DSYNC;
#undef O_DSYNC
    static constexpr int32_t O_DSYNC = O_DSYNC$;
#endif

#ifdef O_NOFOLLOW
static constexpr int32_t O_NOFOLLOW$ = O_NOFOLLOW;
#undef O_NOFOLLOW
    static constexpr int32_t O_NOFOLLOW = O_NOFOLLOW$;
#else
    // not supported (dummy values will not be used at runtime).
    static constexpr int32_t O_NOFOLLOW = 00;
#endif

#ifdef O_DIRECT
static constexpr int32_t O_DIRECT$ = O_DIRECT;
#undef O_DIRECT
    static constexpr int32_t O_DIRECT = O_DIRECT$;
#else
    // not supported (dummy values will not be used at runtime).
    static constexpr int32_t O_DIRECT = 00;
#endif

    static constexpr int32_t S_IAMB = (S_IRUSR|S_IWUSR|S_IXUSR|S_IRGRP|S_IWGRP|S_IXGRP|S_IROTH|S_IWOTH|S_IXOTH);
	
static constexpr int32_t S_IRUSR$ = S_IRUSR;
#undef S_IRUSR
    static constexpr int32_t S_IRUSR = S_IRUSR$;
	
static constexpr int32_t S_IWUSR$ = S_IWUSR;
#undef S_IWUSR
    static constexpr int32_t S_IWUSR = S_IWUSR$;
	
static constexpr int32_t S_IXUSR$ = S_IXUSR;
#undef S_IXUSR
    static constexpr int32_t S_IXUSR = S_IXUSR$;
	
static constexpr int32_t S_IRGRP$ = S_IRGRP;
#undef S_IRGRP
    static constexpr int32_t S_IRGRP = S_IRGRP$;
	
static constexpr int32_t S_IWGRP$ = S_IWGRP;
#undef S_IWGRP
    static constexpr int32_t S_IWGRP = S_IWGRP$;
	
static constexpr int32_t S_IXGRP$ = S_IXGRP;
#undef S_IXGRP
    static constexpr int32_t S_IXGRP = S_IXGRP$;

static constexpr int32_t S_IROTH$ = S_IROTH;
#undef S_IROTH
    static constexpr int32_t S_IROTH = S_IROTH$;

static constexpr int32_t S_IWOTH$ = S_IWOTH;
#undef S_IWOTH
    static constexpr int32_t S_IWOTH = S_IWOTH$;
	
static constexpr int32_t S_IXOTH$ = S_IXOTH;
#undef S_IXOTH
    static constexpr int32_t S_IXOTH = S_IXOTH$;
	
static constexpr int32_t S_IFMT$ = S_IFMT;
#undef S_IFMT
    static constexpr int32_t S_IFMT = S_IFMT$;
	
static constexpr int32_t S_IFREG$ = S_IFREG;
#undef S_IFREG
    static constexpr int32_t S_IFREG = S_IFREG$;
	
static constexpr int32_t S_IFDIR$ = S_IFDIR;
#undef S_IFDIR
    static constexpr int32_t S_IFDIR = S_IFDIR$;
	
static constexpr int32_t S_IFLNK$ = S_IFLNK;
#undef S_IFLNK
    static constexpr int32_t S_IFLNK = S_IFLNK$;
	
static constexpr int32_t S_IFCHR$ = S_IFCHR;
#undef S_IFCHR
    static constexpr int32_t S_IFCHR = S_IFCHR$;
	
static constexpr int32_t S_IFBLK$ = S_IFBLK;
#undef S_IFBLK
    static constexpr int32_t S_IFBLK = S_IFBLK$;
	
static constexpr int32_t S_IFIFO$ = S_IFIFO;
#undef S_IFIFO
    static constexpr int32_t S_IFIFO = S_IFIFO$;
	
static constexpr int32_t R_OK$ = R_OK;
#undef R_OK
    static constexpr int32_t R_OK = R_OK$;
	
static constexpr int32_t W_OK$ = W_OK;
#undef W_OK
    static constexpr int32_t W_OK = W_OK$;
	
static constexpr int32_t X_OK$ = X_OK;
#undef X_OK
    static constexpr int32_t X_OK = X_OK$;
	
static constexpr int32_t F_OK$ = F_OK;
#undef F_OK
    static constexpr int32_t F_OK = F_OK$;
	
static constexpr int32_t ENOENT$ = ENOENT;
#undef ENOENT
    static constexpr int32_t ENOENT = ENOENT$;
	
static constexpr int32_t ENXIO$ = ENXIO;
#undef ENXIO
    static constexpr int32_t ENXIO = ENXIO$;
	
static constexpr int32_t EACCES$ = EACCES;
#undef EACCES
    static constexpr int32_t EACCES = EACCES$;
	
static constexpr int32_t EEXIST$ = EEXIST;
#undef EEXIST
    static constexpr int32_t EEXIST = EEXIST$;
	
static constexpr int32_t ENOTDIR$ = ENOTDIR;
#undef ENOTDIR
    static constexpr int32_t ENOTDIR = ENOTDIR$;
	
static constexpr int32_t EINVAL$ = EINVAL;
#undef EINVAL
    static constexpr int32_t EINVAL = EINVAL$;
	
static constexpr int32_t EXDEV$ = EXDEV;
#undef EXDEV
    static constexpr int32_t EXDEV = EXDEV$;
	
static constexpr int32_t EISDIR$ = EISDIR;
#undef EISDIR
    static constexpr int32_t EISDIR = EISDIR$;
	
static constexpr int32_t ENOTEMPTY$ = ENOTEMPTY;
#undef ENOTEMPTY
    static constexpr int32_t ENOTEMPTY = ENOTEMPTY$;
	
static constexpr int32_t ENOSPC$ = ENOSPC;
#undef ENOSPC
    static constexpr int32_t ENOSPC = ENOSPC$;
	
static constexpr int32_t EAGAIN$ = EAGAIN;
#undef EAGAIN
    static constexpr int32_t EAGAIN = EAGAIN$;
	
static constexpr int32_t EWOULDBLOCK$ = EWOULDBLOCK;
#undef EWOULDBLOCK
    static constexpr int32_t EWOULDBLOCK = EWOULDBLOCK$;
	
static constexpr int32_t ENOSYS$ = ENOSYS;
#undef ENOSYS
    static constexpr int32_t ENOSYS = ENOSYS$;
	
static constexpr int32_t ELOOP$ = ELOOP;
#undef ELOOP
    static constexpr int32_t ELOOP = ELOOP$;
	
static constexpr int32_t EROFS$ = EROFS;
#undef EROFS
    static constexpr int32_t EROFS = EROFS$;

#ifndef ENODATA
    // Only used in Linux java source, provide any value so it compiles
    static constexpr int32_t ENODATA = ELAST;
#else
static constexpr int32_t ENODATA$ = ENODATA;
#undef ENODATA
    static constexpr int32_t ENODATA = ENODATA$;
#endif

// fgetxattr error codes for absent attributes depend on the OS:
#ifdef _ALLBSD_SOURCE
    static constexpr int32_t XATTR_NOT_FOUND = ENOATTR;
#elif linux
    static constexpr int32_t XATTR_NOT_FOUND = ENODATA;
#else
    // not supported (dummy values will not be used at runtime).
    static constexpr int32_t XATTR_NOT_FOUND = 00;
#endif

static constexpr int32_t ERANGE$ = ERANGE;
#undef ERANGE
    static constexpr int32_t ERANGE = ERANGE$;

static constexpr int32_t EMFILE$ = EMFILE;
#undef EMFILE
    static constexpr int32_t EMFILE = EMFILE$;

    // flags used with openat/unlinkat/etc.
#if defined(AT_SYMLINK_NOFOLLOW) && defined(AT_REMOVEDIR)
static constexpr int32_t AT_SYMLINK_NOFOLLOW$ = AT_SYMLINK_NOFOLLOW;
#undef AT_SYMLINK_NOFOLLOW
    static constexpr int32_t AT_SYMLINK_NOFOLLOW = AT_SYMLINK_NOFOLLOW$;
static constexpr int32_t AT_REMOVEDIR$ = AT_REMOVEDIR;
#undef AT_REMOVEDIR
    static constexpr int32_t AT_REMOVEDIR = AT_REMOVEDIR$;
#else
    // not supported (dummy values will not be used at runtime).
    static constexpr int32_t AT_SYMLINK_NOFOLLOW = 00;
    static constexpr int32_t AT_REMOVEDIR = 00;
#endif
};

        } // fs
    } // nio
} // sun

#endif // _sun_nio_fs_UnixConstants_h_