#include <javax/net/DefaultSocketFactory.h>
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultSocketFactory, init$, void)},
		{"createSocket", "()Ljava/net/Socket;", nullptr, $PUBLIC, $virtualMethod(DefaultSocketFactory, createSocket, $Socket*)},
		{"createSocket", "(Ljava/lang/String;I)Ljava/net/Socket;", nullptr, $PUBLIC, $virtualMethod(DefaultSocketFactory, createSocket, $Socket*, $String*, int32_t), "java.io.IOException,java.net.UnknownHostException"},
		{"createSocket", "(Ljava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC, $virtualMethod(DefaultSocketFactory, createSocket, $Socket*, $InetAddress*, int32_t), "java.io.IOException"},
		{"createSocket", "(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC, $virtualMethod(DefaultSocketFactory, createSocket, $Socket*, $String*, int32_t, $InetAddress*, int32_t), "java.io.IOException,java.net.UnknownHostException"},
		{"createSocket", "(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC, $virtualMethod(DefaultSocketFactory, createSocket, $Socket*, $InetAddress*, int32_t, $InetAddress*, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.net.DefaultSocketFactory",
		"javax.net.SocketFactory",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultSocketFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultSocketFactory);
	});
	return class$;
}

$Class* DefaultSocketFactory::class$ = nullptr;

	} // net
} // javax