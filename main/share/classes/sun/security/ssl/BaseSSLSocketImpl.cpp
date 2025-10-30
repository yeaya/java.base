#include <sun/security/ssl/BaseSSLSocketImpl.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/SequenceInputStream.h>
#include <java/net/InetAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketOption.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/Set.h>
#include <javax/net/ssl/SSLSocket.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef PROP_NAME

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $SequenceInputStream = ::java::io::SequenceInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $SocketOption = ::java::net::SocketOption;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Set = ::java::util::Set;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _BaseSSLSocketImpl_FieldInfo_[] = {
	{"self", "Ljava/net/Socket;", nullptr, $PRIVATE | $FINAL, $field(BaseSSLSocketImpl, self)},
	{"consumedInput", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(BaseSSLSocketImpl, consumedInput)},
	{"PROP_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BaseSSLSocketImpl, PROP_NAME)},
	{"requireCloseNotify", "Z", nullptr, $STATIC | $FINAL, $staticField(BaseSSLSocketImpl, requireCloseNotify)},
	{}
};

$MethodInfo _BaseSSLSocketImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BaseSSLSocketImpl::*)()>(&BaseSSLSocketImpl::init$))},
	{"<init>", "(Ljava/net/Socket;)V", nullptr, 0, $method(static_cast<void(BaseSSLSocketImpl::*)($Socket*)>(&BaseSSLSocketImpl::init$))},
	{"<init>", "(Ljava/net/Socket;Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(BaseSSLSocketImpl::*)($Socket*,$InputStream*)>(&BaseSSLSocketImpl::init$))},
	{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"connect", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED | $FINAL, nullptr, "java.lang.Throwable"},
	{"getChannel", "()Ljava/nio/channels/SocketChannel;", nullptr, $PUBLIC | $FINAL},
	{"getInetAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $FINAL},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getKeepAlive", "()Z", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"getLocalAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC | $FINAL},
	{"getLocalPort", "()I", nullptr, $PUBLIC | $FINAL},
	{"getLocalSocketAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC},
	{"getOOBInline", "()Z", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPort", "()I", nullptr, $PUBLIC | $FINAL},
	{"getReceiveBufferSize", "()I", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"getRemoteSocketAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC},
	{"getReuseAddress", "()Z", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"getSendBufferSize", "()I", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"getSoLinger", "()I", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"getSoTimeout", "()I", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"getTcpNoDelay", "()Z", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"getTrafficClass", "()I", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"isBound", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isConnected", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isInputShutdown", "()Z", nullptr, $PUBLIC},
	{"isLayered", "()Z", nullptr, 0},
	{"isOutputShutdown", "()Z", nullptr, $PUBLIC},
	{"sendUrgentData", "(I)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"setKeepAlive", "(Z)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"setOOBInline", "(Z)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)Ljava/net/Socket;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)Ljava/net/Socket;", $PUBLIC, nullptr, "java.io.IOException"},
	{"setPerformancePreferences", "(III)V", nullptr, $PUBLIC},
	{"setReceiveBufferSize", "(I)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"setReuseAddress", "(Z)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"setSendBufferSize", "(I)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"setSoLinger", "(ZI)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"setSoTimeout", "(I)V", nullptr, $PUBLIC, nullptr, "java.net.SocketException"},
	{"setTcpNoDelay", "(Z)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"setTrafficClass", "(I)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.net.SocketException"},
	{"shutdownInput", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"shutdownOutput", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BaseSSLSocketImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.BaseSSLSocketImpl",
	"javax.net.ssl.SSLSocket",
	nullptr,
	_BaseSSLSocketImpl_FieldInfo_,
	_BaseSSLSocketImpl_MethodInfo_
};

$Object* allocate$BaseSSLSocketImpl($Class* clazz) {
	return $of($alloc(BaseSSLSocketImpl));
}

$String* BaseSSLSocketImpl::PROP_NAME = nullptr;
bool BaseSSLSocketImpl::requireCloseNotify = false;

void BaseSSLSocketImpl::init$() {
	$SSLSocket::init$();
	$set(this, self, this);
	$set(this, consumedInput, nullptr);
}

void BaseSSLSocketImpl::init$($Socket* socket) {
	$SSLSocket::init$();
	$set(this, self, socket);
	$set(this, consumedInput, nullptr);
}

void BaseSSLSocketImpl::init$($Socket* socket, $InputStream* consumed) {
	$SSLSocket::init$();
	$set(this, self, socket);
	$set(this, consumedInput, consumed);
}

$SocketChannel* BaseSSLSocketImpl::getChannel() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getChannel();
	} else {
		return $nc(this->self)->getChannel();
	}
}

void BaseSSLSocketImpl::bind($SocketAddress* bindpoint) {
	if ($equals(this->self, this)) {
		$SSLSocket::bind(bindpoint);
	} else {
		$throwNew($IOException, "Underlying socket should already be connected"_s);
	}
}

$SocketAddress* BaseSSLSocketImpl::getLocalSocketAddress() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getLocalSocketAddress();
	} else {
		return $nc(this->self)->getLocalSocketAddress();
	}
}

$SocketAddress* BaseSSLSocketImpl::getRemoteSocketAddress() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getRemoteSocketAddress();
	} else {
		return $nc(this->self)->getRemoteSocketAddress();
	}
}

