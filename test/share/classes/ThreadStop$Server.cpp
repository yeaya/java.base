#include <ThreadStop$Server.h>
#include <ThreadStop.h>
#include <java/io/IOException.h>
#include <java/lang/ThreadDeath.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

void ThreadStop$Server::init$() {
	$useLocalObjectStack();
	$set(this, ss, $new($ServerSocket));
	this->ss->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
}

int32_t ThreadStop$Server::localPort() {
	return $nc(this->ss)->getLocalPort();
}

void ThreadStop$Server::run() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$var($Socket, s, $nc(this->ss)->accept());
		} catch ($IOException& ioe) {
		} catch ($ThreadDeath& x) {
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		try {
			$nc(this->ss)->close();
		} catch ($IOException& x) {
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

ThreadStop$Server::ThreadStop$Server() {
}

$Class* ThreadStop$Server::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ss", "Ljava/net/ServerSocket;", nullptr, 0, $field(ThreadStop$Server, ss)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ThreadStop$Server, init$, void), "java.io.IOException"},
		{"localPort", "()I", nullptr, $PUBLIC, $virtualMethod(ThreadStop$Server, localPort, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ThreadStop$Server, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ThreadStop$Server", "ThreadStop", "Server", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ThreadStop$Server",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ThreadStop"
	};
	$loadClass(ThreadStop$Server, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ThreadStop$Server);
	});
	return class$;
}

$Class* ThreadStop$Server::class$ = nullptr;