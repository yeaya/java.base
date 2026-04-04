#include <sun/nio/fs/BsdNativeDispatcher.h>
#include <sun/nio/fs/NativeBuffer.h>
#include <sun/nio/fs/UnixMountEntry.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NativeBuffer = ::sun::nio::fs::NativeBuffer;
using $UnixMountEntry = ::sun::nio::fs::UnixMountEntry;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

void BsdNativeDispatcher::init$() {
	$UnixNativeDispatcher::init$();
}

int64_t BsdNativeDispatcher::getfsstat() {
	$init(BsdNativeDispatcher);
	$prepareNativeStatic(getfsstat, int64_t);
	int64_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t BsdNativeDispatcher::fsstatEntry(int64_t iter, $UnixMountEntry* entry) {
	$init(BsdNativeDispatcher);
	$prepareNativeStatic(fsstatEntry, int32_t, int64_t iter, $UnixMountEntry* entry);
	int32_t $ret = $invokeNativeStatic(iter, entry);
	$finishNativeStatic();
	return $ret;
}

void BsdNativeDispatcher::endfsstat(int64_t iter) {
	$init(BsdNativeDispatcher);
	$prepareNativeStatic(endfsstat, void, int64_t iter);
	$invokeNativeStatic(iter);
	$finishNativeStatic();
}

$bytes* BsdNativeDispatcher::getmntonname($UnixPath* path) {
	$init(BsdNativeDispatcher);
	$useLocalObjectStack();
	$var($NativeBuffer, pathBuffer, copyToNativeBuffer(path));
	$var($Throwable, var$0, nullptr);
	$var($bytes, var$2, nullptr);
	bool return$1 = false;
	try {
		$assign(var$2, getmntonname0($nc(pathBuffer)->address()));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
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

$bytes* BsdNativeDispatcher::getmntonname0(int64_t pathAddress) {
	$init(BsdNativeDispatcher);
	$prepareNativeStatic(getmntonname0, $bytes*, int64_t pathAddress);
	$var($bytes, $ret, $invokeNativeStaticObject(pathAddress));
	$finishNativeStatic();
	return $ret;
}

void BsdNativeDispatcher::initIDs() {
	$init(BsdNativeDispatcher);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void BsdNativeDispatcher::clinit$($Class* clazz) {
	{
		BsdNativeDispatcher::initIDs();
	}
}

BsdNativeDispatcher::BsdNativeDispatcher() {
}

$Class* BsdNativeDispatcher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(BsdNativeDispatcher, init$, void)},
		{"endfsstat", "(J)V", nullptr, $STATIC | $NATIVE, $staticMethod(BsdNativeDispatcher, endfsstat, void, int64_t), "sun.nio.fs.UnixException"},
		{"fsstatEntry", "(JLsun/nio/fs/UnixMountEntry;)I", nullptr, $STATIC | $NATIVE, $staticMethod(BsdNativeDispatcher, fsstatEntry, int32_t, int64_t, $UnixMountEntry*), "sun.nio.fs.UnixException"},
		{"getfsstat", "()J", nullptr, $STATIC | $NATIVE, $staticMethod(BsdNativeDispatcher, getfsstat, int64_t), "sun.nio.fs.UnixException"},
		{"getmntonname", "(Lsun/nio/fs/UnixPath;)[B", nullptr, $STATIC, $staticMethod(BsdNativeDispatcher, getmntonname, $bytes*, $UnixPath*), "sun.nio.fs.UnixException"},
		{"getmntonname0", "(J)[B", nullptr, $STATIC | $NATIVE, $staticMethod(BsdNativeDispatcher, getmntonname0, $bytes*, int64_t), "sun.nio.fs.UnixException"},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(BsdNativeDispatcher, initIDs, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.BsdNativeDispatcher",
		"sun.nio.fs.UnixNativeDispatcher",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BsdNativeDispatcher, name, initialize, &classInfo$$, BsdNativeDispatcher::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BsdNativeDispatcher);
	});
	return class$;
}

$Class* BsdNativeDispatcher::class$ = nullptr;

		} // fs
	} // nio
} // sun