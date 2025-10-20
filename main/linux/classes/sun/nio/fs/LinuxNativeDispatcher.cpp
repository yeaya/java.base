#include <sun/nio/fs/LinuxNativeDispatcher.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/loader/BootLoader.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/NativeBuffers.h>
#include <sun/nio/fs/UnixMountEntry.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $NativeBuffers = ::sun::nio::fs::NativeBuffers;
using $UnixMountEntry = ::sun::nio::fs::UnixMountEntry;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _LinuxNativeDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LinuxNativeDispatcher::*)()>(&LinuxNativeDispatcher::init$))},
	{"endmntent", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&LinuxNativeDispatcher::endmntent)), "sun.nio.fs.UnixException"},
	{"getmntent", "(JLsun/nio/fs/UnixMountEntry;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int64_t,$UnixMountEntry*,int32_t)>(&LinuxNativeDispatcher::getmntent)), "sun.nio.fs.UnixException"},
	{"getmntent0", "(JLsun/nio/fs/UnixMountEntry;JI)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,$UnixMountEntry*,int64_t,int32_t)>(&LinuxNativeDispatcher::getmntent0)), "sun.nio.fs.UnixException"},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&LinuxNativeDispatcher::init))},
	{"setmntent", "([B[B)J", nullptr, $STATIC, $method(static_cast<int64_t(*)($bytes*,$bytes*)>(&LinuxNativeDispatcher::setmntent)), "sun.nio.fs.UnixException"},
	{"setmntent0", "(JJ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&LinuxNativeDispatcher::setmntent0)), "sun.nio.fs.UnixException"},
	{}
};

#define _METHOD_INDEX_endmntent 1
#define _METHOD_INDEX_getmntent0 3
#define _METHOD_INDEX_init 4
#define _METHOD_INDEX_setmntent0 6

$ClassInfo _LinuxNativeDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.LinuxNativeDispatcher",
	"sun.nio.fs.UnixNativeDispatcher",
	nullptr,
	nullptr,
	_LinuxNativeDispatcher_MethodInfo_
};

$Object* allocate$LinuxNativeDispatcher($Class* clazz) {
	return $of($alloc(LinuxNativeDispatcher));
}

void LinuxNativeDispatcher::init$() {
	$UnixNativeDispatcher::init$();
}

int64_t LinuxNativeDispatcher::setmntent($bytes* filename, $bytes* type) {
	$init(LinuxNativeDispatcher);
	$useLocalCurrentObjectStackCache();
	$var($NativeBuffer, pathBuffer, $NativeBuffers::asNativeBuffer(filename));
	$var($NativeBuffer, typeBuffer, $NativeBuffers::asNativeBuffer(type));
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			int64_t var$3 = $nc(pathBuffer)->address();
			var$2 = setmntent0(var$3, $nc(typeBuffer)->address());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(typeBuffer)->release();
			$nc(pathBuffer)->release();
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

int64_t LinuxNativeDispatcher::setmntent0(int64_t pathAddress, int64_t typeAddress) {
	$init(LinuxNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(LinuxNativeDispatcher, setmntent0, int64_t, int64_t pathAddress, int64_t typeAddress);
	$ret = $invokeNativeStatic(LinuxNativeDispatcher, setmntent0, pathAddress, typeAddress);
	$finishNativeStatic();
	return $ret;
}

int32_t LinuxNativeDispatcher::getmntent(int64_t fp, $UnixMountEntry* entry, int32_t buflen) {
	$init(LinuxNativeDispatcher);
	$useLocalCurrentObjectStackCache();
	$var($NativeBuffer, buffer, $NativeBuffers::getNativeBuffer(buflen));
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			var$2 = getmntent0(fp, entry, $nc(buffer)->address(), buflen);
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

int32_t LinuxNativeDispatcher::getmntent0(int64_t fp, $UnixMountEntry* entry, int64_t buffer, int32_t bufLen) {
	$init(LinuxNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(LinuxNativeDispatcher, getmntent0, int32_t, int64_t fp, $UnixMountEntry* entry, int64_t buffer, int32_t bufLen);
	$ret = $invokeNativeStatic(LinuxNativeDispatcher, getmntent0, fp, entry, buffer, bufLen);
	$finishNativeStatic();
	return $ret;
}

void LinuxNativeDispatcher::endmntent(int64_t stream) {
	$init(LinuxNativeDispatcher);
	$prepareNativeStatic(LinuxNativeDispatcher, endmntent, void, int64_t stream);
	$invokeNativeStatic(LinuxNativeDispatcher, endmntent, stream);
	$finishNativeStatic();
}

void LinuxNativeDispatcher::init() {
	$init(LinuxNativeDispatcher);
	$prepareNativeStatic(LinuxNativeDispatcher, init, void);
	$invokeNativeStatic(LinuxNativeDispatcher, init);
	$finishNativeStatic();
}

void clinit$LinuxNativeDispatcher($Class* class$) {
	{
		$BootLoader::loadLibrary("nio"_s);
		LinuxNativeDispatcher::init();
	}
}

LinuxNativeDispatcher::LinuxNativeDispatcher() {
}

$Class* LinuxNativeDispatcher::load$($String* name, bool initialize) {
	$loadClass(LinuxNativeDispatcher, name, initialize, &_LinuxNativeDispatcher_ClassInfo_, clinit$LinuxNativeDispatcher, allocate$LinuxNativeDispatcher);
	return class$;
}

$Class* LinuxNativeDispatcher::class$ = nullptr;

		} // fs
	} // nio
} // sun