#include <AsyncCloseChannel.h>

#include <AsyncCloseChannel$SensorClient.h>
#include <AsyncCloseChannel$SensorServer.h>
#include <AsyncCloseChannel$ServerThread.h>
#include <AsyncCloseChannel$TargetClient.h>
#include <AsyncCloseChannel$TargetServer.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <jcpp.h>

using $AsyncCloseChannel$SensorClient = ::AsyncCloseChannel$SensorClient;
using $AsyncCloseChannel$SensorServer = ::AsyncCloseChannel$SensorServer;
using $AsyncCloseChannel$ServerThread = ::AsyncCloseChannel$ServerThread;
using $AsyncCloseChannel$TargetClient = ::AsyncCloseChannel$TargetClient;
using $AsyncCloseChannel$TargetServer = ::AsyncCloseChannel$TargetServer;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;

$FieldInfo _AsyncCloseChannel_FieldInfo_[] = {
	{"failed", "Z", nullptr, $STATIC | $VOLATILE, $staticField(AsyncCloseChannel, failed)},
	{"keepGoing", "Z", nullptr, $STATIC | $VOLATILE, $staticField(AsyncCloseChannel, keepGoing)},
	{"maxAcceptCount", "I", nullptr, $STATIC, $staticField(AsyncCloseChannel, maxAcceptCount)},
	{"acceptCount", "I", nullptr, $STATIC | $VOLATILE, $staticField(AsyncCloseChannel, acceptCount)},
	{"sensorPort", "I", nullptr, $STATIC, $staticField(AsyncCloseChannel, sensorPort)},
	{"targetPort", "I", nullptr, $STATIC, $staticField(AsyncCloseChannel, targetPort)},
	{}
};

$MethodInfo _AsyncCloseChannel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AsyncCloseChannel::*)()>(&AsyncCloseChannel::init$))},
	{"closeIt", "(Ljava/net/Socket;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Socket*)>(&AsyncCloseChannel::closeIt))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AsyncCloseChannel::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _AsyncCloseChannel_InnerClassesInfo_[] = {
	{"AsyncCloseChannel$ServerThread", "AsyncCloseChannel", "ServerThread", $STATIC | $ABSTRACT},
	{"AsyncCloseChannel$TargetClient", "AsyncCloseChannel", "TargetClient", $STATIC},
	{"AsyncCloseChannel$SensorClient", "AsyncCloseChannel", "SensorClient", $STATIC},
	{"AsyncCloseChannel$TargetServer", "AsyncCloseChannel", "TargetServer", $STATIC},
	{"AsyncCloseChannel$SensorServer", "AsyncCloseChannel", "SensorServer", $STATIC},
	{}
};

$ClassInfo _AsyncCloseChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AsyncCloseChannel",
	"java.lang.Object",
	nullptr,
	_AsyncCloseChannel_FieldInfo_,
	_AsyncCloseChannel_MethodInfo_,
	nullptr,
	nullptr,
	_AsyncCloseChannel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"AsyncCloseChannel$ServerThread,AsyncCloseChannel$TargetClient,AsyncCloseChannel$TargetClient$1,AsyncCloseChannel$SensorClient,AsyncCloseChannel$TargetServer,AsyncCloseChannel$TargetServer$1,AsyncCloseChannel$SensorServer,AsyncCloseChannel$SensorServer$1"
};

$Object* allocate$AsyncCloseChannel($Class* clazz) {
	return $of($alloc(AsyncCloseChannel));
}

$volatile(bool) AsyncCloseChannel::failed = false;
$volatile(bool) AsyncCloseChannel::keepGoing = false;
int32_t AsyncCloseChannel::maxAcceptCount = 0;
$volatile(int32_t) AsyncCloseChannel::acceptCount = 0;
int32_t AsyncCloseChannel::sensorPort = 0;
int32_t AsyncCloseChannel::targetPort = 0;

void AsyncCloseChannel::init$() {
}

void AsyncCloseChannel::main($StringArray* args) {
	$init(AsyncCloseChannel);
	$useLocalCurrentObjectStackCache();
	if ($nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s)) {
		$init($System);
		$nc($System::err)->println("WARNING: Still does not work on Windows!"_s);
		return;
	}
	$var($Thread, ss, $new($AsyncCloseChannel$SensorServer));
	ss->start();
	$var($Thread, ts, $new($AsyncCloseChannel$TargetServer));
	ts->start();
	AsyncCloseChannel::sensorPort = $nc($nc(($cast($AsyncCloseChannel$ServerThread, ss)))->server)->getLocalPort();
	AsyncCloseChannel::targetPort = $nc($nc(($cast($AsyncCloseChannel$ServerThread, ts)))->server)->getLocalPort();
	$var($Thread, sc, $new($AsyncCloseChannel$SensorClient));
	sc->start();
	$var($Thread, tc, $new($AsyncCloseChannel$TargetClient));
	tc->start();
	while (AsyncCloseChannel::acceptCount < AsyncCloseChannel::maxAcceptCount && !AsyncCloseChannel::failed) {
		$Thread::sleep(10);
	}
	AsyncCloseChannel::keepGoing = false;
	try {
		ss->interrupt();
		ts->interrupt();
		sc->interrupt();
		tc->interrupt();
	} catch ($Exception&) {
		$catch();
	}
	if (AsyncCloseChannel::failed) {
		$throwNew($RuntimeException, $$str({"AsyncCloseChannel2 failed after <"_s, $$str(AsyncCloseChannel::acceptCount), "> times of accept!"_s}));
	}
}

void AsyncCloseChannel::closeIt($Socket* s) {
	$init(AsyncCloseChannel);
	try {
		if (s != nullptr) {
			s->close();
		}
	} catch ($IOException&) {
		$catch();
	}
}

void clinit$AsyncCloseChannel($Class* class$) {
	AsyncCloseChannel::failed = false;
	AsyncCloseChannel::keepGoing = true;
	AsyncCloseChannel::maxAcceptCount = 100;
	AsyncCloseChannel::acceptCount = 0;
}

AsyncCloseChannel::AsyncCloseChannel() {
}

$Class* AsyncCloseChannel::load$($String* name, bool initialize) {
	$loadClass(AsyncCloseChannel, name, initialize, &_AsyncCloseChannel_ClassInfo_, clinit$AsyncCloseChannel, allocate$AsyncCloseChannel);
	return class$;
}

$Class* AsyncCloseChannel::class$ = nullptr;