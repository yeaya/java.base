#include <java/nio/channels/ServerSocketChannel.h>

#include <java/net/ProtocolFamily.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef OP_ACCEPT

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Objects = ::java::util::Objects;

namespace java {
	namespace nio {
		namespace channels {

$MethodInfo _ServerSocketChannel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, $PROTECTED, $method(static_cast<void(ServerSocketChannel::*)($SelectorProvider*)>(&ServerSocketChannel::init$))},
	{"accept", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;)Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;I)Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"open", "()Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ServerSocketChannel*(*)()>(&ServerSocketChannel::open)), "java.io.IOException"},
	{"open", "(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ServerSocketChannel*(*)($ProtocolFamily*)>(&ServerSocketChannel::open)), "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"socket", "()Ljava/net/ServerSocket;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validOps", "()I", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _ServerSocketChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.ServerSocketChannel",
	"java.nio.channels.spi.AbstractSelectableChannel",
	"java.nio.channels.NetworkChannel",
	nullptr,
	_ServerSocketChannel_MethodInfo_
};

$Object* allocate$ServerSocketChannel($Class* clazz) {
	return $of($alloc(ServerSocketChannel));
}

void ServerSocketChannel::close() {
	this->$AbstractSelectableChannel::close();
}

bool ServerSocketChannel::isOpen() {
	 return this->$AbstractSelectableChannel::isOpen();
}

int32_t ServerSocketChannel::hashCode() {
	 return this->$AbstractSelectableChannel::hashCode();
}

bool ServerSocketChannel::equals(Object$* obj) {
	 return this->$AbstractSelectableChannel::equals(obj);
}

$Object* ServerSocketChannel::clone() {
	 return this->$AbstractSelectableChannel::clone();
}

$String* ServerSocketChannel::toString() {
	 return this->$AbstractSelectableChannel::toString();
}

void ServerSocketChannel::finalize() {
	this->$AbstractSelectableChannel::finalize();
}

void ServerSocketChannel::init$($SelectorProvider* provider) {
	$AbstractSelectableChannel::init$(provider);
}

ServerSocketChannel* ServerSocketChannel::open() {
	$init(ServerSocketChannel);
	return $nc($($SelectorProvider::provider()))->openServerSocketChannel();
}

ServerSocketChannel* ServerSocketChannel::open($ProtocolFamily* family) {
	$init(ServerSocketChannel);
	return $nc($($SelectorProvider::provider()))->openServerSocketChannel($cast($ProtocolFamily, $Objects::requireNonNull(family)));
}

int32_t ServerSocketChannel::validOps() {
	return $SelectionKey::OP_ACCEPT;
}

$NetworkChannel* ServerSocketChannel::bind($SocketAddress* local) {
	return bind(local, 0);
}

ServerSocketChannel::ServerSocketChannel() {
}

$Class* ServerSocketChannel::load$($String* name, bool initialize) {
	$loadClass(ServerSocketChannel, name, initialize, &_ServerSocketChannel_ClassInfo_, allocate$ServerSocketChannel);
	return class$;
}

$Class* ServerSocketChannel::class$ = nullptr;

		} // channels
	} // nio
} // java