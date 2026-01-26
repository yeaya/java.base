#include <ThreadStop.h>

#include <ThreadStop$Server.h>
#include <java/io/IOException.h>
#include <java/lang/Runnable.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $ThreadStop$Server = ::ThreadStop$Server;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$MethodInfo _ThreadStop_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ThreadStop, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ThreadStop, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ThreadStop_InnerClassesInfo_[] = {
	{"ThreadStop$Server", "ThreadStop", "Server", $STATIC},
	{}
};

$ClassInfo _ThreadStop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ThreadStop",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ThreadStop_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadStop_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ThreadStop$Server"
};

$Object* allocate$ThreadStop($Class* clazz) {
	return $of($alloc(ThreadStop));
}

void ThreadStop::init$() {
}

void ThreadStop::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ThreadStop$Server, svr, $new($ThreadStop$Server));
	$var($Thread, thr, $new($Thread, static_cast<$Runnable*>(svr)));
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
	$loadClass(ThreadStop, name, initialize, &_ThreadStop_ClassInfo_, allocate$ThreadStop);
	return class$;
}

$Class* ThreadStop::class$ = nullptr;