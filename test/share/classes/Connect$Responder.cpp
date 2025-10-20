#include <Connect$Responder.h>

#include <Connect.h>
#include <java/io/PrintStream.h>
#include <java/lang/AutoCloseable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

using $Connect = ::Connect;
using $PrintStream = ::java::io::PrintStream;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;

$FieldInfo _Connect$Responder_FieldInfo_[] = {
	{"dc", "Ljava/nio/channels/DatagramChannel;", nullptr, $FINAL, $field(Connect$Responder, dc)},
	{}
};

$MethodInfo _Connect$Responder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Connect$Responder::*)()>(&Connect$Responder::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getSocketAddress", "()Ljava/net/SocketAddress;", nullptr, 0, nullptr, "java.io.IOException"},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Connect$Responder_InnerClassesInfo_[] = {
	{"Connect$Responder", "Connect", "Responder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Connect$Responder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Connect$Responder",
	"java.lang.Object",
	"java.lang.AutoCloseable,java.lang.Runnable",
	_Connect$Responder_FieldInfo_,
	_Connect$Responder_MethodInfo_,
	nullptr,
	nullptr,
	_Connect$Responder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Connect"
};

$Object* allocate$Connect$Responder($Class* clazz) {
	return $of($alloc(Connect$Responder));
}

int32_t Connect$Responder::hashCode() {
	 return this->$AutoCloseable::hashCode();
}

bool Connect$Responder::equals(Object$* arg0) {
	 return this->$AutoCloseable::equals(arg0);
}

$Object* Connect$Responder::clone() {
	 return this->$AutoCloseable::clone();
}

$String* Connect$Responder::toString() {
	 return this->$AutoCloseable::toString();
}

void Connect$Responder::finalize() {
	this->$AutoCloseable::finalize();
}

void Connect$Responder::init$() {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, address, $new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
	$set(this, dc, $cast($DatagramChannel, $nc($($DatagramChannel::open()))->bind(address)));
}

$SocketAddress* Connect$Responder::getSocketAddress() {
	return $nc(this->dc)->getLocalAddress();
}

void Connect$Responder::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(100));
				$init($Connect);
				$nc($Connect::log)->println("Responder waiting to receive"_s);
				$var($SocketAddress, sa, $nc(this->dc)->receive(bb));
				$nc(bb)->flip();
				$init($StandardCharsets);
				$var($CharBuffer, cb, $nc($($nc($StandardCharsets::US_ASCII)->newDecoder()))->decode(bb));
				$nc($Connect::log)->println($$str({"Responder received from Initiator at"_s, sa, ": "_s, cb}));
				$nc(this->dc)->connect(sa);
				bb->flip();
				$nc($Connect::log)->println($$str({"Responder attempting to write: "_s, $($nc($of($($nc(this->dc)->getRemoteAddress())))->toString())}));
				$nc(this->dc)->write(bb);
			} catch ($Exception&) {
				$var($Exception, ex, $catch());
				$init($Connect);
				$nc($Connect::log)->println($$str({"Responder threw exception: "_s, ex}));
				$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init($Connect);
			$nc($Connect::log)->println("Responder finished"_s);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Connect$Responder::close() {
	$nc(this->dc)->close();
}

Connect$Responder::Connect$Responder() {
}

$Class* Connect$Responder::load$($String* name, bool initialize) {
	$loadClass(Connect$Responder, name, initialize, &_Connect$Responder_ClassInfo_, allocate$Connect$Responder);
	return class$;
}

$Class* Connect$Responder::class$ = nullptr;