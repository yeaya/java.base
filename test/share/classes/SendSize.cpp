#include <SendSize.h>
#include <SendSize$ClientThread.h>
#include <SendSize$ServerThread.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <jcpp.h>

using $SendSize$ClientThread = ::SendSize$ClientThread;
using $SendSize$ServerThread = ::SendSize$ServerThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;

void SendSize::init$() {
}

void SendSize::main($StringArray* args) {
	$useLocalObjectStack();
	$var($DatagramSocket, serverSocket, $new($DatagramSocket, $$new($InetSocketAddress, $($InetAddress::getLocalHost()), 0)));
	$var($Thread, server, $new($SendSize$ServerThread, serverSocket));
	server->start();
	$var($Thread, client, $new($SendSize$ClientThread, serverSocket->getLocalPort()));
	client->start();
	server->join();
	client->join();
}

SendSize::SendSize() {
}

$Class* SendSize::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bufferLength", "I", nullptr, $STATIC | $FINAL, $constField(SendSize, bufferLength)},
		{"packetLength", "I", nullptr, $STATIC | $FINAL, $constField(SendSize, packetLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SendSize, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SendSize, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SendSize$ClientThread", "SendSize", "ClientThread", $STATIC},
		{"SendSize$ServerThread", "SendSize", "ServerThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SendSize",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"SendSize$ClientThread,SendSize$ServerThread"
	};
	$loadClass(SendSize, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SendSize);
	});
	return class$;
}

$Class* SendSize::class$ = nullptr;