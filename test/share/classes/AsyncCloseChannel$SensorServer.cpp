#include <AsyncCloseChannel$SensorServer.h>
#include <AsyncCloseChannel$SensorServer$1.h>
#include <AsyncCloseChannel$ServerThread.h>
#include <AsyncCloseChannel.h>
#include <java/io/IOException.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $AsyncCloseChannel = ::AsyncCloseChannel;
using $AsyncCloseChannel$SensorServer$1 = ::AsyncCloseChannel$SensorServer$1;
using $AsyncCloseChannel$ServerThread = ::AsyncCloseChannel$ServerThread;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

void AsyncCloseChannel$SensorServer::init$() {
	$AsyncCloseChannel$ServerThread::init$();
}

void AsyncCloseChannel$SensorServer::runEx() {
	$useLocalObjectStack();
	$init($AsyncCloseChannel);
	while ($AsyncCloseChannel::keepGoing) {
		try {
			$var($Socket, s, $nc(this->server)->accept());
			$$new($AsyncCloseChannel$SensorServer$1, this, s)->start();
		} catch ($IOException& ex) {
			$nc($System::err)->println($$str({"Exception on sensor server "_s, $(ex->getMessage())}));
		}
	}
}

AsyncCloseChannel$SensorServer::AsyncCloseChannel$SensorServer() {
}

$Class* AsyncCloseChannel$SensorServer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AsyncCloseChannel$SensorServer, init$, void)},
		{"runEx", "()V", nullptr, $PUBLIC, $virtualMethod(AsyncCloseChannel$SensorServer, runEx, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AsyncCloseChannel$SensorServer", "AsyncCloseChannel", "SensorServer", $STATIC},
		{"AsyncCloseChannel$ServerThread", "AsyncCloseChannel", "ServerThread", $STATIC | $ABSTRACT},
		{"AsyncCloseChannel$SensorServer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AsyncCloseChannel$SensorServer",
		"AsyncCloseChannel$ServerThread",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AsyncCloseChannel"
	};
	$loadClass(AsyncCloseChannel$SensorServer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsyncCloseChannel$SensorServer);
	});
	return class$;
}

$Class* AsyncCloseChannel$SensorServer::class$ = nullptr;