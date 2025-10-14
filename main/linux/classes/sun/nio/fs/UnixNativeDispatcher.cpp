#include <sun/nio/fs/UnixNativeDispatcher.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $NullPointerException = ::java::lang::NullPointerException;
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

$FieldInfo _UnixNativeDispatcher_FieldInfo_[] = {
	{"SUPPORTS_OPENAT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_OPENAT)},
	{"SUPPORTS_FUTIMES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_FUTIMES)},
	{"SUPPORTS_FUTIMENS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_FUTIMENS)},
	{"SUPPORTS_LUTIMES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_LUTIMES)},
	{"SUPPORTS_XATTR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_XATTR)},
	{"SUPPORTS_BIRTHTIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnixNativeDispatcher, SUPPORTS_BIRTHTIME)},
	{"capabilities", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnixNativeDispatcher, capabilities)},
	{}
};

$MethodInfo _UnixNativeDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(UnixNativeDispatcher::*)()>(&UnixNativeDispatcher::init$))},
	{"access", "(Lsun/nio/fs/UnixPath;I)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,int32_t)>(&UnixNativeDispatcher::access)), "sun.nio.fs.UnixException"},
	{"access0", "(JI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&UnixNativeDispatcher::access0)), "sun.nio.fs.UnixException"},
	{"birthtimeSupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&UnixNativeDispatcher::birthtimeSupported))},
	{"chmod", "(Lsun/nio/fs/UnixPath;I)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,int32_t)>(&UnixNativeDispatcher::chmod)), "sun.nio.fs.UnixException"},
	{"chmod0", "(JI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&UnixNativeDispatcher::chmod0)), "sun.nio.fs.UnixException"},
	{"chown", "(Lsun/nio/fs/UnixPath;II)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,int32_t,int32_t)>(&UnixNativeDispatcher::chown)), "sun.nio.fs.UnixException"},
	{"chown0", "(JII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int32_t)>(&UnixNativeDispatcher::chown0)), "sun.nio.fs.UnixException"},
	{"close", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&UnixNativeDispatcher::close))},
	{"close0", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t)>(&UnixNativeDispatcher::close0))},
	{"closedir", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&UnixNativeDispatcher::closedir)), "sun.nio.fs.UnixException"},
	{"copyToNativeBuffer", "(Lsun/nio/fs/UnixPath;)Lsun/nio/fs/NativeBuffer;", nullptr, $STATIC, $method(static_cast<$NativeBuffer*(*)($UnixPath*)>(&UnixNativeDispatcher::copyToNativeBuffer))},
	{"dup", "(I)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&UnixNativeDispatcher::dup)), "sun.nio.fs.UnixException"},
	{"exists", "(Lsun/nio/fs/UnixPath;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($UnixPath*)>(&UnixNativeDispatcher::exists))},
	{"exists0", "(J)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t)>(&UnixNativeDispatcher::exists0))},
	{"fchmod", "(II)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t)>(&UnixNativeDispatcher::fchmod)), "sun.nio.fs.UnixException"},
	{"fchown", "(III)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&UnixNativeDispatcher::fchown)), "sun.nio.fs.UnixException"},
	{"fdopendir", "(I)J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t)>(&UnixNativeDispatcher::fdopendir)), "sun.nio.fs.UnixException"},
	{"fgetxattr", "(I[BJI)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,$bytes*,int64_t,int32_t)>(&UnixNativeDispatcher::fgetxattr)), "sun.nio.fs.UnixException"},
	{"fgetxattr0", "(IJJI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int64_t,int64_t,int32_t)>(&UnixNativeDispatcher::fgetxattr0)), "sun.nio.fs.UnixException"},
	{"flistxattr", "(IJI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int64_t,int32_t)>(&UnixNativeDispatcher::flistxattr)), "sun.nio.fs.UnixException"},
	{"fremovexattr", "(I[B)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$bytes*)>(&UnixNativeDispatcher::fremovexattr)), "sun.nio.fs.UnixException"},
	{"fremovexattr0", "(IJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t)>(&UnixNativeDispatcher::fremovexattr0)), "sun.nio.fs.UnixException"},
	{"fsetxattr", "(I[BJI)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$bytes*,int64_t,int32_t)>(&UnixNativeDispatcher::fsetxattr)), "sun.nio.fs.UnixException"},
	{"fsetxattr0", "(IJJI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t,int64_t,int32_t)>(&UnixNativeDispatcher::fsetxattr0)), "sun.nio.fs.UnixException"},
	{"fstat", "(ILsun/nio/fs/UnixFileAttributes;)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,$UnixFileAttributes*)>(&UnixNativeDispatcher::fstat)), "sun.nio.fs.UnixException"},
	{"fstatat", "(I[BILsun/nio/fs/UnixFileAttributes;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$bytes*,int32_t,$UnixFileAttributes*)>(&UnixNativeDispatcher::fstatat)), "sun.nio.fs.UnixException"},
	{"fstatat0", "(IJILsun/nio/fs/UnixFileAttributes;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t,int32_t,$UnixFileAttributes*)>(&UnixNativeDispatcher::fstatat0)), "sun.nio.fs.UnixException"},
	{"futimens", "(IJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t,int64_t)>(&UnixNativeDispatcher::futimens)), "sun.nio.fs.UnixException"},
	{"futimensSupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&UnixNativeDispatcher::futimensSupported))},
	{"futimes", "(IJJ)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t,int64_t)>(&UnixNativeDispatcher::futimes)), "sun.nio.fs.UnixException"},
	{"futimesSupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&UnixNativeDispatcher::futimesSupported))},
	{"getcwd", "()[B", nullptr, $STATIC | $NATIVE, $method(static_cast<$bytes*(*)()>(&UnixNativeDispatcher::getcwd))},
	{"getgrgid", "(I)[B", nullptr, $STATIC | $NATIVE, $method(static_cast<$bytes*(*)(int32_t)>(&UnixNativeDispatcher::getgrgid)), "sun.nio.fs.UnixException"},
	{"getgrnam", "(Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*)>(&UnixNativeDispatcher::getgrnam)), "sun.nio.fs.UnixException"},
	{"getgrnam0", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&UnixNativeDispatcher::getgrnam0)), "sun.nio.fs.UnixException"},
	{"getlinelen", "(J)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&UnixNativeDispatcher::getlinelen)), "sun.nio.fs.UnixException"},
	{"getpwnam", "(Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*)>(&UnixNativeDispatcher::getpwnam)), "sun.nio.fs.UnixException"},
	{"getpwnam0", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&UnixNativeDispatcher::getpwnam0)), "sun.nio.fs.UnixException"},
	{"getpwuid", "(I)[B", nullptr, $STATIC | $NATIVE, $method(static_cast<$bytes*(*)(int32_t)>(&UnixNativeDispatcher::getpwuid)), "sun.nio.fs.UnixException"},
	{"init", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&UnixNativeDispatcher::init))},
	{"lchown", "(Lsun/nio/fs/UnixPath;II)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,int32_t,int32_t)>(&UnixNativeDispatcher::lchown)), "sun.nio.fs.UnixException"},
	{"lchown0", "(JII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int32_t)>(&UnixNativeDispatcher::lchown0)), "sun.nio.fs.UnixException"},
	{"link", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,$UnixPath*)>(&UnixNativeDispatcher::link)), "sun.nio.fs.UnixException"},
	{"link0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&UnixNativeDispatcher::link0)), "sun.nio.fs.UnixException"},
	{"lstat", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,$UnixFileAttributes*)>(&UnixNativeDispatcher::lstat)), "sun.nio.fs.UnixException"},
	{"lstat0", "(JLsun/nio/fs/UnixFileAttributes;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$UnixFileAttributes*)>(&UnixNativeDispatcher::lstat0)), "sun.nio.fs.UnixException"},
	{"lutimes", "(Lsun/nio/fs/UnixPath;JJ)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,int64_t,int64_t)>(&UnixNativeDispatcher::lutimes)), "sun.nio.fs.UnixException"},
	{"lutimes0", "(JJJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&UnixNativeDispatcher::lutimes0)), "sun.nio.fs.UnixException"},
	{"lutimesSupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&UnixNativeDispatcher::lutimesSupported))},
	{"mkdir", "(Lsun/nio/fs/UnixPath;I)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,int32_t)>(&UnixNativeDispatcher::mkdir)), "sun.nio.fs.UnixException"},
	{"mkdir0", "(JI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&UnixNativeDispatcher::mkdir0)), "sun.nio.fs.UnixException"},
	{"mknod", "(Lsun/nio/fs/UnixPath;IJ)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,int32_t,int64_t)>(&UnixNativeDispatcher::mknod)), "sun.nio.fs.UnixException"},
	{"mknod0", "(JIJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,int64_t)>(&UnixNativeDispatcher::mknod0)), "sun.nio.fs.UnixException"},
	{"open", "(Lsun/nio/fs/UnixPath;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($UnixPath*,int32_t,int32_t)>(&UnixNativeDispatcher::open)), "sun.nio.fs.UnixException"},
	{"open0", "(JII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t,int32_t)>(&UnixNativeDispatcher::open0)), "sun.nio.fs.UnixException"},
	{"openat", "(I[BII)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t,$bytes*,int32_t,int32_t)>(&UnixNativeDispatcher::openat)), "sun.nio.fs.UnixException"},
	{"openat0", "(IJII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int64_t,int32_t,int32_t)>(&UnixNativeDispatcher::openat0)), "sun.nio.fs.UnixException"},
	{"openatSupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&UnixNativeDispatcher::openatSupported))},
	{"opendir", "(Lsun/nio/fs/UnixPath;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($UnixPath*)>(&UnixNativeDispatcher::opendir)), "sun.nio.fs.UnixException"},
	{"opendir0", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&UnixNativeDispatcher::opendir0)), "sun.nio.fs.UnixException"},
	{"read", "(IJI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int64_t,int32_t)>(&UnixNativeDispatcher::read)), "sun.nio.fs.UnixException"},
	{"readdir", "(J)[B", nullptr, $STATIC | $NATIVE, $method(static_cast<$bytes*(*)(int64_t)>(&UnixNativeDispatcher::readdir)), "sun.nio.fs.UnixException"},
	{"readlink", "(Lsun/nio/fs/UnixPath;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($UnixPath*)>(&UnixNativeDispatcher::readlink)), "sun.nio.fs.UnixException"},
	{"readlink0", "(J)[B", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$bytes*(*)(int64_t)>(&UnixNativeDispatcher::readlink0)), "sun.nio.fs.UnixException"},
	{"realpath", "(Lsun/nio/fs/UnixPath;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($UnixPath*)>(&UnixNativeDispatcher::realpath)), "sun.nio.fs.UnixException"},
	{"realpath0", "(J)[B", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$bytes*(*)(int64_t)>(&UnixNativeDispatcher::realpath0)), "sun.nio.fs.UnixException"},
	{"rename", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,$UnixPath*)>(&UnixNativeDispatcher::rename)), "sun.nio.fs.UnixException"},
	{"rename0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&UnixNativeDispatcher::rename0)), "sun.nio.fs.UnixException"},
	{"renameat", "(I[BI[B)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$bytes*,int32_t,$bytes*)>(&UnixNativeDispatcher::renameat)), "sun.nio.fs.UnixException"},
	{"renameat0", "(IJIJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t,int32_t,int64_t)>(&UnixNativeDispatcher::renameat0)), "sun.nio.fs.UnixException"},
	{"rewind", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&UnixNativeDispatcher::rewind)), "sun.nio.fs.UnixException"},
	{"rmdir", "(Lsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*)>(&UnixNativeDispatcher::rmdir)), "sun.nio.fs.UnixException"},
	{"rmdir0", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&UnixNativeDispatcher::rmdir0)), "sun.nio.fs.UnixException"},
	{"stat", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileAttributes;)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,$UnixFileAttributes*)>(&UnixNativeDispatcher::stat)), "sun.nio.fs.UnixException"},
	{"stat", "(Lsun/nio/fs/UnixPath;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($UnixPath*)>(&UnixNativeDispatcher::stat))},
	{"stat0", "(JLsun/nio/fs/UnixFileAttributes;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$UnixFileAttributes*)>(&UnixNativeDispatcher::stat0)), "sun.nio.fs.UnixException"},
	{"stat1", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&UnixNativeDispatcher::stat1))},
	{"statvfs", "(Lsun/nio/fs/UnixPath;Lsun/nio/fs/UnixFileStoreAttributes;)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,$UnixFileStoreAttributes*)>(&UnixNativeDispatcher::statvfs)), "sun.nio.fs.UnixException"},
	{"statvfs0", "(JLsun/nio/fs/UnixFileStoreAttributes;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$UnixFileStoreAttributes*)>(&UnixNativeDispatcher::statvfs0)), "sun.nio.fs.UnixException"},
	{"strerror", "(I)[B", nullptr, $STATIC | $NATIVE, $method(static_cast<$bytes*(*)(int32_t)>(&UnixNativeDispatcher::strerror))},
	{"symlink", "([BLsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,$UnixPath*)>(&UnixNativeDispatcher::symlink)), "sun.nio.fs.UnixException"},
	{"symlink0", "(JJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t)>(&UnixNativeDispatcher::symlink0)), "sun.nio.fs.UnixException"},
	{"unlink", "(Lsun/nio/fs/UnixPath;)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*)>(&UnixNativeDispatcher::unlink)), "sun.nio.fs.UnixException"},
	{"unlink0", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&UnixNativeDispatcher::unlink0)), "sun.nio.fs.UnixException"},
	{"unlinkat", "(I[BI)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$bytes*,int32_t)>(&UnixNativeDispatcher::unlinkat)), "sun.nio.fs.UnixException"},
	{"unlinkat0", "(IJI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t,int32_t)>(&UnixNativeDispatcher::unlinkat0)), "sun.nio.fs.UnixException"},
	{"utimes", "(Lsun/nio/fs/UnixPath;JJ)V", nullptr, $STATIC, $method(static_cast<void(*)($UnixPath*,int64_t,int64_t)>(&UnixNativeDispatcher::utimes)), "sun.nio.fs.UnixException"},
	{"utimes0", "(JJJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int64_t,int64_t)>(&UnixNativeDispatcher::utimes0)), "sun.nio.fs.UnixException"},
	{"write", "(IJI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int64_t,int32_t)>(&UnixNativeDispatcher::write)), "sun.nio.fs.UnixException"},
	{"xattrSupported", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&UnixNativeDispatcher::xattrSupported))},
	{}
};

#define _METHOD_INDEX_access0 2
#define _METHOD_INDEX_chmod0 5
#define _METHOD_INDEX_chown0 7
#define _METHOD_INDEX_close0 9
#define _METHOD_INDEX_closedir 10
#define _METHOD_INDEX_dup 12
#define _METHOD_INDEX_exists0 14
#define _METHOD_INDEX_fchmod 15
#define _METHOD_INDEX_fchown 16
#define _METHOD_INDEX_fdopendir 17
#define _METHOD_INDEX_fgetxattr0 19
#define _METHOD_INDEX_flistxattr 20
#define _METHOD_INDEX_fremovexattr0 22
#define _METHOD_INDEX_fsetxattr0 24
#define _METHOD_INDEX_fstat 25
#define _METHOD_INDEX_fstatat0 27
#define _METHOD_INDEX_futimens 28
#define _METHOD_INDEX_futimes 30
#define _METHOD_INDEX_getcwd 32
#define _METHOD_INDEX_getgrgid 33
#define _METHOD_INDEX_getgrnam0 35
#define _METHOD_INDEX_getlinelen 36
#define _METHOD_INDEX_getpwnam0 38
#define _METHOD_INDEX_getpwuid 39
#define _METHOD_INDEX_init 40
#define _METHOD_INDEX_lchown0 42
#define _METHOD_INDEX_link0 44
#define _METHOD_INDEX_lstat0 46
#define _METHOD_INDEX_lutimes0 48
#define _METHOD_INDEX_mkdir0 51
#define _METHOD_INDEX_mknod0 53
#define _METHOD_INDEX_open0 55
#define _METHOD_INDEX_openat0 57
#define _METHOD_INDEX_opendir0 60
#define _METHOD_INDEX_read 61
#define _METHOD_INDEX_readdir 62
#define _METHOD_INDEX_readlink0 64
#define _METHOD_INDEX_realpath0 66
#define _METHOD_INDEX_rename0 68
#define _METHOD_INDEX_renameat0 70
#define _METHOD_INDEX_rewind 71
#define _METHOD_INDEX_rmdir0 73
#define _METHOD_INDEX_stat0 76
#define _METHOD_INDEX_stat1 77
#define _METHOD_INDEX_statvfs0 79
#define _METHOD_INDEX_strerror 80
#define _METHOD_INDEX_symlink0 82
#define _METHOD_INDEX_unlink0 84
#define _METHOD_INDEX_unlinkat0 86
#define _METHOD_INDEX_utimes0 88
#define _METHOD_INDEX_write 89

$ClassInfo _UnixNativeDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixNativeDispatcher",
	"java.lang.Object",
	nullptr,
	_UnixNativeDispatcher_FieldInfo_,
	_UnixNativeDispatcher_MethodInfo_
};

$Object* allocate$UnixNativeDispatcher($Class* clazz) {
	return $of($alloc(UnixNativeDispatcher));
}

int32_t UnixNativeDispatcher::capabilities = 0;

void UnixNativeDispatcher::init$() {
}

$NativeBuffer* UnixNativeDispatcher::copyToNativeBuffer($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$var($bytes, cstr, $nc(path)->getByteArrayForSysCalls());
	int32_t size = $nc(cstr)->length + 1;
	$var($NativeBuffer, buffer, $NativeBuffers::getNativeBufferFromCache(size));
	if (buffer == nullptr) {
		$assign(buffer, $NativeBuffers::allocNativeBuffer(size));
	} else if ($equals($nc(buffer)->owner(), path)) {
		return buffer;
	}
	$NativeBuffers::copyCStringToNativeBuffer(cstr, buffer);
	$nc(buffer)->setOwner(path);
	return buffer;
}

$bytes* UnixNativeDispatcher::getcwd() {
	$init(UnixNativeDispatcher);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(UnixNativeDispatcher, getcwd, $bytes*);
	$assign($ret, $invokeNativeStatic(UnixNativeDispatcher, getcwd));
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::dup(int32_t filedes) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, dup, int32_t, int32_t filedes);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, dup, filedes);
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::open($UnixPath* path, int32_t flags, int32_t mode) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = open0($nc(buffer)->address(), flags, mode);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
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

int32_t UnixNativeDispatcher::open0(int64_t pathAddress, int32_t flags, int32_t mode) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, open0, int32_t, int64_t pathAddress, int32_t flags, int32_t mode);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, open0, pathAddress, flags, mode);
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::openat(int32_t dfd, $bytes* path, int32_t flags, int32_t mode) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = openat0(dfd, $nc(buffer)->address(), flags, mode);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
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

int32_t UnixNativeDispatcher::openat0(int32_t dfd, int64_t pathAddress, int32_t flags, int32_t mode) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, openat0, int32_t, int32_t dfd, int64_t pathAddress, int32_t flags, int32_t mode);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, openat0, dfd, pathAddress, flags, mode);
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
	$prepareNativeStatic(UnixNativeDispatcher, close0, void, int32_t fd);
	$invokeNativeStatic(UnixNativeDispatcher, close0, fd);
	$finishNativeStatic();
}

void UnixNativeDispatcher::rewind(int64_t stream) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, rewind, void, int64_t stream);
	$invokeNativeStatic(UnixNativeDispatcher, rewind, stream);
	$finishNativeStatic();
}

int32_t UnixNativeDispatcher::getlinelen(int64_t stream) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, getlinelen, int32_t, int64_t stream);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, getlinelen, stream);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::link($UnixPath* existing, $UnixPath* newfile) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, existingBuffer, copyToNativeBuffer(existing));
	$var($NativeBuffer, newBuffer, copyToNativeBuffer(newfile));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $nc(existingBuffer)->address();
			link0(var$1, $nc(newBuffer)->address());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(newBuffer)->release();
			$nc(existingBuffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::link0(int64_t existingAddress, int64_t newAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, link0, void, int64_t existingAddress, int64_t newAddress);
	$invokeNativeStatic(UnixNativeDispatcher, link0, existingAddress, newAddress);
	$finishNativeStatic();
}

void UnixNativeDispatcher::unlink($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			unlink0($nc(buffer)->address());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::unlink0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, unlink0, void, int64_t pathAddress);
	$invokeNativeStatic(UnixNativeDispatcher, unlink0, pathAddress);
	$finishNativeStatic();
}

void UnixNativeDispatcher::unlinkat(int32_t dfd, $bytes* path, int32_t flag) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			unlinkat0(dfd, $nc(buffer)->address(), flag);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::unlinkat0(int32_t dfd, int64_t pathAddress, int32_t flag) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, unlinkat0, void, int32_t dfd, int64_t pathAddress, int32_t flag);
	$invokeNativeStatic(UnixNativeDispatcher, unlinkat0, dfd, pathAddress, flag);
	$finishNativeStatic();
}

void UnixNativeDispatcher::mknod($UnixPath* path, int32_t mode, int64_t dev) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			mknod0($nc(buffer)->address(), mode, dev);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::mknod0(int64_t pathAddress, int32_t mode, int64_t dev) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, mknod0, void, int64_t pathAddress, int32_t mode, int64_t dev);
	$invokeNativeStatic(UnixNativeDispatcher, mknod0, pathAddress, mode, dev);
	$finishNativeStatic();
}

void UnixNativeDispatcher::rename($UnixPath* from, $UnixPath* to) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, fromBuffer, copyToNativeBuffer(from));
	$var($NativeBuffer, toBuffer, copyToNativeBuffer(to));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $nc(fromBuffer)->address();
			rename0(var$1, $nc(toBuffer)->address());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(toBuffer)->release();
			$nc(fromBuffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::rename0(int64_t fromAddress, int64_t toAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, rename0, void, int64_t fromAddress, int64_t toAddress);
	$invokeNativeStatic(UnixNativeDispatcher, rename0, fromAddress, toAddress);
	$finishNativeStatic();
}

void UnixNativeDispatcher::renameat(int32_t fromfd, $bytes* from, int32_t tofd, $bytes* to) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, fromBuffer, $NativeBuffers::asNativeBuffer(from));
	$var($NativeBuffer, toBuffer, $NativeBuffers::asNativeBuffer(to));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int32_t var$1 = fromfd;
			int64_t var$2 = $nc(fromBuffer)->address();
			int32_t var$3 = tofd;
			renameat0(var$1, var$2, var$3, $nc(toBuffer)->address());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(toBuffer)->release();
			$nc(fromBuffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::renameat0(int32_t fromfd, int64_t fromAddress, int32_t tofd, int64_t toAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, renameat0, void, int32_t fromfd, int64_t fromAddress, int32_t tofd, int64_t toAddress);
	$invokeNativeStatic(UnixNativeDispatcher, renameat0, fromfd, fromAddress, tofd, toAddress);
	$finishNativeStatic();
}

void UnixNativeDispatcher::mkdir($UnixPath* path, int32_t mode) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			mkdir0($nc(buffer)->address(), mode);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::mkdir0(int64_t pathAddress, int32_t mode) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, mkdir0, void, int64_t pathAddress, int32_t mode);
	$invokeNativeStatic(UnixNativeDispatcher, mkdir0, pathAddress, mode);
	$finishNativeStatic();
}

void UnixNativeDispatcher::rmdir($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			rmdir0($nc(buffer)->address());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::rmdir0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, rmdir0, void, int64_t pathAddress);
	$invokeNativeStatic(UnixNativeDispatcher, rmdir0, pathAddress);
	$finishNativeStatic();
}

$bytes* UnixNativeDispatcher::readlink($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, readlink0($nc(buffer)->address()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
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

$bytes* UnixNativeDispatcher::readlink0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(UnixNativeDispatcher, readlink0, $bytes*, int64_t pathAddress);
	$assign($ret, $invokeNativeStatic(UnixNativeDispatcher, readlink0, pathAddress));
	$finishNativeStatic();
	return $ret;
}

$bytes* UnixNativeDispatcher::realpath($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, realpath0($nc(buffer)->address()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
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

$bytes* UnixNativeDispatcher::realpath0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(UnixNativeDispatcher, realpath0, $bytes*, int64_t pathAddress);
	$assign($ret, $invokeNativeStatic(UnixNativeDispatcher, realpath0, pathAddress));
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::symlink($bytes* name1, $UnixPath* name2) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, targetBuffer, $NativeBuffers::asNativeBuffer(name1));
	$var($NativeBuffer, linkBuffer, copyToNativeBuffer(name2));
	{
		$var($Throwable, var$0, nullptr);
		try {
			int64_t var$1 = $nc(targetBuffer)->address();
			symlink0(var$1, $nc(linkBuffer)->address());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(linkBuffer)->release();
			$nc(targetBuffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::symlink0(int64_t name1, int64_t name2) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, symlink0, void, int64_t name1, int64_t name2);
	$invokeNativeStatic(UnixNativeDispatcher, symlink0, name1, name2);
	$finishNativeStatic();
}

void UnixNativeDispatcher::stat($UnixPath* path, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			stat0($nc(buffer)->address(), attrs);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::stat0(int64_t pathAddress, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, stat0, void, int64_t pathAddress, $UnixFileAttributes* attrs);
	$invokeNativeStatic(UnixNativeDispatcher, stat0, pathAddress, attrs);
	$finishNativeStatic();
}

int32_t UnixNativeDispatcher::stat($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = stat1($nc(buffer)->address());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
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

int32_t UnixNativeDispatcher::stat1(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, stat1, int32_t, int64_t pathAddress);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, stat1, pathAddress);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::lstat($UnixPath* path, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			lstat0($nc(buffer)->address(), attrs);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::lstat0(int64_t pathAddress, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, lstat0, void, int64_t pathAddress, $UnixFileAttributes* attrs);
	$invokeNativeStatic(UnixNativeDispatcher, lstat0, pathAddress, attrs);
	$finishNativeStatic();
}

void UnixNativeDispatcher::fstat(int32_t fd, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, fstat, void, int32_t fd, $UnixFileAttributes* attrs);
	$invokeNativeStatic(UnixNativeDispatcher, fstat, fd, attrs);
	$finishNativeStatic();
}

void UnixNativeDispatcher::fstatat(int32_t dfd, $bytes* path, int32_t flag, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			fstatat0(dfd, $nc(buffer)->address(), flag, attrs);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::fstatat0(int32_t dfd, int64_t pathAddress, int32_t flag, $UnixFileAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, fstatat0, void, int32_t dfd, int64_t pathAddress, int32_t flag, $UnixFileAttributes* attrs);
	$invokeNativeStatic(UnixNativeDispatcher, fstatat0, dfd, pathAddress, flag, attrs);
	$finishNativeStatic();
}

void UnixNativeDispatcher::chown($UnixPath* path, int32_t uid, int32_t gid) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			chown0($nc(buffer)->address(), uid, gid);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::chown0(int64_t pathAddress, int32_t uid, int32_t gid) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, chown0, void, int64_t pathAddress, int32_t uid, int32_t gid);
	$invokeNativeStatic(UnixNativeDispatcher, chown0, pathAddress, uid, gid);
	$finishNativeStatic();
}

void UnixNativeDispatcher::lchown($UnixPath* path, int32_t uid, int32_t gid) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			lchown0($nc(buffer)->address(), uid, gid);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::lchown0(int64_t pathAddress, int32_t uid, int32_t gid) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, lchown0, void, int64_t pathAddress, int32_t uid, int32_t gid);
	$invokeNativeStatic(UnixNativeDispatcher, lchown0, pathAddress, uid, gid);
	$finishNativeStatic();
}

void UnixNativeDispatcher::fchown(int32_t fd, int32_t uid, int32_t gid) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, fchown, void, int32_t fd, int32_t uid, int32_t gid);
	$invokeNativeStatic(UnixNativeDispatcher, fchown, fd, uid, gid);
	$finishNativeStatic();
}

void UnixNativeDispatcher::chmod($UnixPath* path, int32_t mode) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			chmod0($nc(buffer)->address(), mode);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::chmod0(int64_t pathAddress, int32_t mode) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, chmod0, void, int64_t pathAddress, int32_t mode);
	$invokeNativeStatic(UnixNativeDispatcher, chmod0, pathAddress, mode);
	$finishNativeStatic();
}

void UnixNativeDispatcher::fchmod(int32_t fd, int32_t mode) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, fchmod, void, int32_t fd, int32_t mode);
	$invokeNativeStatic(UnixNativeDispatcher, fchmod, fd, mode);
	$finishNativeStatic();
}

void UnixNativeDispatcher::utimes($UnixPath* path, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			utimes0($nc(buffer)->address(), times0, times1);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::utimes0(int64_t pathAddress, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, utimes0, void, int64_t pathAddress, int64_t times0, int64_t times1);
	$invokeNativeStatic(UnixNativeDispatcher, utimes0, pathAddress, times0, times1);
	$finishNativeStatic();
}

void UnixNativeDispatcher::futimes(int32_t fd, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, futimes, void, int32_t fd, int64_t times0, int64_t times1);
	$invokeNativeStatic(UnixNativeDispatcher, futimes, fd, times0, times1);
	$finishNativeStatic();
}

void UnixNativeDispatcher::futimens(int32_t fd, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, futimens, void, int32_t fd, int64_t times0, int64_t times1);
	$invokeNativeStatic(UnixNativeDispatcher, futimens, fd, times0, times1);
	$finishNativeStatic();
}

