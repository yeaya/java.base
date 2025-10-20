#include <ChangingAddress.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _ChangingAddress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ChangingAddress::*)()>(&ChangingAddress::init$))},
	{"check", "(Ljava/net/DatagramSocket;Ljava/nio/channels/DatagramChannel;)V", nullptr, $STATIC, $method(static_cast<void(*)($DatagramSocket*,$DatagramChannel*)>(&ChangingAddress::check))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ChangingAddress::main)), "java.lang.Exception"},
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
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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