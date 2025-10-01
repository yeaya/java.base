#include <javax/net/ssl/SSLSocket.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/Socket.h>
#include <java/util/function/BiFunction.h>
#include <javax/net/ssl/HandshakeCompletedListener.h>
#include <javax/net/ssl/SSLParameters.h>
#include <javax/net/ssl/SSLSession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InetAddress = ::java::net::InetAddress;
using $Socket = ::java::net::Socket;
using $BiFunction = ::java::util::function::BiFunction;
using $HandshakeCompletedListener = ::javax::net::ssl::HandshakeCompletedListener;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLSession = ::javax::net::ssl::SSLSession;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _SSLSocket_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SSLSocket::*)()>(&SSLSocket::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PROTECTED, $method(static_cast<void(SSLSocket::*)($String*,int32_t)>(&SSLSocket::init$)), "java.io.IOException,java.net.UnknownHostException"},
	{"<init>", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED, $method(static_cast<void(SSLSocket::*)($InetAddress*,int32_t)>(&SSLSocket::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;ILjava/net/InetAddress;I)V", nullptr, $PROTECTED, $method(static_cast<void(SSLSocket::*)($String*,int32_t,$InetAddress*,int32_t)>(&SSLSocket::init$)), "java.io.IOException,java.net.UnknownHostException"},
	{"<init>", "(Ljava/net/InetAddress;ILjava/net/InetAddress;I)V", nullptr, $PROTECTED, $method(static_cast<void(SSLSocket::*)($InetAddress*,int32_t,$InetAddress*,int32_t)>(&SSLSocket::init$)), "java.io.IOException"},
	{"addHandshakeCompletedListener", "(Ljavax/net/ssl/HandshakeCompletedListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getApplicationProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEnableSessionCreation", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnabledCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnabledProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getHandshakeApplicationProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHandshakeApplicationProtocolSelector", "()Ljava/util/function/BiFunction;", "()Ljava/util/function/BiFunction<Ljavax/net/ssl/SSLSocket;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;>;", $PUBLIC},
	{"getHandshakeSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC},
	{"getNeedClientAuth", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC},
	{"getSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSupportedProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUseClientMode", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getWantClientAuth", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeHandshakeCompletedListener", "(Ljavax/net/ssl/HandshakeCompletedListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnableSessionCreation", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnabledCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEnabledProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setHandshakeApplicationProtocolSelector", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<Ljavax/net/ssl/SSLSocket;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;>;)V", $PUBLIC},
	{"setNeedClientAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC},
	{"setUseClientMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setWantClientAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"startHandshake", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SSLSocket_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.SSLSocket",
	"java.net.Socket",
	nullptr,
	nullptr,
	_SSLSocket_MethodInfo_
};

$Object* allocate$SSLSocket($Class* clazz) {
	return $of($alloc(SSLSocket));
}

void SSLSocket::init$() {
	$Socket::init$();
}

void SSLSocket::init$($String* host, int32_t port) {
	$Socket::init$(host, port);
}

void SSLSocket::init$($InetAddress* address, int32_t port) {
	$Socket::init$(address, port);
}

void SSLSocket::init$($String* host, int32_t port, $InetAddress* clientAddress, int32_t clientPort) {
	$Socket::init$(host, port, clientAddress, clientPort);
}

void SSLSocket::init$($InetAddress* address, int32_t port, $InetAddress* clientAddress, int32_t clientPort) {
	$Socket::init$(address, port, clientAddress, clientPort);
}

$SSLSession* SSLSocket::getHandshakeSession() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$SSLParameters* SSLSocket::getSSLParameters() {
	$var($SSLParameters, params, $new($SSLParameters));
	params->setCipherSuites($(getEnabledCipherSuites()));
	params->setProtocols($(getEnabledProtocols()));
	if (getNeedClientAuth()) {
		params->setNeedClientAuth(true);
	} else if (getWantClientAuth()) {
		$nc(params)->setWantClientAuth(true);
	}
	return params;
}

void SSLSocket::setSSLParameters($SSLParameters* params) {
	$var($StringArray, s, nullptr);
	$assign(s, $nc(params)->getCipherSuites());
	if (s != nullptr) {
		setEnabledCipherSuites(s);
	}
	$assign(s, params->getProtocols());
	if (s != nullptr) {
		setEnabledProtocols(s);
	}
	if (params->getNeedClientAuth()) {
		setNeedClientAuth(true);
	} else if ($nc(params)->getWantClientAuth()) {
		setWantClientAuth(true);
	} else {
		setWantClientAuth(false);
	}
}

$String* SSLSocket::getApplicationProtocol() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* SSLSocket::getHandshakeApplicationProtocol() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void SSLSocket::setHandshakeApplicationProtocolSelector($BiFunction* selector) {
	$throwNew($UnsupportedOperationException);
}

$BiFunction* SSLSocket::getHandshakeApplicationProtocolSelector() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

SSLSocket::SSLSocket() {
}

$Class* SSLSocket::load$($String* name, bool initialize) {
	$loadClass(SSLSocket, name, initialize, &_SSLSocket_ClassInfo_, allocate$SSLSocket);
	return class$;
}

$Class* SSLSocket::class$ = nullptr;

		} // ssl
	} // net
} // javax