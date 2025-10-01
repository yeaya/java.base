#include <javax/net/DefaultSocketFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/Socket.h>
#include <javax/net/SocketFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $Socket = ::java::net::Socket;
using $SocketFactory = ::javax::net::SocketFactory;

namespace javax {
	namespace net {

$MethodInfo _DefaultSocketFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultSocketFactory::*)()>(&DefaultSocketFactory::init$))},
	{"createSocket", "()Ljava/net/Socket;", nullptr, $PUBLIC},
	{"createSocket", "(Ljava/lang/String;I)Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.net.UnknownHostException"},
	{"createSocket", "(Ljava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createSocket", "(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.net.UnknownHostException"},
	{"createSocket", "(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DefaultSocketFactory_ClassInfo_ = {
	$ACC_SUPER,
	"javax.net.DefaultSocketFactory",
	"javax.net.SocketFactory",
	nullptr,
	nullptr,
	_DefaultSocketFactory_MethodInfo_
};

$Object* allocate$DefaultSocketFactory($Class* clazz) {
	return $of($alloc(DefaultSocketFactory));
}

void DefaultSocketFactory::init$() {
	$SocketFactory::init$();
}

$Socket* DefaultSocketFactory::createSocket() {
	return $new($Socket);
}

$Socket* DefaultSocketFactory::createSocket($String* host, int32_t port) {
	return $new($Socket, host, port);
}

$Socket* DefaultSocketFactory::createSocket($InetAddress* address, int32_t port) {
	return $new($Socket, address, port);
}

$Socket* DefaultSocketFactory::createSocket($String* host, int32_t port, $InetAddress* clientAddress, int32_t clientPort) {
	return $new($Socket, host, port, clientAddress, clientPort);
}

$Socket* DefaultSocketFactory::createSocket($InetAddress* address, int32_t port, $InetAddress* clientAddress, int32_t clientPort) {
	return $new($Socket, address, port, clientAddress, clientPort);
}

DefaultSocketFactory::DefaultSocketFactory() {
}

$Class* DefaultSocketFactory::load$($String* name, bool initialize) {
	$loadClass(DefaultSocketFactory, name, initialize, &_DefaultSocketFactory_ClassInfo_, allocate$DefaultSocketFactory);
	return class$;
}

$Class* DefaultSocketFactory::class$ = nullptr;

	} // net
} // javax