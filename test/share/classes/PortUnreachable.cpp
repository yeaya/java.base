#include <PortUnreachable.h>

#include <java/lang/AssertionError.h>
#include <java/net/BindException.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

#undef MAX_VALUE

using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $BindException = ::java::net::BindException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _PortUnreachable_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PortUnreachable, $assertionsDisabled)},
	{"clientSock", "Ljava/net/DatagramSocket;", nullptr, 0, $field(PortUnreachable, clientSock)},
	{"serverPort", "I", nullptr, 0, $field(PortUnreachable, serverPort)},
	{"clientPort", "I", nullptr, 0, $field(PortUnreachable, clientPort)},
	{}
};

$MethodInfo _PortUnreachable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PortUnreachable::*)()>(&PortUnreachable::init$)), "java.lang.Exception"},
	{"attempt", "(I)Ljava/lang/String;", nullptr, 0},
	{"execute", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PortUnreachable::main)), "java.lang.Exception"},
	{"recreateServerSocket", "(I)Ljava/net/DatagramSocket;", nullptr, 0, nullptr, "java.lang.Exception"},
	{"serverSend", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"sleepAtLeast", "(J)J", nullptr, 0, nullptr, "java.lang.Exception"},
	{"sleeptime", "(J)Ljava/lang/String;", nullptr, 0},
	{}
};

$ClassInfo _PortUnreachable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PortUnreachable",
	"java.lang.Object",
	nullptr,
	_PortUnreachable_FieldInfo_,
	_PortUnreachable_MethodInfo_
};

$Object* allocate$PortUnreachable($Class* clazz) {
	return $of($alloc(PortUnreachable));
}

bool PortUnreachable::$assertionsDisabled = false;

void PortUnreachable::serverSend() {
	$useLocalCurrentObjectStackCache();
	$var($InetAddress, addr, $InetAddress::getLocalHost());
	$Thread::sleep(1000);
	$var($bytes, b, "A late msg"_s->getBytes());
	$var($DatagramPacket, packet, $new($DatagramPacket, b, b->length, addr, this->serverPort));
	$nc(this->clientSock)->send(packet);
	$var($DatagramSocket, sock, recreateServerSocket(this->serverPort));
	$assign(b, "Greetings from the server"_s->getBytes());
	$assign(packet, $new($DatagramPacket, b, b->length, addr, this->clientPort));
	$nc(sock)->send(packet);
	$Thread::sleep(500);
	sock->close();
}

$DatagramSocket* PortUnreachable::recreateServerSocket(int32_t serverPort) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramSocket, serverSocket, nullptr);
	int32_t retryCount = 0;
	int64_t sleeptime = 0;
	$nc($System::out)->println($$str({"Attempting to recreate server socket with port: "_s, $$str(serverPort)}));
	while (serverSocket == nullptr) {
		try {
			$assign(serverSocket, $new($DatagramSocket, serverPort, $($InetAddress::getLocalHost())));
		} catch ($BindException& bEx) {
			if (retryCount++ < 10) {
				sleeptime += sleepAtLeast(500);
			} else {
				$nc($System::out)->println($$str({"Give up after 10 retries and "_s, $(this->sleeptime(sleeptime))}));
				$nc($System::out)->println($$str({"Has some other process grabbed port "_s, $$str(serverPort), "?"_s}));
				$throw(bEx);
			}
		}
	}
	$var($String, var$4, $$str({"PortUnreachableTest.recreateServerSocket: returning socket == "_s, $($nc(serverSocket)->getLocalAddress()), ":"_s}));
	$var($String, var$3, $$concat(var$4, $$str(serverSocket->getLocalPort())));
	$var($String, var$2, $$concat(var$3, " obtained at "));
	$var($String, var$1, $$concat(var$2, $(attempt(retryCount))));
	$var($String, var$0, $$concat(var$1, " attempt with "));
	$nc($System::out)->println($$concat(var$0, $(this->sleeptime(sleeptime))));
	return serverSocket;
}

