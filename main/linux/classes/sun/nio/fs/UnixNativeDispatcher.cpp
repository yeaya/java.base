#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <jdk/internal/loader/BootLoader.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/NativeBuffers.h>
#include <sun/nio/fs/UnixFileAttributes.h>
#include <sun/nio/fs/UnixFileStoreAttributes.h>
#include <sun/nio/fs/UnixPath.h>
#include <sun/nio/fs/Util.h>
#include <jcpp.h>

#undef SUPPORTS_BIRTHTIME
#undef SUPPORTS_FUTIMENS
#undef SUPPORTS_FUTIMES
#undef SUPPORTS_LUTIMES
#undef SUPPORTS_OPENAT
#undef SUPPORTS_XATTR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $NativeBuffers = ::sun::nio::fs::NativeBuffers;
using $UnixFileAttributes = ::sun::nio::fs::UnixFileAttributes;
using $UnixFileStoreAttributes = ::sun::nio::fs::UnixFileStoreAttributes;
using $UnixPath = ::sun::nio::fs::UnixPath;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

int32_t UnixNativeDispatcher::capabilities = 0;

void UnixNativeDispatcher::init$() {
}

$NativeBuffer* UnixNativeDispatcher::copyToNativeBuffer($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($bytes, cstr, $nc(path)->getByteArrayForSysCalls());
	int32_t size = $nc(cstr)->length + 1;
	$var($NativeBuffer, buffer, $NativeBuffers::getNativeBufferFromCache(size));
	if (buffer == nullptr) {
		$assign(buffer, $NativeBuffers::allocNativeBuffer(size));
	} else if ($equals(buffer->owner(), path)) {
		return buffer;
	}
	$NativeBuffers::copyCStringToNativeBuffer(cstr, buffer);
	$nc(buffer)->setOwner(path);
	return buffer;
}

$bytes* UnixNativeDispatcher::getcwd() {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(getcwd, $bytes*);
	$var($bytes, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::dup(int32_t filedes) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(dup, int32_t, int32_t filedes);
	int32_t $ret = $invokeNativeStatic(filedes);
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::open($UnixPath* path, int32_t flags, int32_t mode) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = open0($nc(buffer)->address(), flags, mode);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t UnixNativeDispatcher::open0(int64_t pathAddress, int32_t flags, int32_t mode) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(open0, int32_t, int64_t pathAddress, int32_t flags, int32_t mode);
	int32_t $ret = $invokeNativeStatic(pathAddress, flags, mode);
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::openat(int32_t dfd, $bytes* path, int32_t flags, int32_t mode) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = openat0(dfd, $nc(buffer)->address(), flags, mode);
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t UnixNativeDispatcher::openat0(int32_t dfd, int64_t pathAddress, int32_t flags, int32_t mode) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(openat0, int32_t, int32_t dfd, int64_t pathAddress, int32_t flags, int32_t mode);
	int32_t $ret = $invokeNativeStatic(dfd, pathAddress, flags, mode);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::close(int32_t fd) {
	$init(UnixNativeDispatcher);
	if (fd != -1) {
		close0(fd);
	}
}

void UnixNativeDispatcher::close0(int32_t fd) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(close0, void, int32_t fd);
	$invokeNativeStatic(fd);
	$finishNativeStatic();
}

void UnixNativeDispatcher::rewind(int64_t stream) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(rewind, void, int64_t stream);
	$invokeNativeStatic(stream);
	$finishNativeStatic();
}