void UnixNativeDispatcher::lutimes($UnixPath* path, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			lutimes0($nc(buffer)->address(), times0, times1);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::lutimes0(int64_t pathAddress, int64_t times0, int64_t times1) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, lutimes0, void, int64_t pathAddress, int64_t times0, int64_t times1);
	$invokeNativeStatic(UnixNativeDispatcher, lutimes0, pathAddress, times0, times1);
	$finishNativeStatic();
}

int64_t UnixNativeDispatcher::opendir($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = opendir0($nc(buffer)->address());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
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

int64_t UnixNativeDispatcher::opendir0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, opendir0, int64_t, int64_t pathAddress);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, opendir0, pathAddress);
	$finishNativeStatic();
	return $ret;
}

int64_t UnixNativeDispatcher::fdopendir(int32_t dfd) {
	$init(UnixNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, fdopendir, int64_t, int32_t dfd);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, fdopendir, dfd);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::closedir(int64_t dir) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, closedir, void, int64_t dir);
	$invokeNativeStatic(UnixNativeDispatcher, closedir, dir);
	$finishNativeStatic();
}

$bytes* UnixNativeDispatcher::readdir(int64_t dir) {
	$init(UnixNativeDispatcher);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(UnixNativeDispatcher, readdir, $bytes*, int64_t dir);
	$assign($ret, $invokeNativeStatic(UnixNativeDispatcher, readdir, dir));
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::read(int32_t fildes, int64_t buf, int32_t nbyte) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, read, int32_t, int32_t fildes, int64_t buf, int32_t nbyte);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, read, fildes, buf, nbyte);
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::write(int32_t fildes, int64_t buf, int32_t nbyte) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, write, int32_t, int32_t fildes, int64_t buf, int32_t nbyte);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, write, fildes, buf, nbyte);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::access($UnixPath* path, int32_t amode) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			access0($nc(buffer)->address(), amode);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::access0(int64_t pathAddress, int32_t amode) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, access0, void, int64_t pathAddress, int32_t amode);
	$invokeNativeStatic(UnixNativeDispatcher, access0, pathAddress, amode);
	$finishNativeStatic();
}

