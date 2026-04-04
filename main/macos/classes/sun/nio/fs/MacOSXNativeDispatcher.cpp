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

void MacOSXNativeDispatcher::init$() {
	$BsdNativeDispatcher::init$();
}

$chars* MacOSXNativeDispatcher::normalizepath($chars* path, int32_t form) {
	$init(MacOSXNativeDispatcher);
	$prepareNativeStatic(normalizepath, $chars*, $chars* path, int32_t form);
	$var($chars, $ret, $invokeNativeStaticObject(path, form));
	$finishNativeStatic();
	return $ret;
}

MacOSXNativeDispatcher::MacOSXNativeDispatcher() {
}

$Class* MacOSXNativeDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"kCFStringNormalizationFormC", "I", nullptr, $STATIC | $FINAL, $constField(MacOSXNativeDispatcher, kCFStringNormalizationFormC)},
		{"kCFStringNormalizationFormD", "I", nullptr, $STATIC | $FINAL, $constField(MacOSXNativeDispatcher, kCFStringNormalizationFormD)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MacOSXNativeDispatcher, init$, void)},
		{"normalizepath", "([CI)[C", nullptr, $STATIC | $NATIVE, $staticMethod(MacOSXNativeDispatcher, normalizepath, $chars*, $chars*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.MacOSXNativeDispatcher",
		"sun.nio.fs.BsdNativeDispatcher",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MacOSXNativeDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacOSXNativeDispatcher);
	});
	return class$;
}

$Class* MacOSXNativeDispatcher::class$ = nullptr;

		} // fs
	} // nio
} // sun