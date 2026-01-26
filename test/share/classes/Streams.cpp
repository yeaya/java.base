#include <Streams.h>

#include <Streams$InputStreamGetter.h>
#include <Streams$OutputStreamGetter.h>
#include <java/lang/reflect/Constructor.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/util/concurrent/Phaser.h>
#include <jcpp.h>

#undef NUM_THREADS

using $Streams$InputStreamGetter = ::Streams$InputStreamGetter;
using $Streams$OutputStreamGetter = ::Streams$OutputStreamGetter;
using $SocketArray = $Array<::java::net::Socket>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $Phaser = ::java::util::concurrent::Phaser;

$FieldInfo _Streams_FieldInfo_[] = {
	{"NUM_THREADS", "I", nullptr, $STATIC | $FINAL, $constField(Streams, NUM_THREADS)},
	{"failed", "Z", nullptr, $STATIC | $VOLATILE, $staticField(Streams, failed)},
	{"startingGate", "Ljava/util/concurrent/Phaser;", nullptr, $STATIC | $FINAL, $staticField(Streams, startingGate)},
	{}
};

$MethodInfo _Streams_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Streams, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Streams, main, void, $StringArray*), "java.lang.Exception"},
	{"runTest", "(Ljava/lang/Class;Ljava/net/ServerSocket;)V", "(Ljava/lang/Class<+LStreams$StreamGetter;>;Ljava/net/ServerSocket;)V", $STATIC, $staticMethod(Streams, runTest, void, $Class*, $ServerSocket*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Streams_InnerClassesInfo_[] = {
	{"Streams$OutputStreamGetter", "Streams", "OutputStreamGetter", $STATIC},
	{"Streams$InputStreamGetter", "Streams", "InputStreamGetter", $STATIC},
	{"Streams$StreamGetter", "Streams", "StreamGetter", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Streams_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Streams",
	"java.lang.Object",
	nullptr,
	_Streams_FieldInfo_,
	_Streams_MethodInfo_,
	nullptr,
	nullptr,
	_Streams_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Streams$OutputStreamGetter,Streams$InputStreamGetter,Streams$StreamGetter"
};

$Object* allocate$Streams($Class* clazz) {
	return $of($alloc(Streams));
}

$volatile(bool) Streams::failed = false;
$Phaser* Streams::startingGate = nullptr;

void Streams::init$() {
}

void Streams::main($StringArray* args) {
	$init(Streams);
	$useLocalCurrentObjectStackCache();
	{
		$var($ServerSocket, ss, $new($ServerSocket));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
					ss->bind($$new($InetSocketAddress, loopback, 0));
					$load($Streams$OutputStreamGetter);
					runTest($Streams$OutputStreamGetter::class$, ss);
					$load($Streams$InputStreamGetter);
					runTest($Streams$InputStreamGetter::class$, ss);
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
		}
	}
	if (Streams::failed) {
		$throwNew($RuntimeException, "Failed, check output"_s);
	}
}

void Streams::runTest($Class* klass, $ServerSocket* ss) {
	$init(Streams);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t port = $nc(ss)->getLocalPort();
	$var($InetAddress, address, ss->getInetAddress());
	$var($SocketArray, sockets, $new($SocketArray, Streams::NUM_THREADS));
	for (int32_t i = 0; i < Streams::NUM_THREADS; ++i) {
		sockets->set(i, $nc(address)->isAnyLocalAddress() ? $$new($Socket, "localhost"_s, port) : $$new($Socket, address, port));
		{
			$var($Socket, socket, ss->accept());
			{
				if (socket != nullptr) {
					socket->close();
				}
			}
		}
	}
	$load($Socket);
	$var($Constructor, ctr, $nc(klass)->getConstructor($$new($ClassArray, {$Socket::class$})));
	$var($ThreadArray, threads, $new($ThreadArray, Streams::NUM_THREADS));
	for (int32_t i = 0; i < Streams::NUM_THREADS; ++i) {
		threads->set(i, $cast($Thread, $($nc(ctr)->newInstance($$new($ObjectArray, {$of(sockets->get(i))})))));
	}
	for (int32_t i = 0; i < Streams::NUM_THREADS; ++i) {
		$nc(threads->get(i))->start();
	}
	$nc(Streams::startingGate)->arriveAndAwaitAdvance();
	for (int32_t i = 0; i < Streams::NUM_THREADS; ++i) {
		$nc(sockets->get(i))->close();
	}
	for (int32_t i = 0; i < Streams::NUM_THREADS; ++i) {
		$nc(threads->get(i))->join();
	}
}

void clinit$Streams($Class* class$) {
	$assignStatic(Streams::startingGate, $new($Phaser, Streams::NUM_THREADS + 1));
}

Streams::Streams() {
}

$Class* Streams::load$($String* name, bool initialize) {
	$loadClass(Streams, name, initialize, &_Streams_ClassInfo_, clinit$Streams, allocate$Streams);
	return class$;
}

$Class* Streams::class$ = nullptr;