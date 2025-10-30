#include <sun/nio/ch/InheritedChannel$InheritedServerSocketChannelImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <sun/nio/ch/InheritedChannel.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/ServerSocketChannelImpl.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $InheritedChannel = ::sun::nio::ch::InheritedChannel;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $ServerSocketChannelImpl = ::sun::nio::ch::ServerSocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _InheritedChannel$InheritedServerSocketChannelImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;Ljava/net/ProtocolFamily;Ljava/io/FileDescriptor;)V", nullptr, 0, $method(static_cast<void(InheritedChannel$InheritedServerSocketChannelImpl::*)($SelectorProvider*,$ProtocolFamily*,$FileDescriptor*)>(&InheritedChannel$InheritedServerSocketChannelImpl::init$)), "java.io.IOException"},
	{"accept", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;I)Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFDVal", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"implCloseSelectableChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"kill", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"socket", "()Ljava/net/ServerSocket;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateAndSetReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateAndUpdateReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateInterestOps", "(I)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateReadyOps", "(IILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _InheritedChannel$InheritedServerSocketChannelImpl_InnerClassesInfo_[] = {
	{"sun.nio.ch.InheritedChannel$InheritedServerSocketChannelImpl", "sun.nio.ch.InheritedChannel", "InheritedServerSocketChannelImpl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _InheritedChannel$InheritedServerSocketChannelImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.ch.InheritedChannel$InheritedServerSocketChannelImpl",
	"sun.nio.ch.ServerSocketChannelImpl",
	nullptr,
	nullptr,
	_InheritedChannel$InheritedServerSocketChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_InheritedChannel$InheritedServerSocketChannelImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.InheritedChannel"
};

$Object* allocate$InheritedChannel$InheritedServerSocketChannelImpl($Class* clazz) {
	return $of($alloc(InheritedChannel$InheritedServerSocketChannelImpl));
}

void InheritedChannel$InheritedServerSocketChannelImpl::init$($SelectorProvider* sp, $ProtocolFamily* family, $FileDescriptor* fd) {
	$ServerSocketChannelImpl::init$(sp, family, fd, true);
}

void InheritedChannel$InheritedServerSocketChannelImpl::implCloseSelectableChannel() {
	$ServerSocketChannelImpl::implCloseSelectableChannel();
	$InheritedChannel::detachIOStreams();
}

$String* InheritedChannel$InheritedServerSocketChannelImpl::toString() {
	return $ServerSocketChannelImpl::toString();
}

int32_t InheritedChannel$InheritedServerSocketChannelImpl::getFDVal() {
	return $ServerSocketChannelImpl::getFDVal();
}

$FileDescriptor* InheritedChannel$InheritedServerSocketChannelImpl::getFD() {
	return $ServerSocketChannelImpl::getFD();
}

int32_t InheritedChannel$InheritedServerSocketChannelImpl::translateInterestOps(int32_t ops) {
	return $ServerSocketChannelImpl::translateInterestOps(ops);
}

bool InheritedChannel$InheritedServerSocketChannelImpl::translateAndSetReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return $ServerSocketChannelImpl::translateAndSetReadyOps(ops, ski);
}

bool InheritedChannel$InheritedServerSocketChannelImpl::translateAndUpdateReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return $ServerSocketChannelImpl::translateAndUpdateReadyOps(ops, ski);
}

bool InheritedChannel$InheritedServerSocketChannelImpl::translateReadyOps(int32_t ops, int32_t initialOps, $SelectionKeyImpl* ski) {
	return $ServerSocketChannelImpl::translateReadyOps(ops, initialOps, ski);
}

void InheritedChannel$InheritedServerSocketChannelImpl::kill() {
	$ServerSocketChannelImpl::kill();
}

$SocketChannel* InheritedChannel$InheritedServerSocketChannelImpl::accept() {
	return $ServerSocketChannelImpl::accept();
}

$ServerSocketChannel* InheritedChannel$InheritedServerSocketChannelImpl::bind($SocketAddress* local, int32_t backlog) {
	return $ServerSocketChannelImpl::bind(local, backlog);
}

$Object* InheritedChannel$InheritedServerSocketChannelImpl::getOption($SocketOption* name) {
	return $of($ServerSocketChannelImpl::getOption(name));
}

$NetworkChannel* InheritedChannel$InheritedServerSocketChannelImpl::setOption($SocketOption* name, Object$* value) {
	return $ServerSocketChannelImpl::setOption(name, value);
}

$SocketAddress* InheritedChannel$InheritedServerSocketChannelImpl::getLocalAddress() {
	return $ServerSocketChannelImpl::getLocalAddress();
}

$ServerSocket* InheritedChannel$InheritedServerSocketChannelImpl::socket() {
	return $ServerSocketChannelImpl::socket();
}

InheritedChannel$InheritedServerSocketChannelImpl::InheritedChannel$InheritedServerSocketChannelImpl() {
}

$Class* InheritedChannel$InheritedServerSocketChannelImpl::load$($String* name, bool initialize) {
	$loadClass(InheritedChannel$InheritedServerSocketChannelImpl, name, initialize, &_InheritedChannel$InheritedServerSocketChannelImpl_ClassInfo_, allocate$InheritedChannel$InheritedServerSocketChannelImpl);
	return class$;
}

$Class* InheritedChannel$InheritedServerSocketChannelImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun