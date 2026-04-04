#include <CheckDiscard$Sender.h>
#include <CheckDiscard.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $CheckDiscard = ::CheckDiscard;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;

void CheckDiscard$Sender::init$($CheckDiscard* this$0, int32_t port) {
	$set(this, this$0, this$0);
	$set(this, exc, nullptr);
	$set(this, s, $new($DatagramSocket));
	this->port = port;
}

int32_t CheckDiscard$Sender::getLocalPort() {
	return $nc(this->s)->getLocalPort();
}

void CheckDiscard$Sender::setException($Exception* e) {
	$set(this, exc, e);
}

$Exception* CheckDiscard$Sender::getException() {
	return this->exc;
}

void CheckDiscard$Sender::run() {
	$useLocalObjectStack();
	try {
		$var($bytes, b, "Hello"_s->getBytes());
		$var($DatagramPacket, p, $new($DatagramPacket, b, b->length));
		p->setAddress($($InetAddress::getLocalHost()));
		p->setPort(this->port);
		for (int32_t i = 0; i < 10; ++i) {
			$nc(this->s)->send(p);
			$($Thread::currentThread())->sleep(1000);
		}
	} catch ($Exception& e) {
		setException(e);
	}
	$nc(this->s)->close();
}

CheckDiscard$Sender::CheckDiscard$Sender() {
}

$Class* CheckDiscard$Sender::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LCheckDiscard;", nullptr, $FINAL | $SYNTHETIC, $field(CheckDiscard$Sender, this$0)},
		{"exc", "Ljava/lang/Exception;", nullptr, 0, $field(CheckDiscard$Sender, exc)},
		{"s", "Ljava/net/DatagramSocket;", nullptr, 0, $field(CheckDiscard$Sender, s)},
		{"port", "I", nullptr, 0, $field(CheckDiscard$Sender, port)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LCheckDiscard;I)V", nullptr, 0, $method(CheckDiscard$Sender, init$, void, $CheckDiscard*, int32_t), "java.lang.Exception"},
		{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(CheckDiscard$Sender, getException, $Exception*)},
		{"getLocalPort", "()I", nullptr, $PUBLIC, $virtualMethod(CheckDiscard$Sender, getLocalPort, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CheckDiscard$Sender, run, void)},
		{"setException", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $virtualMethod(CheckDiscard$Sender, setException, void, $Exception*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"CheckDiscard$Sender", "CheckDiscard", "Sender", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CheckDiscard$Sender",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"CheckDiscard"
	};
	$loadClass(CheckDiscard$Sender, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckDiscard$Sender);
	});
	return class$;
}

$Class* CheckDiscard$Sender::class$ = nullptr;