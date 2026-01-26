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

$FieldInfo _PortConfig_FieldInfo_[] = {
	{"defaultUpper", "I", nullptr, $PRIVATE | $STATIC, $staticField(PortConfig, defaultUpper)},
	{"defaultLower", "I", nullptr, $PRIVATE | $STATIC, $staticField(PortConfig, defaultLower)},
	{"upper", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PortConfig, upper)},
	{"lower", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PortConfig, lower)},
	{}
};

$MethodInfo _PortConfig_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(PortConfig, init$, void)},
	{"getLower", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(PortConfig, getLower, int32_t)},
	{"getLower0", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(PortConfig, getLower0, int32_t)},
	{"getUpper", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(PortConfig, getUpper, int32_t)},
	{"getUpper0", "()I", nullptr, $STATIC | $NATIVE, $staticMethod(PortConfig, getUpper0, int32_t)},
	{}
};

#define _METHOD_INDEX_getLower0 2
#define _METHOD_INDEX_getUpper0 4

$ClassInfo _PortConfig_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.net.PortConfig",
	"java.lang.Object",
	nullptr,
	_PortConfig_FieldInfo_,
	_PortConfig_MethodInfo_
};

$Object* allocate$PortConfig($Class* clazz) {
	return $of($alloc(PortConfig));
}

int32_t PortConfig::defaultUpper = 0;
int32_t PortConfig::defaultLower = 0;
int32_t PortConfig::upper = 0;
int32_t PortConfig::lower = 0;

void PortConfig::init$() {
}

int32_t PortConfig::getLower0() {
	$init(PortConfig);
	int32_t $ret = 0;
	$prepareNativeStatic(PortConfig, getLower0, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t PortConfig::getUpper0() {
	$init(PortConfig);
	int32_t $ret = 0;
	$prepareNativeStatic(PortConfig, getUpper0, int32_t);
	$ret = $invokeNativeStatic();
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

void clinit$PortConfig($Class* class$) {
	{
		$BootLoader::loadLibrary("net"_s);
		$var($String, os, $GetPropertyAction::privilegedGetProperty("os.name"_s));
		if ($nc(os)->startsWith("Linux"_s)) {
			PortConfig::defaultLower = 32768;
			PortConfig::defaultUpper = 0x0000EE48;
		} else if (os->contains("OS X"_s)) {
			PortConfig::defaultLower = 0x0000C000;
			PortConfig::defaultUpper = 0x0000FFFF;
		} else if (os->startsWith("AIX"_s)) {
			PortConfig::defaultLower = 32768;
			PortConfig::defaultUpper = 0x0000FFFF;
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
	$loadClass(PortConfig, name, initialize, &_PortConfig_ClassInfo_, clinit$PortConfig, allocate$PortConfig);
	return class$;
}

$Class* PortConfig::class$ = nullptr;

	} // net
} // sun