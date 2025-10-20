#include <AsyncCloseChannel$SensorServer.h>

#include <AsyncCloseChannel$SensorServer$1.h>
#include <AsyncCloseChannel$ServerThread.h>
#include <AsyncCloseChannel.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $AsyncCloseChannel = ::AsyncCloseChannel;
using $AsyncCloseChannel$SensorServer$1 = ::AsyncCloseChannel$SensorServer$1;
using $AsyncCloseChannel$ServerThread = ::AsyncCloseChannel$ServerThread;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$MethodInfo _AsyncCloseChannel$SensorServer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AsyncCloseChannel$SensorServer::*)()>(&AsyncCloseChannel$SensorServer::init$))},
	{"runEx", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _AsyncCloseChannel$SensorServer_InnerClassesInfo_[] = {
	{"AsyncCloseChannel$SensorServer", "AsyncCloseChannel", "SensorServer", $STATIC},
	{"AsyncCloseChannel$ServerThread", "AsyncCloseChannel", "ServerThread", $STATIC | $ABSTRACT},
	{"AsyncCloseChannel$SensorServer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsyncCloseChannel$SensorServer_ClassInfo_ = {
	$ACC_SUPER,
	"AsyncCloseChannel$SensorServer",
	"AsyncCloseChannel$ServerThread",
	nullptr,
	nullptr,
	_AsyncCloseChannel$SensorServer_MethodInfo_,
	nullptr,
	nullptr,
	_AsyncCloseChannel$SensorServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AsyncCloseChannel"
};

$Object* allocate$AsyncCloseChannel$SensorServer($Class* clazz) {
	return $of($alloc(AsyncCloseChannel$SensorServer));
}

void AsyncCloseChannel$SensorServer::init$() {
	$AsyncCloseChannel$ServerThread::init$();
}

void AsyncCloseChannel$SensorServer::runEx() {
	$useLocalCurrentObjectStackCache();
	$init($AsyncCloseChannel);
	while ($AsyncCloseChannel::keepGoing) {
		try {
			$var($Socket, s, $nc(this->server)->accept());
			$$new($AsyncCloseChannel$SensorServer$1, this, s)->start();
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			$init($System);
			$nc($System::err)->println($$str({"Exception on sensor server "_s, $(ex->getMessage())}));
		}
	}
}

AsyncCloseChannel$SensorServer::AsyncCloseChannel$SensorServer() {
}

$Class* AsyncCloseChannel$SensorServer::load$($String* name, bool initialize) {
	$loadClass(AsyncCloseChannel$SensorServer, name, initialize, &_AsyncCloseChannel$SensorServer_ClassInfo_, allocate$AsyncCloseChannel$SensorServer);
	return class$;
}

$Class* AsyncCloseChannel$SensorServer::class$ = nullptr;