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
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

$MethodInfo _NoSender_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoSender::*)()>(&NoSender::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NoSender::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NoSender_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NoSender",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NoSender_MethodInfo_
};

$Object* allocate$NoSender($Class* clazz) {
	return $of($alloc(NoSender));
}

void NoSender::init$() {
}

void NoSender::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($DatagramChannel, dc, $DatagramChannel::open());
	$nc($($nc(dc)->socket()))->bind($$new($InetSocketAddress, 0));
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
	$loadClass(NoSender, name, initialize, &_NoSender_ClassInfo_, allocate$NoSender);
	return class$;
}

$Class* NoSender::class$ = nullptr;