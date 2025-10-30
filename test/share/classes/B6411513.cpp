#include <B6411513.h>

#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/Inet4Address.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $Inet4Address = ::java::net::Inet4Address;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $Enumeration = ::java::util::Enumeration;

$MethodInfo _B6411513_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(B6411513::*)()>(&B6411513::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&B6411513::main)), "java.lang.Exception"},
	{"testConnectedUDP", "(Ljava/net/InetAddress;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($InetAddress*)>(&B6411513::testConnectedUDP)), "java.lang.Exception"},
	{}
};

$ClassInfo _B6411513_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"B6411513",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B6411513_MethodInfo_
};

$Object* allocate$B6411513($Class* clazz) {
	return $of($alloc(B6411513));
}

void B6411513::init$() {
}

void B6411513::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
						$($of(nic->getName())),
						$of(addr)
					}));
					testConnectedUDP(addr);
				}
			}
		}
	}
}

void B6411513::testConnectedUDP($InetAddress* addr) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($DatagramSocket, s, $new($DatagramSocket, 0, addr));
		$var($DatagramSocket, ss, $new($DatagramSocket, 0, addr));
		$nc($System::out)->print("\tconnect..."_s);
		$var($InetAddress, var$0, ss->getLocalAddress());
		s->connect(var$0, ss->getLocalPort());
		$nc($System::out)->print("disconnect..."_s);
		s->disconnect();
		$nc($System::out)->println($$str({"local addr: "_s, $(s->getLocalAddress())}));
		$nc($System::out)->println($$str({"local port: "_s, $$str(s->getLocalPort())}));
		$var($bytes, data, $new($bytes, {
			(int8_t)0,
			(int8_t)1,
			(int8_t)2
		}));
		$var($bytes, var$1, data);
		int32_t var$2 = data->length;
		$var($InetAddress, var$3, s->getLocalAddress());
		$var($DatagramPacket, p, $new($DatagramPacket, var$1, var$2, var$3, s->getLocalPort()));
		s->setSoTimeout(10000);
		$nc($System::out)->print("send..."_s);
		s->send(p);
		$nc($System::out)->print("recv..."_s);
		s->receive(p);
		$nc($System::out)->println("OK"_s);
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
	$loadClass(B6411513, name, initialize, &_B6411513_ClassInfo_, allocate$B6411513);
	return class$;
}

$Class* B6411513::class$ = nullptr;