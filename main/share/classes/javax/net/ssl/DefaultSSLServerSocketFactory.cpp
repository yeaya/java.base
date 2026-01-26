#include <javax/net/ssl/DefaultSSLServerSocketFactory.h>

#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketException.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketException = ::java::net::SocketException;
using $SSLServerSocketFactory = ::javax::net::ssl::SSLServerSocketFactory;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _DefaultSSLServerSocketFactory_FieldInfo_[] = {
	{"reason", "Ljava/lang/Exception;", nullptr, $PRIVATE | $FINAL, $field(DefaultSSLServerSocketFactory, reason)},
	{}
};

$MethodInfo _DefaultSSLServerSocketFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, 0, $method(DefaultSSLServerSocketFactory, init$, void, $Exception*)},
	{"createServerSocket", "()Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(DefaultSSLServerSocketFactory, createServerSocket, $ServerSocket*), "java.io.IOException"},
	{"createServerSocket", "(I)Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(DefaultSSLServerSocketFactory, createServerSocket, $ServerSocket*, int32_t), "java.io.IOException"},
	{"createServerSocket", "(II)Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(DefaultSSLServerSocketFactory, createServerSocket, $ServerSocket*, int32_t, int32_t), "java.io.IOException"},
	{"createServerSocket", "(IILjava/net/InetAddress;)Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(DefaultSSLServerSocketFactory, createServerSocket, $ServerSocket*, int32_t, int32_t, $InetAddress*), "java.io.IOException"},
	{"getDefaultCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultSSLServerSocketFactory, getDefaultCipherSuites, $StringArray*)},
	{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultSSLServerSocketFactory, getSupportedCipherSuites, $StringArray*)},
	{"throwException", "()Ljava/net/ServerSocket;", nullptr, $PRIVATE, $method(DefaultSSLServerSocketFactory, throwException, $ServerSocket*), "java.net.SocketException"},
	{}
};

$ClassInfo _DefaultSSLServerSocketFactory_ClassInfo_ = {
	$ACC_SUPER,
	"javax.net.ssl.DefaultSSLServerSocketFactory",
	"javax.net.ssl.SSLServerSocketFactory",
	nullptr,
	_DefaultSSLServerSocketFactory_FieldInfo_,
	_DefaultSSLServerSocketFactory_MethodInfo_
};

$Object* allocate$DefaultSSLServerSocketFactory($Class* clazz) {
	return $of($alloc(DefaultSSLServerSocketFactory));
}

void DefaultSSLServerSocketFactory::init$($Exception* reason) {
	$SSLServerSocketFactory::init$();
	$set(this, reason, reason);
}

$ServerSocket* DefaultSSLServerSocketFactory::throwException() {
	$useLocalCurrentObjectStackCache();
	$throw($cast($SocketException, $($$new($SocketException, $($nc(this->reason)->toString()))->initCause(this->reason))));
	$shouldNotReachHere();
}

$ServerSocket* DefaultSSLServerSocketFactory::createServerSocket() {
	return throwException();
}

$ServerSocket* DefaultSSLServerSocketFactory::createServerSocket(int32_t port) {
	return throwException();
}

$ServerSocket* DefaultSSLServerSocketFactory::createServerSocket(int32_t port, int32_t backlog) {
	return throwException();
}

$ServerSocket* DefaultSSLServerSocketFactory::createServerSocket(int32_t port, int32_t backlog, $InetAddress* ifAddress) {
	return throwException();
}

$StringArray* DefaultSSLServerSocketFactory::getDefaultCipherSuites() {
	return $new($StringArray, 0);
}

$StringArray* DefaultSSLServerSocketFactory::getSupportedCipherSuites() {
	return $new($StringArray, 0);
}

DefaultSSLServerSocketFactory::DefaultSSLServerSocketFactory() {
}

$Class* DefaultSSLServerSocketFactory::load$($String* name, bool initialize) {
	$loadClass(DefaultSSLServerSocketFactory, name, initialize, &_DefaultSSLServerSocketFactory_ClassInfo_, allocate$DefaultSSLServerSocketFactory);
	return class$;
}

$Class* DefaultSSLServerSocketFactory::class$ = nullptr;

		} // ssl
	} // net
} // javax