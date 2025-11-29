#include <StateTestService.h>

#include <java/io/OutputStream.h>
#include <java/lang/SecurityException.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
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
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Channel = ::java::nio::channels::Channel;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $StandardOpenOption = ::java::nio::file::StandardOpenOption;

$FieldInfo _StateTestService_FieldInfo_[] = {
	{"failed", "Z", nullptr, $STATIC, $staticField(StateTestService, failed)},
	{"reply_port", "I", nullptr, $STATIC, $staticField(StateTestService, reply_port)},
	{"logDir", "Ljava/lang/String;", nullptr, $STATIC, $staticField(StateTestService, logDir)},
	{"out", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(StateTestService, out)},
	{"initialized", "Z", nullptr, $STATIC, $staticField(StateTestService, initialized)},
	{}
};

$MethodInfo _StateTestService_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StateTestService::*)()>(&StateTestService::init$))},
	{"check", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&StateTestService::check))},
	{"initLogFile", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&StateTestService::initLogFile))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StateTestService::main)), "java.io.IOException"},
	{"println", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&StateTestService::println))},
	{"reply", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&StateTestService::reply)), "java.io.IOException"},
	{}
};

$ClassInfo _StateTestService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StateTestService",
	"java.lang.Object",
	nullptr,
	_StateTestService_FieldInfo_,
	_StateTestService_MethodInfo_
};

$Object* allocate$StateTestService($Class* clazz) {
	return $of($alloc(StateTestService));
}

bool StateTestService::failed = false;
int32_t StateTestService::reply_port = 0;
$String* StateTestService::logDir = nullptr;
$PrintStream* StateTestService::out = nullptr;
bool StateTestService::initialized = false;

void StateTestService::init$() {
}

void StateTestService::check(bool okay) {
	$init(StateTestService);
	$useLocalCurrentObjectStackCache();
	println($$str({"check "_s, $$str(okay)}));
	if (!okay) {
		StateTestService::failed = true;
	}
}

void StateTestService::initLogFile() {
	$init(StateTestService);
	$useLocalCurrentObjectStackCache();
	if (StateTestService::initialized) {
		return;
	}
	try {
		$init($StandardOpenOption);
		$var($OutputStream, f, $Files::newOutputStream($($Path::of(StateTestService::logDir, $$new($StringArray, {"statetest.txt"_s}))), $$new($OpenOptionArray, {
			static_cast<$OpenOption*>($StandardOpenOption::APPEND),
			static_cast<$OpenOption*>($StandardOpenOption::CREATE)
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
	$useLocalCurrentObjectStackCache();
	println($$str({"REPLYING: "_s, msg}));
	$var($InetSocketAddress, isa, $new($InetSocketAddress, $($InetAddress::getLocalHost()), StateTestService::reply_port));
	$var($SocketChannel, sc, $SocketChannel::open(static_cast<$SocketAddress*>(isa)));
	$var($bytes, b, $nc(msg)->getBytes("UTF-8"_s));
	$var($ByteBuffer, bb, $ByteBuffer::wrap(b));
	$nc(sc)->write(bb);
	sc->close();
}

void StateTestService::main($StringArray* args) {
	$init(StateTestService);
	$useLocalCurrentObjectStackCache();
	try {
		if ($nc(args)->length == 0) {
			$nc($System::err)->println("Usage: StateTestService [reply-port]"_s);
			return;
		}
		StateTestService::reply_port = $Integer::parseInt($nc(args)->get(0));
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
			check($nc(sc)->isBlocking());
			check($nc($($nc(sc)->socket()))->isBound());
			check($nc($($nc(sc)->socket()))->isConnected());
		}
		if ($instanceOf($ServerSocketChannel, c)) {
			$var($ServerSocketChannel, ssc, $cast($ServerSocketChannel, c));
			check($nc(ssc)->isBlocking());
			check($nc($($nc(ssc)->socket()))->isBound());
		}
		if ($instanceOf($DatagramChannel, c)) {
			$var($DatagramChannel, dc, $cast($DatagramChannel, c));
			check($nc(dc)->isBlocking());
			check($nc($($nc(dc)->socket()))->isBound());
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

void clinit$StateTestService($Class* class$) {
	StateTestService::failed = false;
	StateTestService::initialized = false;
}

StateTestService::StateTestService() {
}

$Class* StateTestService::load$($String* name, bool initialize) {
	$loadClass(StateTestService, name, initialize, &_StateTestService_ClassInfo_, clinit$StateTestService, allocate$StateTestService);
	return class$;
}

$Class* StateTestService::class$ = nullptr;