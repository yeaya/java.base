#include <java/nio/channels/AsynchronousServerSocketChannel.h>

#include <java/net/SocketAddress.h>
#include <java/nio/channels/AsynchronousChannel.h>
#include <java/nio/channels/AsynchronousChannelGroup.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <java/util/concurrent/Future.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;
using $AsynchronousChannel = ::java::nio::channels::AsynchronousChannel;
using $AsynchronousChannelGroup = ::java::nio::channels::AsynchronousChannelGroup;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _AsynchronousServerSocketChannel_FieldInfo_[] = {
	{"provider", "Ljava/nio/channels/spi/AsynchronousChannelProvider;", nullptr, $PRIVATE | $FINAL, $field(AsynchronousServerSocketChannel, provider$)},
	{}
};

$MethodInfo _AsynchronousServerSocketChannel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/AsynchronousChannelProvider;)V", nullptr, $PROTECTED, $method(static_cast<void(AsynchronousServerSocketChannel::*)($AsynchronousChannelProvider*)>(&AsynchronousServerSocketChannel::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(TA;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/AsynchronousSocketChannel;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{"accept", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<Ljava/nio/channels/AsynchronousSocketChannel;>;", $PUBLIC | $ABSTRACT},
	{"bind", "(Ljava/net/SocketAddress;)Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;I)Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"open", "(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AsynchronousServerSocketChannel*(*)($AsynchronousChannelGroup*)>(&AsynchronousServerSocketChannel::open)), "java.io.IOException"},
	{"open", "()Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AsynchronousServerSocketChannel*(*)()>(&AsynchronousServerSocketChannel::open)), "java.io.IOException"},
	{"provider", "()Ljava/nio/channels/spi/AsynchronousChannelProvider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$AsynchronousChannelProvider*(AsynchronousServerSocketChannel::*)()>(&AsynchronousServerSocketChannel::provider))},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AsynchronousServerSocketChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.AsynchronousServerSocketChannel",
	"java.lang.Object",
	"java.nio.channels.AsynchronousChannel,java.nio.channels.NetworkChannel",
	_AsynchronousServerSocketChannel_FieldInfo_,
	_AsynchronousServerSocketChannel_MethodInfo_
};

$Object* allocate$AsynchronousServerSocketChannel($Class* clazz) {
	return $of($alloc(AsynchronousServerSocketChannel));
}

int32_t AsynchronousServerSocketChannel::hashCode() {
	 return this->$AsynchronousChannel::hashCode();
}

bool AsynchronousServerSocketChannel::equals(Object$* obj) {
	 return this->$AsynchronousChannel::equals(obj);
}

$Object* AsynchronousServerSocketChannel::clone() {
	 return this->$AsynchronousChannel::clone();
}

$String* AsynchronousServerSocketChannel::toString() {
	 return this->$AsynchronousChannel::toString();
}

void AsynchronousServerSocketChannel::finalize() {
	this->$AsynchronousChannel::finalize();
}

void AsynchronousServerSocketChannel::init$($AsynchronousChannelProvider* provider) {
	$set(this, provider$, provider);
}

$AsynchronousChannelProvider* AsynchronousServerSocketChannel::provider() {
	return this->provider$;
}

AsynchronousServerSocketChannel* AsynchronousServerSocketChannel::open($AsynchronousChannelGroup* group) {
	$init(AsynchronousServerSocketChannel);
	$var($AsynchronousChannelProvider, provider, (group == nullptr) ? $AsynchronousChannelProvider::provider() : $nc(group)->provider());
	return $nc(provider)->openAsynchronousServerSocketChannel(group);
}

AsynchronousServerSocketChannel* AsynchronousServerSocketChannel::open() {
	$init(AsynchronousServerSocketChannel);
	return open(nullptr);
}

$NetworkChannel* AsynchronousServerSocketChannel::bind($SocketAddress* local) {
	return bind(local, 0);
}

AsynchronousServerSocketChannel::AsynchronousServerSocketChannel() {
}

$Class* AsynchronousServerSocketChannel::load$($String* name, bool initialize) {
	$loadClass(AsynchronousServerSocketChannel, name, initialize, &_AsynchronousServerSocketChannel_ClassInfo_, allocate$AsynchronousServerSocketChannel);
	return class$;
}

$Class* AsynchronousServerSocketChannel::class$ = nullptr;

		} // channels
	} // nio
} // java