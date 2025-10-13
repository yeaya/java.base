#include <sun/nio/ch/SocketChannelImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Inet4Address.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketOption.h>
#include <java/net/SocketTimeoutException.h>
#include <java/net/StandardProtocolFamily.h>
#include <java/net/StandardSocketOptions.h>
#include <java/net/UnixDomainSocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/AlreadyBoundException.h>
#include <java/nio/channels/AlreadyConnectedException.h>
#include <java/nio/channels/AsynchronousCloseException.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/ConnectionPendingException.h>
#include <java/nio/channels/IllegalBlockingModeException.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/NoConnectionPendingException.h>
#include <java/nio/channels/NotYetConnectedException.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/nio/file/Path.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/net/ConnectionResetException.h>
#include <sun/net/NetHooks.h>
#include <sun/net/util/SocketExceptions.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <sun/nio/ch/IOStatus.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/NativeDispatcher.h>
#include <sun/nio/ch/NativeThread.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/SocketAdaptor.h>
#include <sun/nio/ch/SocketChannelImpl$DefaultOptionsHolder.h>
#include <sun/nio/ch/SocketDispatcher.h>
#include <sun/nio/ch/UnixDomainSockets.h>
#include <sun/nio/ch/Util.h>
#include <jcpp.h>

#undef EOF
#undef INET
#undef INET6
#undef INTERRUPTED
#undef IP_TOS
#undef OP_CONNECT
#undef OP_READ
#undef OP_WRITE
#undef POLLCONN
#undef POLLERR
#undef POLLHUP
#undef POLLIN
#undef POLLNVAL
#undef POLLOUT
#undef SHUT_RD
#undef SHUT_WR
#undef SO_LINGER
#undef SO_REUSEADDR
#undef ST_CLOSED
#undef ST_CLOSING
#undef ST_CONNECTED
#undef ST_CONNECTIONPENDING
#undef ST_UNCONNECTED
#undef UNAVAILABLE
#undef UNIX
#undef UNNAMED
#undef UNSPEC

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Inet4Address = ::java::net::Inet4Address;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $SocketOption = ::java::net::SocketOption;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $StandardProtocolFamily = ::java::net::StandardProtocolFamily;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $UnixDomainSocketAddress = ::java::net::UnixDomainSocketAddress;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AlreadyBoundException = ::java::nio::channels::AlreadyBoundException;
using $AlreadyConnectedException = ::java::nio::channels::AlreadyConnectedException;
using $AsynchronousCloseException = ::java::nio::channels::AsynchronousCloseException;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $ConnectionPendingException = ::java::nio::channels::ConnectionPendingException;
using $IllegalBlockingModeException = ::java::nio::channels::IllegalBlockingModeException;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $NoConnectionPendingException = ::java::nio::channels::NoConnectionPendingException;
using $NotYetConnectedException = ::java::nio::channels::NotYetConnectedException;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Path = ::java::nio::file::Path;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $ConnectionResetException = ::sun::net::ConnectionResetException;
using $NetHooks = ::sun::net::NetHooks;
using $SocketExceptions = ::sun::net::util::SocketExceptions;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;
using $IOStatus = ::sun::nio::ch::IOStatus;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $NativeDispatcher = ::sun::nio::ch::NativeDispatcher;
using $NativeThread = ::sun::nio::ch::NativeThread;
using $Net = ::sun::nio::ch::Net;
using $SelChImpl = ::sun::nio::ch::SelChImpl;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $SocketAdaptor = ::sun::nio::ch::SocketAdaptor;
using $SocketChannelImpl$DefaultOptionsHolder = ::sun::nio::ch::SocketChannelImpl$DefaultOptionsHolder;
using $SocketDispatcher = ::sun::nio::ch::SocketDispatcher;
using $UnixDomainSockets = ::sun::nio::ch::UnixDomainSockets;
using $Util = ::sun::nio::ch::Util;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _SocketChannelImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SocketChannelImpl, $assertionsDisabled)},
	{"nd", "Lsun/nio/ch/NativeDispatcher;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SocketChannelImpl, nd)},
	{"family", "Ljava/net/ProtocolFamily;", nullptr, $PRIVATE | $FINAL, $field(SocketChannelImpl, family)},
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE | $FINAL, $field(SocketChannelImpl, fd)},
	{"fdVal", "I", nullptr, $PRIVATE | $FINAL, $field(SocketChannelImpl, fdVal)},
	{"readLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(SocketChannelImpl, readLock)},
	{"writeLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(SocketChannelImpl, writeLock)},
	{"stateLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SocketChannelImpl, stateLock)},
	{"isInputClosed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SocketChannelImpl, isInputClosed)},
	{"isOutputClosed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(SocketChannelImpl, isOutputClosed)},
	{"connectionReset", "Z", nullptr, $PRIVATE, $field(SocketChannelImpl, connectionReset)},
	{"isReuseAddress", "Z", nullptr, $PRIVATE, $field(SocketChannelImpl, isReuseAddress)},
	{"ST_UNCONNECTED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketChannelImpl, ST_UNCONNECTED)},
	{"ST_CONNECTIONPENDING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketChannelImpl, ST_CONNECTIONPENDING)},
	{"ST_CONNECTED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketChannelImpl, ST_CONNECTED)},
	{"ST_CLOSING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketChannelImpl, ST_CLOSING)},
	{"ST_CLOSED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SocketChannelImpl, ST_CLOSED)},
	{"state", "I", nullptr, $PRIVATE | $VOLATILE, $field(SocketChannelImpl, state)},
	{"readerThread", "J", nullptr, $PRIVATE, $field(SocketChannelImpl, readerThread)},
	{"writerThread", "J", nullptr, $PRIVATE, $field(SocketChannelImpl, writerThread)},
	{"localAddress", "Ljava/net/SocketAddress;", nullptr, $PRIVATE, $field(SocketChannelImpl, localAddress$)},
	{"remoteAddress", "Ljava/net/SocketAddress;", nullptr, $PRIVATE, $field(SocketChannelImpl, remoteAddress$)},
	{"socket", "Ljava/net/Socket;", nullptr, $PRIVATE, $field(SocketChannelImpl, socket$)},
	{}
};

$MethodInfo _SocketChannelImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, 0, $method(static_cast<void(SocketChannelImpl::*)($SelectorProvider*)>(&SocketChannelImpl::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;Ljava/net/ProtocolFamily;)V", nullptr, 0, $method(static_cast<void(SocketChannelImpl::*)($SelectorProvider*,$ProtocolFamily*)>(&SocketChannelImpl::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;Ljava/net/ProtocolFamily;Ljava/io/FileDescriptor;Ljava/net/SocketAddress;)V", nullptr, 0, $method(static_cast<void(SocketChannelImpl::*)($SelectorProvider*,$ProtocolFamily*,$FileDescriptor*,$SocketAddress*)>(&SocketChannelImpl::init$)), "java.io.IOException"},
	{"available", "()I", nullptr, 0, nullptr, "java.io.IOException"},
	{"beginConnect", "(ZLjava/net/SocketAddress;)V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)(bool,$SocketAddress*)>(&SocketChannelImpl::beginConnect)), "java.io.IOException"},
	{"beginFinishConnect", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)(bool)>(&SocketChannelImpl::beginFinishConnect)), "java.nio.channels.ClosedChannelException"},
	{"beginRead", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)(bool)>(&SocketChannelImpl::beginRead)), "java.nio.channels.ClosedChannelException"},
	{"beginWrite", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)(bool)>(&SocketChannelImpl::beginWrite)), "java.nio.channels.ClosedChannelException"},
	{"bind", "(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"blockingConnect", "(Ljava/net/SocketAddress;J)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"blockingRead", "([BIIJ)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"blockingWriteFully", "([BII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"checkRemote", "(Ljava/net/SocketAddress;)Ljava/net/SocketAddress;", nullptr, $PRIVATE, $method(static_cast<$SocketAddress*(SocketChannelImpl::*)($SocketAddress*)>(&SocketChannelImpl::checkRemote))},
	{"connect", "(Ljava/net/SocketAddress;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"endConnect", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)(bool,bool)>(&SocketChannelImpl::endConnect)), "java.io.IOException"},
	{"endFinishConnect", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)(bool,bool)>(&SocketChannelImpl::endFinishConnect)), "java.io.IOException"},
	{"endRead", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)(bool,bool)>(&SocketChannelImpl::endRead)), "java.nio.channels.AsynchronousCloseException"},
	{"endWrite", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)(bool,bool)>(&SocketChannelImpl::endWrite)), "java.nio.channels.AsynchronousCloseException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)()>(&SocketChannelImpl::ensureOpen)), "java.nio.channels.ClosedChannelException"},
	{"ensureOpenAndConnected", "()V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)()>(&SocketChannelImpl::ensureOpenAndConnected)), "java.nio.channels.ClosedChannelException"},
	{"finishConnect", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"finishTimedConnect", "(J)Z", nullptr, $PRIVATE, $method(static_cast<bool(SocketChannelImpl::*)(int64_t)>(&SocketChannelImpl::finishTimedConnect)), "java.io.IOException"},
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC},
	{"getFDVal", "()I", nullptr, $PUBLIC},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getRemoteAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"implCloseBlockingMode", "()V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)()>(&SocketChannelImpl::implCloseBlockingMode)), "java.io.IOException"},
	{"implCloseNonBlockingMode", "()V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)()>(&SocketChannelImpl::implCloseNonBlockingMode)), "java.io.IOException"},
	{"implCloseSelectableChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"implConfigureBlocking", "(Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"isConnected", "()Z", nullptr, $PUBLIC},
	{"isConnectionPending", "()Z", nullptr, $PUBLIC},
	{"isInputOpen", "()Z", nullptr, 0},
	{"isNetSocket", "()Z", nullptr, 0},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isOutputOpen", "()Z", nullptr, 0},
	{"isUnixSocket", "()Z", nullptr, 0},
	{"kill", "()V", nullptr, $PUBLIC},
	{"localAddress", "()Ljava/net/SocketAddress;", nullptr, 0},
	{"lockedConfigureBlocking", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)(bool)>(&SocketChannelImpl::lockedConfigureBlocking)), "java.io.IOException"},
	{"netBind", "(Ljava/net/SocketAddress;)Ljava/net/SocketAddress;", nullptr, $PRIVATE, $method(static_cast<$SocketAddress*(SocketChannelImpl::*)($SocketAddress*)>(&SocketChannelImpl::netBind)), "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"remoteAddress", "()Ljava/net/SocketAddress;", nullptr, 0},
	{"sendOutOfBandData", "(B)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/SocketChannel;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)Ljava/nio/channels/SocketChannel;", $PUBLIC, nullptr, "java.io.IOException"},
	{"shutdownInput", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"shutdownOutput", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"socket", "()Ljava/net/Socket;", nullptr, $PUBLIC},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $FINAL},
	{"throwConnectionReset", "()V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)()>(&SocketChannelImpl::throwConnectionReset)), "java.net.SocketException"},
	{"timedRead", "([BIIJ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SocketChannelImpl::*)($bytes*,int32_t,int32_t,int64_t)>(&SocketChannelImpl::timedRead)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateAndSetReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"translateAndUpdateReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"translateInterestOps", "(I)I", nullptr, $PUBLIC},
	{"translateReadyOps", "(IILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"tryClose", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SocketChannelImpl::*)()>(&SocketChannelImpl::tryClose)), "java.io.IOException"},
	{"tryFinishClose", "()V", nullptr, $PRIVATE, $method(static_cast<void(SocketChannelImpl::*)()>(&SocketChannelImpl::tryFinishClose))},
	{"tryLockedConfigureBlocking", "(Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(SocketChannelImpl::*)(bool)>(&SocketChannelImpl::tryLockedConfigureBlocking)), "java.io.IOException"},
	{"tryRead", "([BII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SocketChannelImpl::*)($bytes*,int32_t,int32_t)>(&SocketChannelImpl::tryRead)), "java.io.IOException"},
	{"tryWrite", "([BII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SocketChannelImpl::*)($bytes*,int32_t,int32_t)>(&SocketChannelImpl::tryWrite)), "java.io.IOException"},
	{"unixBind", "(Ljava/net/SocketAddress;)Ljava/net/SocketAddress;", nullptr, $PRIVATE, $method(static_cast<$SocketAddress*(SocketChannelImpl::*)($SocketAddress*)>(&SocketChannelImpl::unixBind)), "java.io.IOException"},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([Ljava/nio/ByteBuffer;II)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SocketChannelImpl_InnerClassesInfo_[] = {
	{"sun.nio.ch.SocketChannelImpl$DefaultOptionsHolder", "sun.nio.ch.SocketChannelImpl", "DefaultOptionsHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SocketChannelImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SocketChannelImpl",
	"java.nio.channels.SocketChannel",
	"sun.nio.ch.SelChImpl",
	_SocketChannelImpl_FieldInfo_,
	_SocketChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_SocketChannelImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.SocketChannelImpl$DefaultOptionsHolder"
};

$Object* allocate$SocketChannelImpl($Class* clazz) {
	return $of($alloc(SocketChannelImpl));
}

void SocketChannelImpl::close() {
	this->$SocketChannel::close();
}

bool SocketChannelImpl::isOpen() {
	 return this->$SocketChannel::isOpen();
}

int32_t SocketChannelImpl::hashCode() {
	 return this->$SocketChannel::hashCode();
}

bool SocketChannelImpl::equals(Object$* obj) {
	 return this->$SocketChannel::equals(obj);
}

$Object* SocketChannelImpl::clone() {
	 return this->$SocketChannel::clone();
}

void SocketChannelImpl::finalize() {
	this->$SocketChannel::finalize();
}

bool SocketChannelImpl::$assertionsDisabled = false;
$NativeDispatcher* SocketChannelImpl::nd = nullptr;

void SocketChannelImpl::init$($SelectorProvider* sp) {
	$init($StandardProtocolFamily);
	SocketChannelImpl::init$(sp, $Net::isIPv6Available() ? static_cast<$ProtocolFamily*>($StandardProtocolFamily::INET6) : static_cast<$ProtocolFamily*>($StandardProtocolFamily::INET));
}

void SocketChannelImpl::init$($SelectorProvider* sp, $ProtocolFamily* family) {
	$SocketChannel::init$(sp);
	$set(this, readLock, $new($ReentrantLock));
	$set(this, writeLock, $new($ReentrantLock));
	$set(this, stateLock, $new($Object));
	$Objects::requireNonNull($of(family), "\'family\' is null"_s);
	$init($StandardProtocolFamily);
	if ((!$equals(family, $StandardProtocolFamily::INET)) && (!$equals(family, $StandardProtocolFamily::INET6)) && (!$equals(family, $StandardProtocolFamily::UNIX))) {
		$throwNew($UnsupportedOperationException, "Protocol family not supported"_s);
	}
	if ($equals(family, $StandardProtocolFamily::INET6) && !$Net::isIPv6Available()) {
		$throwNew($UnsupportedOperationException, "IPv6 not available"_s);
	}
	$set(this, family, family);
	if ($equals(family, $StandardProtocolFamily::UNIX)) {
		$set(this, fd, $UnixDomainSockets::socket());
	} else {
		$set(this, fd, $Net::socket(family, true));
	}
	this->fdVal = $IOUtil::fdVal(this->fd);
}

void SocketChannelImpl::init$($SelectorProvider* sp, $ProtocolFamily* family, $FileDescriptor* fd, $SocketAddress* remoteAddress) {
	$SocketChannel::init$(sp);
	$set(this, readLock, $new($ReentrantLock));
	$set(this, writeLock, $new($ReentrantLock));
	$set(this, stateLock, $new($Object));
	$set(this, family, family);
	$set(this, fd, fd);
	this->fdVal = $IOUtil::fdVal(fd);
	$synchronized(this->stateLock) {
		$init($StandardProtocolFamily);
		if ($equals(family, $StandardProtocolFamily::UNIX)) {
			$set(this, localAddress$, $UnixDomainSockets::localAddress(fd));
		} else {
			$set(this, localAddress$, $Net::localAddress(fd));
		}
		$set(this, remoteAddress$, remoteAddress);
		this->state = SocketChannelImpl::ST_CONNECTED;
	}
}

bool SocketChannelImpl::isNetSocket() {
	$init($StandardProtocolFamily);
	return ($equals(this->family, $StandardProtocolFamily::INET)) || ($equals(this->family, $StandardProtocolFamily::INET6));
}

bool SocketChannelImpl::isUnixSocket() {
	$init($StandardProtocolFamily);
	return ($equals(this->family, $StandardProtocolFamily::UNIX));
}

void SocketChannelImpl::ensureOpen() {
	if (!isOpen()) {
		$throwNew($ClosedChannelException);
	}
}

void SocketChannelImpl::ensureOpenAndConnected() {
	int32_t state = this->state;
	if (state < SocketChannelImpl::ST_CONNECTED) {
		$throwNew($NotYetConnectedException);
	} else if (state > SocketChannelImpl::ST_CONNECTED) {
		$throwNew($ClosedChannelException);
	}
}

$Socket* SocketChannelImpl::socket() {
	$synchronized(this->stateLock) {
		if (this->socket$ == nullptr) {
			if (isNetSocket()) {
				$set(this, socket$, $SocketAdaptor::create(this));
			} else {
				$throwNew($UnsupportedOperationException, "Not supported"_s);
			}
		}
		return this->socket$;
	}
}

$SocketAddress* SocketChannelImpl::getLocalAddress() {
	$synchronized(this->stateLock) {
		ensureOpen();
		if (isUnixSocket()) {
			return $UnixDomainSockets::getRevealedLocalAddress(this->localAddress$);
		} else {
			return $Net::getRevealedLocalAddress(this->localAddress$);
		}
	}
}

$SocketAddress* SocketChannelImpl::getRemoteAddress() {
	$synchronized(this->stateLock) {
		ensureOpen();
		return this->remoteAddress$;
	}
}

$NetworkChannel* SocketChannelImpl::setOption($SocketOption* name, Object$* value) {
	$Objects::requireNonNull(name);
	if (!$nc($(supportedOptions()))->contains(name)) {
		$throwNew($UnsupportedOperationException, $$str({"\'"_s, name, "\' not supported"_s}));
	}
	if (!$nc(name->type())->isInstance(value)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid value \'"_s, value, "\'"_s}));
	}
	$synchronized(this->stateLock) {
		ensureOpen();
		if (isNetSocket()) {
			$init($StandardSocketOptions);
			if (name == $StandardSocketOptions::IP_TOS) {
				$Net::setSocketOption(this->fd, this->family, name, value);
				return this;
			}
			if (name == $StandardSocketOptions::SO_REUSEADDR && $Net::useExclusiveBind()) {
				this->isReuseAddress = $nc(($cast($Boolean, value)))->booleanValue();
				return this;
			}
		}
		$Net::setSocketOption(this->fd, name, value);
		return this;
	}
}

$Object* SocketChannelImpl::getOption($SocketOption* name) {
	$Objects::requireNonNull(name);
	if (!$nc($(supportedOptions()))->contains(name)) {
		$throwNew($UnsupportedOperationException, $$str({"\'"_s, name, "\' not supported"_s}));
	}
	$synchronized(this->stateLock) {
		ensureOpen();
		if (isNetSocket()) {
			$init($StandardSocketOptions);
			if (name == $StandardSocketOptions::IP_TOS) {
				return $of($Net::getSocketOption(this->fd, this->family, name));
			}
			if (name == $StandardSocketOptions::SO_REUSEADDR && $Net::useExclusiveBind()) {
				return $of($of($Boolean::valueOf(this->isReuseAddress)));
			}
		}
		return $of($Net::getSocketOption(this->fd, name));
	}
}

$Set* SocketChannelImpl::supportedOptions() {
	if (isUnixSocket()) {
		$init($SocketChannelImpl$DefaultOptionsHolder);
		return $SocketChannelImpl$DefaultOptionsHolder::defaultUnixOptions$;
	} else {
		$init($SocketChannelImpl$DefaultOptionsHolder);
		return $SocketChannelImpl$DefaultOptionsHolder::defaultInetOptions$;
	}
}

void SocketChannelImpl::beginRead(bool blocking) {
	if (blocking) {
		begin();
		$synchronized(this->stateLock) {
			ensureOpen();
			this->readerThread = $NativeThread::current();
		}
	}
}

void SocketChannelImpl::endRead(bool blocking, bool completed) {
	if (blocking) {
		$synchronized(this->stateLock) {
			this->readerThread = 0;
			if (this->state == SocketChannelImpl::ST_CLOSING) {
				tryFinishClose();
			}
		}
		end(completed);
	}
}

void SocketChannelImpl::throwConnectionReset() {
	$throwNew($SocketException, "Connection reset"_s);
}

int32_t SocketChannelImpl::read($ByteBuffer* buf) {
	$Objects::requireNonNull(buf);
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpenAndConnected();
			bool blocking = isBlocking();
			int32_t n = 0;
			{
				$var($Throwable, var$3, nullptr);
				int32_t var$5 = 0;
				bool return$4 = false;
				try {
					try {
						beginRead(blocking);
						if (this->connectionReset) {
							throwConnectionReset();
						}
						if (this->isInputClosed) {
							var$5 = $IOStatus::EOF;
							return$4 = true;
							goto $finally1;
						}
						n = $IOUtil::read(this->fd, buf, (int64_t)-1, SocketChannelImpl::nd);
						if (blocking) {
							while (true) {
								bool var$6 = $IOStatus::okayToRetry(n);
								if (!(var$6 && isOpen())) {
									break;
								}
								{
									$init($Net);
									park($Net::POLLIN);
									n = $IOUtil::read(this->fd, buf, (int64_t)-1, SocketChannelImpl::nd);
								}
							}
						}
					} catch ($ConnectionResetException&) {
						$var($ConnectionResetException, e, $catch());
						this->connectionReset = true;
						throwConnectionReset();
					}
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} $finally1: {
					endRead(blocking, n > 0);
					if (n <= 0 && this->isInputClosed) {
						var$2 = $IOStatus::EOF;
						return$1 = true;
						goto $finally;
					}
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					var$2 = var$5;
					return$1 = true;
					goto $finally;
				}
			}
			var$2 = $IOStatus::normalize(n);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t SocketChannelImpl::read($ByteBufferArray* dsts, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(offset, length, $nc(dsts)->length);
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpenAndConnected();
			bool blocking = isBlocking();
			int64_t n = 0;
			{
				$var($Throwable, var$3, nullptr);
				int64_t var$5 = 0;
				bool return$4 = false;
				try {
					try {
						beginRead(blocking);
						if (this->connectionReset) {
							throwConnectionReset();
						}
						if (this->isInputClosed) {
							var$5 = $IOStatus::EOF;
							return$4 = true;
							goto $finally1;
						}
						n = $IOUtil::read(this->fd, dsts, offset, length, SocketChannelImpl::nd);
						if (blocking) {
							while (true) {
								bool var$6 = $IOStatus::okayToRetry(n);
								if (!(var$6 && isOpen())) {
									break;
								}
								{
									$init($Net);
									park($Net::POLLIN);
									n = $IOUtil::read(this->fd, dsts, offset, length, SocketChannelImpl::nd);
								}
							}
						}
					} catch ($ConnectionResetException&) {
						$var($ConnectionResetException, e, $catch());
						this->connectionReset = true;
						throwConnectionReset();
					}
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} $finally1: {
					endRead(blocking, n > 0);
					if (n <= 0 && this->isInputClosed) {
						var$2 = $IOStatus::EOF;
						return$1 = true;
						goto $finally;
					}
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					var$2 = var$5;
					return$1 = true;
					goto $finally;
				}
			}
			var$2 = $IOStatus::normalize(n);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SocketChannelImpl::beginWrite(bool blocking) {
	if (blocking) {
		begin();
		$synchronized(this->stateLock) {
			ensureOpen();
			if (this->isOutputClosed) {
				$throwNew($ClosedChannelException);
			}
			this->writerThread = $NativeThread::current();
		}
	}
}

void SocketChannelImpl::endWrite(bool blocking, bool completed) {
	if (blocking) {
		$synchronized(this->stateLock) {
			this->writerThread = 0;
			if (this->state == SocketChannelImpl::ST_CLOSING) {
				tryFinishClose();
			}
		}
		end(completed);
	}
}

int32_t SocketChannelImpl::write($ByteBuffer* buf) {
	$Objects::requireNonNull(buf);
	$nc(this->writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpenAndConnected();
			bool blocking = isBlocking();
			int32_t n = 0;
			{
				$var($Throwable, var$3, nullptr);
				try {
					beginWrite(blocking);
					n = $IOUtil::write(this->fd, buf, (int64_t)-1, SocketChannelImpl::nd);
					if (blocking) {
						while (true) {
							bool var$4 = $IOStatus::okayToRetry(n);
							if (!(var$4 && isOpen())) {
								break;
							}
							{
								$init($Net);
								park($Net::POLLOUT);
								n = $IOUtil::write(this->fd, buf, (int64_t)-1, SocketChannelImpl::nd);
							}
						}
					}
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} /*finally*/ {
					endWrite(blocking, n > 0);
					if (n <= 0 && this->isOutputClosed) {
						$throwNew($AsynchronousCloseException);
					}
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
			}
			var$2 = $IOStatus::normalize(n);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t SocketChannelImpl::write($ByteBufferArray* srcs, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(offset, length, $nc(srcs)->length);
	$nc(this->writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpenAndConnected();
			bool blocking = isBlocking();
			int64_t n = 0;
			{
				$var($Throwable, var$3, nullptr);
				try {
					beginWrite(blocking);
					n = $IOUtil::write(this->fd, srcs, offset, length, SocketChannelImpl::nd);
					if (blocking) {
						while (true) {
							bool var$4 = $IOStatus::okayToRetry(n);
							if (!(var$4 && isOpen())) {
								break;
							}
							{
								$init($Net);
								park($Net::POLLOUT);
								n = $IOUtil::write(this->fd, srcs, offset, length, SocketChannelImpl::nd);
							}
						}
					}
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} /*finally*/ {
					endWrite(blocking, n > 0);
					if (n <= 0 && this->isOutputClosed) {
						$throwNew($AsynchronousCloseException);
					}
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
			}
			var$2 = $IOStatus::normalize(n);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t SocketChannelImpl::sendOutOfBandData(int8_t b) {
	$nc(this->writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpenAndConnected();
			bool blocking = isBlocking();
			int32_t n = 0;
			{
				$var($Throwable, var$3, nullptr);
				try {
					beginWrite(blocking);
					if (blocking) {
						do {
							n = $Net::sendOOB(this->fd, b);
						} while (n == $IOStatus::INTERRUPTED && isOpen());
					} else {
						n = $Net::sendOOB(this->fd, b);
					}
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} /*finally*/ {
					endWrite(blocking, n > 0);
					if (n <= 0 && this->isOutputClosed) {
						$throwNew($AsynchronousCloseException);
					}
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
			}
			var$2 = $IOStatus::normalize(n);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SocketChannelImpl::implConfigureBlocking(bool block) {
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->writeLock)->lock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					lockedConfigureBlocking(block);
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					$nc(this->writeLock)->unlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SocketChannelImpl::lockedConfigureBlocking(bool block) {
	bool var$0 = !SocketChannelImpl::$assertionsDisabled;
	if (var$0) {
		bool var$1 = $nc(this->readLock)->isHeldByCurrentThread();
		var$0 = !(var$1 || $nc(this->writeLock)->isHeldByCurrentThread());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$synchronized(this->stateLock) {
		ensureOpen();
		$IOUtil::configureBlocking(this->fd, block);
	}
}

bool SocketChannelImpl::tryLockedConfigureBlocking(bool block) {
	bool var$0 = !SocketChannelImpl::$assertionsDisabled;
	if (var$0) {
		bool var$1 = $nc(this->readLock)->isHeldByCurrentThread();
		var$0 = !(var$1 || $nc(this->writeLock)->isHeldByCurrentThread());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$synchronized(this->stateLock) {
		if (isOpen()) {
			$IOUtil::configureBlocking(this->fd, block);
			return true;
		} else {
			return false;
		}
	}
}

$SocketAddress* SocketChannelImpl::localAddress() {
	$synchronized(this->stateLock) {
		return this->localAddress$;
	}
}

$SocketAddress* SocketChannelImpl::remoteAddress() {
	$synchronized(this->stateLock) {
		return this->remoteAddress$;
	}
}

$NetworkChannel* SocketChannelImpl::bind($SocketAddress* local) {
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->writeLock)->lock();
			{
				$var($Throwable, var$1, nullptr);
				try {
					$synchronized(this->stateLock) {
						ensureOpen();
						if (this->state == SocketChannelImpl::ST_CONNECTIONPENDING) {
							$throwNew($ConnectionPendingException);
						}
						if (this->localAddress$ != nullptr) {
							$throwNew($AlreadyBoundException);
						}
						if (isUnixSocket()) {
							$set(this, localAddress$, unixBind(local));
						} else {
							$set(this, localAddress$, netBind(local));
						}
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					$nc(this->writeLock)->unlock();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$SocketAddress* SocketChannelImpl::unixBind($SocketAddress* local) {
	$UnixDomainSockets::checkPermission();
	if (local == nullptr) {
		return $UnixDomainSockets::UNNAMED;
	} else {
		$var($Path, path, $nc($($UnixDomainSockets::checkAddress(local)))->getPath());
		if ($nc($($nc(path)->toString()))->isEmpty()) {
			return $UnixDomainSockets::UNNAMED;
		} else {
			$UnixDomainSockets::bind(this->fd, path);
			return $UnixDomainSockets::localAddress(this->fd);
		}
	}
}

$SocketAddress* SocketChannelImpl::netBind($SocketAddress* local) {
	$var($InetSocketAddress, isa, nullptr);
	if (local == nullptr) {
		$assign(isa, $new($InetSocketAddress, $($Net::anyLocalAddress(this->family)), 0));
	} else {
		$assign(isa, $Net::checkAddress(local, this->family));
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkListen($nc(isa)->getPort());
	}
	$var($FileDescriptor, var$0, this->fd);
	$var($InetAddress, var$1, $nc(isa)->getAddress());
	$NetHooks::beforeTcpBind(var$0, var$1, isa->getPort());
	$var($ProtocolFamily, var$2, this->family);
	$var($FileDescriptor, var$3, this->fd);
	$var($InetAddress, var$4, $nc(isa)->getAddress());
	$Net::bind(var$2, var$3, var$4, isa->getPort());
	return $Net::localAddress(this->fd);
}

bool SocketChannelImpl::isConnected() {
	return (this->state == SocketChannelImpl::ST_CONNECTED);
}

bool SocketChannelImpl::isConnectionPending() {
	return (this->state == SocketChannelImpl::ST_CONNECTIONPENDING);
}

void SocketChannelImpl::beginConnect(bool blocking, $SocketAddress* sa) {
	if (blocking) {
		begin();
	}
	$synchronized(this->stateLock) {
		ensureOpen();
		int32_t state = this->state;
		if (state == SocketChannelImpl::ST_CONNECTED) {
			$throwNew($AlreadyConnectedException);
		}
		if (state == SocketChannelImpl::ST_CONNECTIONPENDING) {
			$throwNew($ConnectionPendingException);
		}
		if (!SocketChannelImpl::$assertionsDisabled && !(state == SocketChannelImpl::ST_UNCONNECTED)) {
			$throwNew($AssertionError);
		}
		this->state = SocketChannelImpl::ST_CONNECTIONPENDING;
		if (isNetSocket() && (this->localAddress$ == nullptr)) {
			$var($InetSocketAddress, isa, $cast($InetSocketAddress, sa));
			$var($FileDescriptor, var$0, this->fd);
			$var($InetAddress, var$1, $nc(isa)->getAddress());
			$NetHooks::beforeTcpConnect(var$0, var$1, isa->getPort());
		}
		$set(this, remoteAddress$, sa);
		if (blocking) {
			this->readerThread = $NativeThread::current();
		}
	}
}

void SocketChannelImpl::endConnect(bool blocking, bool completed) {
	endRead(blocking, completed);
	if (completed) {
		$synchronized(this->stateLock) {
			if (this->state == SocketChannelImpl::ST_CONNECTIONPENDING) {
				if (isUnixSocket()) {
					$set(this, localAddress$, $UnixDomainSockets::localAddress(this->fd));
				} else {
					$set(this, localAddress$, $Net::localAddress(this->fd));
				}
				this->state = SocketChannelImpl::ST_CONNECTED;
			}
		}
	}
}

$SocketAddress* SocketChannelImpl::checkRemote($SocketAddress* sa) {
	if (isUnixSocket()) {
		$UnixDomainSockets::checkPermission();
		return $UnixDomainSockets::checkAddress(sa);
	} else {
		$var($InetSocketAddress, isa, $Net::checkAddress(sa, this->family));
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$var($String, var$0, $nc($($nc(isa)->getAddress()))->getHostAddress());
			sm->checkConnect(var$0, isa->getPort());
		}
		$var($InetAddress, address, $nc(isa)->getAddress());
		if ($nc(address)->isAnyLocalAddress()) {
			int32_t port = isa->getPort();
			if ($instanceOf($Inet4Address, address)) {
				return $new($InetSocketAddress, $($Net::inet4LoopbackAddress()), port);
			} else {
				$init($StandardProtocolFamily);
				if (!SocketChannelImpl::$assertionsDisabled && !$equals(this->family, $StandardProtocolFamily::INET6)) {
					$throwNew($AssertionError);
				}
				return $new($InetSocketAddress, $($Net::inet6LoopbackAddress()), port);
			}
		} else {
			return isa;
		}
	}
}

bool SocketChannelImpl::connect($SocketAddress* remote) {
	$var($SocketAddress, sa, checkRemote(remote));
	try {
		$nc(this->readLock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				$nc(this->writeLock)->lock();
				{
					$var($Throwable, var$3, nullptr);
					bool var$5 = false;
					bool return$4 = false;
					try {
						bool blocking = isBlocking();
						bool connected = false;
						{
							$var($Throwable, var$6, nullptr);
							try {
								beginConnect(blocking, sa);
								int32_t n = 0;
								if (isUnixSocket()) {
									n = $UnixDomainSockets::connect(this->fd, sa);
								} else {
									n = $Net::connect(this->family, this->fd, sa);
								}
								if (n > 0) {
									connected = true;
								} else if (blocking) {
									if (!SocketChannelImpl::$assertionsDisabled && !$IOStatus::okayToRetry(n)) {
										$throwNew($AssertionError);
									}
									bool polled = false;
									while (!polled && isOpen()) {
										$init($Net);
										park($Net::POLLOUT);
										polled = $Net::pollConnectNow(this->fd);
									}
									connected = polled && isOpen();
								}
							} catch ($Throwable&) {
								$assign(var$6, $catch());
							} /*finally*/ {
								endConnect(blocking, connected);
							}
							if (var$6 != nullptr) {
								$throw(var$6);
							}
						}
						var$5 = connected;
						return$4 = true;
						goto $finally1;
					} catch ($Throwable&) {
						$assign(var$3, $catch());
					} $finally1: {
						$nc(this->writeLock)->unlock();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
					if (return$4) {
						var$2 = var$5;
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$nc(this->readLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		close();
		$throw($($SocketExceptions::of(ioe, sa)));
	}
	$shouldNotReachHere();
}

void SocketChannelImpl::beginFinishConnect(bool blocking) {
	if (blocking) {
		begin();
	}
	$synchronized(this->stateLock) {
		ensureOpen();
		if (this->state != SocketChannelImpl::ST_CONNECTIONPENDING) {
			$throwNew($NoConnectionPendingException);
		}
		if (blocking) {
			this->readerThread = $NativeThread::current();
		}
	}
}

void SocketChannelImpl::endFinishConnect(bool blocking, bool completed) {
	endRead(blocking, completed);
	if (completed) {
		$synchronized(this->stateLock) {
			if (this->state == SocketChannelImpl::ST_CONNECTIONPENDING) {
				if (isUnixSocket()) {
					$set(this, localAddress$, $UnixDomainSockets::localAddress(this->fd));
				} else {
					$set(this, localAddress$, $Net::localAddress(this->fd));
				}
				this->state = SocketChannelImpl::ST_CONNECTED;
			}
		}
	}
}

bool SocketChannelImpl::finishConnect() {
	try {
		$nc(this->readLock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				$nc(this->writeLock)->lock();
				{
					$var($Throwable, var$3, nullptr);
					bool var$5 = false;
					bool return$4 = false;
					try {
						if (isConnected()) {
							var$5 = true;
							return$4 = true;
							goto $finally1;
						}
						bool blocking = isBlocking();
						bool connected = false;
						{
							$var($Throwable, var$6, nullptr);
							try {
								beginFinishConnect(blocking);
								bool polled = $Net::pollConnectNow(this->fd);
								if (blocking) {
									while (!polled && isOpen()) {
										park($Net::POLLOUT);
										polled = $Net::pollConnectNow(this->fd);
									}
								}
								connected = polled && isOpen();
							} catch ($Throwable&) {
								$assign(var$6, $catch());
							} /*finally*/ {
								endFinishConnect(blocking, connected);
							}
							if (var$6 != nullptr) {
								$throw(var$6);
							}
						}
						if (!SocketChannelImpl::$assertionsDisabled && !((blocking && connected) ^ !blocking)) {
							$throwNew($AssertionError);
						}
						var$5 = connected;
						return$4 = true;
						goto $finally1;
					} catch ($Throwable&) {
						$assign(var$3, $catch());
					} $finally1: {
						$nc(this->writeLock)->unlock();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
					if (return$4) {
						var$2 = var$5;
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$nc(this->readLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		close();
		$throw($($SocketExceptions::of(ioe, this->remoteAddress$)));
	}
	$shouldNotReachHere();
}

bool SocketChannelImpl::tryClose() {
	if (!SocketChannelImpl::$assertionsDisabled && !($Thread::holdsLock(this->stateLock) && this->state == SocketChannelImpl::ST_CLOSING)) {
		$throwNew($AssertionError);
	}
	if ((this->readerThread == 0) && (this->writerThread == 0) && !isRegistered()) {
		this->state = SocketChannelImpl::ST_CLOSED;
		$nc(SocketChannelImpl::nd)->close(this->fd);
		return true;
	} else {
		return false;
	}
}

void SocketChannelImpl::tryFinishClose() {
	try {
		tryClose();
	} catch ($IOException&) {
		$catch();
	}
}

void SocketChannelImpl::implCloseBlockingMode() {
	$synchronized(this->stateLock) {
		if (!SocketChannelImpl::$assertionsDisabled && !(this->state < SocketChannelImpl::ST_CLOSING)) {
			$throwNew($AssertionError);
		}
		this->state = SocketChannelImpl::ST_CLOSING;
		if (!tryClose()) {
			int64_t reader = this->readerThread;
			int64_t writer = this->writerThread;
			if (reader != 0 || writer != 0) {
				$nc(SocketChannelImpl::nd)->preClose(this->fd);
				if (reader != 0) {
					$NativeThread::signal(reader);
				}
				if (writer != 0) {
					$NativeThread::signal(writer);
				}
			}
		}
	}
}

void SocketChannelImpl::implCloseNonBlockingMode() {
	bool connected = false;
	$synchronized(this->stateLock) {
		if (!SocketChannelImpl::$assertionsDisabled && !(this->state < SocketChannelImpl::ST_CLOSING)) {
			$throwNew($AssertionError);
		}
		connected = (this->state == SocketChannelImpl::ST_CONNECTED);
		this->state = SocketChannelImpl::ST_CLOSING;
	}
	$nc(this->readLock)->lock();
	$nc(this->readLock)->unlock();
	$nc(this->writeLock)->lock();
	$nc(this->writeLock)->unlock();
	$synchronized(this->stateLock) {
		bool var$0 = this->state == SocketChannelImpl::ST_CLOSING && !tryClose() && connected;
		if (var$0 && isRegistered()) {
			try {
				$init($StandardSocketOptions);
				$var($SocketOption, opt, $StandardSocketOptions::SO_LINGER);
				$init($Net);
				int32_t interval = $nc(($cast($Integer, $($Net::getSocketOption(this->fd, $Net::UNSPEC, opt)))))->intValue();
				if (interval != 0) {
					if (interval > 0) {
						$Net::setSocketOption(this->fd, $Net::UNSPEC, opt, $($Integer::valueOf(-1)));
					}
					$Net::shutdown(this->fd, $Net::SHUT_WR);
				}
			} catch ($IOException&) {
				$catch();
			}
		}
	}
}

void SocketChannelImpl::implCloseSelectableChannel() {
	if (!SocketChannelImpl::$assertionsDisabled && ! !isOpen()) {
		$throwNew($AssertionError);
	}
	if (isBlocking()) {
		implCloseBlockingMode();
	} else {
		implCloseNonBlockingMode();
	}
}

void SocketChannelImpl::kill() {
	$synchronized(this->stateLock) {
		if (this->state == SocketChannelImpl::ST_CLOSING) {
			tryFinishClose();
		}
	}
}

$SocketChannel* SocketChannelImpl::shutdownInput() {
	$synchronized(this->stateLock) {
		ensureOpen();
		if (!isConnected()) {
			$throwNew($NotYetConnectedException);
		}
		if (!this->isInputClosed) {
			$Net::shutdown(this->fd, $Net::SHUT_RD);
			int64_t thread = this->readerThread;
			if (thread != 0) {
				$NativeThread::signal(thread);
			}
			this->isInputClosed = true;
		}
		return this;
	}
}

$SocketChannel* SocketChannelImpl::shutdownOutput() {
	$synchronized(this->stateLock) {
		ensureOpen();
		if (!isConnected()) {
			$throwNew($NotYetConnectedException);
		}
		if (!this->isOutputClosed) {
			$Net::shutdown(this->fd, $Net::SHUT_WR);
			int64_t thread = this->writerThread;
			if (thread != 0) {
				$NativeThread::signal(thread);
			}
			this->isOutputClosed = true;
		}
		return this;
	}
}

bool SocketChannelImpl::isInputOpen() {
	return !this->isInputClosed;
}

bool SocketChannelImpl::isOutputOpen() {
	return !this->isOutputClosed;
}

bool SocketChannelImpl::finishTimedConnect(int64_t nanos) {
	int64_t startNanos = $System::nanoTime();
	bool polled = $Net::pollConnectNow(this->fd);
	while (!polled && isOpen()) {
		int64_t remainingNanos = nanos - ($System::nanoTime() - startNanos);
		if (remainingNanos <= 0) {
			$throwNew($SocketTimeoutException, "Connect timed out"_s);
		}
		park($Net::POLLOUT, remainingNanos);
		polled = $Net::pollConnectNow(this->fd);
	}
	return polled && isOpen();
}

void SocketChannelImpl::blockingConnect($SocketAddress* remote, int64_t nanos) {
	$var($SocketAddress, sa, checkRemote(remote));
	try {
		$nc(this->readLock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->writeLock)->lock();
				{
					$var($Throwable, var$1, nullptr);
					try {
						if (!isBlocking()) {
							$throwNew($IllegalBlockingModeException);
						}
						bool connected = false;
						{
							$var($Throwable, var$2, nullptr);
							try {
								beginConnect(true, sa);
								lockedConfigureBlocking(false);
								{
									$var($Throwable, var$3, nullptr);
									try {
										int32_t n = 0;
										if (isUnixSocket()) {
											n = $UnixDomainSockets::connect(this->fd, sa);
										} else {
											n = $Net::connect(this->family, this->fd, sa);
										}
										connected = (n > 0) ? true : finishTimedConnect(nanos);
									} catch ($Throwable&) {
										$assign(var$3, $catch());
									} /*finally*/ {
										tryLockedConfigureBlocking(true);
									}
									if (var$3 != nullptr) {
										$throw(var$3);
									}
								}
							} catch ($Throwable&) {
								$assign(var$2, $catch());
							} /*finally*/ {
								endConnect(true, connected);
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
					} catch ($Throwable&) {
						$assign(var$1, $catch());
					} /*finally*/ {
						$nc(this->writeLock)->unlock();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(this->readLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		close();
		$throw($($SocketExceptions::of(ioe, sa)));
	}
}

int32_t SocketChannelImpl::tryRead($bytes* b, int32_t off, int32_t len) {
	$var($ByteBuffer, dst, $Util::getTemporaryDirectBuffer(len));
	if (!SocketChannelImpl::$assertionsDisabled && !($nc(dst)->position() == 0)) {
		$throwNew($AssertionError);
	}
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			int32_t n = $nc(SocketChannelImpl::nd)->read(this->fd, $nc(($cast($DirectBuffer, dst)))->address(), len);
			if (n > 0) {
				$nc(dst)->get(b, off, n);
			}
			var$2 = n;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Util::offerFirstTemporaryDirectBuffer(dst);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t SocketChannelImpl::timedRead($bytes* b, int32_t off, int32_t len, int64_t nanos) {
	int64_t startNanos = $System::nanoTime();
	int32_t n = tryRead(b, off, len);
	while (n == $IOStatus::UNAVAILABLE && isOpen()) {
		int64_t remainingNanos = nanos - ($System::nanoTime() - startNanos);
		if (remainingNanos <= 0) {
			$throwNew($SocketTimeoutException, "Read timed out"_s);
		}
		$init($Net);
		park($Net::POLLIN, remainingNanos);
		n = tryRead(b, off, len);
	}
	return n;
}

int32_t SocketChannelImpl::blockingRead($bytes* b, int32_t off, int32_t len, int64_t nanos) {
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	if (len == 0) {
		return 0;
	}
	$nc(this->readLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpenAndConnected();
			if (!isBlocking()) {
				$throwNew($IllegalBlockingModeException);
			}
			int32_t n = 0;
			{
				$var($Throwable, var$3, nullptr);
				int32_t var$5 = 0;
				bool return$4 = false;
				try {
					try {
						beginRead(true);
						if (this->connectionReset) {
							throwConnectionReset();
						}
						if (this->isInputClosed) {
							var$5 = $IOStatus::EOF;
							return$4 = true;
							goto $finally1;
						}
						if (nanos > 0) {
							lockedConfigureBlocking(false);
							{
								$var($Throwable, var$6, nullptr);
								try {
									n = timedRead(b, off, len, nanos);
								} catch ($Throwable&) {
									$assign(var$6, $catch());
								} /*finally*/ {
									tryLockedConfigureBlocking(true);
								}
								if (var$6 != nullptr) {
									$throw(var$6);
								}
							}
						} else {
							n = tryRead(b, off, len);
							while (true) {
								bool var$7 = $IOStatus::okayToRetry(n);
								if (!(var$7 && isOpen())) {
									break;
								}
								{
									$init($Net);
									park($Net::POLLIN);
									n = tryRead(b, off, len);
								}
							}
						}
					} catch ($ConnectionResetException&) {
						$var($ConnectionResetException, e, $catch());
						this->connectionReset = true;
						throwConnectionReset();
					}
				} catch ($Throwable&) {
					$assign(var$3, $catch());
				} $finally1: {
					endRead(true, n > 0);
					if (n <= 0 && this->isInputClosed) {
						var$2 = $IOStatus::EOF;
						return$1 = true;
						goto $finally;
					}
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
				if (return$4) {
					var$2 = var$5;
					return$1 = true;
					goto $finally;
				}
			}
			if (!SocketChannelImpl::$assertionsDisabled && !(n > 0 || n == -1)) {
				$throwNew($AssertionError);
			}
			var$2 = n;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->readLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t SocketChannelImpl::tryWrite($bytes* b, int32_t off, int32_t len) {
	$var($ByteBuffer, src, $Util::getTemporaryDirectBuffer(len));
	if (!SocketChannelImpl::$assertionsDisabled && !($nc(src)->position() == 0)) {
		$throwNew($AssertionError);
	}
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			$nc(src)->put(b, off, len);
			var$2 = $nc(SocketChannelImpl::nd)->write(this->fd, $nc(($cast($DirectBuffer, src)))->address(), len);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Util::offerFirstTemporaryDirectBuffer(src);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void SocketChannelImpl::blockingWriteFully($bytes* b, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	if (len == 0) {
		return;
	}
	$nc(this->writeLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			ensureOpenAndConnected();
			if (!isBlocking()) {
				$throwNew($IllegalBlockingModeException);
			}
			int32_t pos = off;
			int32_t end = off + len;
			{
				$var($Throwable, var$1, nullptr);
				try {
					beginWrite(true);
					while (pos < end && isOpen()) {
						int32_t size = end - pos;
						int32_t n = tryWrite(b, pos, size);
						while (true) {
							bool var$2 = $IOStatus::okayToRetry(n);
							if (!(var$2 && isOpen())) {
								break;
							}
							{
								$init($Net);
								park($Net::POLLOUT);
								n = tryWrite(b, pos, size);
							}
						}
						if (n > 0) {
							pos += n;
						}
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					endWrite(true, pos >= end);
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->writeLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t SocketChannelImpl::available() {
	$synchronized(this->stateLock) {
		ensureOpenAndConnected();
		if (this->isInputClosed) {
			return 0;
		} else {
			return $Net::available(this->fd);
		}
	}
}

bool SocketChannelImpl::translateReadyOps(int32_t ops, int32_t initialOps, $SelectionKeyImpl* ski) {
	int32_t intOps = $nc(ski)->nioInterestOps();
	int32_t oldOps = ski->nioReadyOps();
	int32_t newOps = initialOps;
	$init($Net);
	if (((int32_t)(ops & (uint32_t)(int32_t)$Net::POLLNVAL)) != 0) {
		return false;
	}
	if (((int32_t)(ops & (uint32_t)($Net::POLLERR | $Net::POLLHUP))) != 0) {
		newOps = intOps;
		ski->nioReadyOps(newOps);
		return ((int32_t)(newOps & (uint32_t)~oldOps)) != 0;
	}
	bool connected = isConnected();
	if ((((int32_t)(ops & (uint32_t)(int32_t)$Net::POLLIN)) != 0) && (((int32_t)(intOps & (uint32_t)$SelectionKey::OP_READ)) != 0) && connected) {
		newOps |= $SelectionKey::OP_READ;
	}
	if ((((int32_t)(ops & (uint32_t)(int32_t)$Net::POLLCONN)) != 0) && (((int32_t)(intOps & (uint32_t)$SelectionKey::OP_CONNECT)) != 0) && isConnectionPending()) {
		newOps |= $SelectionKey::OP_CONNECT;
	}
	if ((((int32_t)(ops & (uint32_t)(int32_t)$Net::POLLOUT)) != 0) && (((int32_t)(intOps & (uint32_t)$SelectionKey::OP_WRITE)) != 0) && connected) {
		newOps |= $SelectionKey::OP_WRITE;
	}
	ski->nioReadyOps(newOps);
	return ((int32_t)(newOps & (uint32_t)~oldOps)) != 0;
}

bool SocketChannelImpl::translateAndUpdateReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return translateReadyOps(ops, $nc(ski)->nioReadyOps(), ski);
}

bool SocketChannelImpl::translateAndSetReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return translateReadyOps(ops, 0, ski);
}

int32_t SocketChannelImpl::translateInterestOps(int32_t ops) {
	int32_t newOps = 0;
	if (((int32_t)(ops & (uint32_t)$SelectionKey::OP_READ)) != 0) {
		$init($Net);
		newOps |= $Net::POLLIN;
	}
	if (((int32_t)(ops & (uint32_t)$SelectionKey::OP_WRITE)) != 0) {
		$init($Net);
		newOps |= $Net::POLLOUT;
	}
	if (((int32_t)(ops & (uint32_t)$SelectionKey::OP_CONNECT)) != 0) {
		$init($Net);
		newOps |= $Net::POLLCONN;
	}
	return newOps;
}

$FileDescriptor* SocketChannelImpl::getFD() {
	return this->fd;
}

int32_t SocketChannelImpl::getFDVal() {
	return this->fdVal;
}

$String* SocketChannelImpl::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($nc($of(this)->getClass()->getSuperclass())->getName()));
	sb->append(u'[');
	if (!isOpen()) {
		sb->append("closed"_s);
	} else {
		$synchronized(this->stateLock) {
			switch (this->state) {
			case SocketChannelImpl::ST_UNCONNECTED:
				{
					sb->append("unconnected"_s);
					break;
				}
			case SocketChannelImpl::ST_CONNECTIONPENDING:
				{
					sb->append("connection-pending"_s);
					break;
				}
			case SocketChannelImpl::ST_CONNECTED:
				{
					sb->append("connected"_s);
					if (this->isInputClosed) {
						sb->append(" ishut"_s);
					}
					if (this->isOutputClosed) {
						sb->append(" oshut"_s);
					}
					break;
				}
			}
			$var($SocketAddress, addr, localAddress());
			if (addr != nullptr) {
				sb->append(" local="_s);
				if (isUnixSocket()) {
					sb->append($($UnixDomainSockets::getRevealedLocalAddressAsString(addr)));
				} else {
					sb->append($($Net::getRevealedLocalAddressAsString(addr)));
				}
			}
			if (remoteAddress() != nullptr) {
				sb->append(" remote="_s);
				sb->append($($nc($of($(remoteAddress())))->toString()));
			}
		}
	}
	sb->append(u']');
	return sb->toString();
}

void clinit$SocketChannelImpl($Class* class$) {
	SocketChannelImpl::$assertionsDisabled = !SocketChannelImpl::class$->desiredAssertionStatus();
	$assignStatic(SocketChannelImpl::nd, $new($SocketDispatcher));
}

SocketChannelImpl::SocketChannelImpl() {
}

$Class* SocketChannelImpl::load$($String* name, bool initialize) {
	$loadClass(SocketChannelImpl, name, initialize, &_SocketChannelImpl_ClassInfo_, clinit$SocketChannelImpl, allocate$SocketChannelImpl);
	return class$;
}

$Class* SocketChannelImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun