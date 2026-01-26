#include <sun/nio/ch/SocketAdaptor.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketImpl.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Set.h>
#include <java/util/concurrent/TimeUnit.h>
#include <sun/nio/ch/DummySocketImpl.h>
#include <sun/nio/ch/ExtendedSocketOption.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/SocketAdaptor$1.h>
#include <sun/nio/ch/SocketAdaptor$2.h>
#include <sun/nio/ch/SocketChannelImpl.h>
#include <jcpp.h>

#undef IP_TOS
#undef MAX_VALUE
#undef MILLISECONDS
#undef SO_KEEPALIVE
#undef SO_LINGER
#undef SO_OOBINLINE
#undef SO_RCVBUF
#undef SO_REUSEADDR
#undef SO_SNDBUF
#undef TCP_NODELAY

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Set = ::java::util::Set;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $DummySocketImpl = ::sun::nio::ch::DummySocketImpl;
using $ExtendedSocketOption = ::sun::nio::ch::ExtendedSocketOption;
using $Net = ::sun::nio::ch::Net;
using $SocketAdaptor$1 = ::sun::nio::ch::SocketAdaptor$1;
using $SocketAdaptor$2 = ::sun::nio::ch::SocketAdaptor$2;
using $SocketChannelImpl = ::sun::nio::ch::SocketChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

