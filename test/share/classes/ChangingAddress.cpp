#include <ChangingAddress.h>

#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

$MethodInfo _ChangingAddress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ChangingAddress, init$, void)},
	{"check", "(Ljava/net/DatagramSocket;Ljava/nio/channels/DatagramChannel;)V", nullptr, $STATIC, $staticMethod(ChangingAddress, check, void, $DatagramSocket*, $DatagramChannel*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ChangingAddress, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _ChangingAddress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ChangingAddress",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ChangingAddress_MethodInfo_
};

$Object* allocate$ChangingAddress($Class* clazz) {
	return $of($alloc(ChangingAddress));
}

void ChangingAddress::init$() {
}

void ChangingAddress::check($DatagramSocket* ds, $DatagramChannel* dc) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, expected, $nc(ds)->getLocalAddress());
	$var($InetAddress, actual, $nc($($nc(dc)->socket()))->getLocalAddress());
	bool var$1 = $nc(expected)->isAnyLocalAddress();
	bool var$0 = (var$1 != $nc(actual)->isAnyLocalAddress());
	if (var$0 && !expected->equals(actual)) {
		$throwNew($RuntimeException, $$str({"Expected: "_s, expected, ", actual: "_s, actual}));
	}
}

void ChangingAddress::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$var($SocketAddress, remote, $new($InetSocketAddress, lh, 1234));
	$var($DatagramSocket, ds, nullptr);
	$var($DatagramChannel, dc, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(ds, $new($DatagramSocket));
			$assign(dc, $cast($DatagramChannel, $nc($($DatagramChannel::open()))->bind($$new($InetSocketAddress, 0))));
			check(ds, dc);
			ds->connect(remote);
			$nc(dc)->connect(remote);
			check(ds, dc);
			ds->disconnect();
			dc->disconnect();
			check(ds, dc);
			ds->connect(remote);
			$nc($(dc->socket()))->connect(remote);
			check(ds, dc);
			ds->disconnect();
			$nc($(dc->socket()))->disconnect();
			check(ds, dc);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (ds != nullptr) {
				ds->close();
			}
			if (dc != nullptr) {
				dc->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

ChangingAddress::ChangingAddress() {
}

$Class* ChangingAddress::load$($String* name, bool initialize) {
	$loadClass(ChangingAddress, name, initialize, &_ChangingAddress_ClassInfo_, allocate$ChangingAddress);
	return class$;
}

$Class* ChangingAddress::class$ = nullptr;