int32_t UnixNativeDispatcher::getlinelen(int64_t stream) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(getlinelen, int32_t, int64_t stream);
	int32_t $ret = $invokeNativeStatic(stream);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::link($UnixPath* existing, $UnixPath* newfile) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, existingBuffer, copyToNativeBuffer(existing));
	$var($NativeBuffer, newBuffer, copyToNativeBuffer(newfile));
	$var($Throwable, var$0, nullptr);
	try {
		int64_t var$1 = $nc(existingBuffer)->address();
		link0(var$1, $nc(newBuffer)->address());
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		$nc(newBuffer)->release();
		$nc(existingBuffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::link0(int64_t existingAddress, int64_t newAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(link0, void, int64_t existingAddress, int64_t newAddress);
	$invokeNativeStatic(existingAddress, newAddress);
	$finishNativeStatic();
}

void UnixNativeDispatcher::unlink($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		unlink0($nc(buffer)->address());
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::unlink0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(unlink0, void, int64_t pathAddress);
	$invokeNativeStatic(pathAddress);
	$finishNativeStatic();
}

void UnixNativeDispatcher::unlinkat(int32_t dfd, $bytes* path, int32_t flag) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		unlinkat0(dfd, $nc(buffer)->address(), flag);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::unlinkat0(int32_t dfd, int64_t pathAddress, int32_t flag) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(unlinkat0, void, int32_t dfd, int64_t pathAddress, int32_t flag);
	$invokeNativeStatic(dfd, pathAddress, flag);
	$finishNativeStatic();
}

void UnixNativeDispatcher::mknod($UnixPath* path, int32_t mode, int64_t dev) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		mknod0($nc(buffer)->address(), mode, dev);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::mknod0(int64_t pathAddress, int32_t mode, int64_t dev) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(mknod0, void, int64_t pathAddress, int32_t mode, int64_t dev);
	$invokeNativeStatic(pathAddress, mode, dev);
	$finishNativeStatic();
}

