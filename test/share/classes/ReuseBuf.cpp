#include <ReuseBuf.h>
#include <ReuseBuf$ServerThread.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ReuseBuf$ServerThread = ::ReuseBuf$ServerThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;

$StringArray* ReuseBuf::msgs = nullptr;
int32_t ReuseBuf::port = 0;

void ReuseBuf::init$() {
}

void ReuseBuf::main($StringArray* args) {
	$init(ReuseBuf);
	$useLocalObjectStack();
	$var($ReuseBuf$ServerThread, st, $new($ReuseBuf$ServerThread));
	st->start();
	$var($InetAddress, local, $InetAddress::getLocalHost());
	$var($InetSocketAddress, bindaddr, $new($InetSocketAddress, local, 0));
	$var($DatagramSocket, ds, $new($DatagramSocket, bindaddr));
	$var($bytes, b, $new($bytes, 100));
	$var($DatagramPacket, dp, $new($DatagramPacket, b, b->length));
	for (int32_t i = 0; i < $nc(ReuseBuf::msgs)->length; ++i) {
		$var($bytes, var$0, $nc(ReuseBuf::msgs->get(i))->getBytes());
		int32_t var$1 = $nc(ReuseBuf::msgs->get(i))->length();
		ds->send($$new($DatagramPacket, var$0, var$1, $($InetAddress::getLocalHost()), ReuseBuf::port));
		ds->receive(dp);
		$var($bytes, var$2, dp->getData());
		int32_t var$3 = dp->getOffset();
		if (!$nc(ReuseBuf::msgs->get(i))->equals($$new($String, var$2, var$3, dp->getLength()))) {
			$var($StringBuilder, var$4, $new($StringBuilder));
			var$4->append("Msg expected: "_s);
			var$4->append(ReuseBuf::msgs->get(i));
			var$4->append($nc(ReuseBuf::msgs->get(i))->length());
			var$4->append("msg received: "_s);
			$var($bytes, var$5, dp->getData());
			int32_t var$6 = dp->getOffset();
			var$4->append($$new($String, var$5, var$6, dp->getLength()));
			var$4->append(dp->getLength());
			$throwNew($RuntimeException, $$str(var$4));
		}
	}
	ds->close();
	$nc($System::out)->println("Test Passed!!!"_s);
}

void ReuseBuf::clinit$($Class* clazz) {
	$assignStatic(ReuseBuf::msgs, $new($StringArray, {
		"Hello World"_s,
		"Java"_s,
		"Good Bye"_s
	}));
}

ReuseBuf::ReuseBuf() {
}

$Class* ReuseBuf::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"msgs", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(ReuseBuf, msgs)},
		{"port", "I", nullptr, $STATIC, $staticField(ReuseBuf, port)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReuseBuf, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReuseBuf, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReuseBuf$ServerThread", "ReuseBuf", "ServerThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReuseBuf",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ReuseBuf$ServerThread"
	};
	$loadClass(ReuseBuf, name, initialize, &classInfo$$, ReuseBuf::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ReuseBuf);
	});
	return class$;
}

$Class* ReuseBuf::class$ = nullptr;