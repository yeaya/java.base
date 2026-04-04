#include <sun/net/www/http/KeepAliveStream$1.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <sun/net/www/http/KeepAliveStream.h>
#include <sun/net/www/http/KeepAliveStreamCleaner.h>
#include <jcpp.h>

#undef MAX_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;
using $KeepAliveStream = ::sun::net::www::http::KeepAliveStream;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

void KeepAliveStream$1::init$() {
}

$Object* KeepAliveStream$1::run() {
	$init($KeepAliveStream);
	$assignStatic($KeepAliveStream::cleanerThread, $InnocuousThread::newSystemThread("Keep-Alive-SocketCleaner"_s, $KeepAliveStream::queue));
	$nc($KeepAliveStream::cleanerThread)->setDaemon(true);
	$KeepAliveStream::cleanerThread->setPriority($Thread::MAX_PRIORITY - 2);
	$KeepAliveStream::cleanerThread->start();
	return nullptr;
}

KeepAliveStream$1::KeepAliveStream$1() {
}

$Class* KeepAliveStream$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeepAliveStream$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(KeepAliveStream$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.http.KeepAliveStream",
		"queueForCleanup",
		"(Lsun/net/www/http/KeepAliveCleanerEntry;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.http.KeepAliveStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.http.KeepAliveStream$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.http.KeepAliveStream"
	};
	$loadClass(KeepAliveStream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeepAliveStream$1);
	});
	return class$;
}

$Class* KeepAliveStream$1::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun