#include <java/net/InetAddressImpl.h>
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

$Class* InetAddressImpl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"anyLocalAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InetAddressImpl, anyLocalAddress, $InetAddress*)},
		{"getHostByAddr", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InetAddressImpl, getHostByAddr, $String*, $bytes*), "java.net.UnknownHostException"},
		{"getLocalHostName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InetAddressImpl, getLocalHostName, $String*), "java.net.UnknownHostException"},
		{"isReachable", "(Ljava/net/InetAddress;ILjava/net/NetworkInterface;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InetAddressImpl, isReachable, bool, $InetAddress*, int32_t, $NetworkInterface*, int32_t), "java.io.IOException"},
		{"lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InetAddressImpl, lookupAllHostAddr, $InetAddressArray*, $String*), "java.net.UnknownHostException"},
		{"loopbackAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InetAddressImpl, loopbackAddress, $InetAddress*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.net.InetAddressImpl",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InetAddressImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddressImpl);
	});
	return class$;
}

$Class* InetAddressImpl::class$ = nullptr;

	} // net
} // java