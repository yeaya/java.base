#include <StressNativeSignal$UDPThread.h>

#include <StressNativeSignal.h>
#include <java/io/IOException.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

#undef SO_RCVBUF

using $StressNativeSignal = ::StressNativeSignal;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$FieldInfo _StressNativeSignal$UDPThread_FieldInfo_[] = {
	{"this$0", "LStressNativeSignal;", nullptr, $FINAL | $SYNTHETIC, $field(StressNativeSignal$UDPThread, this$0)},
	{"channel", "Ljava/nio/channels/DatagramChannel;", nullptr, $PRIVATE, $field(StressNativeSignal$UDPThread, channel)},
	{"shouldTerminate", "Z", nullptr, $PRIVATE | $VOLATILE, $field(StressNativeSignal$UDPThread, shouldTerminate)},
	{}
};

$MethodInfo _StressNativeSignal$UDPThread_MethodInfo_[] = {
	{"<init>", "(LStressNativeSignal;)V", nullptr, $PUBLIC, $method(static_cast<void(StressNativeSignal$UDPThread::*)($StressNativeSignal*)>(&StressNativeSignal$UDPThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"terminate", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StressNativeSignal$UDPThread_InnerClassesInfo_[] = {
	{"StressNativeSignal$UDPThread", "StressNativeSignal", "UDPThread", $PUBLIC},
	{}
};

$ClassInfo _StressNativeSignal$UDPThread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StressNativeSignal$UDPThread",
	"java.lang.Thread",
	nullptr,
	_StressNativeSignal$UDPThread_FieldInfo_,
	_StressNativeSignal$UDPThread_MethodInfo_,
	nullptr,
	nullptr,
	_StressNativeSignal$UDPThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StressNativeSignal"
};

$Object* allocate$StressNativeSignal$UDPThread($Class* clazz) {
	return $of($alloc(StressNativeSignal$UDPThread));
}

void StressNativeSignal$UDPThread::init$($StressNativeSignal* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$();
}

void StressNativeSignal$UDPThread::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$set(this, channel, $DatagramChannel::open());
		$init($StandardSocketOptions);
		$nc(this->channel)->setOption($StandardSocketOptions::SO_RCVBUF, $($Integer::valueOf(0x00640000)));
		$nc(this->channel)->bind($$new($InetSocketAddress, 19870));
	} catch ($IOException& z) {
		z->printStackTrace($System::err);
	}
	$var($ByteBuffer, buf, $ByteBuffer::allocate(0x00640000));
	this->shouldTerminate = false;
	while (!this->shouldTerminate) {
		try {
			$nc(buf)->rewind();
			$nc(this->channel)->receive(buf);
		} catch ($IOException& z) {
			if (!this->shouldTerminate) {
				z->printStackTrace($System::err);
			}
		}
	}
}

void StressNativeSignal$UDPThread::terminate() {
	this->shouldTerminate = true;
	try {
		$nc(this->channel)->close();
	} catch ($Exception& z) {
		z->printStackTrace($System::err);
	}
}

StressNativeSignal$UDPThread::StressNativeSignal$UDPThread() {
}

$Class* StressNativeSignal$UDPThread::load$($String* name, bool initialize) {
	$loadClass(StressNativeSignal$UDPThread, name, initialize, &_StressNativeSignal$UDPThread_ClassInfo_, allocate$StressNativeSignal$UDPThread);
	return class$;
}

$Class* StressNativeSignal$UDPThread::class$ = nullptr;