bool UnixNativeDispatcher::exists($UnixPath* path) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = exists0($nc(buffer)->address());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
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

bool UnixNativeDispatcher::exists0(int64_t pathAddress) {
	$init(UnixNativeDispatcher);
	bool $ret = false;
	$prepareNativeStatic(UnixNativeDispatcher, exists0, bool, int64_t pathAddress);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, exists0, pathAddress);
	$finishNativeStatic();
	return $ret;
}

$bytes* UnixNativeDispatcher::getpwuid(int32_t uid) {
	$init(UnixNativeDispatcher);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(UnixNativeDispatcher, getpwuid, $bytes*, int32_t uid);
	$assign($ret, $invokeNativeStatic(UnixNativeDispatcher, getpwuid, uid));
	$finishNativeStatic();
	return $ret;
}

$bytes* UnixNativeDispatcher::getgrgid(int32_t gid) {
	$init(UnixNativeDispatcher);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(UnixNativeDispatcher, getgrgid, $bytes*, int32_t gid);
	$assign($ret, $invokeNativeStatic(UnixNativeDispatcher, getgrgid, gid));
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::getpwnam($String* name) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer($($Util::toBytes(name))));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getpwnam0($nc(buffer)->address());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
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

int32_t UnixNativeDispatcher::getpwnam0(int64_t nameAddress) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, getpwnam0, int32_t, int64_t nameAddress);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, getpwnam0, nameAddress);
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::getgrnam($String* name) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer($($Util::toBytes(name))));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getgrnam0($nc(buffer)->address());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(buffer)->release();
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

