#include <OneExceptionOnly.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/PortUnreachableException.h>
#include <java/net/SocketTimeoutException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $PortUnreachableException = ::java::net::PortUnreachableException;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;

void OneExceptionOnly::init$() {
}

void OneExceptionOnly::doTest($InetAddress* ia, int32_t port, bool testSend) {
	$useLocalObjectStack();
	$nc($System::out)->println(""_s);
	$System::out->println("***"_s);
	$System::out->println("Test Description:"_s);
	$System::out->println("    - Send 10 datagrams to bad destination"_s);
	$System::out->println("    - <wait a wee while>"_s);
	if (testSend) {
		$System::out->println("    - Send another datagram - should throw PUE or timeout"_s);
	} else {
		$System::out->println("    - Receive another datagram - should throw PUE or timeout"_s);
	}
	$System::out->println("    - Receive another receive - a SocketTimeoutException expected"_s);
	$System::out->println(""_s);
	$var($DatagramSocket, s1, $new($DatagramSocket));
	s1->connect(ia, port);
	$var($bytes, b, $new($bytes, 512));
	$var($DatagramPacket, p, $new($DatagramPacket, b, b->length));
	int32_t outstanding = 0;
	for (int32_t i = 0; i < 20; ++i) {
		try {
			s1->send(p);
			++outstanding;
		} catch ($PortUnreachableException& e) {
			outstanding = 0;
		}
		if (outstanding > 1) {
			break;
		}
	}
	if (outstanding < 1) {
		$System::out->println("Insufficient exceptions outstanding - Test Skipped (Passed)."_s);
		s1->close();
		return;
	}
	$($Thread::currentThread())->sleep(5000);
	bool gotPUE = false;
	bool gotTimeout = false;
	s1->setSoTimeout(2000);
	try {
		if (testSend) {
			s1->send(p);
		} else {
			s1->receive(p);
		}
	} catch ($PortUnreachableException& pue) {
		gotPUE = true;
		$System::out->println("Expected PortUnreachableException thrown - good!"_s);
	} catch ($SocketTimeoutException& exc) {
	}
	if (gotPUE) {
		try {
			s1->receive(p);
		} catch ($PortUnreachableException& pue) {
			$throwNew($Exception, "Unexpected PUE received - assumed that PUs would be consumed"_s);
		} catch ($SocketTimeoutException& exc) {
			$System::out->println("Expected SocketTimeoutException thrown - excellent! - Test Passed."_s);
		}
	} else {
		$System::out->println("Expected PUE not thrown - packets probably discarded (Passed)."_s);
	}
	s1->close();
}

void OneExceptionOnly::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InetAddress, ia, nullptr);
	int32_t port = 0;
	if ($nc(args)->length >= 2) {
		$assign(ia, $InetAddress::getByName(args->get(0)));
		port = $Integer::parseInt(args->get(1));
	} else {
		$assign(ia, $InetAddress::getLocalHost());
		$var($DatagramSocket, s1, $new($DatagramSocket));
		port = s1->getLocalPort();
		s1->close();
	}
	doTest(ia, port, true);
	doTest(ia, port, false);
}

OneExceptionOnly::OneExceptionOnly() {
}

$Class* OneExceptionOnly::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OneExceptionOnly, init$, void)},
		{"doTest", "(Ljava/net/InetAddress;IZ)V", nullptr, $STATIC, $staticMethod(OneExceptionOnly, doTest, void, $InetAddress*, int32_t, bool), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OneExceptionOnly, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"OneExceptionOnly",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OneExceptionOnly, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OneExceptionOnly);
	});
	return class$;
}

$Class* OneExceptionOnly::class$ = nullptr;