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

#include <sun/nio/fs/UnixConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EEXIST
#undef S_IFCHR
#undef O_NOFOLLOW
#undef S_IWGRP
#undef O_CREAT
#undef S_IFLNK
#undef ENOSYS
#undef X_OK
#undef S_IFMT
#undef S_IXUSR
#undef EXDEV
#undef ERANGE
#undef ELOOP
#undef S_IROTH
#undef S_IFDIR
#undef S_IXGRP
#undef S_IFREG
#undef AT_SYMLINK_NOFOLLOW
#undef ENOSPC
#undef AT_REMOVEDIR
#undef EISDIR
#undef EMFILE
#undef O_SYNC
#undef ENXIO
#undef S_IWOTH
#undef S_IFIFO
#undef R_OK
#undef ENODATA
#undef O_RDWR
#undef S_IRUSR
#undef F_OK
#undef EACCES
#undef O_DSYNC
#undef XATTR_NOT_FOUND
#undef O_EXCL
#undef S_IAMB
#undef S_IXOTH
#undef EAGAIN
#undef ENOENT
#undef W_OK
#undef O_APPEND
#undef EINVAL
#undef O_TRUNC
#undef O_RDONLY
#undef S_IWUSR
#undef ENOTDIR
#undef O_DIRECT
#undef EWOULDBLOCK
#undef O_WRONLY
#undef S_IRGRP
#undef EROFS
#undef ENOTEMPTY
#undef S_IFBLK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
    namespace nio {
        namespace fs {

$FieldInfo _UnixConstants_FieldInfo_[] = {
    {"O_RDONLY", "I", nullptr, $STATIC, $staticField(UnixConstants, O_RDONLY)},
    {"O_WRONLY", "I", nullptr, $STATIC, $staticField(UnixConstants, O_WRONLY)},
    {"O_RDWR", "I", nullptr, $STATIC, $staticField(UnixConstants, O_RDWR)},
    {"O_APPEND", "I", nullptr, $STATIC, $staticField(UnixConstants, O_APPEND)},
    {"O_CREAT", "I", nullptr, $STATIC, $staticField(UnixConstants, O_CREAT)},
    {"O_EXCL", "I", nullptr, $STATIC, $staticField(UnixConstants, O_EXCL)},
    {"O_TRUNC", "I", nullptr, $STATIC, $staticField(UnixConstants, O_TRUNC)},
    {"O_SYNC", "I", nullptr, $STATIC, $staticField(UnixConstants, O_SYNC)},
    {"O_DSYNC", "I", nullptr, $STATIC, $staticField(UnixConstants, O_DSYNC)},
    {"O_NOFOLLOW", "I", nullptr, $STATIC, $staticField(UnixConstants, O_NOFOLLOW)},
    {"O_DIRECT", "I", nullptr, $STATIC, $staticField(UnixConstants, O_DIRECT)},
    {"S_IAMB", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IAMB)},
    {"S_IRUSR", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IRUSR)},
    {"S_IWUSR", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IWUSR)},
    {"S_IXUSR", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IXUSR)},
    {"S_IRGRP", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IRGRP)},
    {"S_IWGRP", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IWGRP)},
    {"S_IXGRP", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IXGRP)},
    {"S_IROTH", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IROTH)},
    {"S_IWOTH", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IWOTH)},
    {"S_IXOTH", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IXOTH)},
    {"S_IFMT", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IFMT)},
    {"S_IFREG", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IFREG)},
    {"S_IFDIR", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IFDIR)},
    {"S_IFLNK", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IFLNK)},
    {"S_IFCHR", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IFCHR)},
    {"S_IFBLK", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IFBLK)},
    {"S_IFIFO", "I", nullptr, $STATIC, $staticField(UnixConstants, S_IFIFO)},
    {"R_OK", "I", nullptr, $STATIC, $staticField(UnixConstants, R_OK)},
    {"W_OK", "I", nullptr, $STATIC, $staticField(UnixConstants, W_OK)},
    {"X_OK", "I", nullptr, $STATIC, $staticField(UnixConstants, X_OK)},
    {"F_OK", "I", nullptr, $STATIC, $staticField(UnixConstants, F_OK)},
    {"ENOENT", "I", nullptr, $STATIC, $staticField(UnixConstants, ENOENT)},
    {"ENXIO", "I", nullptr, $STATIC, $staticField(UnixConstants, ENXIO)},
    {"EACCES", "I", nullptr, $STATIC, $staticField(UnixConstants, EACCES)},
    {"EEXIST", "I", nullptr, $STATIC, $staticField(UnixConstants, EEXIST)},
    {"ENOTDIR", "I", nullptr, $STATIC, $staticField(UnixConstants, ENOTDIR)},
    {"EINVAL", "I", nullptr, $STATIC, $staticField(UnixConstants, EINVAL)},
    {"EXDEV", "I", nullptr, $STATIC, $staticField(UnixConstants, EXDEV)},
    {"EISDIR", "I", nullptr, $STATIC, $staticField(UnixConstants, EISDIR)},
    {"ENOTEMPTY", "I", nullptr, $STATIC, $staticField(UnixConstants, ENOTEMPTY)},
    {"ENOSPC", "I", nullptr, $STATIC, $staticField(UnixConstants, ENOSPC)},
    {"EAGAIN", "I", nullptr, $STATIC, $staticField(UnixConstants, EAGAIN)},
    {"EWOULDBLOCK", "I", nullptr, $STATIC, $staticField(UnixConstants, EWOULDBLOCK)},
    {"ENOSYS", "I", nullptr, $STATIC, $staticField(UnixConstants, ENOSYS)},
    {"ELOOP", "I", nullptr, $STATIC, $staticField(UnixConstants, ELOOP)},
    {"EROFS", "I", nullptr, $STATIC, $staticField(UnixConstants, EROFS)},
    {"ENODATA", "I", nullptr, $STATIC, $staticField(UnixConstants, ENODATA)},
    {"XATTR_NOT_FOUND", "I", nullptr, $STATIC, $staticField(UnixConstants, XATTR_NOT_FOUND)},
    {"ERANGE", "I", nullptr, $STATIC, $staticField(UnixConstants, ERANGE)},
    {"EMFILE", "I", nullptr, $STATIC, $staticField(UnixConstants, EMFILE)},
    {"AT_SYMLINK_NOFOLLOW", "I", nullptr, $STATIC, $staticField(UnixConstants, AT_SYMLINK_NOFOLLOW)},
    {"AT_REMOVEDIR", "I", nullptr, $STATIC, $staticField(UnixConstants, AT_REMOVEDIR)},
    {}
};

$MethodInfo _UnixConstants_MethodInfo_[] = {
    {"<init>", "()V", nullptr, $PRIVATE, $method(UnixConstants, init$, void)},
    {}
};

$ClassInfo _UnixConstants_ClassInfo_ = {
    $ACC_SUPER,
    "sun.nio.fs.UnixConstants",
    "java.lang.Object",
    nullptr,
    _UnixConstants_FieldInfo_,
    _UnixConstants_MethodInfo_,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    nullptr
};

$Object* allocate$UnixConstants($Class* clazz) {
    return $of($alloc(UnixConstants));
}

void UnixConstants::init$() {
}

void clinit$UnixConstants($Class* class$) {
}

UnixConstants::UnixConstants() {
}

$Class* UnixConstants::load$($String* name, bool initialize) {
	$loadClass(UnixConstants, name, initialize, &_UnixConstants_ClassInfo_, clinit$UnixConstants, allocate$UnixConstants);
    return class$;
}

$Class* UnixConstants::class$ = nullptr;

        } // fs
    } // nio
} // sun