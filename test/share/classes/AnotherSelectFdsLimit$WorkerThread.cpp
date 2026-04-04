#include <AnotherSelectFdsLimit$WorkerThread.h>
#include <AnotherSelectFdsLimit.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketTimeoutException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;

void AnotherSelectFdsLimit$WorkerThread::init$() {
	$Thread::init$();
}

void AnotherSelectFdsLimit$WorkerThread::run() {
	$useLocalObjectStack();
	try {
		$var($ServerSocket, ss, $new($ServerSocket, 0));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				ss->setSoTimeout(2000);
				ss->accept();
			} catch ($Throwable& t$) {
				try {
					ss->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			ss->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($SocketTimeoutException& x) {
	} catch ($IOException& x) {
		$throwNew($UncheckedIOException, x);
	}
}

AnotherSelectFdsLimit$WorkerThread::AnotherSelectFdsLimit$WorkerThread() {
}

$Class* AnotherSelectFdsLimit$WorkerThread::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AnotherSelectFdsLimit$WorkerThread, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AnotherSelectFdsLimit$WorkerThread, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnotherSelectFdsLimit$WorkerThread", "AnotherSelectFdsLimit", "WorkerThread", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AnotherSelectFdsLimit$WorkerThread",
		"java.lang.Thread",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AnotherSelectFdsLimit"
	};
	$loadClass(AnotherSelectFdsLimit$WorkerThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnotherSelectFdsLimit$WorkerThread);
	});
	return class$;
}

$Class* AnotherSelectFdsLimit$WorkerThread::class$ = nullptr;