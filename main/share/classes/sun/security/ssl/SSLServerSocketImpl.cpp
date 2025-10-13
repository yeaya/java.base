#include <sun/security/ssl/SSLServerSocketImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/util/List.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <javax/net/ssl/SSLParameters.h>
#include <javax/net/ssl/SSLServerSocket.h>
#include <javax/net/ssl/SSLSocket.h>
#include <sun/security/ssl/BaseSSLSocketImpl.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/ClientAuthType.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLConfiguration.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLSocketImpl.h>
#include <jcpp.h>

#undef CLIENT_AUTH_NONE
#undef CLIENT_AUTH_REQUESTED
#undef CLIENT_AUTH_REQUIRED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $List = ::java::util::List;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLServerSocket = ::javax::net::ssl::SSLServerSocket;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $BaseSSLSocketImpl = ::sun::security::ssl::BaseSSLSocketImpl;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $ClientAuthType = ::sun::security::ssl::ClientAuthType;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLConfiguration = ::sun::security::ssl::SSLConfiguration;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLSocketImpl = ::sun::security::ssl::SSLSocketImpl;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLServerSocketImpl_FieldInfo_[] = {
	{"sslContext", "Lsun/security/ssl/SSLContextImpl;", nullptr, $PRIVATE | $FINAL, $field(SSLServerSocketImpl, sslContext)},
	{"sslConfig", "Lsun/security/ssl/SSLConfiguration;", nullptr, $PRIVATE | $FINAL, $field(SSLServerSocketImpl, sslConfig)},
	{"serverSocketLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(SSLServerSocketImpl, serverSocketLock)},
	{}
};

