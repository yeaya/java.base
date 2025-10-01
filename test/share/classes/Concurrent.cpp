#include <Concurrent.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/PortUnreachableException.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $PortUnreachableException = ::java::net::PortUnreachableException;

$FieldInfo _Concurrent_FieldInfo_[] = {
	{"s", "Ljava/net/DatagramSocket;", nullptr, 0, $field(Concurrent, s)},
	{}
};

$MethodInfo _Concurrent_MethodInfo_[] = {
	{"<init>", "(Ljava/net/InetAddress;I)V", nullptr, 0, $method(static_cast<void(Concurrent::*)($InetAddress*,int32_t)>(&Concurrent::init$)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Concurrent::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Concurrent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Concurrent",
	"java.lang.Object",
	"java.lang.Runnable",
	_Concurrent_FieldInfo_,
	_Concurrent_MethodInfo_
};

$Object* allocate$Concurrent($Class* clazz) {
	return $of($alloc(Concurrent));
}

void Concurrent::run() {
	try {
		$var($bytes, b, $new($bytes, 512));
		$var($DatagramPacket, p, $new($DatagramPacket, b, b->length));
		int32_t pue_count = 0;
		while (true) {
			try {
				$init($System);
				$nc($System::out)->println("receive..."_s);
				$nc(this->s)->receive(p);
			} catch ($PortUnreachableException&) {
				$var($PortUnreachableException, pue, $catch());
				$init($System);
				$nc($System::out)->println("receive threw PortUnreachableException"_s);
				++pue_count;
			}
			$init($System);
			$nc($System::out)->println("receiver sleeping"_s);
			$($Thread::currentThread())->sleep(100 * pue_count);
		}
	} catch ($Exception&) {
		$catch();
	}
}

void Concurrent::init$($InetAddress* ia, int32_t port) {
	$init($System);
	$nc($System::out)->println(""_s);
	$nc($System::out)->println("***"_s);
	$nc($System::out)->println("Test Description:"_s);
	$nc($System::out)->println("    - Block reader thread on receive"_s);
	$nc($System::out)->println("    - Send datagrams to bad destination with wee pauses"_s);
	$nc($System::out)->println("    - Observe which thread gets the PUE"_s);
	$nc($System::out)->println(""_s);
	$set(this, s, $new($DatagramSocket));
	$nc(this->s)->connect(ia, port);
	$nc(this->s)->setSoTimeout(0x0000EA60);
	$var($Thread, thr, $new($Thread, static_cast<$Runnable*>(this)));
	thr->start();
	$($Thread::currentThread())->sleep(2000);
	$var($bytes, b, $new($bytes, 512));
	$var($DatagramPacket, p, $new($DatagramPacket, b, b->length));
	for (int32_t i = 0; i < 10; ++i) {
		try {
			$nc($System::out)->println("Sending..."_s);
			$nc(this->s)->send(p);
		} catch ($PortUnreachableException&) {
			$var($PortUnreachableException, e, $catch());
			$nc($System::out)->println("send threw PortUnreachableException"_s);
		}
		$($Thread::currentThread())->sleep(100);
	}
	$($Thread::currentThread())->sleep(5000);
	$nc(this->s)->close();
}

void Concurrent::main($StringArray* args) {
	$init(Concurrent);
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
	$loadClass(Concurrent, name, initialize, &_Concurrent_ClassInfo_, allocate$Concurrent);
	return class$;
}

$Class* Concurrent::class$ = nullptr;