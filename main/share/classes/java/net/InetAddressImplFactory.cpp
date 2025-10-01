#include <java/net/InetAddressImplFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetAddressImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetAddressImpl = ::java::net::InetAddressImpl;

namespace java {
	namespace net {

$MethodInfo _InetAddressImplFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InetAddressImplFactory::*)()>(&InetAddressImplFactory::init$))},
	{"create", "()Ljava/net/InetAddressImpl;", nullptr, $STATIC, $method(static_cast<$InetAddressImpl*(*)()>(&InetAddressImplFactory::create))},
	{"isIPv6Supported", "()Z", nullptr, $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&InetAddressImplFactory::isIPv6Supported))},
	{}
};

#define _METHOD_INDEX_isIPv6Supported 2

$ClassInfo _InetAddressImplFactory_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.InetAddressImplFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InetAddressImplFactory_MethodInfo_
};

$Object* allocate$InetAddressImplFactory($Class* clazz) {
	return $of($alloc(InetAddressImplFactory));
}

void InetAddressImplFactory::init$() {
}

$InetAddressImpl* InetAddressImplFactory::create() {
	return $InetAddress::loadImpl(isIPv6Supported() ? "Inet6AddressImpl"_s : "Inet4AddressImpl"_s);
}

bool InetAddressImplFactory::isIPv6Supported() {
	$init(InetAddressImplFactory);
	bool $ret = false;
	$prepareNativeStatic(InetAddressImplFactory, isIPv6Supported, bool);
	$ret = $invokeNativeStatic(InetAddressImplFactory, isIPv6Supported);
	$finishNativeStatic();
	return $ret;
}

InetAddressImplFactory::InetAddressImplFactory() {
}

$Class* InetAddressImplFactory::load$($String* name, bool initialize) {
	$loadClass(InetAddressImplFactory, name, initialize, &_InetAddressImplFactory_ClassInfo_, allocate$InetAddressImplFactory);
	return class$;
}

$Class* InetAddressImplFactory::class$ = nullptr;

	} // net
} // java