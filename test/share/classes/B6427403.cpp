#include <B6427403.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $MulticastSocket = ::java::net::MulticastSocket;

void B6427403::init$() {
}

void B6427403::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$var($MulticastSocket, ms, $new($MulticastSocket, $$new($InetSocketAddress, lh, 0)));
	ms->joinGroup($($InetAddress::getByName("224.80.80.80"_s)));
	ms->close();
}

B6427403::B6427403() {
}

$Class* B6427403::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B6427403, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B6427403, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B6427403",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B6427403, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B6427403);
	});
	return class$;
}

$Class* B6427403::class$ = nullptr;