#include <sun/net/PortConfig.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InternalError.h>
#include <jdk/internal/loader/BootLoader.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace net {

int32_t PortConfig::defaultUpper = 0;
int32_t PortConfig::defaultLower = 0;
int32_t PortConfig::upper = 0;
int32_t PortConfig::lower = 0;

void PortConfig::init$() {
}

int32_t PortConfig::getLower0() {
	$init(PortConfig);
	$prepareNativeStatic(getLower0, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t PortConfig::getUpper0() {
	$init(PortConfig);
	$prepareNativeStatic(getUpper0, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t PortConfig::getLower() {
	$init(PortConfig);
	return PortConfig::lower;
}

int32_t PortConfig::getUpper() {
	$init(PortConfig);
	return PortConfig::upper;
}

void PortConfig::clinit$($Class* clazz) {
	{
		$BootLoader::loadLibrary("net"_s);
		$var($String, os, $GetPropertyAction::privilegedGetProperty("os.name"_s));
		if ($nc(os)->startsWith("Linux"_s)) {
			PortConfig::defaultLower = 0x00008000;
			PortConfig::defaultUpper = 61000;
		} else if (os->contains("OS X"_s)) {
			PortConfig::defaultLower = 0x0000c000;
			PortConfig::defaultUpper = 0x0000ffff;
		} else if (os->startsWith("AIX"_s)) {
			PortConfig::defaultLower = 0x00008000;
			PortConfig::defaultUpper = 0x0000ffff;
		} else {
			$throwNew($InternalError, "sun.net.PortConfig: unknown OS"_s);
		}
		int32_t v = PortConfig::getLower0();
		if (v == -1) {
			v = PortConfig::defaultLower;
		}
		PortConfig::lower = v;
		v = PortConfig::getUpper0();
		if (v == -1) {
			v = PortConfig::defaultUpper;
		}
		PortConfig::upper = v;
	}
}

PortConfig::PortConfig() {
}

$Class* PortConfig::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultUpper", "I", nullptr, $PRIVATE | $STATIC, $staticField(PortConfig, defaultUpper)},
		{"defaultLower", "I", nullptr, $PRIVATE | $STATIC, $staticField(PortConfig, defaultLower)},
		{"upper", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PortConfig, upper)},
		{"lower", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PortConfig, lower)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PortConfig, init$, void)},
		{"getLower", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(PortConfig, getLower, int32_t)},
		{"getLower0", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(PortConfig, getLower0, int32_t)},
		{"getUpper", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(PortConfig, getUpper, int32_t)},
		{"getUpper0", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(PortConfig, getUpper0, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.net.PortConfig",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PortConfig, name, initialize, &classInfo$$, PortConfig::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PortConfig);
	});
	return class$;
}

$Class* PortConfig::class$ = nullptr;

	} // net
} // sun