#include <sun/net/PortConfig.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {

$FieldInfo _PortConfig_FieldInfo_[] = {
	{"defaultLower", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortConfig, defaultLower)},
	{"defaultUpper", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortConfig, defaultUpper)},
	{}
};

$MethodInfo _PortConfig_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PortConfig, init$, void)},
	{"getLower", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(PortConfig, getLower, int32_t)},
	{"getUpper", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(PortConfig, getUpper, int32_t)},
	{}
};

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
	$loadClass(PortConfig, name, initialize, &_PortConfig_ClassInfo_, allocate$PortConfig);
	return class$;
}

$Class* PortConfig::class$ = nullptr;

	} // net
} // sun