#include <javax/net/ssl/SSLContextSpi.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <java/security/SecureRandom.h>
#include <javax/net/ssl/KeyManager.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLParameters.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <javax/net/ssl/TrustManager.h>
#include <jcpp.h>

using $KeyManagerArray = $Array<::javax::net::ssl::KeyManager>;
using $TrustManagerArray = $Array<::javax::net::ssl::TrustManager>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Socket = ::java::net::Socket;
using $SecureRandom = ::java::security::SecureRandom;
using $SocketFactory = ::javax::net::SocketFactory;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLServerSocketFactory = ::javax::net::ssl::SSLServerSocketFactory;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _SSLContextSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLContextSpi::*)()>(&SSLContextSpi::init$))},
	{"engineCreateSSLEngine", "()Ljavax/net/ssl/SSLEngine;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineCreateSSLEngine", "(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetClientSessionContext", "()Ljavax/net/ssl/SSLSessionContext;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetDefaultSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PROTECTED},
	{"engineGetServerSessionContext", "()Ljavax/net/ssl/SSLSessionContext;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetServerSocketFactory", "()Ljavax/net/ssl/SSLServerSocketFactory;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetSupportedSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PROTECTED},
	{"engineInit", "([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.KeyManagementException"},
	{"getDefaultSocket", "()Ljavax/net/ssl/SSLSocket;", nullptr, $PRIVATE, $method(static_cast<$SSLSocket*(SSLContextSpi::*)()>(&SSLContextSpi::getDefaultSocket))},
	{}
};

$ClassInfo _SSLContextSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.SSLContextSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SSLContextSpi_MethodInfo_
};

$Object* allocate$SSLContextSpi($Class* clazz) {
	return $of($alloc(SSLContextSpi));
}

void SSLContextSpi::init$() {
}

$SSLSocket* SSLContextSpi::getDefaultSocket() {
	try {
		$var($SSLSocketFactory, factory, engineGetSocketFactory());
		return $cast($SSLSocket, $nc(factory)->createSocket());
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($UnsupportedOperationException, "Could not obtain parameters"_s, e);
	}
	$shouldNotReachHere();
}

$SSLParameters* SSLContextSpi::engineGetDefaultSSLParameters() {
	$var($SSLSocket, socket, getDefaultSocket());
	return $nc(socket)->getSSLParameters();
}

$SSLParameters* SSLContextSpi::engineGetSupportedSSLParameters() {
	$var($SSLSocket, socket, getDefaultSocket());
	$var($SSLParameters, params, $nc(socket)->getSSLParameters());
	$nc(params)->setCipherSuites($(socket->getSupportedCipherSuites()));
	params->setProtocols($(socket->getSupportedProtocols()));
	return params;
}

SSLContextSpi::SSLContextSpi() {
}

$Class* SSLContextSpi::load$($String* name, bool initialize) {
	$loadClass(SSLContextSpi, name, initialize, &_SSLContextSpi_ClassInfo_, allocate$SSLContextSpi);
	return class$;
}

$Class* SSLContextSpi::class$ = nullptr;

		} // ssl
	} // net
} // javax