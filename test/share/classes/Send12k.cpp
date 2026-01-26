#include <Send12k.h>

#include <java/io/IOException.h>
#include <java/io/InterruptedIOException.h>
#include <java/lang/CharSequence.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

#undef SEND_SIZE

using $IOException = ::java::io::IOException;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;

$MethodInfo _Send12k_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Send12k, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Send12k, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Send12k_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Send12k",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Send12k_MethodInfo_
};

$Object* allocate$Send12k($Class* clazz) {
	return $of($alloc(Send12k));
}

void Send12k::init$() {
}

void Send12k::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t SEND_SIZE = 0;
	if ($nc($($System::getProperty("os.name"_s)))->contains("Mac"_s)) {
		SEND_SIZE = 16 * 576;
	} else {
		SEND_SIZE = 16 * 1024;
	}
	$var($InetAddress, localHost, $InetAddress::getLocalHost());
	$var($DatagramSocket, s1, $new($DatagramSocket));
	$var($DatagramSocket, s2, $new($DatagramSocket, 0, localHost));
	$var($bytes, b1, $new($bytes, SEND_SIZE));
	$var($DatagramPacket, p1, $new($DatagramPacket, b1, 0, b1->length, localHost, s2->getLocalPort()));
	bool sendOkay = true;
	try {
		$var($String, var$0, $$str({"Sending to: ["_s, localHost, "]:"_s}));
		$nc($System::out)->println($$concat(var$0, $$str(s2->getLocalPort())));
		s1->send(p1);
	} catch ($IOException& e) {
		$nc($System::out)->println($$str({"Sending failed: "_s, e}));
		sendOkay = false;
	}
	if (sendOkay) {
		$var($bytes, b2, $new($bytes, SEND_SIZE * 2));
		$var($DatagramPacket, p2, $new($DatagramPacket, b2, SEND_SIZE * 2));
		s2->setSoTimeout(2000);
		try {
			s2->receive(p1);
		} catch ($InterruptedIOException& ioe) {
			$throwNew($Exception, "Datagram not received within timeout"_s);
		}
		if (p1->getLength() != SEND_SIZE) {
			$throwNew($Exception, "Received datagram incorrect size"_s);
		}
	}
}

Send12k::Send12k() {
}

$Class* Send12k::load$($String* name, bool initialize) {
	$loadClass(Send12k, name, initialize, &_Send12k_ClassInfo_, allocate$Send12k);
	return class$;
}

$Class* Send12k::class$ = nullptr;