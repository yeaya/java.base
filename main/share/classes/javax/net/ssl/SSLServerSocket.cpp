#include <javax/net/ssl/SSLServerSocket.h>

#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <javax/net/ssl/SSLParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SSLParameters = ::javax::net::ssl::SSLParameters;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _SSLServerSocket_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SSLServerSocket, init$, void), "java.io.IOException"},
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(SSLServerSocket, init$, void, int32_t), "java.io.IOException"},
	{"<init>", "(II)V", nullptr, $PROTECTED, $method(SSLServerSocket, init$, void, int32_t, int32_t), "java.io.IOException"},
	{"<init>", "(IILjava/net/InetAddress;)V", nullptr, $PROTECTED, $method(SSLServerSocket, init$, void, int32_t, int32_t, $InetAddress*), "java.io.IOException"},
	{"getEnableSessionCreation", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, getEnableSessionCreation, bool)},
	{"getEnabledCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, getEnabledCipherSuites, $StringArray*)},
	{"getEnabledProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, getEnabledProtocols, $StringArray*)},
	{"getNeedClientAuth", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, getNeedClientAuth, bool)},
	{"getSSLParameters", "()Ljavax/net/ssl/SSLParameters;", nullptr, $PUBLIC, $virtualMethod(SSLServerSocket, getSSLParameters, $SSLParameters*)},
	{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, getSupportedCipherSuites, $StringArray*)},
	{"getSupportedProtocols", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, getSupportedProtocols, $StringArray*)},
	{"getUseClientMode", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, getUseClientMode, bool)},
	{"getWantClientAuth", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, getWantClientAuth, bool)},
	{"setEnableSessionCreation", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, setEnableSessionCreation, void, bool)},
	{"setEnabledCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, setEnabledCipherSuites, void, $StringArray*)},
	{"setEnabledProtocols", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, setEnabledProtocols, void, $StringArray*)},
	{"setNeedClientAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, setNeedClientAuth, void, bool)},
	{"setSSLParameters", "(Ljavax/net/ssl/SSLParameters;)V", nullptr, $PUBLIC, $virtualMethod(SSLServerSocket, setSSLParameters, void, $SSLParameters*)},
	{"setUseClientMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, setUseClientMode, void, bool)},
	{"setWantClientAuth", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLServerSocket, setWantClientAuth, void, bool)},
	{}
};

$ClassInfo _SSLServerSocket_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.SSLServerSocket",
	"java.net.ServerSocket",
	nullptr,
	nullptr,
	_SSLServerSocket_MethodInfo_
};

$Object* allocate$SSLServerSocket($Class* clazz) {
	return $of($alloc(SSLServerSocket));
}

void SSLServerSocket::init$() {
	$ServerSocket::init$();
}

void SSLServerSocket::init$(int32_t port) {
	$ServerSocket::init$(port);
}

void SSLServerSocket::init$(int32_t port, int32_t backlog) {
	$ServerSocket::init$(port, backlog);
}

void SSLServerSocket::init$(int32_t port, int32_t backlog, $InetAddress* address) {
	$ServerSocket::init$(port, backlog, address);
}

$SSLParameters* SSLServerSocket::getSSLParameters() {
	$useLocalCurrentObjectStackCache();
	$var($SSLParameters, parameters, $new($SSLParameters));
	parameters->setCipherSuites($(getEnabledCipherSuites()));
	parameters->setProtocols($(getEnabledProtocols()));
	if (getNeedClientAuth()) {
		parameters->setNeedClientAuth(true);
	} else if (getWantClientAuth()) {
		parameters->setWantClientAuth(true);
	}
	return parameters;
}

void SSLServerSocket::setSSLParameters($SSLParameters* params) {
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

SSLServerSocket::SSLServerSocket() {
}

$Class* SSLServerSocket::load$($String* name, bool initialize) {
	$loadClass(SSLServerSocket, name, initialize, &_SSLServerSocket_ClassInfo_, allocate$SSLServerSocket);
	return class$;
}

$Class* SSLServerSocket::class$ = nullptr;

		} // ssl
	} // net
} // javax