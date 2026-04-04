#include <B6411513.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/Inet4Address.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $Inet4Address = ::java::net::Inet4Address;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $Enumeration = ::java::util::Enumeration;

void B6411513::init$() {
}

void B6411513::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Enumeration, nics, $NetworkInterface::getNetworkInterfaces());
	while ($nc(nics)->hasMoreElements()) {
		$var($NetworkInterface, nic, $cast($NetworkInterface, nics->nextElement()));
		bool var$0 = $nc(nic)->isUp();
		if (var$0 && !nic->isVirtual()) {
			$var($Enumeration, addrs, nic->getInetAddresses());
			while ($nc(addrs)->hasMoreElements()) {
				$var($InetAddress, addr, $cast($InetAddress, addrs->nextElement()));
				if ($instanceOf($Inet4Address, addr)) {
					$nc($System::out)->printf("%s : %s\n"_s, $$new($ObjectArray, {
						$(nic->getName()),
						addr
					}));
					testConnectedUDP(addr);
				}
			}
		}
	}
}

void B6411513::testConnectedUDP($InetAddress* addr) {
	$useLocalObjectStack();
	try {
		$var($DatagramSocket, s, $new($DatagramSocket, 0, addr));
		$var($DatagramSocket, ss, $new($DatagramSocket, 0, addr));
		$nc($System::out)->print("\tconnect..."_s);
		$var($InetAddress, var$0, ss->getLocalAddress());
		s->connect(var$0, ss->getLocalPort());
		$System::out->print("disconnect..."_s);
		s->disconnect();
		$System::out->println($$str({"local addr: "_s, $(s->getLocalAddress())}));
		$System::out->println($$str({"local port: "_s, $$str(s->getLocalPort())}));
		$var($bytes, data, $new($bytes, {
			0,
			1,
			2
		}));
		int32_t var$1 = data->length;
		$var($InetAddress, var$2, s->getLocalAddress());
		$var($DatagramPacket, p, $new($DatagramPacket, data, var$1, var$2, s->getLocalPort()));
		s->setSoTimeout(10000);
		$System::out->print("send..."_s);
		s->send(p);
		$System::out->print("recv..."_s);
		s->receive(p);
		$System::out->println("OK"_s);
		ss->close();
		s->close();
	} catch ($Exception& e) {
		e->printStackTrace();
		$throw(e);
	}
}

B6411513::B6411513() {
}

$Class* B6411513::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B6411513, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(B6411513, main, void, $StringArray*), "java.lang.Exception"},
		{"testConnectedUDP", "(Ljava/net/InetAddress;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(B6411513, testConnectedUDP, void, $InetAddress*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"B6411513",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B6411513, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B6411513);
	});
	return class$;
}

$Class* B6411513::class$ = nullptr;