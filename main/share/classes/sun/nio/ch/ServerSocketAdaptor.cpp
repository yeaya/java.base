#include <sun/nio/ch/ServerSocketAdaptor.h>

#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketImpl.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/nio/channels/IllegalBlockingModeException.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Set.h>
#include <java/util/concurrent/TimeUnit.h>
#include <sun/nio/ch/DummySocketImpl.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/ServerSocketChannelImpl.h>
#include <jcpp.h>

#undef MILLISECONDS
#undef SO_RCVBUF
#undef SO_REUSEADDR

using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $IllegalBlockingModeException = ::java::nio::channels::IllegalBlockingModeException;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Set = ::java::util::Set;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $DummySocketImpl = ::sun::nio::ch::DummySocketImpl;
using $Net = ::sun::nio::ch::Net;
using $ServerSocketChannelImpl = ::sun::nio::ch::ServerSocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

class ServerSocketAdaptor$$Lambda$lambda$create$0 : public $PrivilegedExceptionAction {
	$class(ServerSocketAdaptor$$Lambda$lambda$create$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($ServerSocketChannelImpl* ssc) {
		$set(this, ssc, ssc);
	}
	virtual $Object* run() override {
		 return $of(ServerSocketAdaptor::lambda$create$0(ssc));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ServerSocketAdaptor$$Lambda$lambda$create$0>());
	}
	$ServerSocketChannelImpl* ssc = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ServerSocketAdaptor$$Lambda$lambda$create$0::fieldInfos[2] = {
	{"ssc", "Lsun/nio/ch/ServerSocketChannelImpl;", nullptr, $PUBLIC, $field(ServerSocketAdaptor$$Lambda$lambda$create$0, ssc)},
	{}
};
$MethodInfo ServerSocketAdaptor$$Lambda$lambda$create$0::methodInfos[3] = {
	{"<init>", "(Lsun/nio/ch/ServerSocketChannelImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(ServerSocketAdaptor$$Lambda$lambda$create$0::*)($ServerSocketChannelImpl*)>(&ServerSocketAdaptor$$Lambda$lambda$create$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ServerSocketAdaptor$$Lambda$lambda$create$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.ch.ServerSocketAdaptor$$Lambda$lambda$create$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* ServerSocketAdaptor$$Lambda$lambda$create$0::load$($String* name, bool initialize) {
	$loadClass(ServerSocketAdaptor$$Lambda$lambda$create$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ServerSocketAdaptor$$Lambda$lambda$create$0::class$ = nullptr;

$FieldInfo _ServerSocketAdaptor_FieldInfo_[] = {
	{"ssc", "Lsun/nio/ch/ServerSocketChannelImpl;", nullptr, $PRIVATE | $FINAL, $field(ServerSocketAdaptor, ssc)},
	{"timeout", "I", nullptr, $PRIVATE | $VOLATILE, $field(ServerSocketAdaptor, timeout)},
	{}
};

$MethodInfo _ServerSocketAdaptor_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/ServerSocketChannelImpl;)V", nullptr, $PRIVATE, $method(static_cast<void(ServerSocketAdaptor::*)($ServerSocketChannelImpl*)>(&ServerSocketAdaptor::init$))},
	{"accept", "()Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"bind", "(Ljava/net/SocketAddress;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"create", "(Lsun/nio/ch/ServerSocketChannelImpl;)Ljava/net/ServerSocket;", nullptr, $STATIC, $method(static_cast<$ServerSocket*(*)($ServerSocketChannelImpl*)>(&ServerSocketAdaptor::create))},
	{"getChannel", "()Ljava/nio/channels/ServerSocketChannel;", nullptr, $PUBLIC},
	{"getInetAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC},
	{"getLocalPort", "()I", nullptr, $PUBLIC},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getReceiveBufferSize", "()I", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"getReuseAddress", "()Z", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"getSoTimeout", "()I", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"isBound", "()Z", nullptr, $PUBLIC},
	{"isClosed", "()Z", nullptr, $PUBLIC},
	{"lambda$create$0", "(Lsun/nio/ch/ServerSocketChannelImpl;)Ljava/net/ServerSocket;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ServerSocket*(*)($ServerSocketChannelImpl*)>(&ServerSocketAdaptor::lambda$create$0)), "java.lang.Exception"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/ServerSocket;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)Ljava/net/ServerSocket;", $PUBLIC, nullptr, "java.io.IOException"},
	{"setReceiveBufferSize", "(I)V", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"setReuseAddress", "(Z)V", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"setSoTimeout", "(I)V", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ServerSocketAdaptor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.ServerSocketAdaptor",
	"java.net.ServerSocket",
	nullptr,
	_ServerSocketAdaptor_FieldInfo_,
	_ServerSocketAdaptor_MethodInfo_
};

$Object* allocate$ServerSocketAdaptor($Class* clazz) {
	return $of($alloc(ServerSocketAdaptor));
}

$ServerSocket* ServerSocketAdaptor::create($ServerSocketChannelImpl* ssc) {
	$init(ServerSocketAdaptor);
	$beforeCallerSensitive();
	$var($PrivilegedExceptionAction, pa, static_cast<$PrivilegedExceptionAction*>($new(ServerSocketAdaptor$$Lambda$lambda$create$0, ssc)));
	try {
		return $cast($ServerSocket, $AccessController::doPrivileged(pa));
	} catch ($PrivilegedActionException& pae) {
		$throwNew($InternalError, "Should not reach here"_s, pae);
	}
	$shouldNotReachHere();
}

void ServerSocketAdaptor::init$($ServerSocketChannelImpl* ssc) {
	$ServerSocket::init$($($DummySocketImpl::create()));
	$set(this, ssc, ssc);
}

void ServerSocketAdaptor::bind($SocketAddress* local) {
	bind(local, 50);
}

void ServerSocketAdaptor::bind($SocketAddress* local$renamed, int32_t backlog) {
	$var($SocketAddress, local, local$renamed);
	if (local == nullptr) {
		$assign(local, $new($InetSocketAddress, 0));
	}
	try {
		$nc(this->ssc)->bind(local, backlog);
	} catch ($Exception& x) {
		$Net::translateException(x);
	}
}

$InetAddress* ServerSocketAdaptor::getInetAddress() {
	$useLocalCurrentObjectStackCache();
	$var($SocketAddress, local, $nc(this->ssc)->localAddress());
	if (local == nullptr) {
		return nullptr;
	} else {
		return $nc($($Net::getRevealedLocalAddress(local)))->getAddress();
	}
}

int32_t ServerSocketAdaptor::getLocalPort() {
	$var($InetSocketAddress, local, $cast($InetSocketAddress, $nc(this->ssc)->localAddress()));
	if (local == nullptr) {
		return -1;
	} else {
		return $nc(local)->getPort();
	}
}

$Socket* ServerSocketAdaptor::accept() {
	$var($SocketChannel, sc, nullptr);
	try {
		int32_t timeout = this->timeout;
		if (timeout > 0) {
			$init($TimeUnit);
			int64_t nanos = $TimeUnit::MILLISECONDS->toNanos(timeout);
			$assign(sc, $nc(this->ssc)->blockingAccept(nanos));
		} else {
			$assign(sc, $nc(this->ssc)->accept());
			if (sc == nullptr) {
				$throwNew($IllegalBlockingModeException);
			}
		}
	} catch ($Exception& e) {
		$Net::translateException(e);
	}
	return $nc(sc)->socket();
}

void ServerSocketAdaptor::close() {
	$nc(this->ssc)->close();
}

$ServerSocketChannel* ServerSocketAdaptor::getChannel() {
	return this->ssc;
}

bool ServerSocketAdaptor::isBound() {
	return $nc(this->ssc)->isBound();
}

bool ServerSocketAdaptor::isClosed() {
	return !$nc(this->ssc)->isOpen();
}

void ServerSocketAdaptor::setSoTimeout(int32_t timeout) {
	if (!$nc(this->ssc)->isOpen()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	if (timeout < 0) {
		$throwNew($IllegalArgumentException, "timeout < 0"_s);
	}
	this->timeout = timeout;
}

int32_t ServerSocketAdaptor::getSoTimeout() {
	if (!$nc(this->ssc)->isOpen()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	return this->timeout;
}

void ServerSocketAdaptor::setReuseAddress(bool on) {
	try {
		$init($StandardSocketOptions);
		$nc(this->ssc)->setOption($StandardSocketOptions::SO_REUSEADDR, $($Boolean::valueOf(on)));
	} catch ($IOException& x) {
		$Net::translateToSocketException(x);
	}
}

bool ServerSocketAdaptor::getReuseAddress() {
	try {
		$init($StandardSocketOptions);
		return $nc(($cast($Boolean, $($nc(this->ssc)->getOption($StandardSocketOptions::SO_REUSEADDR)))))->booleanValue();
	} catch ($IOException& x) {
		$Net::translateToSocketException(x);
		return false;
	}
	$shouldNotReachHere();
}

$String* ServerSocketAdaptor::toString() {
	$useLocalCurrentObjectStackCache();
	if (!isBound()) {
		return "ServerSocket[unbound]"_s;
	}
	$var($String, var$1, $$str({"ServerSocket[addr="_s, $(getInetAddress()), ",localport="_s}));
	$var($String, var$0, $$concat(var$1, $$str(getLocalPort())));
	return $concat(var$0, "]"_s);
}

void ServerSocketAdaptor::setReceiveBufferSize(int32_t size) {
	if (size <= 0) {
		$throwNew($IllegalArgumentException, "size cannot be 0 or negative"_s);
	}
	try {
		$init($StandardSocketOptions);
		$nc(this->ssc)->setOption($StandardSocketOptions::SO_RCVBUF, $($Integer::valueOf(size)));
	} catch ($IOException& x) {
		$Net::translateToSocketException(x);
	}
}

int32_t ServerSocketAdaptor::getReceiveBufferSize() {
	try {
		$init($StandardSocketOptions);
		return $nc(($cast($Integer, $($nc(this->ssc)->getOption($StandardSocketOptions::SO_RCVBUF)))))->intValue();
	} catch ($IOException& x) {
		$Net::translateToSocketException(x);
		return -1;
	}
	$shouldNotReachHere();
}

$ServerSocket* ServerSocketAdaptor::setOption($SocketOption* name, Object$* value) {
	$nc(this->ssc)->setOption(name, value);
	return this;
}

$Object* ServerSocketAdaptor::getOption($SocketOption* name) {
	return $of($nc(this->ssc)->getOption(name));
}

$Set* ServerSocketAdaptor::supportedOptions() {
	return $nc(this->ssc)->supportedOptions();
}

$ServerSocket* ServerSocketAdaptor::lambda$create$0($ServerSocketChannelImpl* ssc) {
	$init(ServerSocketAdaptor);
	return $new(ServerSocketAdaptor, ssc);
}

ServerSocketAdaptor::ServerSocketAdaptor() {
}

$Class* ServerSocketAdaptor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ServerSocketAdaptor$$Lambda$lambda$create$0::classInfo$.name)) {
			return ServerSocketAdaptor$$Lambda$lambda$create$0::load$(name, initialize);
		}
	}
	$loadClass(ServerSocketAdaptor, name, initialize, &_ServerSocketAdaptor_ClassInfo_, allocate$ServerSocketAdaptor);
	return class$;
}

$Class* ServerSocketAdaptor::class$ = nullptr;

		} // ch
	} // nio
} // sun