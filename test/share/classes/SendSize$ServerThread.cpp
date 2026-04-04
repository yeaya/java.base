#include <SendSize$ServerThread.h>
#include <SendSize.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;

void SendSize$ServerThread::init$($DatagramSocket* server) {
	$Thread::init$();
	$set(this, server, server);
}

void SendSize$ServerThread::run() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	bool return$1 = false;
	try {
		try {
			$nc($System::err)->println($$str({"started server thread: "_s, this->server}));
			$var($bytes, buf, $new($bytes, 1024));
			for (int32_t i = 0; i < 10; ++i) {
				$var($DatagramPacket, receivePacket, $new($DatagramPacket, buf, buf->length));
				$nc(this->server)->receive(receivePacket);
				int32_t len = receivePacket->getLength();
				switch (len) {
				case 256:
					$nc($System::out)->println($$str({"receive length is: "_s, $$str(len)}));
					break;
				default:
					$throwNew($RuntimeException, $$str({"receive length is: "_s, $$str(len), ", send length: "_s, $$str(256), ", buffer length: "_s, $$str(buf->length)}));
				}
			}
			return$1 = true;
			goto $finally;
		} catch ($Exception& e) {
			e->printStackTrace();
			$throwNew($RuntimeException, $$str({"caught: "_s, e}));
		}
	} catch ($Throwable& var$2) {
		$assign(var$0, var$2);
	} $finally: {
		if (this->server != nullptr) {
			this->server->close();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return;
	}
}

SendSize$ServerThread::SendSize$ServerThread() {
}

$Class* SendSize$ServerThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"server", "Ljava/net/DatagramSocket;", nullptr, 0, $field(SendSize$ServerThread, server)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/DatagramSocket;)V", nullptr, 0, $method(SendSize$ServerThread, init$, void, $DatagramSocket*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SendSize$ServerThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SendSize$ServerThread", "SendSize", "ServerThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SendSize$ServerThread",
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
	$loadClass(SendSize$ServerThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SendSize$ServerThread);
	});
	return class$;
}

$Class* SendSize$ServerThread::class$ = nullptr;