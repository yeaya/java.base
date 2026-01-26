#include <Connect4DatagramChannel$Initiator.h>

#include <Connect4DatagramChannel.h>
#include <java/lang/AutoCloseable.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/channels/AlreadyConnectedException.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jcpp.h>

#undef US_ASCII

using $Connect4DatagramChannel = ::Connect4DatagramChannel;
using $PrintStream = ::java::io::PrintStream;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $AlreadyConnectedException = ::java::nio::channels::AlreadyConnectedException;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

$FieldInfo _Connect4DatagramChannel$Initiator_FieldInfo_[] = {
	{"connectSocketAddress", "Ljava/net/SocketAddress;", nullptr, $FINAL, $field(Connect4DatagramChannel$Initiator, connectSocketAddress)},
	{"dc", "Ljava/nio/channels/DatagramChannel;", nullptr, $FINAL, $field(Connect4DatagramChannel$Initiator, dc)},
	{}
};

$MethodInfo _Connect4DatagramChannel$Initiator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/net/SocketAddress;)V", nullptr, 0, $method(Connect4DatagramChannel$Initiator, init$, void, $SocketAddress*), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Connect4DatagramChannel$Initiator, close, void), "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Connect4DatagramChannel$Initiator, run, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Connect4DatagramChannel$Initiator_InnerClassesInfo_[] = {
	{"Connect4DatagramChannel$Initiator", "Connect4DatagramChannel", "Initiator", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Connect4DatagramChannel$Initiator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Connect4DatagramChannel$Initiator",
	"java.lang.Object",
	"java.lang.AutoCloseable,java.lang.Runnable",
	_Connect4DatagramChannel$Initiator_FieldInfo_,
	_Connect4DatagramChannel$Initiator_MethodInfo_,
	nullptr,
	nullptr,
	_Connect4DatagramChannel$Initiator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Connect4DatagramChannel"
};

$Object* allocate$Connect4DatagramChannel$Initiator($Class* clazz) {
	return $of($alloc(Connect4DatagramChannel$Initiator));
}

int32_t Connect4DatagramChannel$Initiator::hashCode() {
	 return this->$AutoCloseable::hashCode();
}

bool Connect4DatagramChannel$Initiator::equals(Object$* arg0) {
	 return this->$AutoCloseable::equals(arg0);
}

$Object* Connect4DatagramChannel$Initiator::clone() {
	 return this->$AutoCloseable::clone();
}

$String* Connect4DatagramChannel$Initiator::toString() {
	 return this->$AutoCloseable::toString();
}

void Connect4DatagramChannel$Initiator::finalize() {
	this->$AutoCloseable::finalize();
}

void Connect4DatagramChannel$Initiator::init$($SocketAddress* peerSocketAddress) {
	$set(this, connectSocketAddress, $Connect4DatagramChannel::toConnectAddress(peerSocketAddress));
	$set(this, dc, $DatagramChannel::open());
}

void Connect4DatagramChannel$Initiator::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(256));
				$nc(bb)->put($("hello"_s->getBytes()));
				bb->flip();
				$init($Connect4DatagramChannel);
				$nc($Connect4DatagramChannel::log)->println($$str({"Initiator connecting to "_s, this->connectSocketAddress}));
				$nc(this->dc)->connect(this->connectSocketAddress);
				$nc($Connect4DatagramChannel::log)->println($$str({"Initiator attempting to write to Responder at "_s, $($nc($of(this->connectSocketAddress))->toString())}));
				$nc(this->dc)->write(bb);
				try {
					int32_t port = $nc($($nc(this->dc)->socket()))->getLocalPort();
					$var($InetAddress, loopback, $InetAddress::getLoopbackAddress());
					$var($InetSocketAddress, otherAddress, $new($InetSocketAddress, loopback, (port == 3333 ? 3332 : 3333)));
					$nc($Connect4DatagramChannel::log)->println($$str({"Testing if Initiator throws AlreadyConnectedException"_s, $(otherAddress->toString())}));
					$nc(this->dc)->send(bb, otherAddress);
					$throwNew($RuntimeException, "Initiator allowed send to other address while already connected"_s);
				} catch ($AlreadyConnectedException& ace) {
				}
				bb->flip();
				$nc($Connect4DatagramChannel::log)->println("Initiator waiting to read"_s);
				$nc(this->dc)->read(bb);
				bb->flip();
				$init($StandardCharsets);
				$var($CharBuffer, cb, $nc($($nc($StandardCharsets::US_ASCII)->newDecoder()))->decode(bb));
				$nc($Connect4DatagramChannel::log)->println($$str({"Initiator received from Responder at "_s, this->connectSocketAddress, ": "_s, cb}));
			} catch ($Exception& ex) {
				$init($Connect4DatagramChannel);
				$nc($Connect4DatagramChannel::log)->println($$str({"Initiator threw exception: "_s, ex}));
				$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init($Connect4DatagramChannel);
			$nc($Connect4DatagramChannel::log)->println("Initiator finished"_s);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Connect4DatagramChannel$Initiator::close() {
	$nc(this->dc)->close();
}

Connect4DatagramChannel$Initiator::Connect4DatagramChannel$Initiator() {
}

$Class* Connect4DatagramChannel$Initiator::load$($String* name, bool initialize) {
	$loadClass(Connect4DatagramChannel$Initiator, name, initialize, &_Connect4DatagramChannel$Initiator_ClassInfo_, allocate$Connect4DatagramChannel$Initiator);
	return class$;
}

$Class* Connect4DatagramChannel$Initiator::class$ = nullptr;