#include <Concurrent.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/PortUnreachableException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $PortUnreachableException = ::java::net::PortUnreachableException;

void Concurrent::run() {
	$useLocalObjectStack();
	try {
		$var($bytes, b, $new($bytes, 512));
		$var($DatagramPacket, p, $new($DatagramPacket, b, b->length));
		int32_t pue_count = 0;
		while (true) {
			try {
				$nc($System::out)->println("receive..."_s);
				$nc(this->s)->receive(p);
			} catch ($PortUnreachableException& pue) {
				$nc($System::out)->println("receive threw PortUnreachableException"_s);
				++pue_count;
			}
			$nc($System::out)->println("receiver sleeping"_s);
			$($Thread::currentThread())->sleep(100 * pue_count);
		}
	} catch ($Exception& e) {
	}
}

void Concurrent::init$($InetAddress* ia, int32_t port) {
	$useLocalObjectStack();
	$nc($System::out)->println(""_s);
	$System::out->println("***"_s);
	$System::out->println("Test Description:"_s);
	$System::out->println("    - Block reader thread on receive"_s);
	$System::out->println("    - Send datagrams to bad destination with wee pauses"_s);
	$System::out->println("    - Observe which thread gets the PUE"_s);
	$System::out->println(""_s);
	$set(this, s, $new($DatagramSocket));
	this->s->connect(ia, port);
	this->s->setSoTimeout(60000);
	$var($Thread, thr, $new($Thread, this));
	thr->start();
	$($Thread::currentThread())->sleep(2000);
	$var($bytes, b, $new($bytes, 512));
	$var($DatagramPacket, p, $new($DatagramPacket, b, b->length));
	for (int32_t i = 0; i < 10; ++i) {
		try {
			$System::out->println("Sending..."_s);
			this->s->send(p);
		} catch ($PortUnreachableException& e) {
			$System::out->println("send threw PortUnreachableException"_s);
		}
		$($Thread::currentThread())->sleep(100);
	}
	$($Thread::currentThread())->sleep(5000);
	this->s->close();
}

void Concurrent::main($StringArray* args) {
	$init(Concurrent);
	$useLocalObjectStack();
	$var($InetAddress, ia, nullptr);
	int32_t port = 0;
	if ($nc(args)->length >= 2) {
		$assign(ia, $InetAddress::getByName(args->get(0)));
		port = $Integer::parseInt(args->get(1));
	} else {
		$assign(ia, $InetAddress::getLocalHost());
		$var($DatagramSocket, s1, $new($DatagramSocket));
		port = s1->getLocalPort();
		s1->close();
	}
	$new(Concurrent, ia, port);
}

Concurrent::Concurrent() {
}

$Class* Concurrent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"s", "Ljava/net/DatagramSocket;", nullptr, 0, $field(Concurrent, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/InetAddress;I)V", nullptr, 0, $method(Concurrent, init$, void, $InetAddress*, int32_t), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Concurrent, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Concurrent, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Concurrent",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Concurrent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Concurrent);
	});
	return class$;
}

$Class* Concurrent::class$ = nullptr;