void BaseSSLSocketImpl::connect($SocketAddress* endpoint) {
	connect(endpoint, 0);
}

bool BaseSSLSocketImpl::isConnected() {
	if ($equals(this->self, this)) {
		return $SSLSocket::isConnected();
	} else {
		return $nc(this->self)->isConnected();
	}
}

bool BaseSSLSocketImpl::isBound() {
	if ($equals(this->self, this)) {
		return $SSLSocket::isBound();
	} else {
		return $nc(this->self)->isBound();
	}
}

void BaseSSLSocketImpl::shutdownInput() {
	if ($equals(this->self, this)) {
		$SSLSocket::shutdownInput();
	} else {
		$nc(this->self)->shutdownInput();
	}
}

void BaseSSLSocketImpl::shutdownOutput() {
	if ($equals(this->self, this)) {
		$SSLSocket::shutdownOutput();
	} else {
		$nc(this->self)->shutdownOutput();
	}
}

bool BaseSSLSocketImpl::isInputShutdown() {
	if ($equals(this->self, this)) {
		return $SSLSocket::isInputShutdown();
	} else {
		return $nc(this->self)->isInputShutdown();
	}
}

bool BaseSSLSocketImpl::isOutputShutdown() {
	if ($equals(this->self, this)) {
		return $SSLSocket::isOutputShutdown();
	} else {
		return $nc(this->self)->isOutputShutdown();
	}
}

void BaseSSLSocketImpl::finalize() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				close();
			} catch ($IOException& e1) {
				try {
					if ($equals(this->self, this)) {
						$SSLSocket::close();
					}
				} catch ($IOException& e2) {
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SSLSocket::finalize();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$InetAddress* BaseSSLSocketImpl::getInetAddress() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getInetAddress();
	} else {
		return $nc(this->self)->getInetAddress();
	}
}

$InetAddress* BaseSSLSocketImpl::getLocalAddress() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getLocalAddress();
	} else {
		return $nc(this->self)->getLocalAddress();
	}
}

int32_t BaseSSLSocketImpl::getPort() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getPort();
	} else {
		return $nc(this->self)->getPort();
	}
}

int32_t BaseSSLSocketImpl::getLocalPort() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getLocalPort();
	} else {
		return $nc(this->self)->getLocalPort();
	}
}

void BaseSSLSocketImpl::setTcpNoDelay(bool value) {
	if ($equals(this->self, this)) {
		$SSLSocket::setTcpNoDelay(value);
	} else {
		$nc(this->self)->setTcpNoDelay(value);
	}
}

bool BaseSSLSocketImpl::getTcpNoDelay() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getTcpNoDelay();
	} else {
		return $nc(this->self)->getTcpNoDelay();
	}
}

void BaseSSLSocketImpl::setSoLinger(bool flag, int32_t linger) {
	if ($equals(this->self, this)) {
		$SSLSocket::setSoLinger(flag, linger);
	} else {
		$nc(this->self)->setSoLinger(flag, linger);
	}
}

int32_t BaseSSLSocketImpl::getSoLinger() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getSoLinger();
	} else {
		return $nc(this->self)->getSoLinger();
	}
}

void BaseSSLSocketImpl::sendUrgentData(int32_t data) {
	$throwNew($SocketException, "This method is not supported by SSLSockets"_s);
}

void BaseSSLSocketImpl::setOOBInline(bool on) {
	$throwNew($SocketException, "This method is ineffective, since sending urgent data is not supported by SSLSockets"_s);
}

bool BaseSSLSocketImpl::getOOBInline() {
	$throwNew($SocketException, "This method is ineffective, since sending urgent data is not supported by SSLSockets"_s);
	$shouldNotReachHere();
}

int32_t BaseSSLSocketImpl::getSoTimeout() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getSoTimeout();
	} else {
		return $nc(this->self)->getSoTimeout();
	}
}

void BaseSSLSocketImpl::setSendBufferSize(int32_t size) {
	if ($equals(this->self, this)) {
		$SSLSocket::setSendBufferSize(size);
	} else {
		$nc(this->self)->setSendBufferSize(size);
	}
}

int32_t BaseSSLSocketImpl::getSendBufferSize() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getSendBufferSize();
	} else {
		return $nc(this->self)->getSendBufferSize();
	}
}

