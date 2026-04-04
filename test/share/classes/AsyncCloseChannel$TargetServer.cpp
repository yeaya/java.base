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
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;

void AsyncCloseChannel$TargetServer::init$() {
	$AsyncCloseChannel$ServerThread::init$();
}

void AsyncCloseChannel$TargetServer::runEx() {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AsyncCloseChannel$TargetServer, init$, void)},
		{"runEx", "()V", nullptr, $PUBLIC, $virtualMethod(AsyncCloseChannel$TargetServer, runEx, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AsyncCloseChannel$TargetServer", "AsyncCloseChannel", "TargetServer", $STATIC},
		{"AsyncCloseChannel$ServerThread", "AsyncCloseChannel", "ServerThread", $STATIC | $ABSTRACT},
		{"AsyncCloseChannel$TargetServer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AsyncCloseChannel$TargetServer",
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
	$loadClass(AsyncCloseChannel$TargetServer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsyncCloseChannel$TargetServer);
	});
	return class$;
}

$Class* AsyncCloseChannel$TargetServer::class$ = nullptr;