#include <java/nio/channels/DatagramChannel.h>

#include <java/net/DatagramSocket.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef OP_READ
#undef OP_WRITE

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocket = ::java::net::DatagramSocket;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Objects = ::java::util::Objects;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _DatagramChannel_MethodInfo_[] = {
	{"bind", "(Ljava/net/SocketAddress;)Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, $PROTECTED, $method(DatagramChannel, init$, void, $SelectorProvider*)},
	{"connect", "(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DatagramChannel, connect, DatagramChannel*, $SocketAddress*), "java.io.IOException"},
	{"disconnect", "()Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DatagramChannel, disconnect, DatagramChannel*), "java.io.IOException"},
	{"getRemoteAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DatagramChannel, getRemoteAddress, $SocketAddress*), "java.io.IOException"},
	{"isConnected", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DatagramChannel, isConnected, bool)},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"open", "()Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC | $STATIC, $staticMethod(DatagramChannel, open, DatagramChannel*), "java.io.IOException"},
	{"open", "(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC | $STATIC, $staticMethod(DatagramChannel, open, DatagramChannel*, $ProtocolFamily*), "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "([Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC | $FINAL, $virtualMethod(DatagramChannel, read, int64_t, $ByteBufferArray*), "java.io.IOException"},
	{"receive", "(Ljava/nio/ByteBuffer;)Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DatagramChannel, receive, $SocketAddress*, $ByteBuffer*), "java.io.IOException"},
	{"send", "(Ljava/nio/ByteBuffer;Ljava/net/SocketAddress;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DatagramChannel, send, int32_t, $ByteBuffer*, $SocketAddress*), "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"socket", "()Ljava/net/DatagramSocket;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DatagramChannel, socket, $DatagramSocket*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validOps", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(DatagramChannel, validOps, int32_t)},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "([Ljava/nio/ByteBuffer;)J", nullptr, $PUBLIC | $FINAL, $virtualMethod(DatagramChannel, write, int64_t, $ByteBufferArray*), "java.io.IOException"},
	{}
};

$ClassInfo _DatagramChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.DatagramChannel",
	"java.nio.channels.spi.AbstractSelectableChannel",
	"java.nio.channels.ByteChannel,java.nio.channels.ScatteringByteChannel,java.nio.channels.GatheringByteChannel,java.nio.channels.MulticastChannel",
	nullptr,
	_DatagramChannel_MethodInfo_
};

$Object* allocate$DatagramChannel($Class* clazz) {
	return $of($alloc(DatagramChannel));
}

void DatagramChannel::close() {
	this->$AbstractSelectableChannel::close();
}

bool DatagramChannel::isOpen() {
	 return this->$AbstractSelectableChannel::isOpen();
}

int32_t DatagramChannel::hashCode() {
	 return this->$AbstractSelectableChannel::hashCode();
}

bool DatagramChannel::equals(Object$* obj) {
	 return this->$AbstractSelectableChannel::equals(obj);
}

$Object* DatagramChannel::clone() {
	 return this->$AbstractSelectableChannel::clone();
}

$String* DatagramChannel::toString() {
	 return this->$AbstractSelectableChannel::toString();
}

void DatagramChannel::finalize() {
	this->$AbstractSelectableChannel::finalize();
}

void DatagramChannel::init$($SelectorProvider* provider) {
	$AbstractSelectableChannel::init$(provider);
}

DatagramChannel* DatagramChannel::open() {
	$init(DatagramChannel);
	return $nc($($SelectorProvider::provider()))->openDatagramChannel();
}

DatagramChannel* DatagramChannel::open($ProtocolFamily* family) {
	$init(DatagramChannel);
	return $nc($($SelectorProvider::provider()))->openDatagramChannel($cast($ProtocolFamily, $Objects::requireNonNull(family)));
}

int32_t DatagramChannel::validOps() {
	return ($SelectionKey::OP_READ | $SelectionKey::OP_WRITE);
}

int64_t DatagramChannel::read($ByteBufferArray* dsts) {
	return read(dsts, 0, $nc(dsts)->length);
}

int64_t DatagramChannel::write($ByteBufferArray* srcs) {
	return write(srcs, 0, $nc(srcs)->length);
}

DatagramChannel::DatagramChannel() {
}

$Class* DatagramChannel::load$($String* name, bool initialize) {
	$loadClass(DatagramChannel, name, initialize, &_DatagramChannel_ClassInfo_, allocate$DatagramChannel);
	return class$;
}

$Class* DatagramChannel::class$ = nullptr;

		} // channels
	} // nio
} // java