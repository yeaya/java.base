#include <sun/nio/ch/ServerSocketChannelImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/BindException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/net/SocketTimeoutException.h>
#include <java/net/StandardProtocolFamily.h>
#include <java/net/StandardSocketOptions.h>
#include <java/net/UnixDomainSocketAddress.h>
#include <java/nio/channels/AlreadyBoundException.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/IllegalBlockingModeException.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/NotYetBoundException.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <java/nio/file/Path.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/net/NetHooks.h>
#include <sun/nio/ch/IOStatus.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/NativeDispatcher.h>
#include <sun/nio/ch/NativeThread.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <sun/nio/ch/ServerSocketAdaptor.h>
#include <sun/nio/ch/ServerSocketChannelImpl$DefaultOptionsHolder.h>
#include <sun/nio/ch/SocketChannelImpl.h>
#include <sun/nio/ch/SocketDispatcher.h>
#include <sun/nio/ch/UnixDomainSockets.h>
#include <jcpp.h>

#undef INET
#undef INET6
#undef OP_ACCEPT
#undef POLLERR
#undef POLLHUP
#undef POLLIN
#undef POLLNVAL
#undef SO_REUSEADDR
#undef ST_CLOSED
#undef ST_CLOSING
#undef ST_INUSE
#undef UNAVAILABLE
#undef UNIX
#undef UNSPEC

