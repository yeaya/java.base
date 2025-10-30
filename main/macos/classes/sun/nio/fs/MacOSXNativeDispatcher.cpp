#include <sun/nio/fs/MacOSXNativeDispatcher.h>

#include <sun/nio/fs/BsdNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BsdNativeDispatcher = ::sun::nio::fs::BsdNativeDispatcher;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _MacOSXNativeDispatcher_FieldInfo_[] = {
	{"kCFStringNormalizationFormC", "I", nullptr, $STATIC | $FINAL, $constField(MacOSXNativeDispatcher, kCFStringNormalizationFormC)},
	{"kCFStringNormalizationFormD", "I", nullptr, $STATIC | $FINAL, $constField(MacOSXNativeDispatcher, kCFStringNormalizationFormD)},
	{}
};

$MethodInfo _MacOSXNativeDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MacOSXNativeDispatcher::*)()>(&MacOSXNativeDispatcher::init$))},
	{"normalizepath", "([CI)[C", nullptr, $STATIC | $NATIVE, $method(static_cast<$chars*(*)($chars*,int32_t)>(&MacOSXNativeDispatcher::normalizepath))},
	{}
};

#define _METHOD_INDEX_normalizepath 1

$ClassInfo _MacOSXNativeDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.MacOSXNativeDispatcher",
	"sun.nio.fs.BsdNativeDispatcher",
	nullptr,
	_MacOSXNativeDispatcher_FieldInfo_,
	_MacOSXNativeDispatcher_MethodInfo_
};

$Object* allocate$MacOSXNativeDispatcher($Class* clazz) {
	return $of($alloc(MacOSXNativeDispatcher));
}

void MacOSXNativeDispatcher::init$() {
	$BsdNativeDispatcher::init$();
}

$chars* MacOSXNativeDispatcher::normalizepath($chars* path, int32_t form) {
	$init(MacOSXNativeDispatcher);
	$var($chars, $ret, nullptr);
	$prepareNativeStatic(MacOSXNativeDispatcher, normalizepath, $chars*, $chars* path, int32_t form);
	$assign($ret, $invokeNativeStatic(MacOSXNativeDispatcher, normalizepath, path, form));
	$finishNativeStatic();
	return $ret;
}

MacOSXNativeDispatcher::MacOSXNativeDispatcher() {
}

$Class* MacOSXNativeDispatcher::load$($String* name, bool initialize) {
	$loadClass(MacOSXNativeDispatcher, name, initialize, &_MacOSXNativeDispatcher_ClassInfo_, allocate$MacOSXNativeDispatcher);
	return class$;
}

$Class* MacOSXNativeDispatcher::class$ = nullptr;

		} // fs
	} // nio
} // sun