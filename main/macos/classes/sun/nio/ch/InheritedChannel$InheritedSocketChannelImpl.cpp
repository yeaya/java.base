#include <sun/nio/ch/InheritedChannel$InheritedSocketChannelImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <sun/nio/ch/InheritedChannel.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/SocketChannelImpl.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $InheritedChannel = ::sun::nio::ch::InheritedChannel;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $SocketChannelImpl = ::sun::nio::ch::SocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _InheritedChannel$InheritedSocketChannelImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;Ljava/io/FileDescriptor;Ljava/net/SocketAddress;)V", nullptr, 0, $method(static_cast<void(InheritedChannel$InheritedSocketChannelImpl::*)($SelectorProvider*,$FileDescriptor*,$SocketAddress*)>(&InheritedChannel$InheritedSocketChannelImpl::init$)), "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"finishConnect", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFDVal", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"getRemoteAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"implCloseSelectableChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"isConnected", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isConnectionPending", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"kill", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"read", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"shutdownInput", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"shutdownOutput", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"socket", "()Ljava/net/Socket;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateAndSetReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateAndUpdateReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateInterestOps", "(I)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateReadyOps", "(IILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"write", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _InheritedChannel$InheritedSocketChannelImpl_InnerClassesInfo_[] = {
	{"sun.nio.ch.InheritedChannel$InheritedSocketChannelImpl", "sun.nio.ch.InheritedChannel", "InheritedSocketChannelImpl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _InheritedChannel$InheritedSocketChannelImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.ch.InheritedChannel$InheritedSocketChannelImpl",
	"sun.nio.ch.SocketChannelImpl",
	nullptr,
	nullptr,
	_InheritedChannel$InheritedSocketChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_InheritedChannel$InheritedSocketChannelImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.InheritedChannel"
};

$Object* allocate$InheritedChannel$InheritedSocketChannelImpl($Class* clazz) {
	return $of($alloc(InheritedChannel$InheritedSocketChannelImpl));
}

void InheritedChannel$InheritedSocketChannelImpl::init$($SelectorProvider* sp, $FileDescriptor* fd, $SocketAddress* remote) {
	$SocketChannelImpl::init$(sp, $($InheritedChannel::protocolFamily(remote)), fd, remote);
}

void InheritedChannel$InheritedSocketChannelImpl::implCloseSelectableChannel() {
	$SocketChannelImpl::implCloseSelectableChannel();
	$InheritedChannel::detachIOStreams();
}

$String* InheritedChannel$InheritedSocketChannelImpl::toString() {
	return $SocketChannelImpl::toString();
}

int32_t InheritedChannel$InheritedSocketChannelImpl::getFDVal() {
	return $SocketChannelImpl::getFDVal();
}

$FileDescriptor* InheritedChannel$InheritedSocketChannelImpl::getFD() {
	return $SocketChannelImpl::getFD();
}

int32_t InheritedChannel$InheritedSocketChannelImpl::translateInterestOps(int32_t ops) {
	return $SocketChannelImpl::translateInterestOps(ops);
}

bool InheritedChannel$InheritedSocketChannelImpl::translateAndSetReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return $SocketChannelImpl::translateAndSetReadyOps(ops, ski);
}

bool InheritedChannel$InheritedSocketChannelImpl::translateAndUpdateReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return $SocketChannelImpl::translateAndUpdateReadyOps(ops, ski);
}

bool InheritedChannel$InheritedSocketChannelImpl::translateReadyOps(int32_t ops, int32_t initialOps, $SelectionKeyImpl* ski) {
	return $SocketChannelImpl::translateReadyOps(ops, initialOps, ski);
}

$SocketChannel* InheritedChannel$InheritedSocketChannelImpl::shutdownOutput() {
	return $SocketChannelImpl::shutdownOutput();
}

$SocketChannel* InheritedChannel$InheritedSocketChannelImpl::shutdownInput() {
	return $SocketChannelImpl::shutdownInput();
}

void InheritedChannel$InheritedSocketChannelImpl::kill() {
	$SocketChannelImpl::kill();
}

bool InheritedChannel$InheritedSocketChannelImpl::finishConnect() {
	return $SocketChannelImpl::finishConnect();
}

bool InheritedChannel$InheritedSocketChannelImpl::connect($SocketAddress* remote) {
	return $SocketChannelImpl::connect(remote);
}

bool InheritedChannel$InheritedSocketChannelImpl::isConnectionPending() {
	return $SocketChannelImpl::isConnectionPending();
}

bool InheritedChannel$InheritedSocketChannelImpl::isConnected() {
	return $SocketChannelImpl::isConnected();
}

$NetworkChannel* InheritedChannel$InheritedSocketChannelImpl::bind($SocketAddress* local) {
	return $SocketChannelImpl::bind(local);
}

int64_t InheritedChannel$InheritedSocketChannelImpl::write($ByteBufferArray* srcs, int32_t offset, int32_t length) {
	return $SocketChannelImpl::write(srcs, offset, length);
}

int32_t InheritedChannel$InheritedSocketChannelImpl::write($ByteBuffer* buf) {
	return $SocketChannelImpl::write(buf);
}

int64_t InheritedChannel$InheritedSocketChannelImpl::read($ByteBufferArray* dsts, int32_t offset, int32_t length) {
	return $SocketChannelImpl::read(dsts, offset, length);
}

int32_t InheritedChannel$InheritedSocketChannelImpl::read($ByteBuffer* buf) {
	return $SocketChannelImpl::read(buf);
}

$Object* InheritedChannel$InheritedSocketChannelImpl::getOption($SocketOption* name) {
	return $of($SocketChannelImpl::getOption(name));
}

$NetworkChannel* InheritedChannel$InheritedSocketChannelImpl::setOption($SocketOption* name, Object$* value) {
	return $SocketChannelImpl::setOption(name, value);
}

$SocketAddress* InheritedChannel$InheritedSocketChannelImpl::getRemoteAddress() {
	return $SocketChannelImpl::getRemoteAddress();
}

$SocketAddress* InheritedChannel$InheritedSocketChannelImpl::getLocalAddress() {
	return $SocketChannelImpl::getLocalAddress();
}

$Socket* InheritedChannel$InheritedSocketChannelImpl::socket() {
	return $SocketChannelImpl::socket();
}

InheritedChannel$InheritedSocketChannelImpl::InheritedChannel$InheritedSocketChannelImpl() {
}

$Class* InheritedChannel$InheritedSocketChannelImpl::load$($String* name, bool initialize) {
	$loadClass(InheritedChannel$InheritedSocketChannelImpl, name, initialize, &_InheritedChannel$InheritedSocketChannelImpl_ClassInfo_, allocate$InheritedChannel$InheritedSocketChannelImpl);
	return class$;
}

$Class* InheritedChannel$InheritedSocketChannelImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun