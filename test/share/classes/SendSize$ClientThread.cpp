#include <SendSize$ClientThread.h>
#include <SendSize.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;

void SendSize$ClientThread::init$(int32_t serverPort) {
	$Thread::init$();
	this->serverPort = serverPort;
	$set(this, host, $InetAddress::getLocalHost());
	$set(this, client, $new($DatagramSocket));
}

void SendSize$ClientThread::run() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	bool return$1 = false;
	try {
		try {
			$nc($System::err)->println($$str({"started client thread: "_s, this->client}));
			$var($bytes, buf, $new($bytes, 512));
			$var($DatagramPacket, sendPacket, $new($DatagramPacket, buf, 256, this->host, this->serverPort));
			for (int32_t i = 0; i < 10; ++i) {
				$nc(this->client)->send(sendPacket);
			}
			$System::err->println("sent 10 packets"_s);
			return$1 = true;
			goto $finally;
		} catch ($Exception& e) {
			e->printStackTrace();
			$throwNew($RuntimeException, $$str({"caught: "_s, e}));
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} $finally: {
		if (this->client != nullptr) {
			this->client->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return;
	}
}

SendSize$ClientThread::SendSize$ClientThread() {
}

$Class* SendSize$ClientThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serverPort", "I", nullptr, 0, $field(SendSize$ClientThread, serverPort)},
		{"client", "Ljava/net/DatagramSocket;", nullptr, 0, $field(SendSize$ClientThread, client)},
		{"host", "Ljava/net/InetAddress;", nullptr, 0, $field(SendSize$ClientThread, host)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(SendSize$ClientThread, init$, void, int32_t), "java.io.IOException"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SendSize$ClientThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SendSize$ClientThread", "SendSize", "ClientThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SendSize$ClientThread",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"SendSize"
	};
	$loadClass(SendSize$ClientThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SendSize$ClientThread);
	});
	return class$;
}

$Class* SendSize$ClientThread::class$ = nullptr;