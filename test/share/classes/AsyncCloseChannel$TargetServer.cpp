#include <AsyncCloseChannel$TargetServer.h>

#include <AsyncCloseChannel$ServerThread.h>
#include <AsyncCloseChannel$TargetServer$1.h>
#include <AsyncCloseChannel.h>
#include <java/io/IOException.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $AsyncCloseChannel = ::AsyncCloseChannel;
using $AsyncCloseChannel$ServerThread = ::AsyncCloseChannel$ServerThread;
using $AsyncCloseChannel$TargetServer$1 = ::AsyncCloseChannel$TargetServer$1;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$MethodInfo _AsyncCloseChannel$TargetServer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AsyncCloseChannel$TargetServer::*)()>(&AsyncCloseChannel$TargetServer::init$))},
	{"runEx", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _AsyncCloseChannel$TargetServer_InnerClassesInfo_[] = {
	{"AsyncCloseChannel$TargetServer", "AsyncCloseChannel", "TargetServer", $STATIC},
	{"AsyncCloseChannel$ServerThread", "AsyncCloseChannel", "ServerThread", $STATIC | $ABSTRACT},
	{"AsyncCloseChannel$TargetServer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsyncCloseChannel$TargetServer_ClassInfo_ = {
	$ACC_SUPER,
	"AsyncCloseChannel$TargetServer",
	"AsyncCloseChannel$ServerThread",
	nullptr,
	nullptr,
	_AsyncCloseChannel$TargetServer_MethodInfo_,
	nullptr,
	nullptr,
	_AsyncCloseChannel$TargetServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AsyncCloseChannel"
};

$Object* allocate$AsyncCloseChannel$TargetServer($Class* clazz) {
	return $of($alloc(AsyncCloseChannel$TargetServer));
}

void AsyncCloseChannel$TargetServer::init$() {
	$AsyncCloseChannel$ServerThread::init$();
}

void AsyncCloseChannel$TargetServer::runEx() {
	$useLocalCurrentObjectStackCache();
	$init($AsyncCloseChannel);
	while ($AsyncCloseChannel::keepGoing) {
		try {
			$var($Socket, s, $nc(this->server)->accept());
			++$AsyncCloseChannel::acceptCount;
			$$new($AsyncCloseChannel$TargetServer$1, this, s)->start();
		} catch ($IOException& ex) {
			$nc($System::err)->println($$str({"Exception on target server "_s, $(ex->getMessage())}));
		}
	}
}

AsyncCloseChannel$TargetServer::AsyncCloseChannel$TargetServer() {
}

$Class* AsyncCloseChannel$TargetServer::load$($String* name, bool initialize) {
	$loadClass(AsyncCloseChannel$TargetServer, name, initialize, &_AsyncCloseChannel$TargetServer_ClassInfo_, allocate$AsyncCloseChannel$TargetServer);
	return class$;
}

$Class* AsyncCloseChannel$TargetServer::class$ = nullptr;