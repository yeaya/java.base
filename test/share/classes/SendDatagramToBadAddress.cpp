#include <SendDatagramToBadAddress.h>

#include <SendDatagramToBadAddress$Server.h>
#include <java/io/InterruptedIOException.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $SendDatagramToBadAddress$Server = ::SendDatagramToBadAddress$Server;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $Properties = ::java::util::Properties;

$FieldInfo _SendDatagramToBadAddress_FieldInfo_[] = {
	{"debug", "Z", nullptr, $STATIC, $staticField(SendDatagramToBadAddress, debug)},
	{}
};

$MethodInfo _SendDatagramToBadAddress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SendDatagramToBadAddress::*)()>(&SendDatagramToBadAddress::init$))},
	{"OSsupportsFeature", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&SendDatagramToBadAddress::OSsupportsFeature))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SendDatagramToBadAddress::main)), "java.lang.Exception"},
	{"print", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&SendDatagramToBadAddress::print))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"test", "(Ljava/net/DatagramSocket;)V", nullptr, $PRIVATE, $method(static_cast<void(SendDatagramToBadAddress::*)($DatagramSocket*)>(&SendDatagramToBadAddress::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SendDatagramToBadAddress_InnerClassesInfo_[] = {
	{"SendDatagramToBadAddress$Server", "SendDatagramToBadAddress", "Server", 0},
	{}
};

$ClassInfo _SendDatagramToBadAddress_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SendDatagramToBadAddress",
	"java.lang.Object",
	nullptr,
	_SendDatagramToBadAddress_FieldInfo_,
	_SendDatagramToBadAddress_MethodInfo_,
	nullptr,
	nullptr,
	_SendDatagramToBadAddress_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SendDatagramToBadAddress$Server"
};

$Object* allocate$SendDatagramToBadAddress($Class* clazz) {
	return $of($alloc(SendDatagramToBadAddress));
}

bool SendDatagramToBadAddress::debug = false;

void SendDatagramToBadAddress::init$() {
}

bool SendDatagramToBadAddress::OSsupportsFeature() {
	$init(SendDatagramToBadAddress);
	$useLocalCurrentObjectStackCache();
	$var($Properties, p, $System::getProperties());
	$var($String, v, nullptr);
	if ($nc($($nc(p)->getProperty("os.name"_s)))->equals("Windows 2000"_s)) {
		return (true);
	}
	if ($nc($($nc(p)->getProperty("os.name"_s)))->equals("Linux"_s)) {
		return (true);
	}
	if ($nc($($nc(p)->getProperty("os.name"_s)))->startsWith("Mac OS"_s)) {
		return (true);
	}
	return false;
}

void SendDatagramToBadAddress::print($String* s) {
	$init(SendDatagramToBadAddress);
	if (SendDatagramToBadAddress::debug) {
		$nc($System::out)->println(s);
	}
}

void SendDatagramToBadAddress::main($StringArray* args) {
	$init(SendDatagramToBadAddress);
	if ($nc(args)->length >= 1 && $nc(args->get(0))->equals("-d"_s)) {
		SendDatagramToBadAddress::debug = true;
	}
	$var(SendDatagramToBadAddress, ud, $new(SendDatagramToBadAddress));
	ud->run();
}

void SendDatagramToBadAddress::run() {
	$useLocalCurrentObjectStackCache();
	if (OSsupportsFeature()) {
		print("running on OS that supports ICMP port unreachable"_s);
	}
	{
		$var($DatagramSocket, sock, $new($DatagramSocket));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					test(sock);
				} catch ($Throwable& t$) {
					try {
						sock->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				sock->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void SendDatagramToBadAddress::test($DatagramSocket* sock) {
	$useLocalCurrentObjectStackCache();
	print($$str({"Testing with "_s, $nc($of(sock))->getClass()}));
	$var($InetAddress, addr, $InetAddress::getLoopbackAddress());
	$var($DatagramSocket, serversock, $new($DatagramSocket, 0));
	$var($DatagramPacket, p, nullptr);
	$var($bytes, buf, nullptr);
	int32_t port = serversock->getLocalPort();
	int32_t loop = 5;
	$var($SendDatagramToBadAddress$Server, s, $new($SendDatagramToBadAddress$Server, this, serversock));
	int32_t i = 0;
	print("Checking send to connected address ..."_s);
	$nc(sock)->connect(addr, port);
	for (i = 0; i < loop; ++i) {
		try {
			$assign(buf, $nc(($$str({"Hello, server"_s, $$str(i)})))->getBytes());
			if (i % 2 == 1) {
				$assign(p, $new($DatagramPacket, buf, buf->length, addr, port));
			} else {
				$assign(p, $new($DatagramPacket, buf, buf->length));
			}
			sock->send(p);
		} catch ($Exception& ex) {
			print($$str({"Got unexpected exception: "_s, ex}));
			$throwNew($Exception, "Error sending data: "_s);
		}
	}
	s->receive(loop, false);
	print("Checking send to non-connected address ..."_s);
	sock->disconnect();
	$assign(buf, $nc(($$str({"Hello, server"_s, $$str(0)})))->getBytes());
	$assign(p, $new($DatagramPacket, buf, buf->length, addr, port));
	sock->send(p);
	s->receive(1, false);
	print("Checking send to invalid address ..."_s);
	sock->connect(addr, port);
	serversock->close();
	try {
		sock->setSoTimeout(4000);
	} catch ($Exception& e) {
		print("could not set timeout"_s);
		$throw(e);
	}
	bool goterror = false;
	for (i = 0; i < loop; ++i) {
		try {
			$assign(buf, $nc(($$str({"Hello, server"_s, $$str(i)})))->getBytes());
			$assign(p, $new($DatagramPacket, buf, buf->length, addr, port));
			sock->send(p);
			$assign(p, $new($DatagramPacket, buf, buf->length, addr, port));
			sock->receive(p);
		} catch ($InterruptedIOException& ex) {
			print("socket timeout"_s);
		} catch ($Exception& ex) {
			print($$str({"Got expected exception: "_s, ex}));
			goterror = true;
		}
	}
	if (!goterror && OSsupportsFeature()) {
		print("Didnt get expected exception: "_s);
		$throwNew($Exception, "send did not return expected error"_s);
	}
}

void clinit$SendDatagramToBadAddress($Class* class$) {
	SendDatagramToBadAddress::debug = false;
}

SendDatagramToBadAddress::SendDatagramToBadAddress() {
}

$Class* SendDatagramToBadAddress::load$($String* name, bool initialize) {
	$loadClass(SendDatagramToBadAddress, name, initialize, &_SendDatagramToBadAddress_ClassInfo_, clinit$SendDatagramToBadAddress, allocate$SendDatagramToBadAddress);
	return class$;
}

$Class* SendDatagramToBadAddress::class$ = nullptr;