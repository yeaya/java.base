#include <AnotherSelectFdsLimit$WorkerThread.h>

#include <AnotherSelectFdsLimit.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketTimeoutException.h>
#include <jcpp.h>

using $AnotherSelectFdsLimit = ::AnotherSelectFdsLimit;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;

$MethodInfo _AnotherSelectFdsLimit$WorkerThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AnotherSelectFdsLimit$WorkerThread::*)()>(&AnotherSelectFdsLimit$WorkerThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AnotherSelectFdsLimit$WorkerThread_InnerClassesInfo_[] = {
	{"AnotherSelectFdsLimit$WorkerThread", "AnotherSelectFdsLimit", "WorkerThread", $STATIC},
	{}
};

$ClassInfo _AnotherSelectFdsLimit$WorkerThread_ClassInfo_ = {
	$ACC_SUPER,
	"AnotherSelectFdsLimit$WorkerThread",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_AnotherSelectFdsLimit$WorkerThread_MethodInfo_,
	nullptr,
	nullptr,
	_AnotherSelectFdsLimit$WorkerThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AnotherSelectFdsLimit"
};

$Object* allocate$AnotherSelectFdsLimit$WorkerThread($Class* clazz) {
	return $of($alloc(AnotherSelectFdsLimit$WorkerThread));
}

void AnotherSelectFdsLimit$WorkerThread::init$() {
	$Thread::init$();
}

void AnotherSelectFdsLimit$WorkerThread::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ServerSocket, ss, $new($ServerSocket, 0));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					ss->setSoTimeout(2000);
					ss->accept();
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						ss->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				ss->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($SocketTimeoutException&) {
		$catch();
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		$throwNew($UncheckedIOException, x);
	}
}

AnotherSelectFdsLimit$WorkerThread::AnotherSelectFdsLimit$WorkerThread() {
}

$Class* AnotherSelectFdsLimit$WorkerThread::load$($String* name, bool initialize) {
	$loadClass(AnotherSelectFdsLimit$WorkerThread, name, initialize, &_AnotherSelectFdsLimit$WorkerThread_ClassInfo_, allocate$AnotherSelectFdsLimit$WorkerThread);
	return class$;
}

$Class* AnotherSelectFdsLimit$WorkerThread::class$ = nullptr;