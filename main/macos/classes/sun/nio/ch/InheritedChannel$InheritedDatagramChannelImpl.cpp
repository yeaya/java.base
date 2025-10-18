#include <sun/nio/ch/InheritedChannel$InheritedDatagramChannelImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/DatagramSocket.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/MembershipKey.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <sun/nio/ch/DatagramChannelImpl.h>
#include <sun/nio/ch/InheritedChannel.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocket = ::java::net::DatagramSocket;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $MembershipKey = ::java::nio::channels::MembershipKey;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $DatagramChannelImpl = ::sun::nio::ch::DatagramChannelImpl;
using $InheritedChannel = ::sun::nio::ch::InheritedChannel;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _InheritedChannel$InheritedDatagramChannelImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;Ljava/io/FileDescriptor;)V", nullptr, 0, $method(static_cast<void(InheritedChannel$InheritedDatagramChannelImpl::*)($SelectorProvider*,$FileDescriptor*)>(&InheritedChannel$InheritedDatagramChannelImpl::init$)), "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"disconnect", "()Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFDVal", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"getRemoteAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"implCloseSelectableChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"isConnected", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"join", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"join", "(Ljava/net/InetAddress;Ljava/net/NetworkInterface;)Ljava/nio/channels/MembershipKey;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"kill", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"read", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"receive", "(Ljava/nio/ByteBuffer;)Ljava/net/SocketAddress;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"send", "(Ljava/nio/ByteBuffer;Ljava/net/SocketAddress;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"socket", "()Ljava/net/DatagramSocket;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateAndSetReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateAndUpdateReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateInterestOps", "(I)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"translateReadyOps", "(IILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"write", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _InheritedChannel$InheritedDatagramChannelImpl_InnerClassesInfo_[] = {
	{"sun.nio.ch.InheritedChannel$InheritedDatagramChannelImpl", "sun.nio.ch.InheritedChannel", "InheritedDatagramChannelImpl", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _InheritedChannel$InheritedDatagramChannelImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.ch.InheritedChannel$InheritedDatagramChannelImpl",
	"sun.nio.ch.DatagramChannelImpl",
	nullptr,
	nullptr,
	_InheritedChannel$InheritedDatagramChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_InheritedChannel$InheritedDatagramChannelImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.InheritedChannel"
};

$Object* allocate$InheritedChannel$InheritedDatagramChannelImpl($Class* clazz) {
	return $of($alloc(InheritedChannel$InheritedDatagramChannelImpl));
}

void InheritedChannel$InheritedDatagramChannelImpl::init$($SelectorProvider* sp, $FileDescriptor* fd) {
	$DatagramChannelImpl::init$(sp, fd);
}

void InheritedChannel$InheritedDatagramChannelImpl::implCloseSelectableChannel() {
	$DatagramChannelImpl::implCloseSelectableChannel();
	$InheritedChannel::detachIOStreams();
}

int32_t InheritedChannel$InheritedDatagramChannelImpl::getFDVal() {
	return $DatagramChannelImpl::getFDVal();
}

$FileDescriptor* InheritedChannel$InheritedDatagramChannelImpl::getFD() {
	return $DatagramChannelImpl::getFD();
}

int32_t InheritedChannel$InheritedDatagramChannelImpl::translateInterestOps(int32_t ops) {
	return $DatagramChannelImpl::translateInterestOps(ops);
}

bool InheritedChannel$InheritedDatagramChannelImpl::translateAndSetReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return $DatagramChannelImpl::translateAndSetReadyOps(ops, ski);
}

bool InheritedChannel$InheritedDatagramChannelImpl::translateAndUpdateReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return $DatagramChannelImpl::translateAndUpdateReadyOps(ops, ski);
}

bool InheritedChannel$InheritedDatagramChannelImpl::translateReadyOps(int32_t ops, int32_t initialOps, $SelectionKeyImpl* ski) {
	return $DatagramChannelImpl::translateReadyOps(ops, initialOps, ski);
}

void InheritedChannel$InheritedDatagramChannelImpl::kill() {
	$DatagramChannelImpl::kill();
}

$MembershipKey* InheritedChannel$InheritedDatagramChannelImpl::join($InetAddress* group, $NetworkInterface* interf, $InetAddress* source) {
	return $DatagramChannelImpl::join(group, interf, source);
}

$MembershipKey* InheritedChannel$InheritedDatagramChannelImpl::join($InetAddress* group, $NetworkInterface* interf) {
	return $DatagramChannelImpl::join(group, interf);
}

$DatagramChannel* InheritedChannel$InheritedDatagramChannelImpl::disconnect() {
	return $DatagramChannelImpl::disconnect();
}

$DatagramChannel* InheritedChannel$InheritedDatagramChannelImpl::connect($SocketAddress* sa) {
	return $DatagramChannelImpl::connect(sa);
}

bool InheritedChannel$InheritedDatagramChannelImpl::isConnected() {
	return $DatagramChannelImpl::isConnected();
}

$NetworkChannel* InheritedChannel$InheritedDatagramChannelImpl::bind($SocketAddress* local) {
	return $DatagramChannelImpl::bind(local);
}

int64_t InheritedChannel$InheritedDatagramChannelImpl::write($ByteBufferArray* srcs, int32_t offset, int32_t length) {
	return $DatagramChannelImpl::write(srcs, offset, length);
}

int32_t InheritedChannel$InheritedDatagramChannelImpl::write($ByteBuffer* buf) {
	return $DatagramChannelImpl::write(buf);
}

int64_t InheritedChannel$InheritedDatagramChannelImpl::read($ByteBufferArray* dsts, int32_t offset, int32_t length) {
	return $DatagramChannelImpl::read(dsts, offset, length);
}

int32_t InheritedChannel$InheritedDatagramChannelImpl::read($ByteBuffer* buf) {
	return $DatagramChannelImpl::read(buf);
}

int32_t InheritedChannel$InheritedDatagramChannelImpl::send($ByteBuffer* src, $SocketAddress* target) {
	return $DatagramChannelImpl::send(src, target);
}

$SocketAddress* InheritedChannel$InheritedDatagramChannelImpl::receive($ByteBuffer* dst) {
	return $DatagramChannelImpl::receive(dst);
}

$Object* InheritedChannel$InheritedDatagramChannelImpl::getOption($SocketOption* name) {
	return $of($DatagramChannelImpl::getOption(name));
}

$NetworkChannel* InheritedChannel$InheritedDatagramChannelImpl::setOption($SocketOption* name, Object$* value) {
	return $DatagramChannelImpl::setOption(name, value);
}

$SocketAddress* InheritedChannel$InheritedDatagramChannelImpl::getRemoteAddress() {
	return $DatagramChannelImpl::getRemoteAddress();
}

$SocketAddress* InheritedChannel$InheritedDatagramChannelImpl::getLocalAddress() {
	return $DatagramChannelImpl::getLocalAddress();
}

$DatagramSocket* InheritedChannel$InheritedDatagramChannelImpl::socket() {
	return $DatagramChannelImpl::socket();
}

InheritedChannel$InheritedDatagramChannelImpl::InheritedChannel$InheritedDatagramChannelImpl() {
}

$Class* InheritedChannel$InheritedDatagramChannelImpl::load$($String* name, bool initialize) {
	$loadClass(InheritedChannel$InheritedDatagramChannelImpl, name, initialize, &_InheritedChannel$InheritedDatagramChannelImpl_ClassInfo_, allocate$InheritedChannel$InheritedDatagramChannelImpl);
	return class$;
}

$Class* InheritedChannel$InheritedDatagramChannelImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun