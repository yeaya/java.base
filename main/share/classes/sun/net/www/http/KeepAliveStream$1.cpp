#include <sun/net/www/http/KeepAliveStream$1.h>

#include <java/lang/Runnable.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <sun/net/www/http/KeepAliveStream.h>
#include <sun/net/www/http/KeepAliveStreamCleaner.h>
#include <jcpp.h>

#undef MAX_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;
using $KeepAliveStream = ::sun::net::www::http::KeepAliveStream;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

$MethodInfo _KeepAliveStream$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeepAliveStream$1::*)()>(&KeepAliveStream$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeepAliveStream$1_EnclosingMethodInfo_ = {
	"sun.net.www.http.KeepAliveStream",
	"queueForCleanup",
	"(Lsun/net/www/http/KeepAliveCleanerEntry;)V"
};

$InnerClassInfo _KeepAliveStream$1_InnerClassesInfo_[] = {
	{"sun.net.www.http.KeepAliveStream$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeepAliveStream$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.http.KeepAliveStream$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_KeepAliveStream$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_KeepAliveStream$1_EnclosingMethodInfo_,
	_KeepAliveStream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.www.http.KeepAliveStream"
};

$Object* allocate$KeepAliveStream$1($Class* clazz) {
	return $of($alloc(KeepAliveStream$1));
}

void KeepAliveStream$1::init$() {
}

$Object* KeepAliveStream$1::run() {
	$init($KeepAliveStream);
	$assignStatic($KeepAliveStream::cleanerThread, $InnocuousThread::newSystemThread("Keep-Alive-SocketCleaner"_s, $KeepAliveStream::queue));
	$nc($KeepAliveStream::cleanerThread)->setDaemon(true);
	$nc($KeepAliveStream::cleanerThread)->setPriority($Thread::MAX_PRIORITY - 2);
	$nc($KeepAliveStream::cleanerThread)->start();
	return $of(nullptr);
}

KeepAliveStream$1::KeepAliveStream$1() {
}

$Class* KeepAliveStream$1::load$($String* name, bool initialize) {
	$loadClass(KeepAliveStream$1, name, initialize, &_KeepAliveStream$1_ClassInfo_, allocate$KeepAliveStream$1);
	return class$;
}

$Class* KeepAliveStream$1::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun