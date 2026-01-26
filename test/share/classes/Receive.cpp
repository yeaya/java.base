#include <Receive.h>

#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;

$MethodInfo _Receive_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Receive, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Receive, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Receive_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Receive",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Receive_MethodInfo_
};

$Object* allocate$Receive($Class* clazz) {
	return $of($alloc(Receive));
}

void Receive::init$() {
}

void Receive::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, bb, $ByteBuffer::allocate(10));
	$var($DatagramChannel, dc1, $DatagramChannel::open());
	$nc(dc1)->close();
	try {
		dc1->receive(bb);
		$throwNew($Exception, "Receive on closed DC did not throw"_s);
	} catch ($ClosedChannelException& cce) {
	}
}

Receive::Receive() {
}

$Class* Receive::load$($String* name, bool initialize) {
	$loadClass(Receive, name, initialize, &_Receive_ClassInfo_, allocate$Receive);
	return class$;
}

$Class* Receive::class$ = nullptr;