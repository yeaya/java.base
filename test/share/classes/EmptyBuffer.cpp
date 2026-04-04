#include <EmptyBuffer.h>
#include <EmptyBuffer$Server.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

#undef BIG_ENDIAN

using $EmptyBuffer$Server = ::EmptyBuffer$Server;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

$PrintStream* EmptyBuffer::log = nullptr;

void EmptyBuffer::init$() {
}

void EmptyBuffer::main($StringArray* args) {
	$init(EmptyBuffer);
	test();
}

void EmptyBuffer::test() {
	$init(EmptyBuffer);
	$useLocalObjectStack();
	$var($DatagramChannel, dc, $DatagramChannel::open());
	$var($InetAddress, localHost, $InetAddress::getLocalHost());
	$nc(dc)->bind($$new($InetSocketAddress, localHost, 0));
	$var($EmptyBuffer$Server, server, $new($EmptyBuffer$Server, $(dc->getLocalAddress())));
	$var($Thread, serverThread, $new($Thread, server));
	serverThread->start();
	$var($Throwable, var$0, nullptr);
	try {
		$var($InetSocketAddress, isa, $new($InetSocketAddress, localHost, server->port()));
		dc->connect(isa);
		$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(12));
		$init($ByteOrder);
		$nc(bb)->order($ByteOrder::BIG_ENDIAN);
		$$nc(bb->putInt(1))->putLong(1);
		bb->flip();
		dc->write(bb);
		bb->rewind();
		dc->write(bb);
		bb->rewind();
		dc->write(bb);
		$Thread::sleep(2000);
		serverThread->interrupt();
		server->throwException();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		dc->close();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void EmptyBuffer::clinit$($Class* clazz) {
	$assignStatic(EmptyBuffer::log, $System::err);
}

EmptyBuffer::EmptyBuffer() {
}

$Class* EmptyBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"log", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EmptyBuffer, log)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EmptyBuffer, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EmptyBuffer, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(EmptyBuffer, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EmptyBuffer$Server", "EmptyBuffer", "Server", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EmptyBuffer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"EmptyBuffer$Server"
	};
	$loadClass(EmptyBuffer, name, initialize, &classInfo$$, EmptyBuffer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(EmptyBuffer);
	});
	return class$;
}

$Class* EmptyBuffer::class$ = nullptr;