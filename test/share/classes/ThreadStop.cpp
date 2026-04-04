#include <ThreadStop.h>
#include <ThreadStop$Server.h>
#include <java/io/IOException.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $ThreadStop$Server = ::ThreadStop$Server;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $Socket = ::java::net::Socket;

void ThreadStop::init$() {
}

void ThreadStop::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ThreadStop$Server, svr, $new($ThreadStop$Server));
	$var($Thread, thr, $new($Thread, svr));
	thr->start();
	$Thread::sleep(2000);
	thr->stop();
	$Thread::sleep(2000);
	try {
		$var($InetAddress, var$0, $nc(svr->ss)->getInetAddress());
		$var($Socket, s, $new($Socket, var$0, svr->localPort()));
		{
			s->close();
		}
	} catch ($IOException& ioe) {
	}
	thr->join();
}

ThreadStop::ThreadStop() {
}

$Class* ThreadStop::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadStop, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadStop, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ThreadStop$Server", "ThreadStop", "Server", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ThreadStop",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ThreadStop$Server"
	};
	$loadClass(ThreadStop, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadStop);
	});
	return class$;
}

$Class* ThreadStop::class$ = nullptr;