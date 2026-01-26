#include <NullHost$Server.h>

#include <NullHost.h>
#include <java/io/IOException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $NullHost = ::NullHost;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _NullHost$Server_FieldInfo_[] = {
	{"this$0", "LNullHost;", nullptr, $FINAL | $SYNTHETIC, $field(NullHost$Server, this$0)},
	{"svr", "Ljava/net/ServerSocket;", nullptr, $PRIVATE, $field(NullHost$Server, svr)},
	{"done", "Z", nullptr, $VOLATILE, $field(NullHost$Server, done)},
	{}
};

$MethodInfo _NullHost$Server_MethodInfo_[] = {
	{"<init>", "(LNullHost;)V", nullptr, $PUBLIC, $method(NullHost$Server, init$, void, $NullHost*), "java.io.IOException"},
	{"getPort", "()I", nullptr, $PUBLIC, $virtualMethod(NullHost$Server, getPort, int32_t)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NullHost$Server, run, void)},
	{"shutdown", "()V", nullptr, $PUBLIC, $virtualMethod(NullHost$Server, shutdown, void)},
	{}
};

$InnerClassInfo _NullHost$Server_InnerClassesInfo_[] = {
	{"NullHost$Server", "NullHost", "Server", 0},
	{}
};

$ClassInfo _NullHost$Server_ClassInfo_ = {
	$ACC_SUPER,
	"NullHost$Server",
	"java.lang.Thread",
	nullptr,
	_NullHost$Server_FieldInfo_,
	_NullHost$Server_MethodInfo_,
	nullptr,
	nullptr,
	_NullHost$Server_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NullHost"
};

$Object* allocate$NullHost$Server($Class* clazz) {
	return $of($alloc(NullHost$Server));
}

void NullHost$Server::init$($NullHost* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$Thread::init$();
	$set(this, svr, $new($ServerSocket));
	$nc(this->svr)->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
}

int32_t NullHost$Server::getPort() {
	return $nc(this->svr)->getLocalPort();
}

void NullHost$Server::shutdown() {
	try {
		this->done = true;
		$nc(this->svr)->close();
	} catch ($IOException& e) {
	}
}

void NullHost$Server::run() {
	$var($Socket, s, nullptr);
	try {
		while (!this->done) {
			$assign(s, $nc(this->svr)->accept());
			$nc(s)->close();
		}
	} catch ($IOException& e) {
		if (!this->done) {
			e->printStackTrace();
		}
	}
}

NullHost$Server::NullHost$Server() {
}

$Class* NullHost$Server::load$($String* name, bool initialize) {
	$loadClass(NullHost$Server, name, initialize, &_NullHost$Server_ClassInfo_, allocate$NullHost$Server);
	return class$;
}

$Class* NullHost$Server::class$ = nullptr;