void UnixNativeDispatcher::rename($UnixPath* from, $UnixPath* to) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, fromBuffer, copyToNativeBuffer(from));
	$var($NativeBuffer, toBuffer, copyToNativeBuffer(to));
	$var($Throwable, var$0, nullptr);
	try {
		int64_t var$1 = $nc(fromBuffer)->address();
		rename0(var$1, $nc(toBuffer)->address());
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		$nc(toBuffer)->release();
		$nc(fromBuffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::rename0(int64_t fromAddress, int64_t toAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(rename0, void, int64_t fromAddress, int64_t toAddress);
	$invokeNativeStatic(fromAddress, toAddress);
	$finishNativeStatic();
}

void UnixNativeDispatcher::renameat(int32_t fromfd, $bytes* from, int32_t tofd, $bytes* to) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, fromBuffer, $NativeBuffers::asNativeBuffer(from));
	$var($NativeBuffer, toBuffer, $NativeBuffers::asNativeBuffer(to));
	$var($Throwable, var$0, nullptr);
	try {
		int64_t var$1 = $nc(fromBuffer)->address();
		renameat0(fromfd, var$1, tofd, $nc(toBuffer)->address());
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		$nc(toBuffer)->release();
		$nc(fromBuffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::renameat0(int32_t fromfd, int64_t fromAddress, int32_t tofd, int64_t toAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(renameat0, void, int32_t fromfd, int64_t fromAddress, int32_t tofd, int64_t toAddress);
	$invokeNativeStatic(fromfd, fromAddress, tofd, toAddress);
	$finishNativeStatic();
}

void UnixNativeDispatcher::mkdir($UnixPath* path, int32_t mode) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		mkdir0($nc(buffer)->address(), mode);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::mkdir0(int64_t pathAddress, int32_t mode) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(mkdir0, void, int64_t pathAddress, int32_t mode);
	$invokeNativeStatic(pathAddress, mode);
	$finishNativeStatic();
}

void UnixNativeDispatcher::rmdir($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		rmdir0($nc(buffer)->address());
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::rmdir0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(rmdir0, void, int64_t pathAddress);
	$invokeNativeStatic(pathAddress);
	$finishNativeStatic();
}

$bytes* UnixNativeDispatcher::readlink($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	$var($bytes, var$2, nullptr);
	bool return$1 = false;
	try {
		$assign(var$2, readlink0($nc(buffer)->address()));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$bytes* UnixNativeDispatcher::readlink0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(readlink0, $bytes*, int64_t pathAddress);
	$var($bytes, $ret, $invokeNativeStaticObject(pathAddress));
	$finishNativeStatic();
	return $ret;
}

$bytes* UnixNativeDispatcher::realpath($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	$var($bytes, var$2, nullptr);
	bool return$1 = false;
	try {
		$assign(var$2, realpath0($nc(buffer)->address()));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

$bytes* UnixNativeDispatcher::realpath0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(realpath0, $bytes*, int64_t pathAddress);
	$var($bytes, $ret, $invokeNativeStaticObject(pathAddress));
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::symlink($bytes* name1, $UnixPath* name2) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, targetBuffer, $NativeBuffers::asNativeBuffer(name1));
	$var($NativeBuffer, linkBuffer, copyToNativeBuffer(name2));
	$var($Throwable, var$0, nullptr);
	try {
		int64_t var$1 = $nc(targetBuffer)->address();
		symlink0(var$1, $nc(linkBuffer)->address());
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} /*finally*/ {
		$nc(linkBuffer)->release();
		$nc(targetBuffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::symlink0(int64_t name1, int64_t name2) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(symlink0, void, int64_t name1, int64_t name2);
	$invokeNativeStatic(name1, name2);
	$finishNativeStatic();
}

void UnixNativeDispatcher::stat($UnixPath* path, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		stat0($nc(buffer)->address(), attrs);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::stat0(int64_t pathAddress, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(stat0, void, int64_t pathAddress, $UnixFileAttributes* attrs);
	$invokeNativeStatic(pathAddress, attrs);
	$finishNativeStatic();
}

int32_t UnixNativeDispatcher::stat($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = stat1($nc(buffer)->address());
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t UnixNativeDispatcher::stat1(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(stat1, int32_t, int64_t pathAddress);
	int32_t $ret = $invokeNativeStatic(pathAddress);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::lstat($UnixPath* path, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		lstat0($nc(buffer)->address(), attrs);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::lstat0(int64_t pathAddress, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(lstat0, void, int64_t pathAddress, $UnixFileAttributes* attrs);
	$invokeNativeStatic(pathAddress, attrs);
	$finishNativeStatic();
}

void UnixNativeDispatcher::fstat(int32_t fd, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(fstat, void, int32_t fd, $UnixFileAttributes* attrs);
	$invokeNativeStatic(fd, attrs);
	$finishNativeStatic();
}

void UnixNativeDispatcher::fstatat(int32_t dfd, $bytes* path, int32_t flag, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		fstatat0(dfd, $nc(buffer)->address(), flag, attrs);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::fstatat0(int32_t dfd, int64_t pathAddress, int32_t flag, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(fstatat0, void, int32_t dfd, int64_t pathAddress, int32_t flag, $UnixFileAttributes* attrs);
	$invokeNativeStatic(dfd, pathAddress, flag, attrs);
	$finishNativeStatic();
}

void UnixNativeDispatcher::chown($UnixPath* path, int32_t uid, int32_t gid) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		chown0($nc(buffer)->address(), uid, gid);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::chown0(int64_t pathAddress, int32_t uid, int32_t gid) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(chown0, void, int64_t pathAddress, int32_t uid, int32_t gid);
	$invokeNativeStatic(pathAddress, uid, gid);
	$finishNativeStatic();
}

void UnixNativeDispatcher::lchown($UnixPath* path, int32_t uid, int32_t gid) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		lchown0($nc(buffer)->address(), uid, gid);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::lchown0(int64_t pathAddress, int32_t uid, int32_t gid) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(lchown0, void, int64_t pathAddress, int32_t uid, int32_t gid);
	$invokeNativeStatic(pathAddress, uid, gid);
	$finishNativeStatic();
}

void UnixNativeDispatcher::fchown(int32_t fd, int32_t uid, int32_t gid) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(fchown, void, int32_t fd, int32_t uid, int32_t gid);
	$invokeNativeStatic(fd, uid, gid);
	$finishNativeStatic();
}

void UnixNativeDispatcher::chmod($UnixPath* path, int32_t mode) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		chmod0($nc(buffer)->address(), mode);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::chmod0(int64_t pathAddress, int32_t mode) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(chmod0, void, int64_t pathAddress, int32_t mode);
	$invokeNativeStatic(pathAddress, mode);
	$finishNativeStatic();
}

void UnixNativeDispatcher::fchmod(int32_t fd, int32_t mode) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(fchmod, void, int32_t fd, int32_t mode);
	$invokeNativeStatic(fd, mode);
	$finishNativeStatic();
}

void UnixNativeDispatcher::utimes($UnixPath* path, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		utimes0($nc(buffer)->address(), times0, times1);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::utimes0(int64_t pathAddress, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(utimes0, void, int64_t pathAddress, int64_t times0, int64_t times1);
	$invokeNativeStatic(pathAddress, times0, times1);
	$finishNativeStatic();
}

void UnixNativeDispatcher::futimes(int32_t fd, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(futimes, void, int32_t fd, int64_t times0, int64_t times1);
	$invokeNativeStatic(fd, times0, times1);
	$finishNativeStatic();
}

void UnixNativeDispatcher::futimens(int32_t fd, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(futimens, void, int32_t fd, int64_t times0, int64_t times1);
	$invokeNativeStatic(fd, times0, times1);
	$finishNativeStatic();
}

void UnixNativeDispatcher::lutimes($UnixPath* path, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		lutimes0($nc(buffer)->address(), times0, times1);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::lutimes0(int64_t pathAddress, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(lutimes0, void, int64_t pathAddress, int64_t times0, int64_t times1);
	$invokeNativeStatic(pathAddress, times0, times1);
	$finishNativeStatic();
}

int64_t UnixNativeDispatcher::opendir($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = opendir0($nc(buffer)->address());
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int64_t UnixNativeDispatcher::opendir0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(opendir0, int64_t, int64_t pathAddress);
	int64_t $ret = $invokeNativeStatic(pathAddress);
	$finishNativeStatic();
	return $ret;
}

int64_t UnixNativeDispatcher::fdopendir(int32_t dfd) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(fdopendir, int64_t, int32_t dfd);
	int64_t $ret = $invokeNativeStatic(dfd);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::closedir(int64_t dir) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(closedir, void, int64_t dir);
	$invokeNativeStatic(dir);
	$finishNativeStatic();
}

$bytes* UnixNativeDispatcher::readdir(int64_t dir) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(readdir, $bytes*, int64_t dir);
	$var($bytes, $ret, $invokeNativeStaticObject(dir));
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::read(int32_t fildes, int64_t buf, int32_t nbyte) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(read, int32_t, int32_t fildes, int64_t buf, int32_t nbyte);
	int32_t $ret = $invokeNativeStatic(fildes, buf, nbyte);
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::write(int32_t fildes, int64_t buf, int32_t nbyte) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(write, int32_t, int32_t fildes, int64_t buf, int32_t nbyte);
	int32_t $ret = $invokeNativeStatic(fildes, buf, nbyte);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::access($UnixPath* path, int32_t amode) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		access0($nc(buffer)->address(), amode);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::access0(int64_t pathAddress, int32_t amode) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(access0, void, int64_t pathAddress, int32_t amode);
	$invokeNativeStatic(pathAddress, amode);
	$finishNativeStatic();
}

bool UnixNativeDispatcher::exists($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		var$2 = exists0($nc(buffer)->address());
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

bool UnixNativeDispatcher::exists0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(exists0, bool, int64_t pathAddress);
	bool $ret = $invokeNativeStatic(pathAddress);
	$finishNativeStatic();
	return $ret;
}

$bytes* UnixNativeDispatcher::getpwuid(int32_t uid) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(getpwuid, $bytes*, int32_t uid);
	$var($bytes, $ret, $invokeNativeStaticObject(uid));
	$finishNativeStatic();
	return $ret;
}

$bytes* UnixNativeDispatcher::getgrgid(int32_t gid) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(getgrgid, $bytes*, int32_t gid);
	$var($bytes, $ret, $invokeNativeStaticObject(gid));
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::getpwnam($String* name) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer($($Util::toBytes(name))));
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = getpwnam0($nc(buffer)->address());
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t UnixNativeDispatcher::getpwnam0(int64_t nameAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(getpwnam0, int32_t, int64_t nameAddress);
	int32_t $ret = $invokeNativeStatic(nameAddress);
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::getgrnam($String* name) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer($($Util::toBytes(name))));
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = getgrnam0($nc(buffer)->address());
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

int32_t UnixNativeDispatcher::getgrnam0(int64_t nameAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(getgrnam0, int32_t, int64_t nameAddress);
	int32_t $ret = $invokeNativeStatic(nameAddress);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::statvfs($UnixPath* path, $UnixFileStoreAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	try {
		statvfs0($nc(buffer)->address(), attrs);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(buffer)->release();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void UnixNativeDispatcher::statvfs0(int64_t pathAddress, $UnixFileStoreAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(statvfs0, void, int64_t pathAddress, $UnixFileStoreAttributes* attrs);
	$invokeNativeStatic(pathAddress, attrs);
	$finishNativeStatic();
}

$bytes* UnixNativeDispatcher::strerror(int32_t errnum) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(strerror, $bytes*, int32_t errnum);
	$var($bytes, $ret, $invokeNativeStaticObject(errnum));
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::fgetxattr(int32_t filedes, $bytes* name, int64_t valueAddress, int32_t valueLen) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	{
		$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(name));
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			try {
				var$2 = fgetxattr0(filedes, $nc(buffer)->address(), valueAddress, valueLen);
				return$1 = true;
				goto $finally;
			} catch ($Throwable& t$) {
				if (buffer != nullptr) {
					try {
						buffer->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (buffer != nullptr) {
				buffer->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t UnixNativeDispatcher::fgetxattr0(int32_t filedes, int64_t nameAddress, int64_t valueAddress, int32_t valueLen) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(fgetxattr0, int32_t, int32_t filedes, int64_t nameAddress, int64_t valueAddress, int32_t valueLen);
	int32_t $ret = $invokeNativeStatic(filedes, nameAddress, valueAddress, valueLen);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::fsetxattr(int32_t filedes, $bytes* name, int64_t valueAddress, int32_t valueLen) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	{
		$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(name));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				fsetxattr0(filedes, $nc(buffer)->address(), valueAddress, valueLen);
			} catch ($Throwable& t$) {
				if (buffer != nullptr) {
					try {
						buffer->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (buffer != nullptr) {
				buffer->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::fsetxattr0(int32_t filedes, int64_t nameAddress, int64_t valueAddress, int32_t valueLen) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(fsetxattr0, void, int32_t filedes, int64_t nameAddress, int64_t valueAddress, int32_t valueLen);
	$invokeNativeStatic(filedes, nameAddress, valueAddress, valueLen);
	$finishNativeStatic();
}

void UnixNativeDispatcher::fremovexattr(int32_t filedes, $bytes* name) {
	$init(UnixNativeDispatcher);
	$useLocalObjectStack();
	{
		$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(name));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				fremovexattr0(filedes, $nc(buffer)->address());
			} catch ($Throwable& t$) {
				if (buffer != nullptr) {
					try {
						buffer->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (buffer != nullptr) {
				buffer->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::fremovexattr0(int32_t filedes, int64_t nameAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(fremovexattr0, void, int32_t filedes, int64_t nameAddress);
	$invokeNativeStatic(filedes, nameAddress);
	$finishNativeStatic();
}

int32_t UnixNativeDispatcher::flistxattr(int32_t filedes, int64_t listAddress, int32_t size) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(flistxattr, int32_t, int32_t filedes, int64_t listAddress, int32_t size);
	int32_t $ret = $invokeNativeStatic(filedes, listAddress, size);
	$finishNativeStatic();
	return $ret;
}

bool UnixNativeDispatcher::openatSupported() {
	$init(UnixNativeDispatcher);
	return (UnixNativeDispatcher::capabilities & UnixNativeDispatcher::SUPPORTS_OPENAT) != 0;
}

bool UnixNativeDispatcher::futimesSupported() {
	$init(UnixNativeDispatcher);
	return (UnixNativeDispatcher::capabilities & UnixNativeDispatcher::SUPPORTS_FUTIMES) != 0;
}

bool UnixNativeDispatcher::futimensSupported() {
	$init(UnixNativeDispatcher);
	return (UnixNativeDispatcher::capabilities & UnixNativeDispatcher::SUPPORTS_FUTIMENS) != 0;
}

bool UnixNativeDispatcher::lutimesSupported() {
	$init(UnixNativeDispatcher);
	return (UnixNativeDispatcher::capabilities & UnixNativeDispatcher::SUPPORTS_LUTIMES) != 0;
}

bool UnixNativeDispatcher::birthtimeSupported() {
	$init(UnixNativeDispatcher);
	return (UnixNativeDispatcher::capabilities & UnixNativeDispatcher::SUPPORTS_BIRTHTIME) != 0;
}

bool UnixNativeDispatcher::xattrSupported() {
	$init(UnixNativeDispatcher);
	return (UnixNativeDispatcher::capabilities & UnixNativeDispatcher::SUPPORTS_XATTR) != 0;
}

int32_t UnixNativeDispatcher::init() {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(init, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::clinit$($Class* clazz) {
	{
		$BootLoader::loadLibrary("nio"_s);
		UnixNativeDispatcher::capabilities = UnixNativeDispatcher::init();
	}
}

UnixNativeDispatcher::UnixNativeDispatcher() {
}

$Class* UnixNativeDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SUPPORTS_OPENAT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_OPENAT)},
		{"SUPPORTS_FUTIMES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_FUTIMES)},
		{"SUPPORTS_FUTIMENS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_FUTIMENS)},
		{"SUPPORTS_LUTIMES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_LUTIMES)},
		{"SUPPORTS_XATTR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_XATTR)},
		{"SUPPORTS_BIRTHTIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_BIRTHTIME)},
		{"capabilities", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixNativeDispatcher, capabilities)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(UnixNativeDispatcher, init$, void)},
		{"access", "(Lsun/nio/fs/UnixPath;I)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, access, void, $UnixPath*, int32_t), "sun.nio.fs.UnixException"},
		{"access0", "(JI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, access0, void, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"birthtimeSupported", "()Z", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, birthtimeSupported, bool)},
		{"chmod", "(Lsun/nio/fs/UnixPath;I)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, chmod, void, $UnixPath*, int32_t), "sun.nio.fs.UnixException"},
		{"chmod0", "(JI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, chmod0, void, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"chown", "(Lsun/nio/fs/UnixPath;II)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, chown, void, $UnixPath*, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"chown0", "(JII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, chown0, void, int64_t, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"close", "(I)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, close, void, int32_t)},
		{"close0", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, close0, void, int32_t)},
		{"closedir", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, closedir, void, int64_t), "sun.nio.fs.UnixException"},
		{"copyToNativeBuffer", "(Lsun/nio/fs/UnixPath;)Lsun/nio/fs/NativeBuffer;", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, copyToNativeBuffer, $NativeBuffer*, $UnixPath*)},
		{"dup", "(I)I", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, dup, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"exists", "(Lsun/nio/fs/UnixPath;)Z", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, exists, bool, $UnixPath*)},
		{"exists0", "(J)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, exists0, bool, int64_t)},
		{"fchmod", "(II)V", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, fchmod, void, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"fchown", "(III)V", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, fchown, void, int32_t, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"fdopendir", "(I)J", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, fdopendir, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"fgetxattr", "(I[BJI)I", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, fgetxattr, int32_t, int32_t, $bytes*, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"fgetxattr0", "(IJJI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, fgetxattr0, int32_t, int32_t, int64_t, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"flistxattr", "(IJI)I", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, flistxattr, int32_t, int32_t, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"fremovexattr", "(I[B)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, fremovexattr, void, int32_t, $bytes*), "sun.nio.fs.UnixException"},
		{"fremovexattr0", "(IJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, fremovexattr0, void, int32_t, int64_t), "sun.nio.fs.UnixException"},
		{"fsetxattr", "(I[BJI)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, fsetxattr, void, int32_t, $bytes*, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"fsetxattr0", "(IJJI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, fsetxattr0, void, int32_t, int64_t, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"fstat", "(ILsun/nio/fs/UnixFileAttributes;)V", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, fstat, void, int32_t, $UnixFileAttributes*), "sun.nio.fs.UnixException"},
		{"fstatat", "(I[BILsun/nio/fs/UnixFileAttributes;)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, fstatat, void, int32_t, $bytes*, int32_t, $UnixFileAttributes*), "sun.nio.fs.UnixException"},
		{"fstatat0", "(IJILsun/nio/fs/UnixFileAttributes;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, fstatat0, void, int32_t, int64_t, int32_t, $UnixFileAttributes*), "sun.nio.fs.UnixException"},
		{"futimens", "(IJJ)V", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, futimens, void, int32_t, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{"futimensSupported", "()Z", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, futimensSupported, bool)},
		{"futimes", "(IJJ)V", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, futimes, void, int32_t, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{"futimesSupported", "()Z", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, futimesSupported, bool)},
		{"getcwd", "()[B", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, getcwd, $bytes*)},
		{"getgrgid", "(I)[B", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, getgrgid, $bytes*, int32_t), "sun.nio.fs.UnixException"},
		{"getgrnam", "(Ljava/lang/String;)I", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, getgrnam, int32_t, $String*), "sun.nio.fs.UnixException"},
		{"getgrnam0", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, getgrnam0, int32_t, int64_t), "sun.nio.fs.UnixException"},
		{"getlinelen", "(J)I", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, getlinelen, int32_t, int64_t), "sun.nio.fs.UnixException"},
		{"getpwnam", "(Ljava/lang/String;)I", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, getpwnam, int32_t, $String*), "sun.nio.fs.UnixException"},
		{"getpwnam0", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, getpwnam0, int32_t, int64_t), "sun.nio.fs.UnixException"},
		{"getpwuid", "(I)[B", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, getpwuid, $bytes*, int32_t), "sun.nio.fs.UnixException"},
		{"init", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, init, int32_t)},
		{"lchown", "(Lsun/nio/fs/UnixPath;II)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, lchown, void, $UnixPath*, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"lchown0", "(JII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, lchown0, void, int64_t, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"link", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, link, void, $UnixPath*, $UnixPath*), "sun.nio.fs.UnixException"},
		{"link0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, link0, void, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{"lstat", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, lstat, void, $UnixPath*, $UnixFileAttributes*), "sun.nio.fs.UnixException"},
		{"lstat0", "(JLsun/nio/fs/UnixFileAttributes;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, lstat0, void, int64_t, $UnixFileAttributes*), "sun.nio.fs.UnixException"},
		{"lutimes", "(Lsun/nio/fs/UnixPath;JJ)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, lutimes, void, $UnixPath*, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{"lutimes0", "(JJJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, lutimes0, void, int64_t, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{"lutimesSupported", "()Z", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, lutimesSupported, bool)},
		{"mkdir", "(Lsun/nio/fs/UnixPath;I)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, mkdir, void, $UnixPath*, int32_t), "sun.nio.fs.UnixException"},
		{"mkdir0", "(JI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, mkdir0, void, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"mknod", "(Lsun/nio/fs/UnixPath;IJ)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, mknod, void, $UnixPath*, int32_t, int64_t), "sun.nio.fs.UnixException"},
		{"mknod0", "(JIJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, mknod0, void, int64_t, int32_t, int64_t), "sun.nio.fs.UnixException"},
		{"open", "(Lsun/nio/fs/UnixPath;II)I", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, open, int32_t, $UnixPath*, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"open0", "(JII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, open0, int32_t, int64_t, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"openat", "(I[BII)I", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, openat, int32_t, int32_t, $bytes*, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"openat0", "(IJII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, openat0, int32_t, int32_t, int64_t, int32_t, int32_t), "sun.nio.fs.UnixException"},
		{"openatSupported", "()Z", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, openatSupported, bool)},
		{"opendir", "(Lsun/nio/fs/UnixPath;)J", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, opendir, int64_t, $UnixPath*), "sun.nio.fs.UnixException"},
		{"opendir0", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, opendir0, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{"read", "(IJI)I", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, read, int32_t, int32_t, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"readdir", "(J)[B", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, readdir, $bytes*, int64_t), "sun.nio.fs.UnixException"},
		{"readlink", "(Lsun/nio/fs/UnixPath;)[B", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, readlink, $bytes*, $UnixPath*), "sun.nio.fs.UnixException"},
		{"readlink0", "(J)[B", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, readlink0, $bytes*, int64_t), "sun.nio.fs.UnixException"},
		{"realpath", "(Lsun/nio/fs/UnixPath;)[B", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, realpath, $bytes*, $UnixPath*), "sun.nio.fs.UnixException"},
		{"realpath0", "(J)[B", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, realpath0, $bytes*, int64_t), "sun.nio.fs.UnixException"},
		{"rename", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, rename, void, $UnixPath*, $UnixPath*), "sun.nio.fs.UnixException"},
		{"rename0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, rename0, void, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{"renameat", "(I[BI[B)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, renameat, void, int32_t, $bytes*, int32_t, $bytes*), "sun.nio.fs.UnixException"},
		{"renameat0", "(IJIJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, renameat0, void, int32_t, int64_t, int32_t, int64_t), "sun.nio.fs.UnixException"},
		{"rewind", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, rewind, void, int64_t), "sun.nio.fs.UnixException"},
		{"rmdir", "(Lsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, rmdir, void, $UnixPath*), "sun.nio.fs.UnixException"},
		{"rmdir0", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, rmdir0, void, int64_t), "sun.nio.fs.UnixException"},
		{"stat", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, stat, void, $UnixPath*, $UnixFileAttributes*), "sun.nio.fs.UnixException"},
		{"stat", "(Lsun/nio/fs/UnixPath;)I", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, stat, int32_t, $UnixPath*)},
		{"stat0", "(JLsun/nio/fs/UnixFileAttributes;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, stat0, void, int64_t, $UnixFileAttributes*), "sun.nio.fs.UnixException"},
		{"stat1", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, stat1, int32_t, int64_t)},
		{"statvfs", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileStoreAttributes;)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, statvfs, void, $UnixPath*, $UnixFileStoreAttributes*), "sun.nio.fs.UnixException"},
		{"statvfs0", "(JLsun/nio/fs/UnixFileStoreAttributes;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, statvfs0, void, int64_t, $UnixFileStoreAttributes*), "sun.nio.fs.UnixException"},
		{"strerror", "(I)[B", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, strerror, $bytes*, int32_t)},
		{"symlink", "([BLsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, symlink, void, $bytes*, $UnixPath*), "sun.nio.fs.UnixException"},
		{"symlink0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, symlink0, void, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{"unlink", "(Lsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, unlink, void, $UnixPath*), "sun.nio.fs.UnixException"},
		{"unlink0", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, unlink0, void, int64_t), "sun.nio.fs.UnixException"},
		{"unlinkat", "(I[BI)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, unlinkat, void, int32_t, $bytes*, int32_t), "sun.nio.fs.UnixException"},
		{"unlinkat0", "(IJI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, unlinkat0, void, int32_t, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"utimes", "(Lsun/nio/fs/UnixPath;JJ)V", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, utimes, void, $UnixPath*, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{"utimes0", "(JJJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, utimes0, void, int64_t, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{"write", "(IJI)I", nullptr, $STATIC | $NATIVE, $staticMethod(UnixNativeDispatcher, write, int32_t, int32_t, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"xattrSupported", "()Z", nullptr, $STATIC, $staticMethod(UnixNativeDispatcher, xattrSupported, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixNativeDispatcher",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnixNativeDispatcher, name, initialize, &classInfo$$, UnixNativeDispatcher::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnixNativeDispatcher);
	});
	return class$;
}

$Class* UnixNativeDispatcher::class$ = nullptr;

		} // fs
	} // nio
} // sun