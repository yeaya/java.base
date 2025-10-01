#include <AsyncCloseChannel$SensorClient.h>

#include <AsyncCloseChannel.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $AsyncCloseChannel = ::AsyncCloseChannel;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;

$FieldInfo _AsyncCloseChannel$SensorClient_FieldInfo_[] = {
	{"wake", "Z", nullptr, $PRIVATE | $STATIC, $staticField(AsyncCloseChannel$SensorClient, wake)},
	{"theClient", "LAsyncCloseChannel$SensorClient;", nullptr, $PRIVATE | $STATIC, $staticField(AsyncCloseChannel$SensorClient, theClient)},
	{}
};

$MethodInfo _AsyncCloseChannel$SensorClient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AsyncCloseChannel$SensorClient::*)()>(&AsyncCloseChannel$SensorClient::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"wakeMe", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&AsyncCloseChannel$SensorClient::wakeMe))},
	{}
};

$InnerClassInfo _AsyncCloseChannel$SensorClient_InnerClassesInfo_[] = {
	{"AsyncCloseChannel$SensorClient", "AsyncCloseChannel", "SensorClient", $STATIC},
	{}
};

$ClassInfo _AsyncCloseChannel$SensorClient_ClassInfo_ = {
	$ACC_SUPER,
	"AsyncCloseChannel$SensorClient",
	"java.lang.Thread",
	nullptr,
	_AsyncCloseChannel$SensorClient_FieldInfo_,
	_AsyncCloseChannel$SensorClient_MethodInfo_,
	nullptr,
	nullptr,
	_AsyncCloseChannel$SensorClient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AsyncCloseChannel"
};

$Object* allocate$AsyncCloseChannel$SensorClient($Class* clazz) {
	return $of($alloc(AsyncCloseChannel$SensorClient));
}

bool AsyncCloseChannel$SensorClient::wake = false;
AsyncCloseChannel$SensorClient* AsyncCloseChannel$SensorClient::theClient = nullptr;

void AsyncCloseChannel$SensorClient::run() {
	$init($AsyncCloseChannel);
	while ($AsyncCloseChannel::keepGoing) {
		$var($Socket, s, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$assign(s, $new($Socket));
					$synchronized(this) {
						while (!AsyncCloseChannel$SensorClient::wake && $AsyncCloseChannel::keepGoing) {
							try {
								$of(this)->wait();
							} catch ($InterruptedException&) {
								$catch();
							}
						}
						AsyncCloseChannel$SensorClient::wake = false;
					}
					s->connect($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), $AsyncCloseChannel::sensorPort));
					try {
						$Thread::sleep(10);
					} catch ($InterruptedException&) {
						$catch();
					}
				} catch ($IOException&) {
					$var($IOException, ex, $catch());
					$init($System);
					$nc($System::err)->println($$str({"Exception on sensor client "_s, $(ex->getMessage())}));
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (s != nullptr) {
					try {
						s->close();
					} catch ($IOException&) {
						$var($IOException, ex, $catch());
						ex->printStackTrace();
					}
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void AsyncCloseChannel$SensorClient::init$() {
	$Thread::init$();
	$assignStatic(AsyncCloseChannel$SensorClient::theClient, this);
}

void AsyncCloseChannel$SensorClient::wakeMe() {
	$init(AsyncCloseChannel$SensorClient);
	$synchronized(AsyncCloseChannel$SensorClient::theClient) {
		AsyncCloseChannel$SensorClient::wake = true;
		$nc($of(AsyncCloseChannel$SensorClient::theClient))->notify();
	}
}

AsyncCloseChannel$SensorClient::AsyncCloseChannel$SensorClient() {
}

$Class* AsyncCloseChannel$SensorClient::load$($String* name, bool initialize) {
	$loadClass(AsyncCloseChannel$SensorClient, name, initialize, &_AsyncCloseChannel$SensorClient_ClassInfo_, allocate$AsyncCloseChannel$SensorClient);
	return class$;
}

$Class* AsyncCloseChannel$SensorClient::class$ = nullptr;