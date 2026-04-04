#include <AsyncCloseChannel$SensorClient.h>
#include <AsyncCloseChannel.h>
#include <java/io/IOException.h>
#include <java/lang/InterruptedException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $AsyncCloseChannel = ::AsyncCloseChannel;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;

bool AsyncCloseChannel$SensorClient::wake = false;
AsyncCloseChannel$SensorClient* AsyncCloseChannel$SensorClient::theClient = nullptr;

void AsyncCloseChannel$SensorClient::run() {
	$useLocalObjectStack();
	$init($AsyncCloseChannel);
	while ($AsyncCloseChannel::keepGoing) {
		$var($Socket, s, nullptr);
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$assign(s, $new($Socket));
				$synchronized(this) {
					while (!AsyncCloseChannel$SensorClient::wake && $AsyncCloseChannel::keepGoing) {
						try {
							$of(this)->wait();
						} catch ($InterruptedException& ex) {
						}
					}
					AsyncCloseChannel$SensorClient::wake = false;
				}
				s->connect($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), $AsyncCloseChannel::sensorPort));
				try {
					$Thread::sleep(10);
				} catch ($InterruptedException& ex) {
				}
			} catch ($IOException& ex) {
				$nc($System::err)->println($$str({"Exception on sensor client "_s, $(ex->getMessage())}));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (s != nullptr) {
				try {
					s->close();
				} catch ($IOException& ex) {
					ex->printStackTrace();
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
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
		AsyncCloseChannel$SensorClient::theClient->notify();
	}
}

AsyncCloseChannel$SensorClient::AsyncCloseChannel$SensorClient() {
}

$Class* AsyncCloseChannel$SensorClient::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"wake", "Z", nullptr, $PRIVATE | $STATIC, $staticField(AsyncCloseChannel$SensorClient, wake)},
		{"theClient", "LAsyncCloseChannel$SensorClient;", nullptr, $PRIVATE | $STATIC, $staticField(AsyncCloseChannel$SensorClient, theClient)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AsyncCloseChannel$SensorClient, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(AsyncCloseChannel$SensorClient, run, void)},
		{"wakeMe", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(AsyncCloseChannel$SensorClient, wakeMe, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AsyncCloseChannel$SensorClient", "AsyncCloseChannel", "SensorClient", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AsyncCloseChannel$SensorClient",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"AsyncCloseChannel"
	};
	$loadClass(AsyncCloseChannel$SensorClient, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsyncCloseChannel$SensorClient);
	});
	return class$;
}

$Class* AsyncCloseChannel$SensorClient::class$ = nullptr;