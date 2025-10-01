#include <StressLoopback.h>

#include <StressLoopback$Sink.h>
#include <StressLoopback$Source.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/AsynchronousByteChannel.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/util/Random.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $StressLoopback$Sink = ::StressLoopback$Sink;
using $StressLoopback$Source = ::StressLoopback$Source;
using $StressLoopback$SinkArray = $Array<StressLoopback$Sink>;
using $StressLoopback$SourceArray = $Array<StressLoopback$Source>;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $AsynchronousByteChannel = ::java::nio::channels::AsynchronousByteChannel;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $Channel = ::java::nio::channels::Channel;
using $Random = ::java::util::Random;
using $Future = ::java::util::concurrent::Future;

$FieldInfo _StressLoopback_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(StressLoopback, rand)},
	{}
};

$MethodInfo _StressLoopback_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StressLoopback::*)()>(&StressLoopback::init$))},
	{"closeUnchecked", "(Ljava/nio/channels/Channel;)V", nullptr, $STATIC, $method(static_cast<void(*)($Channel*)>(&StressLoopback::closeUnchecked))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StressLoopback::main)), "java.lang.Exception"},
	{"waitUntilClosed", "(Ljava/nio/channels/Channel;)V", nullptr, $STATIC, $method(static_cast<void(*)($Channel*)>(&StressLoopback::waitUntilClosed))},
	{}
};

$InnerClassInfo _StressLoopback_InnerClassesInfo_[] = {
	{"StressLoopback$Sink", "StressLoopback", "Sink", $STATIC},
	{"StressLoopback$Source", "StressLoopback", "Source", $STATIC},
	{}
};

$ClassInfo _StressLoopback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StressLoopback",
	"java.lang.Object",
	nullptr,
	_StressLoopback_FieldInfo_,
	_StressLoopback_MethodInfo_,
	nullptr,
	nullptr,
	_StressLoopback_InnerClassesInfo_,
	nullptr,
	nullptr,
	"StressLoopback$Sink,StressLoopback$Sink$1,StressLoopback$Source,StressLoopback$Source$1"
};

$Object* allocate$StressLoopback($Class* clazz) {
	return $of($alloc(StressLoopback));
}

$Random* StressLoopback::rand = nullptr;

void StressLoopback::init$() {
}

void StressLoopback::main($StringArray* args) {
	$init(StressLoopback);
	$var($AsynchronousServerSocketChannel, listener, $cast($AsynchronousServerSocketChannel, $nc($($AsynchronousServerSocketChannel::open()))->bind($$new($InetSocketAddress, 0))));
	int32_t port = $nc((($cast($InetSocketAddress, $($nc(listener)->getLocalAddress())))))->getPort();
	$var($InetAddress, lh, $InetAddress::getLocalHost());
	$var($SocketAddress, remote, $new($InetSocketAddress, lh, port));
	int32_t count = 2 + $nc(StressLoopback::rand)->nextInt(9);
	$var($StressLoopback$SourceArray, source, $new($StressLoopback$SourceArray, count));
	$var($StressLoopback$SinkArray, sink, $new($StressLoopback$SinkArray, count));
	for (int32_t i = 0; i < count; ++i) {
		$var($AsynchronousSocketChannel, ch, $AsynchronousSocketChannel::open());
		$nc($($nc(ch)->connect(remote)))->get();
		source->set(i, $$new($StressLoopback$Source, ch));
		sink->set(i, $$new($StressLoopback$Sink, $cast($AsynchronousByteChannel, $($nc($(listener->accept()))->get()))));
	}
	for (int32_t i = 0; i < count; ++i) {
		$nc(sink->get(i))->start();
		$nc(source->get(i))->start();
	}
	$Thread::sleep(20 * 1000);
	bool failed = false;
	int64_t total = 0;
	for (int32_t i = 0; i < count; ++i) {
		int64_t nwrote = $nc(source->get(i))->finish();
		int64_t nread = $nc(sink->get(i))->finish();
		if (nread != nwrote) {
			failed = true;
		}
		$init($System);
		$nc($System::out)->format("%d -> %d (%s)\n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(nwrote))),
			$($of($Long::valueOf(nread))),
			(failed) ? $of("FAIL"_s) : $of("PASS"_s)
		}));
		total += nwrote;
	}
	if (failed) {
		$throwNew($RuntimeException, "Test failed - see log for details"_s);
	}
	$init($System);
	$nc($System::out)->format("Total sent %d MB\n"_s, $$new($ObjectArray, {$($of($Long::valueOf($div(total, ((int64_t)1024 * (int64_t)1024)))))}));
}

void StressLoopback::waitUntilClosed($Channel* c) {
	$init(StressLoopback);
	while ($nc(c)->isOpen()) {
		try {
			$Thread::sleep(100);
		} catch ($InterruptedException&) {
			$catch();
		}
	}
}

void StressLoopback::closeUnchecked($Channel* c) {
	$init(StressLoopback);
	try {
		$nc(c)->close();
	} catch ($IOException&) {
		$catch();
	}
}

void clinit$StressLoopback($Class* class$) {
	$assignStatic(StressLoopback::rand, $new($Random));
}

StressLoopback::StressLoopback() {
}

$Class* StressLoopback::load$($String* name, bool initialize) {
	$loadClass(StressLoopback, name, initialize, &_StressLoopback_ClassInfo_, clinit$StressLoopback, allocate$StressLoopback);
	return class$;
}

$Class* StressLoopback::class$ = nullptr;