#include <sun/nio/ch/AsynchronousServerSocketChannelImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/nio/channels/AlreadyBoundException.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/spi/AsynchronousChannelProvider.h>
#include <java/util/Set.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <sun/net/NetHooks.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <sun/nio/ch/AsynchronousServerSocketChannelImpl$DefaultOptionsHolder.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/PendingFuture.h>
#include <jcpp.h>

#undef SO_REUSEADDR
#undef UNSPEC

using $FileDescriptor = ::java::io::FileDescriptor;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $AlreadyBoundException = ::java::nio::channels::AlreadyBoundException;
using $AsynchronousChannelGroup = ::java::nio::channels::AsynchronousChannelGroup;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $NetworkChannel = ::java::nio::channels::NetworkChannel;
using $AsynchronousChannelProvider = ::java::nio::channels::spi::AsynchronousChannelProvider;
using $Set = ::java::util::Set;
using $Future = ::java::util::concurrent::Future;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $NetHooks = ::sun::net::NetHooks;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $AsynchronousServerSocketChannelImpl$DefaultOptionsHolder = ::sun::nio::ch::AsynchronousServerSocketChannelImpl$DefaultOptionsHolder;
using $Cancellable = ::sun::nio::ch::Cancellable;
using $Groupable = ::sun::nio::ch::Groupable;
using $Net = ::sun::nio::ch::Net;
using $PendingFuture = ::sun::nio::ch::PendingFuture;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _AsynchronousServerSocketChannelImpl_FieldInfo_[] = {
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PROTECTED | $FINAL, $field(AsynchronousServerSocketChannelImpl, fd)},
	{"localAddress", "Ljava/net/InetSocketAddress;", nullptr, $PROTECTED | $VOLATILE, $field(AsynchronousServerSocketChannelImpl, localAddress)},
	{"stateLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(AsynchronousServerSocketChannelImpl, stateLock)},
	{"closeLock", "Ljava/util/concurrent/locks/ReadWriteLock;", nullptr, $PRIVATE, $field(AsynchronousServerSocketChannelImpl, closeLock)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AsynchronousServerSocketChannelImpl, closed)},
	{"acceptKilled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AsynchronousServerSocketChannelImpl, acceptKilled)},
	{"isReuseAddress", "Z", nullptr, $PRIVATE, $field(AsynchronousServerSocketChannelImpl, isReuseAddress)},
	{}
};

$MethodInfo _AsynchronousServerSocketChannelImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;)V", nullptr, 0, $method(static_cast<void(AsynchronousServerSocketChannelImpl::*)($AsynchronousChannelGroupImpl*)>(&AsynchronousServerSocketChannelImpl::init$))},
	{"accept", "()Ljava/util/concurrent/Future;", "()Ljava/util/concurrent/Future<Ljava/nio/channels/AsynchronousSocketChannel;>;", $PUBLIC | $FINAL},
	{"accept", "(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V", "<A:Ljava/lang/Object;>(TA;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/AsynchronousSocketChannel;-TA;>;)V", $PUBLIC | $FINAL},
	{"begin", "()V", nullptr, $FINAL, $method(static_cast<void(AsynchronousServerSocketChannelImpl::*)()>(&AsynchronousServerSocketChannelImpl::begin)), "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;I)Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"end", "()V", nullptr, $FINAL, $method(static_cast<void(AsynchronousServerSocketChannelImpl::*)()>(&AsynchronousServerSocketChannelImpl::end))},
	{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"implAccept", "(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)Ljava/util/concurrent/Future;", "(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Object;>;)Ljava/util/concurrent/Future<Ljava/nio/channels/AsynchronousSocketChannel;>;", $ABSTRACT},
	{"implClose", "()V", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"isAcceptKilled", "()Z", nullptr, $FINAL, $method(static_cast<bool(AsynchronousServerSocketChannelImpl::*)()>(&AsynchronousServerSocketChannelImpl::isAcceptKilled))},
	{"isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"onCancel", "(Lsun/nio/ch/PendingFuture;)V", "(Lsun/nio/ch/PendingFuture<**>;)V", $PUBLIC | $FINAL},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/nio/channels/AsynchronousServerSocketChannel;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)Ljava/nio/channels/AsynchronousServerSocketChannel;", $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _AsynchronousServerSocketChannelImpl_InnerClassesInfo_[] = {
	{"sun.nio.ch.AsynchronousServerSocketChannelImpl$DefaultOptionsHolder", "sun.nio.ch.AsynchronousServerSocketChannelImpl", "DefaultOptionsHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AsynchronousServerSocketChannelImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.nio.ch.AsynchronousServerSocketChannelImpl",
	"java.nio.channels.AsynchronousServerSocketChannel",
	"sun.nio.ch.Cancellable,sun.nio.ch.Groupable",
	_AsynchronousServerSocketChannelImpl_FieldInfo_,
	_AsynchronousServerSocketChannelImpl_MethodInfo_,
	nullptr,
	nullptr,
	_AsynchronousServerSocketChannelImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.AsynchronousServerSocketChannelImpl$DefaultOptionsHolder"
};

$Object* allocate$AsynchronousServerSocketChannelImpl($Class* clazz) {
	return $of($alloc(AsynchronousServerSocketChannelImpl));
}

int32_t AsynchronousServerSocketChannelImpl::hashCode() {
	 return this->$AsynchronousServerSocketChannel::hashCode();
}

bool AsynchronousServerSocketChannelImpl::equals(Object$* obj) {
	 return this->$AsynchronousServerSocketChannel::equals(obj);
}

$Object* AsynchronousServerSocketChannelImpl::clone() {
	 return this->$AsynchronousServerSocketChannel::clone();
}

void AsynchronousServerSocketChannelImpl::finalize() {
	this->$AsynchronousServerSocketChannel::finalize();
}

void AsynchronousServerSocketChannelImpl::init$($AsynchronousChannelGroupImpl* group) {
	$AsynchronousServerSocketChannel::init$($($nc(group)->provider()));
	$set(this, stateLock, $new($Object));
	$set(this, closeLock, $new($ReentrantReadWriteLock));
	$set(this, fd, $Net::serverSocket(true));
}

bool AsynchronousServerSocketChannelImpl::isOpen() {
	return !this->closed;
}

void AsynchronousServerSocketChannelImpl::begin() {
	$nc($($nc(this->closeLock)->readLock()))->lock();
	if (!isOpen()) {
		$throwNew($ClosedChannelException);
	}
}

void AsynchronousServerSocketChannelImpl::end() {
	$nc($($nc(this->closeLock)->readLock()))->unlock();
}

void AsynchronousServerSocketChannelImpl::close() {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(this->closeLock)->writeLock()))->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (this->closed) {
				return$1 = true;
				goto $finally;
			}
			this->closed = true;
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc($($nc(this->closeLock)->writeLock()))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
	implClose();
}

$Future* AsynchronousServerSocketChannelImpl::accept() {
	return implAccept(nullptr, nullptr);
}

void AsynchronousServerSocketChannelImpl::accept(Object$* attachment, $CompletionHandler* handler) {
	if (handler == nullptr) {
		$throwNew($NullPointerException, "\'handler\' is null"_s);
	}
	implAccept(attachment, handler);
}

bool AsynchronousServerSocketChannelImpl::isAcceptKilled() {
	return this->acceptKilled;
}

void AsynchronousServerSocketChannelImpl::onCancel($PendingFuture* task) {
	this->acceptKilled = true;
}

$AsynchronousServerSocketChannel* AsynchronousServerSocketChannelImpl::bind($SocketAddress* local, int32_t backlog) {
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, isa, (local == nullptr) ? $new($InetSocketAddress, 0) : $Net::checkAddress(local));
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkListen($nc(isa)->getPort());
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			begin();
			$synchronized(this->stateLock) {
				if (this->localAddress != nullptr) {
					$throwNew($AlreadyBoundException);
				}
				$var($FileDescriptor, var$1, this->fd);
				$var($InetAddress, var$2, $nc(isa)->getAddress());
				$NetHooks::beforeTcpBind(var$1, var$2, isa->getPort());
				$var($FileDescriptor, var$3, this->fd);
				$var($InetAddress, var$4, $nc(isa)->getAddress());
				$Net::bind(var$3, var$4, isa->getPort());
				$Net::listen(this->fd, backlog < 1 ? 50 : backlog);
				$set(this, localAddress, $Net::localAddress(this->fd));
			}
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			end();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this;
}

