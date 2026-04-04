#include <NoSender.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

void NoSender::init$() {
}

void NoSender::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($DatagramChannel, dc, $DatagramChannel::open());
	$$nc($nc(dc)->socket())->bind($$new($InetSocketAddress, 0));
	dc->configureBlocking(false);
	$var($ByteBuffer, buf1, $ByteBuffer::allocateDirect(256));
	$var($SocketAddress, sa1, dc->receive(buf1));
	if (sa1 != nullptr) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	dc->close();
}

NoSender::NoSender() {
}

$Class* NoSender::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NoSender, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NoSender, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NoSender",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NoSender, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSender);
	});
	return class$;
}

$Class* NoSender::class$ = nullptr;