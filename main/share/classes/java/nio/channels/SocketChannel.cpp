#include <java/nio/channels/SocketChannel.h>

#include <java/lang/AssertionError.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/StandardProtocolFamily.h>
#include <java/net/UnixDomainSocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/UnsupportedAddressTypeException.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef OP_CONNECT
#undef OP_READ
#undef OP_WRITE
#undef UNIX

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $StandardProtocolFamily = ::java::net::StandardProtocolFamily;
using $UnixDomainSocketAddress = ::java::net::UnixDomainSocketAddress;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $GatheringByteChannel = ::java::nio::channels::GatheringByteChannel;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $ScatteringByteChannel = ::java::nio::channels::ScatteringByteChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $UnsupportedAddressTypeException = ::java::nio::channels::UnsupportedAddressTypeException;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Objects = ::java::util::Objects;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _SocketChannel_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketChannel, $assertionsDisabled)},
	{}
};

$MethodInfo _SocketChannel_MethodInfo_[] = {
	{"bind", "(Ljava/net/SocketAddress;)Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, $PROTECTED, $method(static_cast<void(SocketChannel::*)($SelectorProvider*)>(&SocketChannel::init$))},
	{"connect", "(Ljava/net/SocketAddress;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"finishConnect", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getRemoteAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"isConnected", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isConnectionPending", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"open", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SocketChannel*(*)()>(&SocketChannel::open)), "java.io.IOException"},
	{"open", "(Ljava/net/ProtocolFamily;)Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SocketChannel*(*)($ProtocolFamily*)>(&SocketChannel::open)), "java.io.IOException"},
	{"open", "(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SocketChannel*(*)($SocketAddress*)>(&SocketChannel::open)), "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "([Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"shutdownInput", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"shutdownOutput", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"socket", "()Ljava/net/Socket;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validOps", "()I", nullptr, $PUBLIC | $FINAL},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "([Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SocketChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.SocketChannel",
	"java.nio.channels.spi.AbstractSelectableChannel",
	"java.nio.channels.ByteChannel,java.nio.channels.ScatteringByteChannel,java.nio.channels.GatheringByteChannel,java.nio.channels.NetworkChannel",
	_SocketChannel_FieldInfo_,
	_SocketChannel_MethodInfo_
};

$Object* allocate$SocketChannel($Class* clazz) {
	return $of($alloc(SocketChannel));
}

void SocketChannel::close() {
	this->$AbstractSelectableChannel::close();
}

bool SocketChannel::isOpen() {
	 return this->$AbstractSelectableChannel::isOpen();
}

int32_t SocketChannel::hashCode() {
	 return this->$AbstractSelectableChannel::hashCode();
}

bool SocketChannel::equals(Object$* obj) {
	 return this->$AbstractSelectableChannel::equals(obj);
}

$Object* SocketChannel::clone() {
	 return this->$AbstractSelectableChannel::clone();
}

$String* SocketChannel::toString() {
	 return this->$AbstractSelectableChannel::toString();
}

void SocketChannel::finalize() {
	this->$AbstractSelectableChannel::finalize();
}

bool SocketChannel::$assertionsDisabled = false;

void SocketChannel::init$($SelectorProvider* provider) {
	$AbstractSelectableChannel::init$(provider);
}

SocketChannel* SocketChannel::open() {
	$init(SocketChannel);
	return $nc($($SelectorProvider::provider()))->openSocketChannel();
}

SocketChannel* SocketChannel::open($ProtocolFamily* family) {
	$init(SocketChannel);
	return $nc($($SelectorProvider::provider()))->openSocketChannel($cast($ProtocolFamily, $Objects::requireNonNull(family)));
}

SocketChannel* SocketChannel::open($SocketAddress* remote) {
	$init(SocketChannel);
	$var(SocketChannel, sc, nullptr);
	$Objects::requireNonNull(remote);
	if ($instanceOf($InetSocketAddress, remote)) {
		$assign(sc, open());
	} else if ($instanceOf($UnixDomainSocketAddress, remote)) {
		$init($StandardProtocolFamily);
		$assign(sc, open(static_cast<$ProtocolFamily*>($StandardProtocolFamily::UNIX)));
	} else {
		$throwNew($UnsupportedAddressTypeException);
	}
	try {
		$nc(sc)->connect(remote);
	} catch ($Throwable& x) {
		try {
			$nc(sc)->close();
		} catch ($Throwable& suppressed) {
			x->addSuppressed(suppressed);
		}
		$throw(x);
	}
	if (!SocketChannel::$assertionsDisabled && !$nc(sc)->isConnected()) {
		$throwNew($AssertionError);
	}
	return sc;
}

int32_t SocketChannel::validOps() {
	return (($SelectionKey::OP_READ | $SelectionKey::OP_WRITE) | $SelectionKey::OP_CONNECT);
}

int64_t SocketChannel::read($ByteBufferArray* dsts) {
	return read(dsts, 0, $nc(dsts)->length);
}

int64_t SocketChannel::write($ByteBufferArray* srcs) {
	return write(srcs, 0, $nc(srcs)->length);
}

void clinit$SocketChannel($Class* class$) {
	SocketChannel::$assertionsDisabled = !SocketChannel::class$->desiredAssertionStatus();
}

SocketChannel::SocketChannel() {
}

$Class* SocketChannel::load$($String* name, bool initialize) {
	$loadClass(SocketChannel, name, initialize, &_SocketChannel_ClassInfo_, clinit$SocketChannel, allocate$SocketChannel);
	return class$;
}

$Class* SocketChannel::class$ = nullptr;

		} // channels
	} // nio
} // java