using $InetSocketAddressArray = $Array<::java::net::InetSocketAddress>;
using $SocketAddressArray = $Array<::java::net::SocketAddress>;
using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BindException = ::java::net::BindException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $StandardProtocolFamily = ::java::net::StandardProtocolFamily;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $UnixDomainSocketAddress = ::java::net::UnixDomainSocketAddress;
using $AlreadyBoundException = ::java::nio::channels::AlreadyBoundException;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $IllegalBlockingModeException = ::java::nio::channels::IllegalBlockingModeException;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $NotYetBoundException = ::java::nio::channels::NotYetBoundException;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $SelectorProvider = ::java::nio::channels::spi::SelectorProvider;
using $Path = ::java::nio::file::Path;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $NetHooks = ::sun::net::NetHooks;
using $IOStatus = ::sun::nio::ch::IOStatus;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $NativeDispatcher = ::sun::nio::ch::NativeDispatcher;
using $NativeThread = ::sun::nio::ch::NativeThread;
using $Net = ::sun::nio::ch::Net;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;
using $ServerSocketAdaptor = ::sun::nio::ch::ServerSocketAdaptor;
using $ServerSocketChannelImpl$DefaultOptionsHolder = ::sun::nio::ch::ServerSocketChannelImpl$DefaultOptionsHolder;
using $SocketChannelImpl = ::sun::nio::ch::SocketChannelImpl;
using $SocketDispatcher = ::sun::nio::ch::SocketDispatcher;
using $UnixDomainSockets = ::sun::nio::ch::UnixDomainSockets;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _ServerSocketChannelImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ServerSocketChannelImpl, $assertionsDisabled)},
	{"nd", "Lsun/nio/ch/NativeDispatcher;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServerSocketChannelImpl, nd)},
	{"family", "Ljava/net/ProtocolFamily;", nullptr, $PRIVATE | $FINAL, $field(ServerSocketChannelImpl, family)},
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PRIVATE | $FINAL, $field(ServerSocketChannelImpl, fd)},
	{"fdVal", "I", nullptr, $PRIVATE | $FINAL, $field(ServerSocketChannelImpl, fdVal)},
	{"acceptLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(ServerSocketChannelImpl, acceptLock)},
	{"stateLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ServerSocketChannelImpl, stateLock)},
	{"ST_INUSE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerSocketChannelImpl, ST_INUSE)},
	{"ST_CLOSING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerSocketChannelImpl, ST_CLOSING)},
	{"ST_CLOSED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerSocketChannelImpl, ST_CLOSED)},
	{"state", "I", nullptr, $PRIVATE, $field(ServerSocketChannelImpl, state)},
	{"thread", "J", nullptr, $PRIVATE, $field(ServerSocketChannelImpl, thread)},
	{"localAddress", "Ljava/net/SocketAddress;", nullptr, $PRIVATE, $field(ServerSocketChannelImpl, localAddress$)},
	{"isReuseAddress", "Z", nullptr, $PRIVATE, $field(ServerSocketChannelImpl, isReuseAddress)},
	{"socket", "Ljava/net/ServerSocket;", nullptr, $PRIVATE, $field(ServerSocketChannelImpl, socket$)},
	{}
};

$MethodInfo _ServerSocketChannelImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;)V", nullptr, 0, $method(static_cast<void(ServerSocketChannelImpl::*)($SelectorProvider*)>(&ServerSocketChannelImpl::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;Ljava/net/ProtocolFamily;)V", nullptr, 0, $method(static_cast<void(ServerSocketChannelImpl::*)($SelectorProvider*,$ProtocolFamily*)>(&ServerSocketChannelImpl::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/nio/channels/spi/SelectorProvider;Ljava/net/ProtocolFamily;Ljava/io/FileDescriptor;Z)V", nullptr, 0, $method(static_cast<void(ServerSocketChannelImpl::*)($SelectorProvider*,$ProtocolFamily*,$FileDescriptor*,bool)>(&ServerSocketChannelImpl::init$)), "java.io.IOException"},
	{"accept", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"begin", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocketChannelImpl::*)(bool)>(&ServerSocketChannelImpl::begin)), "java.nio.channels.ClosedChannelException"},
	{"bind", "(Ljava/net/SocketAddress;I)Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"blockingAccept", "(J)Ljava/nio/channels/SocketChannel;", nullptr, 0, nullptr, "java.io.IOException"},
	{"end", "(ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocketChannelImpl::*)(bool,bool)>(&ServerSocketChannelImpl::end)), "java.nio.channels.AsynchronousCloseException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocketChannelImpl::*)()>(&ServerSocketChannelImpl::ensureOpen)), "java.nio.channels.ClosedChannelException"},
	{"finishAccept", "(Ljava/io/FileDescriptor;Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;", nullptr, $PRIVATE, $method(static_cast<$SocketChannel*(ServerSocketChannelImpl::*)($FileDescriptor*,$SocketAddress*)>(&ServerSocketChannelImpl::finishAccept)), "java.io.IOException"},
	{"getFD", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC},
	{"getFDVal", "()I", nullptr, $PUBLIC},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC, nullptr, "java.io.IOException"},
	{"implAccept", "(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;[Ljava/net/SocketAddress;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ServerSocketChannelImpl::*)($FileDescriptor*,$FileDescriptor*,$SocketAddressArray*)>(&ServerSocketChannelImpl::implAccept)), "java.io.IOException"},
	{"implCloseBlockingMode", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocketChannelImpl::*)()>(&ServerSocketChannelImpl::implCloseBlockingMode)), "java.io.IOException"},
	{"implCloseNonBlockingMode", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocketChannelImpl::*)()>(&ServerSocketChannelImpl::implCloseNonBlockingMode)), "java.io.IOException"},
	{"implCloseSelectableChannel", "()V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"implConfigureBlocking", "(Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"isBound", "()Z", nullptr, 0},
	{"isNetSocket", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ServerSocketChannelImpl::*)()>(&ServerSocketChannelImpl::isNetSocket))},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isUnixSocket", "()Z", nullptr, 0},
	{"kill", "()V", nullptr, $PUBLIC},
	{"localAddress", "()Ljava/net/SocketAddress;", nullptr, 0},
	{"lockedConfigureBlocking", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocketChannelImpl::*)(bool)>(&ServerSocketChannelImpl::lockedConfigureBlocking)), "java.io.IOException"},
	{"netBind", "(Ljava/net/SocketAddress;I)Ljava/net/SocketAddress;", nullptr, $PRIVATE, $method(static_cast<$SocketAddress*(ServerSocketChannelImpl::*)($SocketAddress*,int32_t)>(&ServerSocketChannelImpl::netBind)), "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/ServerSocketChannel;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)Ljava/nio/channels/ServerSocketChannel;", $PUBLIC, nullptr, "java.io.IOException"},
	{"socket", "()Ljava/net/ServerSocket;", nullptr, $PUBLIC},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translateAndSetReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"translateAndUpdateReadyOps", "(ILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"translateInterestOps", "(I)I", nullptr, $PUBLIC},
	{"translateReadyOps", "(IILsun/nio/ch/SelectionKeyImpl;)Z", nullptr, $PUBLIC},
	{"tryClose", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ServerSocketChannelImpl::*)()>(&ServerSocketChannelImpl::tryClose)), "java.io.IOException"},
	{"tryFinishClose", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocketChannelImpl::*)()>(&ServerSocketChannelImpl::tryFinishClose))},
	{"tryLockedConfigureBlocking", "(Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(ServerSocketChannelImpl::*)(bool)>(&ServerSocketChannelImpl::tryLockedConfigureBlocking)), "java.io.IOException"},
	{"unixBind", "(Ljava/net/SocketAddress;I)Ljava/net/SocketAddress;", nullptr, $PRIVATE, $method(static_cast<$SocketAddress*(ServerSocketChannelImpl::*)($SocketAddress*,int32_t)>(&ServerSocketChannelImpl::unixBind)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ServerSocketChannelImpl_InnerClassesInfo_[] = {
	{"sun.nio.ch.ServerSocketChannelImpl$DefaultOptionsHolder", "sun.nio.ch.ServerSocketChannelImpl", "DefaultOptionsHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ServerSocketChannelImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.ServerSocketChannelImpl",
	"java.nio.channels.ServerSocketChannel",
	"sun.nio.ch.SelChImpl",
	_ServerSocketChannelImpl_FieldInfo_,
	_ServerSocketChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_ServerSocketChannelImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.ServerSocketChannelImpl$DefaultOptionsHolder"
};

$Object* allocate$ServerSocketChannelImpl($Class* clazz) {
	return $of($alloc(ServerSocketChannelImpl));
}

void ServerSocketChannelImpl::close() {
	this->$ServerSocketChannel::close();
}

bool ServerSocketChannelImpl::isOpen() {
	 return this->$ServerSocketChannel::isOpen();
}

int32_t ServerSocketChannelImpl::hashCode() {
	 return this->$ServerSocketChannel::hashCode();
}

bool ServerSocketChannelImpl::equals(Object$* obj) {
	 return this->$ServerSocketChannel::equals(obj);
}

$Object* ServerSocketChannelImpl::clone() {
	 return this->$ServerSocketChannel::clone();
}

void ServerSocketChannelImpl::finalize() {
	this->$ServerSocketChannel::finalize();
}

bool ServerSocketChannelImpl::$assertionsDisabled = false;
$NativeDispatcher* ServerSocketChannelImpl::nd = nullptr;

void ServerSocketChannelImpl::init$($SelectorProvider* sp) {
	$init($StandardProtocolFamily);
	ServerSocketChannelImpl::init$(sp, $Net::isIPv6Available() ? static_cast<$ProtocolFamily*>($StandardProtocolFamily::INET6) : static_cast<$ProtocolFamily*>($StandardProtocolFamily::INET));
}

void ServerSocketChannelImpl::init$($SelectorProvider* sp, $ProtocolFamily* family) {
	$ServerSocketChannel::init$(sp);
	$set(this, acceptLock, $new($ReentrantLock));
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
		$set(this, fd, $Net::serverSocket(family, true));
	}
	this->fdVal = $IOUtil::fdVal(this->fd);
}

void ServerSocketChannelImpl::init$($SelectorProvider* sp, $ProtocolFamily* family, $FileDescriptor* fd, bool bound) {
	$ServerSocketChannel::init$(sp);
	$set(this, acceptLock, $new($ReentrantLock));
	$set(this, stateLock, $new($Object));
	$init($StandardProtocolFamily);
	if ($equals(family, $StandardProtocolFamily::UNIX)) {
		$set(this, family, $StandardProtocolFamily::UNIX);
	} else {
		$set(this, family, $Net::isIPv6Available() ? static_cast<$ProtocolFamily*>($StandardProtocolFamily::INET6) : static_cast<$ProtocolFamily*>($StandardProtocolFamily::INET));
	}
	$set(this, fd, fd);
	this->fdVal = $IOUtil::fdVal(fd);
	if (bound) {
		$synchronized(this->stateLock) {
			if ($equals(family, $StandardProtocolFamily::UNIX)) {
				$set(this, localAddress$, $UnixDomainSockets::localAddress(fd));
			} else {
				$set(this, localAddress$, $Net::localAddress(fd));
			}
		}
	}
}

bool ServerSocketChannelImpl::isNetSocket() {
	$init($StandardProtocolFamily);
	return ($equals(this->family, $StandardProtocolFamily::INET)) || ($equals(this->family, $StandardProtocolFamily::INET6));
}

bool ServerSocketChannelImpl::isUnixSocket() {
	$init($StandardProtocolFamily);
	return ($equals(this->family, $StandardProtocolFamily::UNIX));
}

void ServerSocketChannelImpl::ensureOpen() {
	if (!isOpen()) {
		$throwNew($ClosedChannelException);
	}
}

$ServerSocket* ServerSocketChannelImpl::socket() {
	$synchronized(this->stateLock) {
		if (this->socket$ == nullptr) {
			if (isNetSocket()) {
				$set(this, socket$, $ServerSocketAdaptor::create(this));
			} else {
				$throwNew($UnsupportedOperationException, "Not supported"_s);
			}
		}
		return this->socket$;
	}
}

$SocketAddress* ServerSocketChannelImpl::getLocalAddress() {
	$synchronized(this->stateLock) {
		ensureOpen();
		if (isUnixSocket()) {
			return $UnixDomainSockets::getRevealedLocalAddress(this->localAddress$);
		} else {
			return $Net::getRevealedLocalAddress(this->localAddress$);
		}
	}
}

$NetworkChannel* ServerSocketChannelImpl::setOption($SocketOption* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(name);
	if (!$nc($(supportedOptions()))->contains(name)) {
		$throwNew($UnsupportedOperationException, $$str({"\'"_s, name, "\' not supported"_s}));
	}
	if (!$nc(name->type())->isInstance(value)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid value \'"_s, value, "\'"_s}));
	}
	$synchronized(this->stateLock) {
		ensureOpen();
		$init($StandardSocketOptions);
		bool var$0 = isNetSocket() && name == $StandardSocketOptions::SO_REUSEADDR;
		if (var$0 && $Net::useExclusiveBind()) {
			this->isReuseAddress = $nc(($cast($Boolean, value)))->booleanValue();
		} else {
			$init($Net);
			$Net::setSocketOption(this->fd, $Net::UNSPEC, name, value);
		}
		return this;
	}
}

$Object* ServerSocketChannelImpl::getOption($SocketOption* name) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(name);
	if (!$nc($(supportedOptions()))->contains(name)) {
		$throwNew($UnsupportedOperationException, $$str({"\'"_s, name, "\' not supported"_s}));
	}
	$synchronized(this->stateLock) {
		ensureOpen();
		$init($StandardSocketOptions);
		bool var$0 = isNetSocket() && name == $StandardSocketOptions::SO_REUSEADDR;
		if (var$0 && $Net::useExclusiveBind()) {
			return $of($of($Boolean::valueOf(this->isReuseAddress)));
		} else {
			$init($Net);
			return $of($Net::getSocketOption(this->fd, $Net::UNSPEC, name));
		}
	}
}

$Set* ServerSocketChannelImpl::supportedOptions() {
	if (isUnixSocket()) {
		$init($ServerSocketChannelImpl$DefaultOptionsHolder);
		return $ServerSocketChannelImpl$DefaultOptionsHolder::defaultUnixDomainOptions$;
	} else {
		$init($ServerSocketChannelImpl$DefaultOptionsHolder);
		return $ServerSocketChannelImpl$DefaultOptionsHolder::defaultInetOptions$;
	}
}

$ServerSocketChannel* ServerSocketChannelImpl::bind($SocketAddress* local, int32_t backlog) {
	$synchronized(this->stateLock) {
		ensureOpen();
		if (this->localAddress$ != nullptr) {
			$throwNew($AlreadyBoundException);
		}
		if (isUnixSocket()) {
			$set(this, localAddress$, unixBind(local, backlog));
		} else {
			$set(this, localAddress$, netBind(local, backlog));
		}
	}
	return this;
}

$SocketAddress* ServerSocketChannelImpl::unixBind($SocketAddress* local, int32_t backlog) {
	$useLocalCurrentObjectStackCache();
	$UnixDomainSockets::checkPermission();
	if (local == nullptr) {
		bool bound = false;
		int32_t attempts = 0;
		while (attempts < 10 && !bound) {
			try {
				$var($Path, path, $nc($($UnixDomainSockets::generateTempName()))->getPath());
				$UnixDomainSockets::bind(this->fd, path);
				bound = true;
			} catch ($BindException& e) {
			}
			++attempts;
		}
		if (!bound) {
			$throwNew($BindException, "Could not bind to temporary name"_s);
		}
	} else {
		$var($Path, path, $nc($($UnixDomainSockets::checkAddress(local)))->getPath());
		$UnixDomainSockets::bind(this->fd, path);
	}
	$Net::listen(this->fd, backlog < 1 ? 50 : backlog);
	return $UnixDomainSockets::localAddress(this->fd);
}

$SocketAddress* ServerSocketChannelImpl::netBind($SocketAddress* local, int32_t backlog) {
	$useLocalCurrentObjectStackCache();
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
	$Net::listen(this->fd, backlog < 1 ? 50 : backlog);
	return $Net::localAddress(this->fd);
}

void ServerSocketChannelImpl::begin(bool blocking) {
	if (blocking) {
		begin();
	}
	$synchronized(this->stateLock) {
		ensureOpen();
		if (this->localAddress$ == nullptr) {
			$throwNew($NotYetBoundException);
		}
		if (blocking) {
			this->thread = $NativeThread::current();
		}
	}
}

void ServerSocketChannelImpl::end(bool blocking, bool completed) {
	if (blocking) {
		$synchronized(this->stateLock) {
			this->thread = 0;
			if (this->state == ServerSocketChannelImpl::ST_CLOSING) {
				tryFinishClose();
			}
		}
		end(completed);
	}
}

$SocketChannel* ServerSocketChannelImpl::accept() {
	$useLocalCurrentObjectStackCache();
	int32_t n = 0;
	$var($FileDescriptor, newfd, $new($FileDescriptor));
	$var($SocketAddressArray, saa, $new($SocketAddressArray, 1));
	$nc(this->acceptLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			bool blocking = isBlocking();
			{
				$var($Throwable, var$1, nullptr);
				try {
					begin(blocking);
					n = implAccept(this->fd, newfd, saa);
					if (blocking) {
						while (true) {
							bool var$2 = $IOStatus::okayToRetry(n);
							if (!(var$2 && isOpen())) {
								break;
							}
							{
								$init($Net);
								park($Net::POLLIN);
								n = implAccept(this->fd, newfd, saa);
							}
						}
					}
				} catch ($Throwable& var$3) {
					$assign(var$1, var$3);
				} /*finally*/ {
					end(blocking, n > 0);
					if (!ServerSocketChannelImpl::$assertionsDisabled && !$IOStatus::check(n)) {
						$throwNew($AssertionError);
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} /*finally*/ {
			$nc(this->acceptLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (n > 0) {
		return finishAccept(newfd, saa->get(0));
	} else {
		return nullptr;
	}
}

int32_t ServerSocketChannelImpl::implAccept($FileDescriptor* fd, $FileDescriptor* newfd, $SocketAddressArray* saa) {
	$useLocalCurrentObjectStackCache();
	if (isUnixSocket()) {
		$UnixDomainSockets::checkPermission();
		$var($StringArray, pa, $new($StringArray, 1));
		int32_t n = $UnixDomainSockets::accept(fd, newfd, pa);
		if (n > 0) {
			$nc(saa)->set(0, $($UnixDomainSocketAddress::of(pa->get(0))));
		}
		return n;
	} else {
		$var($InetSocketAddressArray, issa, $new($InetSocketAddressArray, 1));
		int32_t n = $Net::accept(fd, newfd, issa);
		if (n > 0) {
			$nc(saa)->set(0, issa->get(0));
		}
		return n;
	}
}

$SocketChannel* ServerSocketChannelImpl::blockingAccept(int64_t nanos) {
	$useLocalCurrentObjectStackCache();
	int32_t n = 0;
	$var($FileDescriptor, newfd, $new($FileDescriptor));
	$var($SocketAddressArray, saa, $new($SocketAddressArray, 1));
	$nc(this->acceptLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!isBlocking()) {
				$throwNew($IllegalBlockingModeException);
			}
			{
				$var($Throwable, var$1, nullptr);
				try {
					begin(true);
					lockedConfigureBlocking(false);
					{
						$var($Throwable, var$2, nullptr);
						try {
							int64_t startNanos = $System::nanoTime();
							n = implAccept(this->fd, newfd, saa);
							while (n == $IOStatus::UNAVAILABLE && isOpen()) {
								int64_t remainingNanos = nanos - ($System::nanoTime() - startNanos);
								if (remainingNanos <= 0) {
									$throwNew($SocketTimeoutException, "Accept timed out"_s);
								}
								$init($Net);
								park($Net::POLLIN, remainingNanos);
								n = implAccept(this->fd, newfd, saa);
							}
						} catch ($Throwable& var$3) {
							$assign(var$2, var$3);
						} /*finally*/ {
							tryLockedConfigureBlocking(true);
						}
						if (var$2 != nullptr) {
							$throw(var$2);
						}
					}
				} catch ($Throwable& var$4) {
					$assign(var$1, var$4);
				} /*finally*/ {
					end(true, n > 0);
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$nc(this->acceptLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (!ServerSocketChannelImpl::$assertionsDisabled && !(n > 0)) {
		$throwNew($AssertionError);
	}
	return finishAccept(newfd, saa->get(0));
}

$SocketChannel* ServerSocketChannelImpl::finishAccept($FileDescriptor* newfd, $SocketAddress* sa) {
	$useLocalCurrentObjectStackCache();
	try {
		$IOUtil::configureBlocking(newfd, true);
		if (isNetSocket()) {
			$var($SecurityManager, sm, $System::getSecurityManager());
			if (sm != nullptr) {
				$var($InetSocketAddress, isa, $cast($InetSocketAddress, sa));
				$var($String, var$0, $nc($($nc(isa)->getAddress()))->getHostAddress());
				sm->checkAccept(var$0, isa->getPort());
			}
		}
		return $new($SocketChannelImpl, $(provider()), this->family, newfd, sa);
	} catch ($Exception& e) {
		$nc(ServerSocketChannelImpl::nd)->close(newfd);
		$throw(e);
	}
	$shouldNotReachHere();
}

void ServerSocketChannelImpl::implConfigureBlocking(bool block) {
	$nc(this->acceptLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			lockedConfigureBlocking(block);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->acceptLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ServerSocketChannelImpl::lockedConfigureBlocking(bool block) {
	if (!ServerSocketChannelImpl::$assertionsDisabled && !$nc(this->acceptLock)->isHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$synchronized(this->stateLock) {
		ensureOpen();
		$IOUtil::configureBlocking(this->fd, block);
	}
}

bool ServerSocketChannelImpl::tryLockedConfigureBlocking(bool block) {
	if (!ServerSocketChannelImpl::$assertionsDisabled && !$nc(this->acceptLock)->isHeldByCurrentThread()) {
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

bool ServerSocketChannelImpl::tryClose() {
	if (!ServerSocketChannelImpl::$assertionsDisabled && !($Thread::holdsLock(this->stateLock) && this->state == ServerSocketChannelImpl::ST_CLOSING)) {
		$throwNew($AssertionError);
	}
	if ((this->thread == 0) && !isRegistered()) {
		this->state = ServerSocketChannelImpl::ST_CLOSED;
		$nc(ServerSocketChannelImpl::nd)->close(this->fd);
		return true;
	} else {
		return false;
	}
}

void ServerSocketChannelImpl::tryFinishClose() {
	try {
		tryClose();
	} catch ($IOException& ignore) {
	}
}

void ServerSocketChannelImpl::implCloseBlockingMode() {
	$synchronized(this->stateLock) {
		if (!ServerSocketChannelImpl::$assertionsDisabled && !(this->state < ServerSocketChannelImpl::ST_CLOSING)) {
			$throwNew($AssertionError);
		}
		this->state = ServerSocketChannelImpl::ST_CLOSING;
		if (!tryClose()) {
			int64_t th = this->thread;
			if (th != 0) {
				$nc(ServerSocketChannelImpl::nd)->preClose(this->fd);
				$NativeThread::signal(th);
			}
		}
	}
}

void ServerSocketChannelImpl::implCloseNonBlockingMode() {
	$synchronized(this->stateLock) {
		if (!ServerSocketChannelImpl::$assertionsDisabled && !(this->state < ServerSocketChannelImpl::ST_CLOSING)) {
			$throwNew($AssertionError);
		}
		this->state = ServerSocketChannelImpl::ST_CLOSING;
	}
	$nc(this->acceptLock)->lock();
	$nc(this->acceptLock)->unlock();
	$synchronized(this->stateLock) {
		if (this->state == ServerSocketChannelImpl::ST_CLOSING) {
			tryClose();
		}
	}
}

void ServerSocketChannelImpl::implCloseSelectableChannel() {
	if (!ServerSocketChannelImpl::$assertionsDisabled && ! !isOpen()) {
		$throwNew($AssertionError);
	}
	if (isBlocking()) {
		implCloseBlockingMode();
	} else {
		implCloseNonBlockingMode();
	}
}

void ServerSocketChannelImpl::kill() {
	$synchronized(this->stateLock) {
		if (this->state == ServerSocketChannelImpl::ST_CLOSING) {
			tryFinishClose();
		}
	}
}

bool ServerSocketChannelImpl::isBound() {
	$synchronized(this->stateLock) {
		return this->localAddress$ != nullptr;
	}
}

$SocketAddress* ServerSocketChannelImpl::localAddress() {
	$synchronized(this->stateLock) {
		return this->localAddress$;
	}
}

bool ServerSocketChannelImpl::translateReadyOps(int32_t ops, int32_t initialOps, $SelectionKeyImpl* ski) {
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
	if ((((int32_t)(ops & (uint32_t)(int32_t)$Net::POLLIN)) != 0) && (((int32_t)(intOps & (uint32_t)$SelectionKey::OP_ACCEPT)) != 0)) {
		newOps |= $SelectionKey::OP_ACCEPT;
	}
	ski->nioReadyOps(newOps);
	return ((int32_t)(newOps & (uint32_t)~oldOps)) != 0;
}

bool ServerSocketChannelImpl::translateAndUpdateReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return translateReadyOps(ops, $nc(ski)->nioReadyOps(), ski);
}

bool ServerSocketChannelImpl::translateAndSetReadyOps(int32_t ops, $SelectionKeyImpl* ski) {
	return translateReadyOps(ops, 0, ski);
}

int32_t ServerSocketChannelImpl::translateInterestOps(int32_t ops) {
	int32_t newOps = 0;
	if (((int32_t)(ops & (uint32_t)$SelectionKey::OP_ACCEPT)) != 0) {
		$init($Net);
		newOps |= $Net::POLLIN;
	}
	return newOps;
}

$FileDescriptor* ServerSocketChannelImpl::getFD() {
	return this->fd;
}

int32_t ServerSocketChannelImpl::getFDVal() {
	return this->fdVal;
}

$String* ServerSocketChannelImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($of(this)->getClass()->getName()));
	sb->append(u'[');
	if (!isOpen()) {
		sb->append("closed"_s);
	} else {
		$synchronized(this->stateLock) {
			$var($SocketAddress, addr, this->localAddress$);
			if (addr == nullptr) {
				sb->append("unbound"_s);
			} else if (isUnixSocket()) {
				sb->append($($UnixDomainSockets::getRevealedLocalAddressAsString(addr)));
			} else {
				sb->append($($Net::getRevealedLocalAddressAsString(addr)));
			}
		}
	}
	sb->append(u']');
	return sb->toString();
}

void clinit$ServerSocketChannelImpl($Class* class$) {
	ServerSocketChannelImpl::$assertionsDisabled = !ServerSocketChannelImpl::class$->desiredAssertionStatus();
	$assignStatic(ServerSocketChannelImpl::nd, $new($SocketDispatcher));
}

ServerSocketChannelImpl::ServerSocketChannelImpl() {
}

$Class* ServerSocketChannelImpl::load$($String* name, bool initialize) {
	$loadClass(ServerSocketChannelImpl, name, initialize, &_ServerSocketChannelImpl_ClassInfo_, clinit$ServerSocketChannelImpl, allocate$ServerSocketChannelImpl);
	return class$;
}

$Class* ServerSocketChannelImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun