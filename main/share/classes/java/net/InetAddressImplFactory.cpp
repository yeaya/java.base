#include <java/net/InetAddressImplFactory.h>
#include <java/net/InetAddress.h>
#include <java/net/InetAddressImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetAddressImpl = ::java::net::InetAddressImpl;

namespace java {
	namespace net {

void InetAddressImplFactory::init$() {
}

$InetAddressImpl* InetAddressImplFactory::create() {
	return $InetAddress::loadImpl(isIPv6Supported() ? "Inet6AddressImpl"_s : "Inet4AddressImpl"_s);
}

bool InetAddressImplFactory::isIPv6Supported() {
	$init(InetAddressImplFactory);
	$prepareNativeStatic(isIPv6Supported, bool);
	bool $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

InetAddressImplFactory::InetAddressImplFactory() {
}

$Class* InetAddressImplFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InetAddressImplFactory, init$, void)},
		{"create", "()Ljava/net/InetAddressImpl;", nullptr, $STATIC, $staticMethod(InetAddressImplFactory, create, $InetAddressImpl*)},
		{"isIPv6Supported", "()Z", nullptr, $STATIC | $NATIVE, $staticMethod(InetAddressImplFactory, isIPv6Supported, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.InetAddressImplFactory",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InetAddressImplFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddressImplFactory);
	});
	return class$;
}

$Class* InetAddressImplFactory::class$ = nullptr;

	} // net
} // java