#include <javax/net/DefaultServerSocketFactory.h>
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultServerSocketFactory, init$, void)},
		{"createServerSocket", "()Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(DefaultServerSocketFactory, createServerSocket, $ServerSocket*), "java.io.IOException"},
		{"createServerSocket", "(I)Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(DefaultServerSocketFactory, createServerSocket, $ServerSocket*, int32_t), "java.io.IOException"},
		{"createServerSocket", "(II)Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(DefaultServerSocketFactory, createServerSocket, $ServerSocket*, int32_t, int32_t), "java.io.IOException"},
		{"createServerSocket", "(IILjava/net/InetAddress;)Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(DefaultServerSocketFactory, createServerSocket, $ServerSocket*, int32_t, int32_t, $InetAddress*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.net.DefaultServerSocketFactory",
		"javax.net.ServerSocketFactory",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultServerSocketFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultServerSocketFactory);
	});
	return class$;
}

$Class* DefaultServerSocketFactory::class$ = nullptr;

	} // net
} // javax