#include <sun/nio/fs/LinuxNativeDispatcher.h>
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

void LinuxNativeDispatcher::init$() {
	$UnixNativeDispatcher::init$();
}

int64_t LinuxNativeDispatcher::setmntent($bytes* filename, $bytes* type) {
	$init(LinuxNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, pathBuffer, $NativeBuffers::asNativeBuffer(filename));
	$var($NativeBuffer, typeBuffer, $NativeBuffers::asNativeBuffer(type));
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		int64_t var$3 = $nc(pathBuffer)->address();
		var$2 = setmntent0(var$3, $nc(typeBuffer)->address());
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$4) {
		$assign(var$0, var$4);
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
	$shouldNotReachHere();
}

int64_t LinuxNativeDispatcher::setmntent0(int64_t pathAddress, int64_t typeAddress) {
	$init(LinuxNativeDispatcher);
	$prepareNativeStatic(setmntent0, int64_t, int64_t pathAddress, int64_t typeAddress);
	int64_t $ret = $invokeNativeStatic(pathAddress, typeAddress);
	$finishNativeStatic();
	return $ret;
}

int32_t LinuxNativeDispatcher::getmntent(int64_t fp, $UnixMountEntry* entry, int32_t buflen) {
	$init(LinuxNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, buffer, $NativeBuffers::getNativeBuffer(buflen));
	$var($Throwable, var$0, nullptr);
	int32_t var$2 = 0;
	bool return$1 = false;
	try {
		var$2 = getmntent0(fp, entry, $nc(buffer)->address(), buflen);
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

int32_t LinuxNativeDispatcher::getmntent0(int64_t fp, $UnixMountEntry* entry, int64_t buffer, int32_t bufLen) {
	$init(LinuxNativeDispatcher);
	$prepareNativeStatic(getmntent0, int32_t, int64_t fp, $UnixMountEntry* entry, int64_t buffer, int32_t bufLen);
	int32_t $ret = $invokeNativeStatic(fp, entry, buffer, bufLen);
	$finishNativeStatic();
	return $ret;
}

void LinuxNativeDispatcher::endmntent(int64_t stream) {
	$init(LinuxNativeDispatcher);
	$prepareNativeStatic(endmntent, void, int64_t stream);
	$invokeNativeStatic(stream);
	$finishNativeStatic();
}

void LinuxNativeDispatcher::init() {
	$init(LinuxNativeDispatcher);
	$prepareNativeStatic(init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void LinuxNativeDispatcher::clinit$($Class* clazz) {
	{
		$BootLoader::loadLibrary("nio"_s);
		LinuxNativeDispatcher::init();
	}
}

LinuxNativeDispatcher::LinuxNativeDispatcher() {
}

$Class* LinuxNativeDispatcher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(LinuxNativeDispatcher, init$, void)},
		{"endmntent", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(LinuxNativeDispatcher, endmntent, void, int64_t), "sun.nio.fs.UnixException"},
		{"getmntent", "(JLsun/nio/fs/UnixMountEntry;I)I", nullptr, $STATIC, $staticMethod(LinuxNativeDispatcher, getmntent, int32_t, int64_t, $UnixMountEntry*, int32_t), "sun.nio.fs.UnixException"},
		{"getmntent0", "(JLsun/nio/fs/UnixMountEntry;JI)I", nullptr, $STATIC | $NATIVE, $staticMethod(LinuxNativeDispatcher, getmntent0, int32_t, int64_t, $UnixMountEntry*, int64_t, int32_t), "sun.nio.fs.UnixException"},
		{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxNativeDispatcher, init, void)},
		{"setmntent", "([B[B)J", nullptr, $STATIC, $staticMethod(LinuxNativeDispatcher, setmntent, int64_t, $bytes*, $bytes*), "sun.nio.fs.UnixException"},
		{"setmntent0", "(JJ)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(LinuxNativeDispatcher, setmntent0, int64_t, int64_t, int64_t), "sun.nio.fs.UnixException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.LinuxNativeDispatcher",
		"sun.nio.fs.UnixNativeDispatcher",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LinuxNativeDispatcher, name, initialize, &classInfo$$, LinuxNativeDispatcher::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LinuxNativeDispatcher);
	});
	return class$;
}

$Class* LinuxNativeDispatcher::class$ = nullptr;

		} // fs
	} // nio
} // sun