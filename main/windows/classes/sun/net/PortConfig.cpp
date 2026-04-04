#include <sun/net/PortConfig.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {

void PortConfig::init$() {
}

int32_t PortConfig::getLower() {
	return PortConfig::defaultLower;
}

int32_t PortConfig::getUpper() {
	return PortConfig::defaultUpper;
}

PortConfig::PortConfig() {
}

$Class* PortConfig::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultLower", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortConfig, defaultLower)},
		{"defaultUpper", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortConfig, defaultUpper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PortConfig, init$, void)},
		{"getLower", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(PortConfig, getLower, int32_t)},
		{"getUpper", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(PortConfig, getUpper, int32_t)},
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
	$loadClass(PortConfig, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PortConfig);
	});
	return class$;
}

$Class* PortConfig::class$ = nullptr;

	} // net
} // sun