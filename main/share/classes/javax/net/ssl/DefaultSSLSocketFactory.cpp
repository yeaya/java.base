#include <javax/net/ssl/DefaultSSLSocketFactory.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketException.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetAddress = ::java::net::InetAddress;
using $Socket = ::java::net::Socket;
using $SocketException = ::java::net::SocketException;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _DefaultSSLSocketFactory_FieldInfo_[] = {
	{"reason", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(DefaultSSLSocketFactory, reason)},
	{}
};

$MethodInfo _DefaultSSLSocketFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, 0, $method(static_cast<void(DefaultSSLSocketFactory::*)($Exception*)>(&DefaultSSLSocketFactory::init$))},
	{"createSocket", "()Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createSocket", "(Ljava/lang/String;I)Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createSocket", "(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createSocket", "(Ljava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createSocket", "(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createSocket", "(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getDefaultCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSupportedCipherSuites", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"throwException", "()Ljava/net/Socket;", nullptr, $PRIVATE, $method(static_cast<$Socket*(DefaultSSLSocketFactory::*)()>(&DefaultSSLSocketFactory::throwException)), "java.net.SocketException"},
	{}
};

$ClassInfo _DefaultSSLSocketFactory_ClassInfo_ = {
	$ACC_SUPER,
	"javax.net.ssl.DefaultSSLSocketFactory",
	"javax.net.ssl.SSLSocketFactory",
	nullptr,
	_DefaultSSLSocketFactory_FieldInfo_,
	_DefaultSSLSocketFactory_MethodInfo_
};

$Object* allocate$DefaultSSLSocketFactory($Class* clazz) {
	return $of($alloc(DefaultSSLSocketFactory));
}

void DefaultSSLSocketFactory::init$($Exception* reason) {
	$SSLSocketFactory::init$();
	$set(this, reason, reason);
}

$Socket* DefaultSSLSocketFactory::throwException() {
	$useLocalCurrentObjectStackCache();
	$throw($cast($SocketException, $($$new($SocketException, $($nc(this->reason)->toString()))->initCause(this->reason))));
	$shouldNotReachHere();
}

$Socket* DefaultSSLSocketFactory::createSocket() {
	return throwException();
}

$Socket* DefaultSSLSocketFactory::createSocket($String* host, int32_t port) {
	return throwException();
}

$Socket* DefaultSSLSocketFactory::createSocket($Socket* s, $String* host, int32_t port, bool autoClose) {
	return throwException();
}

$Socket* DefaultSSLSocketFactory::createSocket($InetAddress* address, int32_t port) {
	return throwException();
}

$Socket* DefaultSSLSocketFactory::createSocket($String* host, int32_t port, $InetAddress* clientAddress, int32_t clientPort) {
	return throwException();
}

$Socket* DefaultSSLSocketFactory::createSocket($InetAddress* address, int32_t port, $InetAddress* clientAddress, int32_t clientPort) {
	return throwException();
}

$StringArray* DefaultSSLSocketFactory::getDefaultCipherSuites() {
	return $new($StringArray, 0);
}

$StringArray* DefaultSSLSocketFactory::getSupportedCipherSuites() {
	return $new($StringArray, 0);
}

DefaultSSLSocketFactory::DefaultSSLSocketFactory() {
}

$Class* DefaultSSLSocketFactory::load$($String* name, bool initialize) {
	$loadClass(DefaultSSLSocketFactory, name, initialize, &_DefaultSSLSocketFactory_ClassInfo_, allocate$DefaultSSLSocketFactory);
	return class$;
}

$Class* DefaultSSLSocketFactory::class$ = nullptr;

		} // ssl
	} // net
} // javax