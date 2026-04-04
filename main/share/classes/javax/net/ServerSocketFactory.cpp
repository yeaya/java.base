#include <javax/net/ServerSocketFactory.h>
#include <java/net/InetAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketException.h>
#include <javax/net/DefaultServerSocketFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketException = ::java::net::SocketException;
using $DefaultServerSocketFactory = ::javax::net::DefaultServerSocketFactory;

namespace javax {
	namespace net {

ServerSocketFactory* ServerSocketFactory::theFactory = nullptr;

void ServerSocketFactory::init$() {
}

ServerSocketFactory* ServerSocketFactory::getDefault() {
	$load(ServerSocketFactory);
	$synchronized(ServerSocketFactory::class$) {
		$init(ServerSocketFactory);
		if (ServerSocketFactory::theFactory == nullptr) {
			$assignStatic(ServerSocketFactory::theFactory, $new($DefaultServerSocketFactory));
		}
	}
	return ServerSocketFactory::theFactory;
}

$ServerSocket* ServerSocketFactory::createServerSocket() {
	$throwNew($SocketException, "Unbound server sockets not implemented"_s);
	$shouldNotReachHere();
}

ServerSocketFactory::ServerSocketFactory() {
}

$Class* ServerSocketFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theFactory", "Ljavax/net/ServerSocketFactory;", nullptr, $PRIVATE | $STATIC, $staticField(ServerSocketFactory, theFactory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ServerSocketFactory, init$, void)},
		{"createServerSocket", "()Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(ServerSocketFactory, createServerSocket, $ServerSocket*), "java.io.IOException"},
		{"createServerSocket", "(I)Ljava/net/ServerSocket;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServerSocketFactory, createServerSocket, $ServerSocket*, int32_t), "java.io.IOException"},
		{"createServerSocket", "(II)Ljava/net/ServerSocket;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServerSocketFactory, createServerSocket, $ServerSocket*, int32_t, int32_t), "java.io.IOException"},
		{"createServerSocket", "(IILjava/net/InetAddress;)Ljava/net/ServerSocket;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServerSocketFactory, createServerSocket, $ServerSocket*, int32_t, int32_t, $InetAddress*), "java.io.IOException"},
		{"getDefault", "()Ljavax/net/ServerSocketFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(ServerSocketFactory, getDefault, ServerSocketFactory*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.net.ServerSocketFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServerSocketFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerSocketFactory);
	});
	return class$;
}

$Class* ServerSocketFactory::class$ = nullptr;

	} // net
} // javax