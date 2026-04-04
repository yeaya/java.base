#include <CheckDiscard.h>
#include <CheckDiscard$Sender.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/SocketTimeoutException.h>
#include <jcpp.h>

using $CheckDiscard$Sender = ::CheckDiscard$Sender;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;

void CheckDiscard::init$() {
	$useLocalObjectStack();
	$var($DatagramSocket, s, $new($DatagramSocket));
	$var($CheckDiscard$Sender, s1, $new($CheckDiscard$Sender, this, s->getLocalPort()));
	$var($CheckDiscard$Sender, s2, $new($CheckDiscard$Sender, this, s->getLocalPort()));
	$var($InetAddress, ia, $InetAddress::getLocalHost());
	s->connect(ia, s1->getLocalPort());
	($$new($Thread, s1))->start();
	($$new($Thread, s2))->start();
	$var($bytes, b, $new($bytes, 512));
	$var($DatagramPacket, p, $new($DatagramPacket, b, b->length));
	s->setSoTimeout(4000);
	try {
		for (int32_t i = 0; i < 20; ++i) {
			s->receive(p);
			int32_t var$1 = p->getPort();
			bool var$0 = var$1 != s1->getLocalPort();
			if (var$0 || (!$$nc(p->getAddress())->equals(ia))) {
				$throwNew($Exception, "Received packet from wrong sender"_s);
			}
		}
	} catch ($SocketTimeoutException& e) {
	}
	$var($Exception, e, nullptr);
	$assign(e, s1->getException());
	if (e != nullptr) {
		$throw(e);
	}
	$assign(e, s2->getException());
	if (e != nullptr) {
		$throw(e);
	}
}

void CheckDiscard::main($StringArray* args) {
	$new(CheckDiscard);
}

CheckDiscard::CheckDiscard() {
}

$Class* CheckDiscard::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CheckDiscard, init$, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CheckDiscard, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CheckDiscard$Sender", "CheckDiscard", "Sender", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CheckDiscard",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"CheckDiscard$Sender"
	};
	$loadClass(CheckDiscard, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckDiscard);
	});
	return class$;
}

$Class* CheckDiscard::class$ = nullptr;