int32_t UnixNativeDispatcher::getgrnam0(int64_t nameAddress) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, getgrnam0, int32_t, int64_t nameAddress);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, getgrnam0, nameAddress);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::statvfs($UnixPath* path, $UnixFileStoreAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$var($NativeBuffer, buffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		try {
			statvfs0($nc(buffer)->address(), attrs);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(buffer)->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void UnixNativeDispatcher::statvfs0(int64_t pathAddress, $UnixFileStoreAttributes* attrs) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, statvfs0, void, int64_t pathAddress, $UnixFileStoreAttributes* attrs);
	$invokeNativeStatic(UnixNativeDispatcher, statvfs0, pathAddress, attrs);
	$finishNativeStatic();
}

$bytes* UnixNativeDispatcher::strerror(int32_t errnum) {
	$init(UnixNativeDispatcher);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(UnixNativeDispatcher, strerror, $bytes*, int32_t errnum);
	$assign($ret, $invokeNativeStatic(UnixNativeDispatcher, strerror, errnum));
	$finishNativeStatic();
	return $ret;
}

int32_t UnixNativeDispatcher::fgetxattr(int32_t filedes, $bytes* name, int64_t valueAddress, int32_t valueLen) {
	$init(UnixNativeDispatcher);
	{
		$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(name));
		{
			$var($Throwable, var$0, nullptr);
			int32_t var$2 = 0;
			bool return$1 = false;
			try {
				try {
					var$2 = fgetxattr0(filedes, $nc(buffer)->address(), valueAddress, valueLen);
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (buffer != nullptr) {
						try {
							buffer->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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
	}
	$shouldNotReachHere();
}

int32_t UnixNativeDispatcher::fgetxattr0(int32_t filedes, int64_t nameAddress, int64_t valueAddress, int32_t valueLen) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, fgetxattr0, int32_t, int32_t filedes, int64_t nameAddress, int64_t valueAddress, int32_t valueLen);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, fgetxattr0, filedes, nameAddress, valueAddress, valueLen);
	$finishNativeStatic();
	return $ret;
}

void UnixNativeDispatcher::fsetxattr(int32_t filedes, $bytes* name, int64_t valueAddress, int32_t valueLen) {
	$init(UnixNativeDispatcher);
	{
		$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(name));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					fsetxattr0(filedes, $nc(buffer)->address(), valueAddress, valueLen);
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (buffer != nullptr) {
						try {
							buffer->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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
}

void UnixNativeDispatcher::fsetxattr0(int32_t filedes, int64_t nameAddress, int64_t valueAddress, int32_t valueLen) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, fsetxattr0, void, int32_t filedes, int64_t nameAddress, int64_t valueAddress, int32_t valueLen);
	$invokeNativeStatic(UnixNativeDispatcher, fsetxattr0, filedes, nameAddress, valueAddress, valueLen);
	$finishNativeStatic();
}

void UnixNativeDispatcher::fremovexattr(int32_t filedes, $bytes* name) {
	$init(UnixNativeDispatcher);
	{
		$var($NativeBuffer, buffer, $NativeBuffers::asNativeBuffer(name));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					fremovexattr0(filedes, $nc(buffer)->address());
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (buffer != nullptr) {
						try {
							buffer->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
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
}

void UnixNativeDispatcher::fremovexattr0(int32_t filedes, int64_t nameAddress) {
	$init(UnixNativeDispatcher);
	$prepareNativeStatic(UnixNativeDispatcher, fremovexattr0, void, int32_t filedes, int64_t nameAddress);
	$invokeNativeStatic(UnixNativeDispatcher, fremovexattr0, filedes, nameAddress);
	$finishNativeStatic();
}

int32_t UnixNativeDispatcher::flistxattr(int32_t filedes, int64_t listAddress, int32_t size) {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, flistxattr, int32_t, int32_t filedes, int64_t listAddress, int32_t size);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, flistxattr, filedes, listAddress, size);
	$finishNativeStatic();
	return $ret;
}

bool UnixNativeDispatcher::openatSupported() {
	$init(UnixNativeDispatcher);
	return ((int32_t)(UnixNativeDispatcher::capabilities & (uint32_t)UnixNativeDispatcher::SUPPORTS_OPENAT)) != 0;
}

bool UnixNativeDispatcher::futimesSupported() {
	$init(UnixNativeDispatcher);
	return ((int32_t)(UnixNativeDispatcher::capabilities & (uint32_t)UnixNativeDispatcher::SUPPORTS_FUTIMES)) != 0;
}

bool UnixNativeDispatcher::futimensSupported() {
	$init(UnixNativeDispatcher);
	return ((int32_t)(UnixNativeDispatcher::capabilities & (uint32_t)UnixNativeDispatcher::SUPPORTS_FUTIMENS)) != 0;
}

bool UnixNativeDispatcher::lutimesSupported() {
	$init(UnixNativeDispatcher);
	return ((int32_t)(UnixNativeDispatcher::capabilities & (uint32_t)UnixNativeDispatcher::SUPPORTS_LUTIMES)) != 0;
}

bool UnixNativeDispatcher::birthtimeSupported() {
	$init(UnixNativeDispatcher);
	return ((int32_t)(UnixNativeDispatcher::capabilities & (uint32_t)UnixNativeDispatcher::SUPPORTS_BIRTHTIME)) != 0;
}

bool UnixNativeDispatcher::xattrSupported() {
	$init(UnixNativeDispatcher);
	return ((int32_t)(UnixNativeDispatcher::capabilities & (uint32_t)UnixNativeDispatcher::SUPPORTS_XATTR)) != 0;
}

int32_t UnixNativeDispatcher::init() {
	$init(UnixNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(UnixNativeDispatcher, init, int32_t);
	$ret = $invokeNativeStatic(UnixNativeDispatcher, init);
	$finishNativeStatic();
	return $ret;
}

void clinit$UnixNativeDispatcher($Class* class$) {
	{
		$BootLoader::loadLibrary("nio"_s);
		UnixNativeDispatcher::capabilities = UnixNativeDispatcher::init();
	}
}

UnixNativeDispatcher::UnixNativeDispatcher() {
}

$Class* UnixNativeDispatcher::load$($String* name, bool initialize) {
	$loadClass(UnixNativeDispatcher, name, initialize, &_UnixNativeDispatcher_ClassInfo_, clinit$UnixNativeDispatcher, allocate$UnixNativeDispatcher);
	return class$;
}

$Class* UnixNativeDispatcher::class$ = nullptr;

		} // fs
	} // nio
} // sun