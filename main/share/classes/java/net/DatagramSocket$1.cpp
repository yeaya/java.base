#include <java/net/DatagramSocket$1.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;

namespace java {
	namespace net {

void DatagramSocket$1::init$() {
	$SocketAddress::init$();
}

DatagramSocket$1::DatagramSocket$1() {
}

$Class* DatagramSocket$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DatagramSocket$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.DatagramSocket",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.DatagramSocket$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.DatagramSocket$1",
		"java.net.SocketAddress",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.DatagramSocket"
	};
	$loadClass(DatagramSocket$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DatagramSocket$1);
	});
	return class$;
}

$Class* DatagramSocket$1::class$ = nullptr;

	} // net
} // java