int64_t PortUnreachable::sleepAtLeast(int64_t millis) {
	int64_t start = $System::nanoTime();
	int64_t ms = millis;
	while (ms > 0) {
		if (!PortUnreachable::$assertionsDisabled && !(ms < $div($Long::MAX_VALUE, (int64_t)1000000))) {
			$throwNew($AssertionError);
		}
		$Thread::sleep(ms);
		int64_t elapsedms = $div(($System::nanoTime() - start), (int64_t)1000000);
		ms = millis - elapsedms;
	}
	return millis - ms;
}

$String* PortUnreachable::attempt(int32_t retry) {
	switch (retry) {
	case 0:
		{
			return "first"_s;
		}
	case 1:
		{
			return "second"_s;
		}
	case 2:
		{
			return "third"_s;
		}
	default:
		{
			return $str({$$str(retry), "th"_s});
		}
	}
}

$String* PortUnreachable::sleeptime(int64_t millis) {
	$useLocalCurrentObjectStackCache();
	if (millis == 0) {
		return "no sleep"_s;
	}
	int64_t sec = $div(millis, (int64_t)1000);
	int64_t ms = $mod(millis, (int64_t)1000);
	$var($String, sleeptime, ""_s);
	if (millis > 0) {
		if (sec > 0) {
			$assign(sleeptime, $str({""_s, $$str(sec), " s"_s, (ms > 0 ? " "_s : ""_s)}));
		}
		if (ms > 0) {
			$plusAssign(sleeptime, $$str({$$str(ms), " ms"_s}));
		}
	} else {
		$assign(sleeptime, $str({$$str(millis), " ms"_s}));
	}
	return $str({sleeptime, " of sleep time"_s});
}

void PortUnreachable::init$() {
	$useLocalCurrentObjectStackCache();
	$set(this, clientSock, $new($DatagramSocket, static_cast<$SocketAddress*>($$new($InetSocketAddress, $($InetAddress::getLocalHost()), 0))));
	this->clientPort = $nc(this->clientSock)->getLocalPort();
}

void PortUnreachable::execute() {
	$useLocalCurrentObjectStackCache();
	$var($DatagramSocket, sock2, $new($DatagramSocket, static_cast<$SocketAddress*>($$new($InetSocketAddress, $($InetAddress::getLocalHost()), 0))));
	this->serverPort = sock2->getLocalPort();
	$var($InetAddress, addr, $InetAddress::getLocalHost());
	$var($bytes, b, "Hello me"_s->getBytes());
	$var($DatagramPacket, packet, $new($DatagramPacket, b, b->length, addr, this->serverPort));
	sock2->close();
	for (int32_t i = 0; i < 100; ++i) {
		$nc(this->clientSock)->send(packet);
	}
	serverSend();
	$assign(b, $new($bytes, 25));
	$assign(packet, $new($DatagramPacket, b, b->length, addr, this->serverPort));
	$nc(this->clientSock)->setSoTimeout(10000);
	$nc(this->clientSock)->receive(packet);
	$nc($System::out)->println($$str({"client received data packet "_s, $$new($String, $(packet->getData()))}));
	$nc(this->clientSock)->close();
}

void PortUnreachable::main($StringArray* args) {
	$init(PortUnreachable);
	$useLocalCurrentObjectStackCache();
	int32_t catchCount = 0;
	while (true) {
		try {
			$var(PortUnreachable, test, $new(PortUnreachable));
			test->execute();
			return;
		} catch ($BindException& bEx) {
			$nc($System::out)->println($$str({"Failed to bind server: "_s, bEx}));
			if (++catchCount > 3) {
				$nc($System::out)->printf("Max retry count exceeded (%d)%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(catchCount)))}));
				$throw(bEx);
			}
			$nc($System::out)->printf("Retrying; retry count: %d%n"_s, $$new($ObjectArray, {$($of($Integer::valueOf(catchCount)))}));
		}
	}
}

void clinit$PortUnreachable($Class* class$) {
	PortUnreachable::$assertionsDisabled = !PortUnreachable::class$->desiredAssertionStatus();
}

PortUnreachable::PortUnreachable() {
}

$Class* PortUnreachable::load$($String* name, bool initialize) {
	$loadClass(PortUnreachable, name, initialize, &_PortUnreachable_ClassInfo_, clinit$PortUnreachable, allocate$PortUnreachable);
	return class$;
}

$Class* PortUnreachable::class$ = nullptr;