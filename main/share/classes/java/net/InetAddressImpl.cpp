#include <java/net/InetAddressImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <jcpp.h>

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;

namespace java {
	namespace net {

$MethodInfo _InetAddressImpl_MethodInfo_[] = {
	{"anyLocalAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"getHostByAddr", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.net.UnknownHostException"},
	{"getLocalHostName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.net.UnknownHostException"},
	{"isReachable", "(Ljava/net/InetAddress;ILjava/net/NetworkInterface;I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.net.UnknownHostException"},
	{"loopbackAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _InetAddressImpl_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.net.InetAddressImpl",
	nullptr,
	nullptr,
	nullptr,
	_InetAddressImpl_MethodInfo_
};

$Object* allocate$InetAddressImpl($Class* clazz) {
	return $of($alloc(InetAddressImpl));
}

$Class* InetAddressImpl::load$($String* name, bool initialize) {
	$loadClass(InetAddressImpl, name, initialize, &_InetAddressImpl_ClassInfo_, allocate$InetAddressImpl);
	return class$;
}

$Class* InetAddressImpl::class$ = nullptr;

	} // net
} // java