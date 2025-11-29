#include <SendSize$ClientThread.h>

#include <SendSize.h>
#include <java/net/DatagramPacket.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramPacket = ::java::net::DatagramPacket;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;

$FieldInfo _SendSize$ClientThread_FieldInfo_[] = {
	{"serverPort", "I", nullptr, 0, $field(SendSize$ClientThread, serverPort)},
	{"client", "Ljava/net/DatagramSocket;", nullptr, 0, $field(SendSize$ClientThread, client)},
	{"host", "Ljava/net/InetAddress;", nullptr, 0, $field(SendSize$ClientThread, host)},
	{}
};

$MethodInfo _SendSize$ClientThread_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(SendSize$ClientThread::*)(int32_t)>(&SendSize$ClientThread::init$)), "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SendSize$ClientThread_InnerClassesInfo_[] = {
	{"SendSize$ClientThread", "SendSize", "ClientThread", $STATIC},
	{}
};

$ClassInfo _SendSize$ClientThread_ClassInfo_ = {
	$ACC_SUPER,
	"SendSize$ClientThread",
	"java.lang.Thread",
	nullptr,
	_SendSize$ClientThread_FieldInfo_,
	_SendSize$ClientThread_MethodInfo_,
	nullptr,
	nullptr,
	_SendSize$ClientThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SendSize"
};

$Object* allocate$SendSize$ClientThread($Class* clazz) {
	return $of($alloc(SendSize$ClientThread));
}

void SendSize$ClientThread::init$(int32_t serverPort) {
	$Thread::init$();
	this->serverPort = serverPort;
	$set(this, host, $InetAddress::getLocalHost());
	$set(this, client, $new($DatagramSocket));
}

void SendSize$ClientThread::run() {
	$useLocalCurrentObjectStackCache();
	{
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
				$nc($System::err)->println("sent 10 packets"_s);
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
				$nc(this->client)->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

SendSize$ClientThread::SendSize$ClientThread() {
}

$Class* SendSize$ClientThread::load$($String* name, bool initialize) {
	$loadClass(SendSize$ClientThread, name, initialize, &_SendSize$ClientThread_ClassInfo_, allocate$SendSize$ClientThread);
	return class$;
}

$Class* SendSize$ClientThread::class$ = nullptr;