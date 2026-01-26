#include <SendSize.h>

#include <SendSize$ClientThread.h>
#include <SendSize$ServerThread.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
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
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _SendSize_FieldInfo_[] = {
	{"bufferLength", "I", nullptr, $STATIC | $FINAL, $constField(SendSize, bufferLength)},
	{"packetLength", "I", nullptr, $STATIC | $FINAL, $constField(SendSize, packetLength)},
	{}
};

$MethodInfo _SendSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SendSize, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SendSize, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SendSize_InnerClassesInfo_[] = {
	{"SendSize$ClientThread", "SendSize", "ClientThread", $STATIC},
	{"SendSize$ServerThread", "SendSize", "ServerThread", $STATIC},
	{}
};

$ClassInfo _SendSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SendSize",
	"java.lang.Object",
	nullptr,
	_SendSize_FieldInfo_,
	_SendSize_MethodInfo_,
	nullptr,
	nullptr,
	_SendSize_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SendSize$ClientThread,SendSize$ServerThread"
};

$Object* allocate$SendSize($Class* clazz) {
	return $of($alloc(SendSize));
}

void SendSize::init$() {
}

void SendSize::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramSocket, serverSocket, $new($DatagramSocket, static_cast<$SocketAddress*>($$new($InetSocketAddress, $($InetAddress::getLocalHost()), 0))));
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
	$loadClass(SendSize, name, initialize, &_SendSize_ClassInfo_, allocate$SendSize);
	return class$;
}

$Class* SendSize::class$ = nullptr;