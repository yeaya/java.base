#include <UnboundSocketTests.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$FieldInfo _UnboundSocketTests_FieldInfo_[] = {
	{"failures", "I", nullptr, $STATIC, $staticField(UnboundSocketTests, failures)},
	{}
};

$MethodInfo _UnboundSocketTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnboundSocketTests::*)()>(&UnboundSocketTests::init$))},
	{"check", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,Object$*,Object$*)>(&UnboundSocketTests::check))},
	{"checkIsAnyLocalAddress", "(Ljava/lang/String;Ljava/net/InetAddress;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*,$InetAddress*)>(&UnboundSocketTests::checkIsAnyLocalAddress))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UnboundSocketTests::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _UnboundSocketTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UnboundSocketTests",
	"java.lang.Object",
	nullptr,
	_UnboundSocketTests_FieldInfo_,
	_UnboundSocketTests_MethodInfo_
};

$Object* allocate$UnboundSocketTests($Class* clazz) {
	return $of($alloc(UnboundSocketTests));
}

int32_t UnboundSocketTests::failures = 0;

void UnboundSocketTests::init$() {
}

void UnboundSocketTests::check($String* msg, Object$* actual, Object$* expected) {
	$init(UnboundSocketTests);
	$init($System);
	$nc($System::out)->format("%s expected: %s, actual: %s"_s, $$new($ObjectArray, {
		$of(msg),
		expected,
		actual
	}));
	if ($equals(actual, expected)) {
		$nc($System::out)->println(" [PASS]"_s);
	} else {
		$nc($System::out)->println(" [FAIL]"_s);
		++UnboundSocketTests::failures;
	}
}

void UnboundSocketTests::checkIsAnyLocalAddress($String* msg, $InetAddress* actual) {
	$init(UnboundSocketTests);
	$init($System);
	$nc($System::out)->format("%s actual: %s"_s, $$new($ObjectArray, {
		$of(msg),
		$of(actual)
	}));
	if ($nc(actual)->isAnyLocalAddress()) {
		$nc($System::out)->println(" [PASS]"_s);
	} else {
		$nc($System::out)->println(" [FAIL]"_s);
		++UnboundSocketTests::failures;
	}
}

void UnboundSocketTests::main($StringArray* args) {
	$init(UnboundSocketTests);
	$init($System);
	$nc($System::out)->println("\n-- SocketChannel --"_s);
	$var($SocketChannel, sc, $SocketChannel::open());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($String, var$1, "getLocalPort()"_s);
			$var($Object, var$2, $of($Integer::valueOf($nc($($nc(sc)->socket()))->getLocalPort())));
			check(var$1, var$2, $($Integer::valueOf(-1)));
			checkIsAnyLocalAddress("getLocalAddress()"_s, $($nc($($nc(sc)->socket()))->getLocalAddress()));
			check("getLocalSocketAddress()"_s, $($nc($($nc(sc)->socket()))->getLocalSocketAddress()), nullptr);
			$var($String, var$3, "getPort()"_s);
			$var($Object, var$4, $of($Integer::valueOf($nc($($nc(sc)->socket()))->getPort())));
			check(var$3, var$4, $($Integer::valueOf(0)));
			check("getInetAddress()"_s, $($nc($($nc(sc)->socket()))->getInetAddress()), nullptr);
			check("getRemoteSocketAddress()"_s, $($nc($($nc(sc)->socket()))->getRemoteSocketAddress()), nullptr);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(sc)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$nc($System::out)->println("\n-- ServerSocketChannel --"_s);
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	{
		$var($Throwable, var$5, nullptr);
		try {
			$var($String, var$6, "getLocalPort()"_s);
			$var($Object, var$7, $of($Integer::valueOf($nc($($nc(ssc)->socket()))->getLocalPort())));
			check(var$6, var$7, $($Integer::valueOf(-1)));
			check("getInetAddress()"_s, $($nc($($nc(ssc)->socket()))->getInetAddress()), nullptr);
			check("getLocalSocketAddress()"_s, $($nc($($nc(ssc)->socket()))->getLocalSocketAddress()), nullptr);
		} catch ($Throwable&) {
			$assign(var$5, $catch());
		} /*finally*/ {
			$nc(ssc)->close();
		}
		if (var$5 != nullptr) {
			$throw(var$5);
		}
	}
	$nc($System::out)->println("\n-- DatagramChannel --"_s);
	$var($DatagramChannel, dc, $DatagramChannel::open());
	{
		$var($Throwable, var$8, nullptr);
		try {
			$var($String, var$9, "getLocalPort()"_s);
			$var($Object, var$10, $of($Integer::valueOf($nc($($nc(dc)->socket()))->getLocalPort())));
			check(var$9, var$10, $($Integer::valueOf(0)));
			checkIsAnyLocalAddress("getLocalAddress()"_s, $($nc($($nc(dc)->socket()))->getLocalAddress()));
			check("getLocalSocketAddress()"_s, $($nc($($nc(dc)->socket()))->getLocalSocketAddress()), nullptr);
			$var($String, var$11, "getPort()"_s);
			$var($Object, var$12, $of($Integer::valueOf($nc($($nc(dc)->socket()))->getPort())));
			check(var$11, var$12, $($Integer::valueOf(-1)));
			check("getInetAddress()"_s, $($nc($($nc(dc)->socket()))->getInetAddress()), nullptr);
			check("getRemoteSocketAddress()"_s, $($nc($($nc(dc)->socket()))->getRemoteSocketAddress()), nullptr);
		} catch ($Throwable&) {
			$assign(var$8, $catch());
		} /*finally*/ {
			$nc(dc)->close();
		}
		if (var$8 != nullptr) {
			$throw(var$8);
		}
	}
	if (UnboundSocketTests::failures > 0) {
		$throwNew($RuntimeException, $$str({$$str(UnboundSocketTests::failures), " sub-tests(s) failed."_s}));
	}
}

void clinit$UnboundSocketTests($Class* class$) {
	UnboundSocketTests::failures = 0;
}

UnboundSocketTests::UnboundSocketTests() {
}

$Class* UnboundSocketTests::load$($String* name, bool initialize) {
	$loadClass(UnboundSocketTests, name, initialize, &_UnboundSocketTests_ClassInfo_, clinit$UnboundSocketTests, allocate$UnboundSocketTests);
	return class$;
}

$Class* UnboundSocketTests::class$ = nullptr;