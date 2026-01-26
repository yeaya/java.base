#include <NetworkChannelTests.h>

#include <NetworkChannelTests$1.h>
#include <NetworkChannelTests$2.h>
#include <NetworkChannelTests$3.h>
#include <NetworkChannelTests$BogusSocketAddress.h>
#include <NetworkChannelTests$ChannelFactory.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/AlreadyBoundException.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/UnsupportedAddressTypeException.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $NetworkChannelTests$1 = ::NetworkChannelTests$1;
using $NetworkChannelTests$2 = ::NetworkChannelTests$2;
using $NetworkChannelTests$3 = ::NetworkChannelTests$3;
using $NetworkChannelTests$BogusSocketAddress = ::NetworkChannelTests$BogusSocketAddress;
using $NetworkChannelTests$ChannelFactory = ::NetworkChannelTests$ChannelFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketAddress = ::java::net::SocketAddress;
using $AlreadyBoundException = ::java::nio::channels::AlreadyBoundException;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $UnsupportedAddressTypeException = ::java::nio::channels::UnsupportedAddressTypeException;

$MethodInfo _NetworkChannelTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NetworkChannelTests, init$, void)},
	{"bindTests", "(LNetworkChannelTests$ChannelFactory;)V", nullptr, $STATIC, $staticMethod(NetworkChannelTests, bindTests, void, $NetworkChannelTests$ChannelFactory*), "java.io.IOException"},
	{"connectedAddressTests", "()V", nullptr, $STATIC, $staticMethod(NetworkChannelTests, connectedAddressTests, void), "java.io.IOException"},
	{"localAddressTests", "(LNetworkChannelTests$ChannelFactory;)V", nullptr, $STATIC, $staticMethod(NetworkChannelTests, localAddressTests, void, $NetworkChannelTests$ChannelFactory*), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NetworkChannelTests, main, void, $StringArray*), "java.io.IOException"},
	{}
};

$InnerClassInfo _NetworkChannelTests_InnerClassesInfo_[] = {
	{"NetworkChannelTests$BogusSocketAddress", "NetworkChannelTests", "BogusSocketAddress", $STATIC},
	{"NetworkChannelTests$ChannelFactory", "NetworkChannelTests", "ChannelFactory", $STATIC | $INTERFACE | $ABSTRACT},
	{"NetworkChannelTests$3", nullptr, nullptr, 0},
	{"NetworkChannelTests$2", nullptr, nullptr, 0},
	{"NetworkChannelTests$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NetworkChannelTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NetworkChannelTests",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NetworkChannelTests_MethodInfo_,
	nullptr,
	nullptr,
	_NetworkChannelTests_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NetworkChannelTests$BogusSocketAddress,NetworkChannelTests$ChannelFactory,NetworkChannelTests$3,NetworkChannelTests$2,NetworkChannelTests$1"
};

$Object* allocate$NetworkChannelTests($Class* clazz) {
	return $of($alloc(NetworkChannelTests));
}

void NetworkChannelTests::init$() {
}

void NetworkChannelTests::bindTests($NetworkChannelTests$ChannelFactory* factory) {
	$useLocalCurrentObjectStackCache();
	$var($NetworkChannel, ch, nullptr);
	$assign(ch, $nc($($nc(factory)->open()))->bind($$new($InetSocketAddress, 0)));
	try {
		$nc(ch)->bind($$new($InetSocketAddress, 0));
		$throwNew($RuntimeException, "AlreadyBoundException not thrown"_s);
	} catch ($AlreadyBoundException& x) {
	}
	$nc(ch)->close();
	$assign(ch, $nc($(factory->open()))->bind(nullptr));
	if (ch->getLocalAddress() == nullptr) {
		$throwNew($RuntimeException, "socket not found"_s);
	}
	ch->close();
	$assign(ch, factory->open());
	try {
		ch->bind($$new($NetworkChannelTests$BogusSocketAddress));
		$throwNew($RuntimeException, "UnsupportedAddressTypeException not thrown"_s);
	} catch ($UnsupportedAddressTypeException& x) {
	}
	ch->close();
	try {
		ch->bind($$new($InetSocketAddress, 0));
		$throwNew($RuntimeException, "ClosedChannelException not thrown"_s);
	} catch ($ClosedChannelException& x) {
	}
}

void NetworkChannelTests::localAddressTests($NetworkChannelTests$ChannelFactory* factory) {
	$useLocalCurrentObjectStackCache();
	$var($NetworkChannel, ch, nullptr);
	$assign(ch, $nc(factory)->open());
	if ($nc(ch)->getLocalAddress() != nullptr) {
		$throwNew($RuntimeException, "Local address returned when not bound"_s);
	}
	$var($InetSocketAddress, local, ($cast($InetSocketAddress, $nc($($nc(ch)->bind($$new($InetSocketAddress, 0))))->getLocalAddress())));
	if (!$nc($($nc(local)->getAddress()))->isAnyLocalAddress()) {
		if ($NetworkInterface::getByInetAddress($(local->getAddress())) == nullptr) {
			$throwNew($RuntimeException, "not bound to local address"_s);
		}
	}
	if ($nc(local)->getPort() <= 0) {
		$throwNew($RuntimeException, "not bound to local port"_s);
	}
	ch->close();
	try {
		ch->getLocalAddress();
		$throwNew($RuntimeException, "ClosedChannelException expected"_s);
	} catch ($ClosedChannelException& e) {
	}
}

void NetworkChannelTests::connectedAddressTests() {
	$useLocalCurrentObjectStackCache();
	$var($ServerSocketChannel, ssc, $cast($ServerSocketChannel, $nc($($ServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
	$var($InetSocketAddress, local, ($cast($InetSocketAddress, $nc(ssc)->getLocalAddress())));
	int32_t port = $nc(local)->getPort();
	$var($InetSocketAddress, server, $new($InetSocketAddress, $($InetAddress::getLocalHost()), port));
	$var($SocketChannel, sc, $SocketChannel::open());
	if ($nc(sc)->getRemoteAddress() != nullptr) {
		$throwNew($RuntimeException, "getRemoteAddress returned address when not connected"_s);
	}
	$nc(sc)->connect(server);
	$var($SocketAddress, remote, sc->getRemoteAddress());
	if (!$nc($of(remote))->equals(server)) {
		$throwNew($RuntimeException, "getRemoteAddress returned incorrect address"_s);
	}
	sc->close();
	try {
		sc->getRemoteAddress();
		$throwNew($RuntimeException, "ClosedChannelException expected"_s);
	} catch ($ClosedChannelException& e) {
	}
	ssc->close();
}

void NetworkChannelTests::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($NetworkChannelTests$ChannelFactory, factory, nullptr);
	$assign(factory, $new($NetworkChannelTests$1));
	bindTests(factory);
	localAddressTests(factory);
	connectedAddressTests();
	$assign(factory, $new($NetworkChannelTests$2));
	bindTests(factory);
	localAddressTests(factory);
	$nc($($nc($($ServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0), 100)))->close();
	$nc($($nc($($ServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0), 0)))->close();
	$nc($($nc($($ServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0), -1)))->close();
	$assign(factory, $new($NetworkChannelTests$3));
	bindTests(factory);
	localAddressTests(factory);
}

NetworkChannelTests::NetworkChannelTests() {
}

$Class* NetworkChannelTests::load$($String* name, bool initialize) {
	$loadClass(NetworkChannelTests, name, initialize, &_NetworkChannelTests_ClassInfo_, allocate$NetworkChannelTests);
	return class$;
}

$Class* NetworkChannelTests::class$ = nullptr;