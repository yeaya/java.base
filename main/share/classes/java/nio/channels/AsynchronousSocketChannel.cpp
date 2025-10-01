#include <java/nio/channels/AsynchronousSocketChannel.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AsynchronousByteChannel.h>
#include <java/nio/channels/AsynchronousChannelGroup.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef MILLISECONDS

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketAddress = ::java::net::SocketAddress;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AsynchronousByteChannel = ::java::nio::channels::AsynchronousByteChannel;
using $AsynchronousChannelGroup = ::java::nio::channels::AsynchronousChannelGroup;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;
using $Future = ::java::util::concurrent::Future;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace nio {
		namespace channels {

$FieldInfo _AsynchronousSocketChannel_FieldInfo_[] = {
	{"provider", "Ljava/nio/channels/spi/AsynchronousChannelProvider;", nullptr, $PRIVATE | $FINAL, $field(AsynchronousSocketChannel, provider$)},
	{}
};

$MethodInfo _AsynchronousSocketChannel_MethodInfo_[] = {
	{"bind", "(Ljava/net/SocketAddress;)Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/AsynchronousChannelProvider;)V", nullptr, $PROTECTED, $method(static_cast<void(AsynchronousSocketChannel::*)($AsynchronousChannelProvider*)>(&AsynchronousSocketChannel::init$))},
	{"connect", "(Ljava/net/SocketAddress;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(Ljava/net/SocketAddress;TA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Void;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{"connect", "(Ljava/net/SocketAddress;)Ljava/util/concurrent/Future;", "(Ljava/net/SocketAddress;)Ljava/util/concurrent/Future<Ljava/lang/Void;>;", $PUBLIC | $ABSTRACT},
	{"getRemoteAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"open", "(Ljava/nio/channels/AsynchronousChannelGroup;)Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AsynchronousSocketChannel*(*)($AsynchronousChannelGroup*)>(&AsynchronousSocketChannel::open)), "java.io.IOException"},
	{"open", "()Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AsynchronousSocketChannel*(*)()>(&AsynchronousSocketChannel::open)), "java.io.IOException"},
	{"provider", "()Ljava/nio/channels/spi/AsynchronousChannelProvider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$AsynchronousChannelProvider*(AsynchronousSocketChannel::*)()>(&AsynchronousSocketChannel::provider))},
	{"read", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "(Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;TA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{"read", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;TA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;-TA;>;)V", $PUBLIC | $FINAL},
	{"read", "([Ljava/nio/ByteBuffer;IIJLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>([Ljava/nio/ByteBuffer;IIJLjava/util/concurrent/TimeUnit;TA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Long;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/NetworkChannel;", nullptr, $PUBLIC | $ABSTRACT},
	{"shutdownInput", "()Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"shutdownOutput", "()Ljava/nio/channels/AsynchronousSocketChannel;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(Ljava/nio/ByteBuffer;)Ljava/util/concurrent/Future;", nullptr, $PUBLIC | $ABSTRACT},
	{"write", "(Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;JLjava/util/concurrent/TimeUnit;TA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{"write", "(Ljava/nio/ByteBuffer;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(Ljava/nio/ByteBuffer;TA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Integer;-TA;>;)V", $PUBLIC | $FINAL},
	{"write", "([Ljava/nio/ByteBuffer;IIJLjava/util/concurrent/TimeUnit;Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>([Ljava/nio/ByteBuffer;IIJLjava/util/concurrent/TimeUnit;TA;Ljava/nio/channels/CompletionHandler<Ljava/lang/Long;-TA;>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AsynchronousSocketChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.channels.AsynchronousSocketChannel",
	"java.lang.Object",
	"java.nio.channels.AsynchronousByteChannel,java.nio.channels.NetworkChannel",
	_AsynchronousSocketChannel_FieldInfo_,
	_AsynchronousSocketChannel_MethodInfo_
};

$Object* allocate$AsynchronousSocketChannel($Class* clazz) {
	return $of($alloc(AsynchronousSocketChannel));
}

int32_t AsynchronousSocketChannel::hashCode() {
	 return this->$AsynchronousByteChannel::hashCode();
}

bool AsynchronousSocketChannel::equals(Object$* obj) {
	 return this->$AsynchronousByteChannel::equals(obj);
}

$Object* AsynchronousSocketChannel::clone() {
	 return this->$AsynchronousByteChannel::clone();
}

$String* AsynchronousSocketChannel::toString() {
	 return this->$AsynchronousByteChannel::toString();
}

void AsynchronousSocketChannel::finalize() {
	this->$AsynchronousByteChannel::finalize();
}

void AsynchronousSocketChannel::init$($AsynchronousChannelProvider* provider) {
	$set(this, provider$, provider);
}

$AsynchronousChannelProvider* AsynchronousSocketChannel::provider() {
	return this->provider$;
}

AsynchronousSocketChannel* AsynchronousSocketChannel::open($AsynchronousChannelGroup* group) {
	$init(AsynchronousSocketChannel);
	$var($AsynchronousChannelProvider, provider, (group == nullptr) ? $AsynchronousChannelProvider::provider() : $nc(group)->provider());
	return $nc(provider)->openAsynchronousSocketChannel(group);
}

AsynchronousSocketChannel* AsynchronousSocketChannel::open() {
	$init(AsynchronousSocketChannel);
	return open(nullptr);
}

void AsynchronousSocketChannel::read($ByteBuffer* dst, Object$* attachment, $CompletionHandler* handler) {
	$init($TimeUnit);
	read(dst, 0, $TimeUnit::MILLISECONDS, attachment, handler);
}

void AsynchronousSocketChannel::write($ByteBuffer* src, Object$* attachment, $CompletionHandler* handler) {
	$init($TimeUnit);
	write(src, 0, $TimeUnit::MILLISECONDS, attachment, handler);
}

AsynchronousSocketChannel::AsynchronousSocketChannel() {
}

$Class* AsynchronousSocketChannel::load$($String* name, bool initialize) {
	$loadClass(AsynchronousSocketChannel, name, initialize, &_AsynchronousSocketChannel_ClassInfo_, allocate$AsynchronousSocketChannel);
	return class$;
}

$Class* AsynchronousSocketChannel::class$ = nullptr;

		} // channels
	} // nio
} // java