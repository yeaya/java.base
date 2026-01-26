#include <CloseAfterConnect.h>

#include <CloseAfterConnect$1.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
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
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$MethodInfo _CloseAfterConnect_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CloseAfterConnect, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CloseAfterConnect, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _CloseAfterConnect_InnerClassesInfo_[] = {
	{"CloseAfterConnect$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CloseAfterConnect_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CloseAfterConnect",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CloseAfterConnect_MethodInfo_,
	nullptr,
	nullptr,
	_CloseAfterConnect_InnerClassesInfo_,
	nullptr,
	nullptr,
	"CloseAfterConnect$1"
};

$Object* allocate$CloseAfterConnect($Class* clazz) {
	return $of($alloc(CloseAfterConnect));
}

void CloseAfterConnect::init$() {
}

void CloseAfterConnect::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ServerSocketChannel, ssc, $ServerSocketChannel::open());
	$nc($($nc(ssc)->socket()))->bind($$new($InetSocketAddress, 0));
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$var($SocketChannel, sc, $SocketChannel::open());
	$var($InetSocketAddress, isa, $new($InetSocketAddress, lh, $nc($(ssc->socket()))->getLocalPort()));
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
	$nc(sc)->close();
	$nc($(ssc->accept()))->close();
	ssc->close();
}

CloseAfterConnect::CloseAfterConnect() {
}

$Class* CloseAfterConnect::load$($String* name, bool initialize) {
	$loadClass(CloseAfterConnect, name, initialize, &_CloseAfterConnect_ClassInfo_, allocate$CloseAfterConnect);
	return class$;
}

$Class* CloseAfterConnect::class$ = nullptr;