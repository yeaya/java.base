#include <sun/nio/fs/BsdNativeDispatcher.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _BsdNativeDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(BsdNativeDispatcher::*)()>(&BsdNativeDispatcher::init$))},
	{"endfsstat", "(J)V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&BsdNativeDispatcher::endfsstat)), "sun.nio.fs.UnixException"},
	{"fsstatEntry", "(JLsun/nio/fs/UnixMountEntry;)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,$UnixMountEntry*)>(&BsdNativeDispatcher::fsstatEntry)), "sun.nio.fs.UnixException"},
	{"getfsstat", "()J", nullptr, $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&BsdNativeDispatcher::getfsstat)), "sun.nio.fs.UnixException"},
	{"getmntonname", "(Lsun/nio/fs/UnixPath;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($UnixPath*)>(&BsdNativeDispatcher::getmntonname)), "sun.nio.fs.UnixException"},
	{"getmntonname0", "(J)[B", nullptr, $STATIC | $NATIVE, $method(static_cast<$bytes*(*)(int64_t)>(&BsdNativeDispatcher::getmntonname0)), "sun.nio.fs.UnixException"},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&BsdNativeDispatcher::initIDs))},
	{}
};

#define _METHOD_INDEX_endfsstat 1
#define _METHOD_INDEX_fsstatEntry 2
#define _METHOD_INDEX_getfsstat 3
#define _METHOD_INDEX_getmntonname0 5
#define _METHOD_INDEX_initIDs 6

$ClassInfo _BsdNativeDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.BsdNativeDispatcher",
	"sun.nio.fs.UnixNativeDispatcher",
	nullptr,
	nullptr,
	_BsdNativeDispatcher_MethodInfo_
};

$Object* allocate$BsdNativeDispatcher($Class* clazz) {
	return $of($alloc(BsdNativeDispatcher));
}

void BsdNativeDispatcher::init$() {
	$UnixNativeDispatcher::init$();
}

int64_t BsdNativeDispatcher::getfsstat() {
	$init(BsdNativeDispatcher);
	int64_t $ret = 0;
	$prepareNativeStatic(BsdNativeDispatcher, getfsstat, int64_t);
	$ret = $invokeNativeStatic(BsdNativeDispatcher, getfsstat);
	$finishNativeStatic();
	return $ret;
}

int32_t BsdNativeDispatcher::fsstatEntry(int64_t iter, $UnixMountEntry* entry) {
	$init(BsdNativeDispatcher);
	int32_t $ret = 0;
	$prepareNativeStatic(BsdNativeDispatcher, fsstatEntry, int32_t, int64_t iter, $UnixMountEntry* entry);
	$ret = $invokeNativeStatic(BsdNativeDispatcher, fsstatEntry, iter, entry);
	$finishNativeStatic();
	return $ret;
}

void BsdNativeDispatcher::endfsstat(int64_t iter) {
	$init(BsdNativeDispatcher);
	$prepareNativeStatic(BsdNativeDispatcher, endfsstat, void, int64_t iter);
	$invokeNativeStatic(BsdNativeDispatcher, endfsstat, iter);
	$finishNativeStatic();
}

$bytes* BsdNativeDispatcher::getmntonname($UnixPath* path) {
	$init(BsdNativeDispatcher);
	$var($NativeBuffer, pathBuffer, copyToNativeBuffer(path));
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, getmntonname0($nc(pathBuffer)->address()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
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

$bytes* BsdNativeDispatcher::getmntonname0(int64_t pathAddress) {
	$init(BsdNativeDispatcher);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(BsdNativeDispatcher, getmntonname0, $bytes*, int64_t pathAddress);
	$assign($ret, $invokeNativeStatic(BsdNativeDispatcher, getmntonname0, pathAddress));
	$finishNativeStatic();
	return $ret;
}

void BsdNativeDispatcher::initIDs() {
	$init(BsdNativeDispatcher);
	$prepareNativeStatic(BsdNativeDispatcher, initIDs, void);
	$invokeNativeStatic(BsdNativeDispatcher, initIDs);
	$finishNativeStatic();
}

void clinit$BsdNativeDispatcher($Class* class$) {
	{
		BsdNativeDispatcher::initIDs();
	}
}

BsdNativeDispatcher::BsdNativeDispatcher() {
}

$Class* BsdNativeDispatcher::load$($String* name, bool initialize) {
	$loadClass(BsdNativeDispatcher, name, initialize, &_BsdNativeDispatcher_ClassInfo_, clinit$BsdNativeDispatcher, allocate$BsdNativeDispatcher);
	return class$;
}

$Class* BsdNativeDispatcher::class$ = nullptr;

		} // fs
	} // nio
} // sun