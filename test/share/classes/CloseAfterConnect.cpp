#include <CloseAfterConnect.h>
#include <CloseAfterConnect$1.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $CloseAfterConnect$1 = ::CloseAfterConnect$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

void CloseAfterConnect::init$() {
}

void CloseAfterConnect::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	$$nc($nc(ssc)->socket())->bind($$new($InetSocketAddress, 0));
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$var($SocketChannel, sc, $SocketChannel::open());
	$var($InetSocketAddress, isa, $new($InetSocketAddress, lh, $$nc(ssc->socket())->getLocalPort()));
	$var($Runnable, connector, $new($CloseAfterConnect$1, sc, isa));
	$var($Thread, thr, $new($Thread, connector));
	thr->start();
	do {
		try {
			thr->join();
		} catch ($InterruptedException& x) {
		}
	} while (thr->isAlive());
	if (!$nc(sc)->isConnected()) {
		$throwNew($RuntimeException, "SocketChannel not connected"_s);
	}
	sc->close();
	$$nc(ssc->accept())->close();
	ssc->close();
}

CloseAfterConnect::CloseAfterConnect() {
}

$Class* CloseAfterConnect::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CloseAfterConnect, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CloseAfterConnect, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CloseAfterConnect$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CloseAfterConnect",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"CloseAfterConnect$1"
	};
	$loadClass(CloseAfterConnect, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CloseAfterConnect);
	});
	return class$;
}

$Class* CloseAfterConnect::class$ = nullptr;