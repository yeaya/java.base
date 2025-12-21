#include <Connect4DatagramChannel$Responder.h>

#include <Connect4DatagramChannel.h>
#include <java/lang/AutoCloseable.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
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
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

$FieldInfo _Connect4DatagramChannel$Responder_FieldInfo_[] = {
	{"dc", "Ljava/nio/channels/DatagramChannel;", nullptr, $FINAL, $field(Connect4DatagramChannel$Responder, dc)},
	{}
};

$MethodInfo _Connect4DatagramChannel$Responder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Connect4DatagramChannel$Responder::*)()>(&Connect4DatagramChannel$Responder::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getSocketAddress", "()Ljava/net/SocketAddress;", nullptr, 0, nullptr, "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Connect4DatagramChannel$Responder_InnerClassesInfo_[] = {
	{"Connect4DatagramChannel$Responder", "Connect4DatagramChannel", "Responder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Connect4DatagramChannel$Responder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Connect4DatagramChannel$Responder",
	"java.lang.Object",
	"java.lang.AutoCloseable,java.lang.Runnable",
	_Connect4DatagramChannel$Responder_FieldInfo_,
	_Connect4DatagramChannel$Responder_MethodInfo_,
	nullptr,
	nullptr,
	_Connect4DatagramChannel$Responder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Connect4DatagramChannel"
};

$Object* allocate$Connect4DatagramChannel$Responder($Class* clazz) {
	return $of($alloc(Connect4DatagramChannel$Responder));
}

int32_t Connect4DatagramChannel$Responder::hashCode() {
	 return this->$AutoCloseable::hashCode();
}

bool Connect4DatagramChannel$Responder::equals(Object$* arg0) {
	 return this->$AutoCloseable::equals(arg0);
}

$Object* Connect4DatagramChannel$Responder::clone() {
	 return this->$AutoCloseable::clone();
}

$String* Connect4DatagramChannel$Responder::toString() {
	 return this->$AutoCloseable::toString();
}

void Connect4DatagramChannel$Responder::finalize() {
	this->$AutoCloseable::finalize();
}

void Connect4DatagramChannel$Responder::init$() {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, address, $new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	$set(this, dc, $cast($DatagramChannel, $nc($($DatagramChannel::open()))->bind(address)));
}

$SocketAddress* Connect4DatagramChannel$Responder::getSocketAddress() {
	return $nc(this->dc)->getLocalAddress();
}

void Connect4DatagramChannel$Responder::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(100));
				$init($Connect4DatagramChannel);
				$nc($Connect4DatagramChannel::log)->println("Responder waiting to receive"_s);
				$var($SocketAddress, sa, $nc(this->dc)->receive(bb));
				$nc(bb)->flip();
				$init($StandardCharsets);
				$var($CharBuffer, cb, $nc($($nc($StandardCharsets::US_ASCII)->newDecoder()))->decode(bb));
				$nc($Connect4DatagramChannel::log)->println($$str({"Responder received from Initiator at"_s, sa, ": "_s, cb}));
				$nc(this->dc)->connect(sa);
				bb->flip();
				$nc($Connect4DatagramChannel::log)->println($$str({"Responder attempting to write: "_s, $($nc($of($($nc(this->dc)->getRemoteAddress())))->toString())}));
				$nc(this->dc)->write(bb);
			} catch ($Exception& ex) {
				$init($Connect4DatagramChannel);
				$nc($Connect4DatagramChannel::log)->println($$str({"Responder threw exception: "_s, ex}));
				$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init($Connect4DatagramChannel);
			$nc($Connect4DatagramChannel::log)->println("Responder finished"_s);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Connect4DatagramChannel$Responder::close() {
	$nc(this->dc)->close();
}

Connect4DatagramChannel$Responder::Connect4DatagramChannel$Responder() {
}

$Class* Connect4DatagramChannel$Responder::load$($String* name, bool initialize) {
	$loadClass(Connect4DatagramChannel$Responder, name, initialize, &_Connect4DatagramChannel$Responder_ClassInfo_, allocate$Connect4DatagramChannel$Responder);
	return class$;
}

$Class* Connect4DatagramChannel$Responder::class$ = nullptr;