$MethodInfo _SSLServerSocketImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;)V", nullptr, 0, $method(static_cast<void(SSLServerSocketImpl::*)($SSLContextImpl*)>(&SSLServerSocketImpl::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;II)V", nullptr, 0, $method(static_cast<void(SSLServerSocketImpl::*)($SSLContextImpl*,int32_t,int32_t)>(&SSLServerSocketImpl::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/ssl/SSLContextImpl;IILjava/net/InetAddress;)V", nullptr, 0, $method(static_cast<void(SSLServerSocketImpl::*)($SSLContextImpl*,int32_t,int32_t,$InetAddress*)>(&SSLServerSocketImpl::init$)), "java.io.IOException"},
	{"accept", "()Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getEnableSessionCreation", "()Z", nullptr, $PUBLIC},
	{"getEnabledCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEnabledProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNeedClientAuth", "()Z", nullptr, $PUBLIC},
	{"getSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC},
	{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSupportedProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUseClientMode", "()Z", nullptr, $PUBLIC},
	{"getWantClientAuth", "()Z", nullptr, $PUBLIC},
	{"setEnableSessionCreation", "(Z)V", nullptr, $PUBLIC},
	{"setEnabledCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setEnabledProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setNeedClientAuth", "(Z)V", nullptr, $PUBLIC},
	{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC},
	{"setUseClientMode", "(Z)V", nullptr, $PUBLIC},
	{"setWantClientAuth", "(Z)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SSLServerSocketImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLServerSocketImpl",
	"javax.net.ssl.SSLServerSocket",
	nullptr,
	_SSLServerSocketImpl_FieldInfo_,
	_SSLServerSocketImpl_MethodInfo_
};

$Object* allocate$SSLServerSocketImpl($Class* clazz) {
	return $of($alloc(SSLServerSocketImpl));
}

void SSLServerSocketImpl::init$($SSLContextImpl* sslContext) {
	$SSLServerSocket::init$();
	$set(this, serverSocketLock, $new($ReentrantLock));
	$set(this, sslContext, sslContext);
	$set(this, sslConfig, $new($SSLConfiguration, sslContext, false));
}

void SSLServerSocketImpl::init$($SSLContextImpl* sslContext, int32_t port, int32_t backlog) {
	$SSLServerSocket::init$(port, backlog);
	$set(this, serverSocketLock, $new($ReentrantLock));
	$set(this, sslContext, sslContext);
	$set(this, sslConfig, $new($SSLConfiguration, sslContext, false));
}

void SSLServerSocketImpl::init$($SSLContextImpl* sslContext, int32_t port, int32_t backlog, $InetAddress* address) {
	$SSLServerSocket::init$(port, backlog, address);
	$set(this, serverSocketLock, $new($ReentrantLock));
	$set(this, sslContext, sslContext);
	$set(this, sslConfig, $new($SSLConfiguration, sslContext, false));
}

$StringArray* SSLServerSocketImpl::getEnabledCipherSuites() {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($StringArray, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $CipherSuite::namesOf($nc(this->sslConfig)->enabledCipherSuites));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->serverSocketLock)->unlock();
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

void SSLServerSocketImpl::setEnabledCipherSuites($StringArray* suites) {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set($nc(this->sslConfig), enabledCipherSuites, $CipherSuite::validValuesOf(suites));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->serverSocketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$StringArray* SSLServerSocketImpl::getSupportedCipherSuites() {
	return $CipherSuite::namesOf($($nc(this->sslContext)->getSupportedCipherSuites()));
}

$StringArray* SSLServerSocketImpl::getSupportedProtocols() {
	return $ProtocolVersion::toStringArray($($nc(this->sslContext)->getSupportedProtocolVersions()));
}

$StringArray* SSLServerSocketImpl::getEnabledProtocols() {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($StringArray, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $ProtocolVersion::toStringArray($nc(this->sslConfig)->enabledProtocols));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->serverSocketLock)->unlock();
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

void SSLServerSocketImpl::setEnabledProtocols($StringArray* protocols) {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (protocols == nullptr) {
				$throwNew($IllegalArgumentException, "Protocols cannot be null"_s);
			}
			$set($nc(this->sslConfig), enabledProtocols, $ProtocolVersion::namesOf(protocols));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->serverSocketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SSLServerSocketImpl::setNeedClientAuth(bool need) {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($ClientAuthType);
			$set($nc(this->sslConfig), clientAuthType, need ? $ClientAuthType::CLIENT_AUTH_REQUIRED : $ClientAuthType::CLIENT_AUTH_NONE);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->serverSocketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLServerSocketImpl::getNeedClientAuth() {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$init($ClientAuthType);
			var$2 = ($nc(this->sslConfig)->clientAuthType == $ClientAuthType::CLIENT_AUTH_REQUIRED);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->serverSocketLock)->unlock();
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

void SSLServerSocketImpl::setWantClientAuth(bool want) {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init($ClientAuthType);
			$set($nc(this->sslConfig), clientAuthType, want ? $ClientAuthType::CLIENT_AUTH_REQUESTED : $ClientAuthType::CLIENT_AUTH_NONE);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->serverSocketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLServerSocketImpl::getWantClientAuth() {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$init($ClientAuthType);
			var$2 = ($nc(this->sslConfig)->clientAuthType == $ClientAuthType::CLIENT_AUTH_REQUESTED);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->serverSocketLock)->unlock();
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

void SSLServerSocketImpl::setUseClientMode(bool useClientMode) {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($nc(this->sslConfig)->isClientMode != useClientMode) {
				if ($nc(this->sslContext)->isDefaultProtocolVesions($nc(this->sslConfig)->enabledProtocols)) {
					$set($nc(this->sslConfig), enabledProtocols, $nc(this->sslContext)->getDefaultProtocolVersions(!useClientMode));
				}
				if ($nc(this->sslContext)->isDefaultCipherSuiteList($nc(this->sslConfig)->enabledCipherSuites)) {
					$set($nc(this->sslConfig), enabledCipherSuites, $nc(this->sslContext)->getDefaultCipherSuites(!useClientMode));
				}
				$nc(this->sslConfig)->toggleClientMode();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->serverSocketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLServerSocketImpl::getUseClientMode() {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = $nc(this->sslConfig)->isClientMode;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->serverSocketLock)->unlock();
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

void SSLServerSocketImpl::setEnableSessionCreation(bool flag) {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->sslConfig)->enableSessionCreation = flag;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->serverSocketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool SSLServerSocketImpl::getEnableSessionCreation() {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = $nc(this->sslConfig)->enableSessionCreation;
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->serverSocketLock)->unlock();
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

$SSLParameters* SSLServerSocketImpl::getSSLParameters() {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($SSLParameters, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(this->sslConfig)->getSSLParameters());
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(this->serverSocketLock)->unlock();
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

void SSLServerSocketImpl::setSSLParameters($SSLParameters* params) {
	$nc(this->serverSocketLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->sslConfig)->setSSLParameters(params);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(this->serverSocketLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Socket* SSLServerSocketImpl::accept() {
	$var($SSLSocketImpl, s, $new($SSLSocketImpl, this->sslContext, this->sslConfig));
	implAccept(static_cast<$Socket*>(s));
	s->doneConnect();
	return s;
}

$String* SSLServerSocketImpl::toString() {
	return $str({"[SSL: "_s, $($SSLServerSocket::toString()), "]"_s});
}

SSLServerSocketImpl::SSLServerSocketImpl() {
}

$Class* SSLServerSocketImpl::load$($String* name, bool initialize) {
	$loadClass(SSLServerSocketImpl, name, initialize, &_SSLServerSocketImpl_ClassInfo_, allocate$SSLServerSocketImpl);
	return class$;
}

$Class* SSLServerSocketImpl::class$ = nullptr;

		} // ssl
	} // security
} // sun