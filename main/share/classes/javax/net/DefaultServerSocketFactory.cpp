#include <javax/net/DefaultServerSocketFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <javax/net/ServerSocketFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $ServerSocketFactory = ::javax::net::ServerSocketFactory;

namespace javax {
	namespace net {

$MethodInfo _DefaultServerSocketFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultServerSocketFactory::*)()>(&DefaultServerSocketFactory::init$))},
	{"createServerSocket", "()Ljava/net/ServerSocket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createServerSocket", "(I)Ljava/net/ServerSocket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createServerSocket", "(II)Ljava/net/ServerSocket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createServerSocket", "(IILjava/net/InetAddress;)Ljava/net/ServerSocket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DefaultServerSocketFactory_ClassInfo_ = {
	$ACC_SUPER,
	"javax.net.DefaultServerSocketFactory",
	"javax.net.ServerSocketFactory",
	nullptr,
	nullptr,
	_DefaultServerSocketFactory_MethodInfo_
};

$Object* allocate$DefaultServerSocketFactory($Class* clazz) {
	return $of($alloc(DefaultServerSocketFactory));
}

void DefaultServerSocketFactory::init$() {
	$ServerSocketFactory::init$();
}

$ServerSocket* DefaultServerSocketFactory::createServerSocket() {
	return $new($ServerSocket);
}

$ServerSocket* DefaultServerSocketFactory::createServerSocket(int32_t port) {
	return $new($ServerSocket, port);
}

$ServerSocket* DefaultServerSocketFactory::createServerSocket(int32_t port, int32_t backlog) {
	return $new($ServerSocket, port, backlog);
}

$ServerSocket* DefaultServerSocketFactory::createServerSocket(int32_t port, int32_t backlog, $InetAddress* ifAddress) {
	return $new($ServerSocket, port, backlog, ifAddress);
}

DefaultServerSocketFactory::DefaultServerSocketFactory() {
}

$Class* DefaultServerSocketFactory::load$($String* name, bool initialize) {
	$loadClass(DefaultServerSocketFactory, name, initialize, &_DefaultServerSocketFactory_ClassInfo_, allocate$DefaultServerSocketFactory);
	return class$;
}

$Class* DefaultServerSocketFactory::class$ = nullptr;

	} // net
} // javax