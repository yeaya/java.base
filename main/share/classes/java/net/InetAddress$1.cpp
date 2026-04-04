#include <java/net/InetAddress$1.h>
#include <java/net/Inet4Address.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress$InetAddressHolder.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Inet4Address = ::java::net::Inet4Address;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;

namespace java {
	namespace net {

void InetAddress$1::init$() {
}

$String* InetAddress$1::getOriginalHostName($InetAddress* ia) {
	return $nc($nc(ia)->holder$)->getOriginalHostName();
}

$InetAddress* InetAddress$1::getByName($String* hostName, $InetAddress* hostAddress) {
	return $InetAddress::getByName(hostName, hostAddress);
}

int32_t InetAddress$1::addressValue($Inet4Address* inet4Address) {
	return $nc(inet4Address)->addressValue();
}

$bytes* InetAddress$1::addressBytes($Inet6Address* inet6Address) {
	return $nc(inet6Address)->addressBytes();
}

InetAddress$1::InetAddress$1() {
}

$Class* InetAddress$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InetAddress$1, init$, void)},
		{"addressBytes", "(Ljava/net/Inet6Address;)[B", nullptr, $PUBLIC, $virtualMethod(InetAddress$1, addressBytes, $bytes*, $Inet6Address*)},
		{"addressValue", "(Ljava/net/Inet4Address;)I", nullptr, $PUBLIC, $virtualMethod(InetAddress$1, addressValue, int32_t, $Inet4Address*)},
		{"getByName", "(Ljava/lang/String;Ljava/net/InetAddress;)Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(InetAddress$1, getByName, $InetAddress*, $String*, $InetAddress*), "java.net.UnknownHostException"},
		{"getOriginalHostName", "(Ljava/net/InetAddress;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InetAddress$1, getOriginalHostName, $String*, $InetAddress*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.InetAddress",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.InetAddress$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.InetAddress$1",
		"java.lang.Object",
		"jdk.internal.access.JavaNetInetAddressAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.InetAddress"
	};
	$loadClass(InetAddress$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InetAddress$1);
	});
	return class$;
}

$Class* InetAddress$1::class$ = nullptr;

	} // net
} // java