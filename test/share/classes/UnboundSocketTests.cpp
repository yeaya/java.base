#include <UnboundSocketTests.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

int32_t UnboundSocketTests::failures = 0;

void UnboundSocketTests::init$() {
}

void UnboundSocketTests::check($String* msg, Object$* actual, Object$* expected) {
	$init(UnboundSocketTests);
	$nc($System::out)->format("%s expected: %s, actual: %s"_s, $$new($ObjectArray, {
		msg,
		expected,
		actual
	}));
	if ($equals(actual, expected)) {
		$System::out->println(" [PASS]"_s);
	} else {
		$System::out->println(" [FAIL]"_s);
		++UnboundSocketTests::failures;
	}
}

void UnboundSocketTests::checkIsAnyLocalAddress($String* msg, $InetAddress* actual) {
	$init(UnboundSocketTests);
	$nc($System::out)->format("%s actual: %s"_s, $$new($ObjectArray, {
		msg,
		actual
	}));
	if ($nc(actual)->isAnyLocalAddress()) {
		$System::out->println(" [PASS]"_s);
	} else {
		$System::out->println(" [FAIL]"_s);
		++UnboundSocketTests::failures;
	}
}

void UnboundSocketTests::main($StringArray* args) {
	$init(UnboundSocketTests);
	$useLocalObjectStack();
	$nc($System::out)->println("\n-- SocketChannel --"_s);
	$var($SocketChannel, sc, $SocketChannel::open());
	$var($Throwable, var$0, nullptr);
	try {
		$var($String, var$1, "getLocalPort()"_s);
		$var($Object, var$2, $Integer::valueOf($$nc($nc(sc)->socket())->getLocalPort()));
		check(var$1, var$2, $($Integer::valueOf(-1)));
		checkIsAnyLocalAddress("getLocalAddress()"_s, $($$nc(sc->socket())->getLocalAddress()));
		check("getLocalSocketAddress()"_s, $($$nc(sc->socket())->getLocalSocketAddress()), nullptr);
		$var($String, var$3, "getPort()"_s);
		$var($Object, var$4, $Integer::valueOf($$nc(sc->socket())->getPort()));
		check(var$3, var$4, $($Integer::valueOf(0)));
		check("getInetAddress()"_s, $($$nc(sc->socket())->getInetAddress()), nullptr);
		check("getRemoteSocketAddress()"_s, $($$nc(sc->socket())->getRemoteSocketAddress()), nullptr);
	} catch ($Throwable& var$5) {
		$assign(var$0, var$5);
	} /*finally*/ {
		$nc(sc)->close();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$System::out->println("\n-- ServerSocketChannel --"_s);
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	$var($Throwable, var$6, nullptr);
	try {
		$var($String, var$7, "getLocalPort()"_s);
		$var($Object, var$8, $Integer::valueOf($$nc($nc(ssc)->socket())->getLocalPort()));
		check(var$7, var$8, $($Integer::valueOf(-1)));
		check("getInetAddress()"_s, $($$nc(ssc->socket())->getInetAddress()), nullptr);
		check("getLocalSocketAddress()"_s, $($$nc(ssc->socket())->getLocalSocketAddress()), nullptr);
	} catch ($Throwable& var$9) {
		$assign(var$6, var$9);
	} /*finally*/ {
		$nc(ssc)->close();
	}
	if (var$6 != nullptr) {
		$throw(var$6);
	}
	$System::out->println("\n-- DatagramChannel --"_s);
	$var($DatagramChannel, dc, $DatagramChannel::open());
	$var($Throwable, var$10, nullptr);
	try {
		$var($String, var$11, "getLocalPort()"_s);
		$var($Object, var$12, $Integer::valueOf($$nc($nc(dc)->socket())->getLocalPort()));
		check(var$11, var$12, $($Integer::valueOf(0)));
		checkIsAnyLocalAddress("getLocalAddress()"_s, $($$nc(dc->socket())->getLocalAddress()));
		check("getLocalSocketAddress()"_s, $($$nc(dc->socket())->getLocalSocketAddress()), nullptr);
		$var($String, var$13, "getPort()"_s);
		$var($Object, var$14, $Integer::valueOf($$nc(dc->socket())->getPort()));
		check(var$13, var$14, $($Integer::valueOf(-1)));
		check("getInetAddress()"_s, $($$nc(dc->socket())->getInetAddress()), nullptr);
		check("getRemoteSocketAddress()"_s, $($$nc(dc->socket())->getRemoteSocketAddress()), nullptr);
	} catch ($Throwable& var$15) {
		$assign(var$10, var$15);
	} /*finally*/ {
		$nc(dc)->close();
	}
	if (var$10 != nullptr) {
		$throw(var$10);
	}
	if (UnboundSocketTests::failures > 0) {
		$throwNew($RuntimeException, $$str({$$str(UnboundSocketTests::failures), " sub-tests(s) failed."_s}));
	}
}

void UnboundSocketTests::clinit$($Class* clazz) {
	UnboundSocketTests::failures = 0;
}

UnboundSocketTests::UnboundSocketTests() {
}

$Class* UnboundSocketTests::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"failures", "I", nullptr, $STATIC, $staticField(UnboundSocketTests, failures)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnboundSocketTests, init$, void)},
		{"check", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(UnboundSocketTests, check, void, $String*, Object$*, Object$*)},
		{"checkIsAnyLocalAddress", "(Ljava/lang/String;Ljava/net/InetAddress;)V", nullptr, $STATIC, $staticMethod(UnboundSocketTests, checkIsAnyLocalAddress, void, $String*, $InetAddress*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UnboundSocketTests, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UnboundSocketTests",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnboundSocketTests, name, initialize, &classInfo$$, UnboundSocketTests::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnboundSocketTests);
	});
	return class$;
}

$Class* UnboundSocketTests::class$ = nullptr;