class SocketAdaptor$$Lambda$lambda$create$0 : public $PrivilegedExceptionAction {
	$class(SocketAdaptor$$Lambda$lambda$create$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($SocketChannelImpl* sc) {
		$set(this, sc, sc);
	}
	virtual $Object* run() override {
		 return $of(SocketAdaptor::lambda$create$0(sc));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SocketAdaptor$$Lambda$lambda$create$0>());
	}
	$SocketChannelImpl* sc = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo SocketAdaptor$$Lambda$lambda$create$0::fieldInfos[2] = {
	{"sc", "Lsun/nio/ch/SocketChannelImpl;", nullptr, $PUBLIC, $field(SocketAdaptor$$Lambda$lambda$create$0, sc)},
	{}
};
$MethodInfo SocketAdaptor$$Lambda$lambda$create$0::methodInfos[3] = {
	{"<init>", "(Lsun/nio/ch/SocketChannelImpl;)V", nullptr, $PUBLIC, $method(SocketAdaptor$$Lambda$lambda$create$0, init$, void, $SocketChannelImpl*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor$$Lambda$lambda$create$0, run, $Object*)},
	{}
};
$ClassInfo SocketAdaptor$$Lambda$lambda$create$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.ch.SocketAdaptor$$Lambda$lambda$create$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* SocketAdaptor$$Lambda$lambda$create$0::load$($String* name, bool initialize) {
	$loadClass(SocketAdaptor$$Lambda$lambda$create$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SocketAdaptor$$Lambda$lambda$create$0::class$ = nullptr;

$FieldInfo _SocketAdaptor_FieldInfo_[] = {
	{"sc", "Lsun/nio/ch/SocketChannelImpl;", nullptr, $PRIVATE | $FINAL, $field(SocketAdaptor, sc)},
	{"timeout", "I", nullptr, $PRIVATE | $VOLATILE, $field(SocketAdaptor, timeout)},
	{}
};

$MethodInfo _SocketAdaptor_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/SocketChannelImpl;)V", nullptr, $PRIVATE, $method(SocketAdaptor, init$, void, $SocketChannelImpl*), "java.net.SocketException"},
	{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, bind, void, $SocketAddress*), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, close, void), "java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, connect, void, $SocketAddress*), "java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;I)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, connect, void, $SocketAddress*, int32_t), "java.io.IOException"},
	{"create", "(Lsun/nio/ch/SocketChannelImpl;)Ljava/net/Socket;", nullptr, $STATIC, $staticMethod(SocketAdaptor, create, $Socket*, $SocketChannelImpl*)},
	{"getBooleanOption", "(Ljava/net/SocketOption;)Z", "(Ljava/net/SocketOption<Ljava/lang/Boolean;>;)Z", $PRIVATE, $method(SocketAdaptor, getBooleanOption, bool, $SocketOption*), "java.net.SocketException"},
	{"getChannel", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getChannel, $SocketChannel*)},
	{"getInetAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getInetAddress, $InetAddress*)},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getInputStream, $InputStream*), "java.io.IOException"},
	{"getIntOption", "(Ljava/net/SocketOption;)I", "(Ljava/net/SocketOption<Ljava/lang/Integer;>;)I", $PRIVATE, $method(SocketAdaptor, getIntOption, int32_t, $SocketOption*), "java.net.SocketException"},
	{"getKeepAlive", "()Z", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getKeepAlive, bool), "java.net.SocketException"},
	{"getLocalAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getLocalAddress, $InetAddress*)},
	{"getLocalPort", "()I", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getLocalPort, int32_t)},
	{"getLocalSocketAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getLocalSocketAddress, $SocketAddress*)},
	{"getOOBInline", "()Z", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getOOBInline, bool), "java.net.SocketException"},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC, $virtualMethod(SocketAdaptor, getOption, $Object*, $SocketOption*), "java.io.IOException"},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getOutputStream, $OutputStream*), "java.io.IOException"},
	{"getPort", "()I", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getPort, int32_t)},
	{"getReceiveBufferSize", "()I", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getReceiveBufferSize, int32_t), "java.net.SocketException"},
	{"getRemoteSocketAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getRemoteSocketAddress, $SocketAddress*)},
	{"getReuseAddress", "()Z", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getReuseAddress, bool), "java.net.SocketException"},
	{"getSendBufferSize", "()I", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getSendBufferSize, int32_t), "java.net.SocketException"},
	{"getSoLinger", "()I", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getSoLinger, int32_t), "java.net.SocketException"},
	{"getSoTimeout", "()I", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getSoTimeout, int32_t), "java.net.SocketException"},
	{"getTcpNoDelay", "()Z", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getTcpNoDelay, bool), "java.net.SocketException"},
	{"getTrafficClass", "()I", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, getTrafficClass, int32_t), "java.net.SocketException"},
	{"isBound", "()Z", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, isBound, bool)},
	{"isClosed", "()Z", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, isClosed, bool)},
	{"isConnected", "()Z", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, isConnected, bool)},
	{"isInputShutdown", "()Z", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, isInputShutdown, bool)},
	{"isOutputShutdown", "()Z", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, isOutputShutdown, bool)},
	{"lambda$create$0", "(Lsun/nio/ch/SocketChannelImpl;)Ljava/net/Socket;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SocketAdaptor, lambda$create$0, $Socket*, $SocketChannelImpl*), "java.lang.Exception"},
	{"localAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PRIVATE, $method(SocketAdaptor, localAddress, $InetSocketAddress*)},
	{"remoteAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PRIVATE, $method(SocketAdaptor, remoteAddress, $InetSocketAddress*)},
	{"sendUrgentData", "(I)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, sendUrgentData, void, int32_t), "java.io.IOException"},
	{"setBooleanOption", "(Ljava/net/SocketOption;Z)V", "(Ljava/net/SocketOption<Ljava/lang/Boolean;>;Z)V", $PRIVATE, $method(SocketAdaptor, setBooleanOption, void, $SocketOption*, bool), "java.net.SocketException"},
	{"setIntOption", "(Ljava/net/SocketOption;I)V", "(Ljava/net/SocketOption<Ljava/lang/Integer;>;I)V", $PRIVATE, $method(SocketAdaptor, setIntOption, void, $SocketOption*, int32_t), "java.net.SocketException"},
	{"setKeepAlive", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, setKeepAlive, void, bool), "java.net.SocketException"},
	{"setOOBInline", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, setOOBInline, void, bool), "java.net.SocketException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/Socket;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)Ljava/net/Socket;", $PUBLIC, $virtualMethod(SocketAdaptor, setOption, $Socket*, $SocketOption*, Object$*), "java.io.IOException"},
	{"setReceiveBufferSize", "(I)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, setReceiveBufferSize, void, int32_t), "java.net.SocketException"},
	{"setReuseAddress", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, setReuseAddress, void, bool), "java.net.SocketException"},
	{"setSendBufferSize", "(I)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, setSendBufferSize, void, int32_t), "java.net.SocketException"},
	{"setSoLinger", "(ZI)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, setSoLinger, void, bool, int32_t), "java.net.SocketException"},
	{"setSoTimeout", "(I)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, setSoTimeout, void, int32_t), "java.net.SocketException"},
	{"setTcpNoDelay", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, setTcpNoDelay, void, bool), "java.net.SocketException"},
	{"setTrafficClass", "(I)V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, setTrafficClass, void, int32_t), "java.net.SocketException"},
	{"shutdownInput", "()V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, shutdownInput, void), "java.io.IOException"},
	{"shutdownOutput", "()V", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, shutdownOutput, void), "java.io.IOException"},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC, $virtualMethod(SocketAdaptor, supportedOptions, $Set*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SocketAdaptor, toString, $String*)},
	{}
};

$InnerClassInfo _SocketAdaptor_InnerClassesInfo_[] = {
	{"sun.nio.ch.SocketAdaptor$2", nullptr, nullptr, 0},
	{"sun.nio.ch.SocketAdaptor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SocketAdaptor_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.SocketAdaptor",
	"java.net.Socket",
	nullptr,
	_SocketAdaptor_FieldInfo_,
	_SocketAdaptor_MethodInfo_,
	nullptr,
	nullptr,
	_SocketAdaptor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.SocketAdaptor$2,sun.nio.ch.SocketAdaptor$1"
};

$Object* allocate$SocketAdaptor($Class* clazz) {
	return $of($alloc(SocketAdaptor));
}

void SocketAdaptor::init$($SocketChannelImpl* sc) {
	$Socket::init$($($DummySocketImpl::create()));
	$set(this, sc, sc);
}

$Socket* SocketAdaptor::create($SocketChannelImpl* sc) {
	$init(SocketAdaptor);
	$beforeCallerSensitive();
	$var($PrivilegedExceptionAction, pa, static_cast<$PrivilegedExceptionAction*>($new(SocketAdaptor$$Lambda$lambda$create$0, sc)));
	try {
		return $cast($Socket, $AccessController::doPrivileged(pa));
	} catch ($PrivilegedActionException& pae) {
		$throwNew($InternalError, "Should not reach here"_s, pae);
	}
	$shouldNotReachHere();
}

$InetSocketAddress* SocketAdaptor::localAddress() {
	return $cast($InetSocketAddress, $nc(this->sc)->localAddress());
}

$InetSocketAddress* SocketAdaptor::remoteAddress() {
	return $cast($InetSocketAddress, $nc(this->sc)->remoteAddress());
}

void SocketAdaptor::connect($SocketAddress* remote) {
	connect(remote, 0);
}

void SocketAdaptor::connect($SocketAddress* remote, int32_t timeout) {
	if (remote == nullptr) {
		$throwNew($IllegalArgumentException, "connect: The address can\'t be null"_s);
	}
	if (timeout < 0) {
		$throwNew($IllegalArgumentException, "connect: timeout can\'t be negative"_s);
	}
	try {
		if (timeout > 0) {
			$init($TimeUnit);
			int64_t nanos = $TimeUnit::MILLISECONDS->toNanos(timeout);
			$nc(this->sc)->blockingConnect(remote, nanos);
		} else {
			$nc(this->sc)->blockingConnect(remote, $Long::MAX_VALUE);
		}
	} catch ($Exception& e) {
		$Net::translateException(e, true);
	}
}

void SocketAdaptor::bind($SocketAddress* local) {
	try {
		$nc(this->sc)->bind(local);
	} catch ($Exception& x) {
		$Net::translateException(x);
	}
}

$InetAddress* SocketAdaptor::getInetAddress() {
	$var($InetSocketAddress, remote, remoteAddress());
	if (remote == nullptr) {
		return nullptr;
	} else {
		return $nc(remote)->getAddress();
	}
}

$InetAddress* SocketAdaptor::getLocalAddress() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->sc)->isOpen()) {
		$var($InetSocketAddress, local, localAddress());
		if (local != nullptr) {
			return $nc($($Net::getRevealedLocalAddress(local)))->getAddress();
		}
	}
	return $$new($InetSocketAddress, 0)->getAddress();
}

int32_t SocketAdaptor::getPort() {
	$var($InetSocketAddress, remote, remoteAddress());
	if (remote == nullptr) {
		return 0;
	} else {
		return $nc(remote)->getPort();
	}
}

int32_t SocketAdaptor::getLocalPort() {
	$var($InetSocketAddress, local, localAddress());
	if (local == nullptr) {
		return -1;
	} else {
		return $nc(local)->getPort();
	}
}

$SocketAddress* SocketAdaptor::getRemoteSocketAddress() {
	return $nc(this->sc)->remoteAddress();
}

$SocketAddress* SocketAdaptor::getLocalSocketAddress() {
	return $Net::getRevealedLocalAddress($($nc(this->sc)->localAddress()));
}

$SocketChannel* SocketAdaptor::getChannel() {
	return this->sc;
}

$InputStream* SocketAdaptor::getInputStream() {
	if (!$nc(this->sc)->isOpen()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	if (!$nc(this->sc)->isConnected()) {
		$throwNew($SocketException, "Socket is not connected"_s);
	}
	if (!$nc(this->sc)->isInputOpen()) {
		$throwNew($SocketException, "Socket input is shutdown"_s);
	}
	return $new($SocketAdaptor$1, this);
}

$OutputStream* SocketAdaptor::getOutputStream() {
	if (!$nc(this->sc)->isOpen()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	if (!$nc(this->sc)->isConnected()) {
		$throwNew($SocketException, "Socket is not connected"_s);
	}
	if (!$nc(this->sc)->isOutputOpen()) {
		$throwNew($SocketException, "Socket output is shutdown"_s);
	}
	return $new($SocketAdaptor$2, this);
}

void SocketAdaptor::setBooleanOption($SocketOption* name, bool value) {
	try {
		$nc(this->sc)->setOption(name, $($Boolean::valueOf(value)));
	} catch ($IOException& x) {
		$Net::translateToSocketException(x);
	}
}

void SocketAdaptor::setIntOption($SocketOption* name, int32_t value) {
	try {
		$nc(this->sc)->setOption(name, $($Integer::valueOf(value)));
	} catch ($IOException& x) {
		$Net::translateToSocketException(x);
	}
}

bool SocketAdaptor::getBooleanOption($SocketOption* name) {
	try {
		return $nc(($cast($Boolean, $($nc(this->sc)->getOption(name)))))->booleanValue();
	} catch ($IOException& x) {
		$Net::translateToSocketException(x);
		return false;
	}
	$shouldNotReachHere();
}

int32_t SocketAdaptor::getIntOption($SocketOption* name) {
	try {
		return $nc(($cast($Integer, $($nc(this->sc)->getOption(name)))))->intValue();
	} catch ($IOException& x) {
		$Net::translateToSocketException(x);
		return -1;
	}
	$shouldNotReachHere();
}

void SocketAdaptor::setTcpNoDelay(bool on) {
	$init($StandardSocketOptions);
	setBooleanOption($StandardSocketOptions::TCP_NODELAY, on);
}

bool SocketAdaptor::getTcpNoDelay() {
	$init($StandardSocketOptions);
	return getBooleanOption($StandardSocketOptions::TCP_NODELAY);
}

void SocketAdaptor::setSoLinger(bool on, int32_t linger) {
	if (!on) {
		linger = -1;
	}
	$init($StandardSocketOptions);
	setIntOption($StandardSocketOptions::SO_LINGER, linger);
}

int32_t SocketAdaptor::getSoLinger() {
	$init($StandardSocketOptions);
	return getIntOption($StandardSocketOptions::SO_LINGER);
}

void SocketAdaptor::sendUrgentData(int32_t data) {
	int32_t n = $nc(this->sc)->sendOutOfBandData((int8_t)data);
	if (n == 0) {
		$throwNew($IOException, "Socket buffer full"_s);
	}
}

void SocketAdaptor::setOOBInline(bool on) {
	$init($ExtendedSocketOption);
	setBooleanOption($ExtendedSocketOption::SO_OOBINLINE, on);
}

bool SocketAdaptor::getOOBInline() {
	$init($ExtendedSocketOption);
	return getBooleanOption($ExtendedSocketOption::SO_OOBINLINE);
}

void SocketAdaptor::setSoTimeout(int32_t timeout) {
	if (!$nc(this->sc)->isOpen()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	if (timeout < 0) {
		$throwNew($IllegalArgumentException, "timeout < 0"_s);
	}
	this->timeout = timeout;
}

int32_t SocketAdaptor::getSoTimeout() {
	if (!$nc(this->sc)->isOpen()) {
		$throwNew($SocketException, "Socket is closed"_s);
	}
	return this->timeout;
}

void SocketAdaptor::setSendBufferSize(int32_t size) {
	if (size <= 0) {
		$throwNew($IllegalArgumentException, "Invalid send size"_s);
	}
	$init($StandardSocketOptions);
	setIntOption($StandardSocketOptions::SO_SNDBUF, size);
}

int32_t SocketAdaptor::getSendBufferSize() {
	$init($StandardSocketOptions);
	return getIntOption($StandardSocketOptions::SO_SNDBUF);
}

void SocketAdaptor::setReceiveBufferSize(int32_t size) {
	if (size <= 0) {
		$throwNew($IllegalArgumentException, "Invalid receive size"_s);
	}
	$init($StandardSocketOptions);
	setIntOption($StandardSocketOptions::SO_RCVBUF, size);
}

int32_t SocketAdaptor::getReceiveBufferSize() {
	$init($StandardSocketOptions);
	return getIntOption($StandardSocketOptions::SO_RCVBUF);
}

void SocketAdaptor::setKeepAlive(bool on) {
	$init($StandardSocketOptions);
	setBooleanOption($StandardSocketOptions::SO_KEEPALIVE, on);
}

bool SocketAdaptor::getKeepAlive() {
	$init($StandardSocketOptions);
	return getBooleanOption($StandardSocketOptions::SO_KEEPALIVE);
}

void SocketAdaptor::setTrafficClass(int32_t tc) {
	$init($StandardSocketOptions);
	setIntOption($StandardSocketOptions::IP_TOS, tc);
}

int32_t SocketAdaptor::getTrafficClass() {
	$init($StandardSocketOptions);
	return getIntOption($StandardSocketOptions::IP_TOS);
}

void SocketAdaptor::setReuseAddress(bool on) {
	$init($StandardSocketOptions);
	setBooleanOption($StandardSocketOptions::SO_REUSEADDR, on);
}

bool SocketAdaptor::getReuseAddress() {
	$init($StandardSocketOptions);
	return getBooleanOption($StandardSocketOptions::SO_REUSEADDR);
}

void SocketAdaptor::close() {
	$nc(this->sc)->close();
}

void SocketAdaptor::shutdownInput() {
	try {
		$nc(this->sc)->shutdownInput();
	} catch ($Exception& x) {
		$Net::translateException(x);
	}
}

void SocketAdaptor::shutdownOutput() {
	try {
		$nc(this->sc)->shutdownOutput();
	} catch ($Exception& x) {
		$Net::translateException(x);
	}
}

$String* SocketAdaptor::toString() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->sc)->isConnected()) {
		$var($String, var$3, $$str({"Socket[addr="_s, $(getInetAddress()), ",port="_s}));
		$var($String, var$2, $$concat(var$3, $$str(getPort())));
		$var($String, var$1, $$concat(var$2, ",localport="_s));
		$var($String, var$0, $$concat(var$1, $$str(getLocalPort())));
		return $concat(var$0, "]"_s);
	}
	return "Socket[unconnected]"_s;
}

bool SocketAdaptor::isConnected() {
	return $nc(this->sc)->isConnected();
}

bool SocketAdaptor::isBound() {
	return $nc(this->sc)->localAddress() != nullptr;
}

bool SocketAdaptor::isClosed() {
	return !$nc(this->sc)->isOpen();
}

bool SocketAdaptor::isInputShutdown() {
	return !$nc(this->sc)->isInputOpen();
}

bool SocketAdaptor::isOutputShutdown() {
	return !$nc(this->sc)->isOutputOpen();
}

$Socket* SocketAdaptor::setOption($SocketOption* name, Object$* value) {
	$nc(this->sc)->setOption(name, value);
	return this;
}

$Object* SocketAdaptor::getOption($SocketOption* name) {
	return $of($nc(this->sc)->getOption(name));
}

$Set* SocketAdaptor::supportedOptions() {
	return $nc(this->sc)->supportedOptions();
}

$Socket* SocketAdaptor::lambda$create$0($SocketChannelImpl* sc) {
	$init(SocketAdaptor);
	return $new(SocketAdaptor, sc);
}

SocketAdaptor::SocketAdaptor() {
}

$Class* SocketAdaptor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SocketAdaptor$$Lambda$lambda$create$0::classInfo$.name)) {
			return SocketAdaptor$$Lambda$lambda$create$0::load$(name, initialize);
		}
	}
	$loadClass(SocketAdaptor, name, initialize, &_SocketAdaptor_ClassInfo_, allocate$SocketAdaptor);
	return class$;
}

$Class* SocketAdaptor::class$ = nullptr;

		} // ch
	} // nio
} // sun