$SocketAddress* AsynchronousServerSocketChannelImpl::getLocalAddress() {
	if (!isOpen()) {
		$throwNew($ClosedChannelException);
	}
	return $Net::getRevealedLocalAddress(this->localAddress);
}

$NetworkChannel* AsynchronousServerSocketChannelImpl::setOption($SocketOption* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!$nc($(supportedOptions()))->contains(name)) {
		$throwNew($UnsupportedOperationException, $$str({"\'"_s, name, "\' not supported"_s}));
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($NetworkChannel, var$2, nullptr);
		bool return$1 = false;
		try {
			begin();
			$init($StandardSocketOptions);
			if (name == $StandardSocketOptions::SO_REUSEADDR && $Net::useExclusiveBind()) {
				this->isReuseAddress = $nc(($cast($Boolean, value)))->booleanValue();
			} else {
				$init($Net);
				$Net::setSocketOption(this->fd, $Net::UNSPEC, name, value);
			}
			$assign(var$2, this);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			end();
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

$Object* AsynchronousServerSocketChannelImpl::getOption($SocketOption* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!$nc($(supportedOptions()))->contains(name)) {
		$throwNew($UnsupportedOperationException, $$str({"\'"_s, name, "\' not supported"_s}));
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			begin();
			$init($StandardSocketOptions);
			if (name == $StandardSocketOptions::SO_REUSEADDR && $Net::useExclusiveBind()) {
				$assign(var$2, $of($Boolean::valueOf(this->isReuseAddress)));
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, $Net::getSocketOption(this->fd, $Net::UNSPEC, name));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			end();
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

$Set* AsynchronousServerSocketChannelImpl::supportedOptions() {
	$init($AsynchronousServerSocketChannelImpl$DefaultOptionsHolder);
	return $AsynchronousServerSocketChannelImpl$DefaultOptionsHolder::defaultOptions$;
}

$String* AsynchronousServerSocketChannelImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($of(this)->getClass()->getName()));
	sb->append(u'[');
	if (!isOpen()) {
		sb->append("closed"_s);
	} else if (this->localAddress == nullptr) {
		sb->append("unbound"_s);
	} else {
		sb->append($($Net::getRevealedLocalAddressAsString(this->localAddress)));
	}
	sb->append(u']');
	return sb->toString();
}

AsynchronousServerSocketChannelImpl::AsynchronousServerSocketChannelImpl() {
}

$Class* AsynchronousServerSocketChannelImpl::load$($String* name, bool initialize) {
	$loadClass(AsynchronousServerSocketChannelImpl, name, initialize, &_AsynchronousServerSocketChannelImpl_ClassInfo_, allocate$AsynchronousServerSocketChannelImpl);
	return class$;
}

$Class* AsynchronousServerSocketChannelImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun