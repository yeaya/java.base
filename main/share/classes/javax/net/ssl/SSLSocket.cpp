#include <javax/net/ssl/SSLSocket.h>

#include <java/lang/UnsupportedOperationException.h>
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
	{"<init>", "()V", nullptr, $PROTECTED, $method(SSLSocket, init$, void)},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PROTECTED, $method(SSLSocket, init$, void, $String*, int32_t), "java.io.IOException,java.net.UnknownHostException"},
	{"<init>", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED, $method(SSLSocket, init$, void, $InetAddress*, int32_t), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;ILjava/net/InetAddress;I)V", nullptr, $PROTECTED, $method(SSLSocket, init$, void, $String*, int32_t, $InetAddress*, int32_t), "java.io.IOException,java.net.UnknownHostException"},
	{"<init>", "(Ljava/net/InetAddress;ILjava/net/InetAddress;I)V", nullptr, $PROTECTED, $method(SSLSocket, init$, void, $InetAddress*, int32_t, $InetAddress*, int32_t), "java.io.IOException"},
	{"addHandshakeCompletedListener", "(Ljavax/net/ssl/HandshakeCompletedListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, addHandshakeCompletedListener, void, $HandshakeCompletedListener*)},
	{"getApplicationProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLSocket, getApplicationProtocol, $String*)},
	{"getEnableSessionCreation", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, getEnableSessionCreation, bool)},
	{"getEnabledCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, getEnabledCipherSuites, $StringArray*)},
	{"getEnabledProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, getEnabledProtocols, $StringArray*)},
	{"getHandshakeApplicationProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLSocket, getHandshakeApplicationProtocol, $String*)},
	{"getHandshakeApplicationProtocolSelector", "()Ljava/util/function/BiFunction;", "()Ljava/util/function/BiFunction<Ljavax/net/ssl/SSLSocket;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;>;", $PUBLIC, $virtualMethod(SSLSocket, getHandshakeApplicationProtocolSelector, $BiFunction*)},
	{"getHandshakeSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC, $virtualMethod(SSLSocket, getHandshakeSession, $SSLSession*)},
	{"getNeedClientAuth", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, getNeedClientAuth, bool)},
	{"getSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC, $virtualMethod(SSLSocket, getSSLParameters, $SSLParameters*)},
	{"getSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, getSession, $SSLSession*)},
	{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, getSupportedCipherSuites, $StringArray*)},
	{"getSupportedProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, getSupportedProtocols, $StringArray*)},
	{"getUseClientMode", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, getUseClientMode, bool)},
	{"getWantClientAuth", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, getWantClientAuth, bool)},
	{"removeHandshakeCompletedListener", "(Ljavax/net/ssl/HandshakeCompletedListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, removeHandshakeCompletedListener, void, $HandshakeCompletedListener*)},
	{"setEnableSessionCreation", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, setEnableSessionCreation, void, bool)},
	{"setEnabledCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, setEnabledCipherSuites, void, $StringArray*)},
	{"setEnabledProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, setEnabledProtocols, void, $StringArray*)},
	{"setHandshakeApplicationProtocolSelector", "(Ljava/util/function/BiFunction;)V", "(Ljava/util/function/BiFunction<Ljavax/net/ssl/SSLSocket;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(SSLSocket, setHandshakeApplicationProtocolSelector, void, $BiFunction*)},
	{"setNeedClientAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, setNeedClientAuth, void, bool)},
	{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC, $virtualMethod(SSLSocket, setSSLParameters, void, $SSLParameters*)},
	{"setUseClientMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, setUseClientMode, void, bool)},
	{"setWantClientAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, setWantClientAuth, void, bool)},
	{"startHandshake", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLSocket, startHandshake, void), "java.io.IOException"},
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
	$useLocalCurrentObjectStackCache();
	$var($SSLParameters, params, $new($SSLParameters));
	params->setCipherSuites($(getEnabledCipherSuites()));
	params->setProtocols($(getEnabledProtocols()));
	if (getNeedClientAuth()) {
		params->setNeedClientAuth(true);
	} else if (getWantClientAuth()) {
		params->setWantClientAuth(true);
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
	} else if (params->getWantClientAuth()) {
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