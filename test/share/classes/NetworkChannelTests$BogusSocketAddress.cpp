#include <NetworkChannelTests$BogusSocketAddress.h>
#include <NetworkChannelTests.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;

void NetworkChannelTests$BogusSocketAddress::init$() {
	$SocketAddress::init$();
}

NetworkChannelTests$BogusSocketAddress::NetworkChannelTests$BogusSocketAddress() {
}

$Class* NetworkChannelTests$BogusSocketAddress::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NetworkChannelTests$BogusSocketAddress, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NetworkChannelTests$BogusSocketAddress", "NetworkChannelTests", "BogusSocketAddress", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NetworkChannelTests$BogusSocketAddress",
		"java.net.SocketAddress",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NetworkChannelTests"
	};
	$loadClass(NetworkChannelTests$BogusSocketAddress, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkChannelTests$BogusSocketAddress);
	});
	return class$;
}

$Class* NetworkChannelTests$BogusSocketAddress::class$ = nullptr;