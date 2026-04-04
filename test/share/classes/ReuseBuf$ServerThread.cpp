#include <ReuseBuf$ServerThread.h>
#include <ReuseBuf.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $ReuseBuf = ::ReuseBuf;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;

void ReuseBuf$ServerThread::init$() {
	$useLocalObjectStack();
	$Thread::init$();
	try {
		$var($InetAddress, local, $InetAddress::getLocalHost());
		$var($InetSocketAddress, bindaddr, $new($InetSocketAddress, local, 0));
		$set(this, ds, $new($DatagramSocket, bindaddr));
		$init($ReuseBuf);
		$ReuseBuf::port = this->ds->getLocalPort();
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $(e->getMessage()));
	}
}

void ReuseBuf$ServerThread::run() {
	$useLocalObjectStack();
	$var($bytes, b, $new($bytes, 100));
	$var($DatagramPacket, dp, $new($DatagramPacket, b, b->length));
	while (true) {
		try {
			$nc(this->ds)->receive(dp);
			$var($bytes, var$0, dp->getData());
			int32_t var$1 = dp->getOffset();
			$var($String, reply, $new($String, var$0, var$1, dp->getLength()));
			$var($bytes, var$2, reply->getBytes());
			int32_t var$3 = reply->length();
			$var($InetAddress, var$4, dp->getAddress());
			this->ds->send($$new($DatagramPacket, var$2, var$3, var$4, dp->getPort()));
			$init($ReuseBuf);
			if (reply->equals($nc($ReuseBuf::msgs)->get($nc($ReuseBuf::msgs)->length - 1))) {
				break;
			}
		} catch ($Exception& e) {
			$throwNew($RuntimeException, $(e->getMessage()));
		}
	}
	$nc(this->ds)->close();
}

ReuseBuf$ServerThread::ReuseBuf$ServerThread() {
}

$Class* ReuseBuf$ServerThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ds", "Ljava/net/DatagramSocket;", nullptr, 0, $field(ReuseBuf$ServerThread, ds)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReuseBuf$ServerThread, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ReuseBuf$ServerThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReuseBuf$ServerThread", "ReuseBuf", "ServerThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReuseBuf$ServerThread",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReuseBuf"
	};
	$loadClass(ReuseBuf$ServerThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReuseBuf$ServerThread);
	});
	return class$;
}

$Class* ReuseBuf$ServerThread::class$ = nullptr;