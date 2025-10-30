#include <sun/nio/ch/SelectorProviderImpl.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/StandardProtocolFamily.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/Pipe.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/util/Objects.h>
#include <sun/nio/ch/DatagramChannelImpl.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/PipeImpl.h>
#include <sun/nio/ch/ServerSocketChannelImpl.h>
#include <sun/nio/ch/SocketChannelImpl.h>
#include <sun/nio/ch/UnixDomainSockets.h>
#include <jcpp.h>

#undef INET
#undef INET6
#undef UNIX

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $StandardProtocolFamily = ::java::net::StandardProtocolFamily;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $Pipe = ::java::nio::channels::Pipe;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Objects = ::java::util::Objects;
using $DatagramChannelImpl = ::sun::nio::ch::DatagramChannelImpl;
using $Net = ::sun::nio::ch::Net;
using $PipeImpl = ::sun::nio::ch::PipeImpl;
using $ServerSocketChannelImpl = ::sun::nio::ch::ServerSocketChannelImpl;
using $SocketChannelImpl = ::sun::nio::ch::SocketChannelImpl;
using $UnixDomainSockets = ::sun::nio::ch::UnixDomainSockets;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _SelectorProviderImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SelectorProviderImpl::*)()>(&SelectorProviderImpl::init$))},
	{"openDatagramChannel", "()Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openDatagramChannel", "(Ljava/net/ProtocolFamily;)Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openPipe", "()Ljava/nio/channels/Pipe;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openSelector", "()Ljava/nio/channels/spi/AbstractSelector;", nullptr, $PUBLIC | $ABSTRACT},
	{"openServerSocketChannel", "()Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openServerSocketChannel", "(Ljava/net/ProtocolFamily;)Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openSocketChannel", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openSocketChannel", "(Ljava/net/ProtocolFamily;)Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"openUninterruptibleDatagramChannel", "()Ljava/nio/channels/DatagramChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SelectorProviderImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.nio.ch.SelectorProviderImpl",
	"java.nio.channels.spi.SelectorProvider",
	nullptr,
	nullptr,
	_SelectorProviderImpl_MethodInfo_
};

$Object* allocate$SelectorProviderImpl($Class* clazz) {
	return $of($alloc(SelectorProviderImpl));
}

void SelectorProviderImpl::init$() {
	$SelectorProvider::init$();
}

$DatagramChannel* SelectorProviderImpl::openDatagramChannel() {
	return $new($DatagramChannelImpl, static_cast<$SelectorProvider*>(this), true);
}

$DatagramChannel* SelectorProviderImpl::openUninterruptibleDatagramChannel() {
	return $new($DatagramChannelImpl, static_cast<$SelectorProvider*>(this), false);
}

$DatagramChannel* SelectorProviderImpl::openDatagramChannel($ProtocolFamily* family) {
	return $new($DatagramChannelImpl, this, family, true);
}

$Pipe* SelectorProviderImpl::openPipe() {
	return $new($PipeImpl, this);
}

$ServerSocketChannel* SelectorProviderImpl::openServerSocketChannel() {
	return $new($ServerSocketChannelImpl, this);
}

$SocketChannel* SelectorProviderImpl::openSocketChannel() {
	return $new($SocketChannelImpl, this);
}

$SocketChannel* SelectorProviderImpl::openSocketChannel($ProtocolFamily* family) {
	$Objects::requireNonNull($of(family), "\'family\' is null"_s);
	$init($StandardProtocolFamily);
	if ($equals(family, $StandardProtocolFamily::INET6) && !$Net::isIPv6Available()) {
		$throwNew($UnsupportedOperationException, "IPv6 not available"_s);
	} else {
		if ($equals(family, $StandardProtocolFamily::INET) || $equals(family, $StandardProtocolFamily::INET6)) {
			return $new($SocketChannelImpl, this, family);
		} else {
			if ($equals(family, $StandardProtocolFamily::UNIX) && $UnixDomainSockets::isSupported()) {
				return $new($SocketChannelImpl, this, family);
			} else {
				$throwNew($UnsupportedOperationException, "Protocol family not supported"_s);
			}
		}
	}
}

$ServerSocketChannel* SelectorProviderImpl::openServerSocketChannel($ProtocolFamily* family) {
	$Objects::requireNonNull($of(family), "\'family\' is null"_s);
	$init($StandardProtocolFamily);
	if ($equals(family, $StandardProtocolFamily::INET6) && !$Net::isIPv6Available()) {
		$throwNew($UnsupportedOperationException, "IPv6 not available"_s);
	} else {
		if ($equals(family, $StandardProtocolFamily::INET) || $equals(family, $StandardProtocolFamily::INET6)) {
			return $new($ServerSocketChannelImpl, this, family);
		} else {
			if ($equals(family, $StandardProtocolFamily::UNIX) && $UnixDomainSockets::isSupported()) {
				return $new($ServerSocketChannelImpl, this, family);
			} else {
				$throwNew($UnsupportedOperationException, "Protocol family not supported"_s);
			}
		}
	}
}

SelectorProviderImpl::SelectorProviderImpl() {
}

$Class* SelectorProviderImpl::load$($String* name, bool initialize) {
	$loadClass(SelectorProviderImpl, name, initialize, &_SelectorProviderImpl_ClassInfo_, allocate$SelectorProviderImpl);
	return class$;
}

$Class* SelectorProviderImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun