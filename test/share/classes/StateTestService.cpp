#include <StateTestService.h>
#include <java/io/OutputStream.h>
#include <java/lang/SecurityException.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/StandardOpenOption.h>
#include <jcpp.h>

#undef APPEND
#undef CREATE

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Channel = ::java::nio::channels::Channel;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;

bool StateTestService::failed = false;
int32_t StateTestService::reply_port = 0;
$String* StateTestService::logDir = nullptr;
$PrintStream* StateTestService::out = nullptr;
bool StateTestService::initialized = false;

void StateTestService::init$() {
}

void StateTestService::check(bool okay) {
	$init(StateTestService);
	$useLocalObjectStack();
	println($$str({"check "_s, $$str(okay)}));
	if (!okay) {
		StateTestService::failed = true;
	}
}

void StateTestService::initLogFile() {
	$init(StateTestService);
	$useLocalObjectStack();
	if (StateTestService::initialized) {
		return;
	}
	try {
		$init($StandardOpenOption);
		$var($OutputStream, f, $Files::newOutputStream($($Path::of(StateTestService::logDir, $$new($StringArray, {"statetest.txt"_s}))), $$new($OpenOptionArray, {
			$StandardOpenOption::APPEND,
			$StandardOpenOption::CREATE
		})));
		$assignStatic(StateTestService::out, $new($PrintStream, f));
	} catch ($Exception& e) {
	}
	StateTestService::initialized = true;
}

void StateTestService::println($String* msg) {
	$init(StateTestService);
	initLogFile();
	$nc(StateTestService::out)->println(msg);
}

void StateTestService::reply($String* msg) {
	$init(StateTestService);
	$useLocalObjectStack();
	println($$str({"REPLYING: "_s, msg}));
	$var($InetSocketAddress, isa, $new($InetSocketAddress, $($InetAddress::getLocalHost()), StateTestService::reply_port));
	$var($SocketChannel, sc, $SocketChannel::open(isa));
	$var($bytes, b, $nc(msg)->getBytes("UTF-8"_s));
	$var($ByteBuffer, bb, $ByteBuffer::wrap(b));
	$nc(sc)->write(bb);
	sc->close();
}

void StateTestService::main($StringArray* args) {
	$init(StateTestService);
	$useLocalObjectStack();
	try {
		if ($nc(args)->length == 0) {
			$nc($System::err)->println("Usage: StateTestService [reply-port]"_s);
			return;
		}
		StateTestService::reply_port = $Integer::parseInt(args->get(0));
		$assignStatic(StateTestService::logDir, $System::getProperty("test.classes"_s));
		$var($Channel, c, nullptr);
		try {
			$assign(c, $System::inheritedChannel());
		} catch ($SecurityException& se) {
		}
		if (c == nullptr) {
			println("c == null"_s);
			reply("FAILED"_s);
			return;
		}
		if ($instanceOf($SocketChannel, c)) {
			$var($SocketChannel, sc, $cast($SocketChannel, c));
			check(sc->isBlocking());
			check($$nc(sc->socket())->isBound());
			check($$nc(sc->socket())->isConnected());
		}
		if ($instanceOf($ServerSocketChannel, c)) {
			$var($ServerSocketChannel, ssc, $cast($ServerSocketChannel, c));
			check(ssc->isBlocking());
			check($$nc(ssc->socket())->isBound());
		}
		if ($instanceOf($DatagramChannel, c)) {
			$var($DatagramChannel, dc, $cast($DatagramChannel, c));
			check(dc->isBlocking());
			check($$nc(dc->socket())->isBound());
		}
		if (StateTestService::failed) {
			reply("FAILED"_s);
		} else {
			reply("PASSED"_s);
		}
	} catch ($Throwable& t) {
		t->printStackTrace(StateTestService::out);
		$throw(t);
	}
}

void StateTestService::clinit$($Class* clazz) {
	StateTestService::failed = false;
	StateTestService::initialized = false;
}

StateTestService::StateTestService() {
}

$Class* StateTestService::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"failed", "Z", nullptr, $STATIC, $staticField(StateTestService, failed)},
		{"reply_port", "I", nullptr, $STATIC, $staticField(StateTestService, reply_port)},
		{"logDir", "Ljava/lang/String;", nullptr, $STATIC, $staticField(StateTestService, logDir)},
		{"out", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(StateTestService, out)},
		{"initialized", "Z", nullptr, $STATIC, $staticField(StateTestService, initialized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StateTestService, init$, void)},
		{"check", "(Z)V", nullptr, $STATIC, $staticMethod(StateTestService, check, void, bool)},
		{"initLogFile", "()V", nullptr, $STATIC, $staticMethod(StateTestService, initLogFile, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StateTestService, main, void, $StringArray*), "java.io.IOException"},
		{"println", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(StateTestService, println, void, $String*)},
		{"reply", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(StateTestService, reply, void, $String*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StateTestService",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StateTestService, name, initialize, &classInfo$$, StateTestService::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StateTestService);
	});
	return class$;
}

$Class* StateTestService::class$ = nullptr;