void BaseSSLSocketImpl::setReceiveBufferSize(int32_t size) {
	if ($equals(this->self, this)) {
		$SSLSocket::setReceiveBufferSize(size);
	} else {
		$nc(this->self)->setReceiveBufferSize(size);
	}
}

int32_t BaseSSLSocketImpl::getReceiveBufferSize() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getReceiveBufferSize();
	} else {
		return $nc(this->self)->getReceiveBufferSize();
	}
}

void BaseSSLSocketImpl::setKeepAlive(bool on) {
	if ($equals(this->self, this)) {
		$SSLSocket::setKeepAlive(on);
	} else {
		$nc(this->self)->setKeepAlive(on);
	}
}

bool BaseSSLSocketImpl::getKeepAlive() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getKeepAlive();
	} else {
		return $nc(this->self)->getKeepAlive();
	}
}

void BaseSSLSocketImpl::setTrafficClass(int32_t tc) {
	if ($equals(this->self, this)) {
		$SSLSocket::setTrafficClass(tc);
	} else {
		$nc(this->self)->setTrafficClass(tc);
	}
}

int32_t BaseSSLSocketImpl::getTrafficClass() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getTrafficClass();
	} else {
		return $nc(this->self)->getTrafficClass();
	}
}

void BaseSSLSocketImpl::setReuseAddress(bool on) {
	if ($equals(this->self, this)) {
		$SSLSocket::setReuseAddress(on);
	} else {
		$nc(this->self)->setReuseAddress(on);
	}
}

bool BaseSSLSocketImpl::getReuseAddress() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getReuseAddress();
	} else {
		return $nc(this->self)->getReuseAddress();
	}
}

void BaseSSLSocketImpl::setPerformancePreferences(int32_t connectionTime, int32_t latency, int32_t bandwidth) {
	if ($equals(this->self, this)) {
		$SSLSocket::setPerformancePreferences(connectionTime, latency, bandwidth);
	} else {
		$nc(this->self)->setPerformancePreferences(connectionTime, latency, bandwidth);
	}
}

$String* BaseSSLSocketImpl::toString() {
	if ($equals(this->self, this)) {
		return $SSLSocket::toString();
	}
	return $nc(this->self)->toString();
}

$InputStream* BaseSSLSocketImpl::getInputStream() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getInputStream();
	}
	if (this->consumedInput != nullptr) {
		return $new($SequenceInputStream, this->consumedInput, $($nc(this->self)->getInputStream()));
	}
	return $nc(this->self)->getInputStream();
}

$OutputStream* BaseSSLSocketImpl::getOutputStream() {
	if ($equals(this->self, this)) {
		return $SSLSocket::getOutputStream();
	}
	return $nc(this->self)->getOutputStream();
}

void BaseSSLSocketImpl::close() {
	if ($equals(this->self, this)) {
		$SSLSocket::close();
	} else {
		$nc(this->self)->close();
	}
}

void BaseSSLSocketImpl::setSoTimeout(int32_t timeout) {
	if ($equals(this->self, this)) {
		$SSLSocket::setSoTimeout(timeout);
	} else {
		$nc(this->self)->setSoTimeout(timeout);
	}
}

$Socket* BaseSSLSocketImpl::setOption($SocketOption* name, Object$* value) {
	if ($equals(this->self, this)) {
		return $SSLSocket::setOption(name, value);
	} else {
		return $nc(this->self)->setOption(name, value);
	}
}

$Object* BaseSSLSocketImpl::getOption($SocketOption* name) {
	if ($equals(this->self, this)) {
		return $of($SSLSocket::getOption(name));
	} else {
		return $of($nc(this->self)->getOption(name));
	}
}

$Set* BaseSSLSocketImpl::supportedOptions() {
	if ($equals(this->self, this)) {
		return $SSLSocket::supportedOptions();
	} else {
		return $nc(this->self)->supportedOptions();
	}
}

bool BaseSSLSocketImpl::isLayered() {
	return (!$equals(this->self, this));
}

void clinit$BaseSSLSocketImpl($Class* class$) {
	$assignStatic(BaseSSLSocketImpl::PROP_NAME, "com.sun.net.ssl.requireCloseNotify"_s);
	BaseSSLSocketImpl::requireCloseNotify = $Utilities::getBooleanProperty(BaseSSLSocketImpl::PROP_NAME, false);
}

BaseSSLSocketImpl::BaseSSLSocketImpl() {
}

$Class* BaseSSLSocketImpl::load$($String* name, bool initialize) {
	$loadClass(BaseSSLSocketImpl, name, initialize, &_BaseSSLSocketImpl_ClassInfo_, clinit$BaseSSLSocketImpl, allocate$BaseSSLSocketImpl);
	return class$;
}

$Class* BaseSSLSocketImpl::class$ = nullptr;

		} // ssl
	} // security
} // sun