#include <EmptyBuffer$Server.h>

#include <EmptyBuffer.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ClosedByInterruptException.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <jcpp.h>

using $EmptyBuffer = ::EmptyBuffer;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $SocketAddress = ::java::net::SocketAddress;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClosedByInterruptException = ::java::nio::channels::ClosedByInterruptException;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$FieldInfo _EmptyBuffer$Server_FieldInfo_[] = {
	{"dc", "Ljava/nio/channels/DatagramChannel;", nullptr, $PRIVATE | $FINAL, $field(EmptyBuffer$Server, dc)},
	{"clientAddress", "Ljava/net/SocketAddress;", nullptr, $PRIVATE | $FINAL, $field(EmptyBuffer$Server, clientAddress)},
	{"e", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(EmptyBuffer$Server, e)},
	{}
};

$MethodInfo _EmptyBuffer$Server_MethodInfo_[] = {
	{"<init>", "(Ljava/net/SocketAddress;)V", nullptr, 0, $method(static_cast<void(EmptyBuffer$Server::*)($SocketAddress*)>(&EmptyBuffer$Server::init$)), "java.io.IOException"},
	{"port", "()I", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{"showBuffer", "(Ljava/lang/String;Ljava/nio/ByteBuffer;)V", nullptr, 0},
	{"throwException", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _EmptyBuffer$Server_InnerClassesInfo_[] = {
	{"EmptyBuffer$Server", "EmptyBuffer", "Server", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EmptyBuffer$Server_ClassInfo_ = {
	$ACC_SUPER,
	"EmptyBuffer$Server",
	"java.lang.Object",
	"java.lang.Runnable",
	_EmptyBuffer$Server_FieldInfo_,
	_EmptyBuffer$Server_MethodInfo_,
	nullptr,
	nullptr,
	_EmptyBuffer$Server_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EmptyBuffer"
};

$Object* allocate$EmptyBuffer$Server($Class* clazz) {
	return $of($alloc(EmptyBuffer$Server));
}

void EmptyBuffer$Server::init$($SocketAddress* clientAddress) {
	$set(this, e, nullptr);
	$set(this, dc, $cast($DatagramChannel, $nc($($DatagramChannel::open()))->bind($$new($InetSocketAddress, 0))));
	$set(this, clientAddress, clientAddress);
}

int32_t EmptyBuffer$Server::port() {
	return $nc($($nc(this->dc)->socket()))->getLocalPort();
}

void EmptyBuffer$Server::throwException() {
	if (this->e != nullptr) {
		$throw(this->e);
	}
}

void EmptyBuffer$Server::showBuffer($String* s, $ByteBuffer* bb) {
	$init($EmptyBuffer);
	$nc($EmptyBuffer::log)->println(s);
	$nc(bb)->rewind();
	for (int32_t i = 0; i < bb->limit(); ++i) {
		int8_t element = bb->get();
		$nc($EmptyBuffer::log)->print((int32_t)element);
	}
	$nc($EmptyBuffer::log)->println();
}

void EmptyBuffer$Server::run() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(12));
				$nc(bb)->clear();
				int32_t numberReceived = 0;
				while (!$Thread::interrupted()) {
					$var($SocketAddress, sa, nullptr);
					try {
						$assign(sa, $nc(this->dc)->receive(bb));
					} catch ($ClosedByInterruptException&) {
						$var($ClosedByInterruptException, cbie, $catch());
						$init($EmptyBuffer);
						$nc($EmptyBuffer::log)->println("Took expected exit"_s);
						if (numberReceived != 3) {
							$throwNew($RuntimeException, "Failed: Too few datagrams"_s);
						}
						break;
					}
					if (sa != nullptr) {
						$init($EmptyBuffer);
						$nc($EmptyBuffer::log)->println($$str({"Client: "_s, sa}));
						if ($of(sa)->equals(this->clientAddress)) {
							showBuffer("RECV"_s, bb);
							++numberReceived;
						}
						if (numberReceived > 3) {
							$throwNew($RuntimeException, "Failed: Too many datagrams"_s);
						}
						$assign(sa, nullptr);
					}
				}
			} catch ($Exception&) {
				$var($Exception, ex, $catch());
				$set(this, e, ex);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			try {
				$nc(this->dc)->close();
			} catch ($IOException&) {
				$catch();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

EmptyBuffer$Server::EmptyBuffer$Server() {
}

$Class* EmptyBuffer$Server::load$($String* name, bool initialize) {
	$loadClass(EmptyBuffer$Server, name, initialize, &_EmptyBuffer$Server_ClassInfo_, allocate$EmptyBuffer$Server);
	return class$;
}

$Class* EmptyBuffer$Server::class$ = nullptr;