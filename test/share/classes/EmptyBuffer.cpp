#include <EmptyBuffer.h>

#include <EmptyBuffer$Server.h>
#include <java/lang/Runnable.h>
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
using $Runnable = ::java::lang::Runnable;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

$FieldInfo _EmptyBuffer_FieldInfo_[] = {
	{"log", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EmptyBuffer, log)},
	{}
};

$MethodInfo _EmptyBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EmptyBuffer::*)()>(&EmptyBuffer::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EmptyBuffer::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&EmptyBuffer::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _EmptyBuffer_InnerClassesInfo_[] = {
	{"EmptyBuffer$Server", "EmptyBuffer", "Server", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EmptyBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EmptyBuffer",
	"java.lang.Object",
	nullptr,
	_EmptyBuffer_FieldInfo_,
	_EmptyBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_EmptyBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"EmptyBuffer$Server"
};

$Object* allocate$EmptyBuffer($Class* clazz) {
	return $of($alloc(EmptyBuffer));
}

$PrintStream* EmptyBuffer::log = nullptr;

void EmptyBuffer::init$() {
}

void EmptyBuffer::main($StringArray* args) {
	$init(EmptyBuffer);
	test();
}

void EmptyBuffer::test() {
	$init(EmptyBuffer);
	$useLocalCurrentObjectStackCache();
	$var($DatagramChannel, dc, $DatagramChannel::open());
	$var($InetAddress, localHost, $InetAddress::getLocalHost());
	$nc(dc)->bind($$new($InetSocketAddress, localHost, 0));
	$var($EmptyBuffer$Server, server, $new($EmptyBuffer$Server, $(dc->getLocalAddress())));
	$var($Thread, serverThread, $new($Thread, static_cast<$Runnable*>(server)));
	serverThread->start();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($InetSocketAddress, isa, $new($InetSocketAddress, localHost, server->port()));
			dc->connect(isa);
			$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(12));
			$init($ByteOrder);
			$nc(bb)->order($ByteOrder::BIG_ENDIAN);
			$nc($(bb->putInt(1)))->putLong(1);
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
}

void clinit$EmptyBuffer($Class* class$) {
	$assignStatic(EmptyBuffer::log, $System::err);
}

EmptyBuffer::EmptyBuffer() {
}

$Class* EmptyBuffer::load$($String* name, bool initialize) {
	$loadClass(EmptyBuffer, name, initialize, &_EmptyBuffer_ClassInfo_, clinit$EmptyBuffer, allocate$EmptyBuffer);
	return class$;
}

$Class* EmptyBuffer::class$ = nullptr;