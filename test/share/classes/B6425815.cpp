#include <B6425815.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/MulticastSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $MulticastSocket = ::java::net::MulticastSocket;

void B6425815::init$() {
}

void B6425815::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InetAddress, ia, nullptr);
	$var($MulticastSocket, ms, nullptr);
	try {
		$assign(ia, $InetAddress::getByName("::1"_s));
		$assign(ms, $new($MulticastSocket, $$new($InetSocketAddress, ia, 1234)));
	} catch ($Exception& e) {
		$assign(ia, nullptr);
		$assign(ms, nullptr);
	}
	if (ms != nullptr) {
		ms->setTimeToLive(254);
		if (ms->getTimeToLive() != 254) {
			$throwNew($RuntimeException, "time to live is incorrect!"_s);
		}
		ms->close();
	}
}

B6425815::B6425815() {
}

$Class* B6425815::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B6425815, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B6425815, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B6425815",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B6425815, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B6425815);
	});
	return class$;
}

$Class* B6425815::class$ = nullptr;