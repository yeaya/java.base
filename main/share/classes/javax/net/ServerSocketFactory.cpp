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

$FieldInfo _ServerSocketFactory_FieldInfo_[] = {
	{"theFactory", "Ljavax/net/ServerSocketFactory;", nullptr, $PRIVATE | $STATIC, $staticField(ServerSocketFactory, theFactory)},
	{}
};

$MethodInfo _ServerSocketFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ServerSocketFactory, init$, void)},
	{"createServerSocket", "()Ljava/net/ServerSocket;", nullptr, $PUBLIC, $virtualMethod(ServerSocketFactory, createServerSocket, $ServerSocket*), "java.io.IOException"},
	{"createServerSocket", "(I)Ljava/net/ServerSocket;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServerSocketFactory, createServerSocket, $ServerSocket*, int32_t), "java.io.IOException"},
	{"createServerSocket", "(II)Ljava/net/ServerSocket;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServerSocketFactory, createServerSocket, $ServerSocket*, int32_t, int32_t), "java.io.IOException"},
	{"createServerSocket", "(IILjava/net/InetAddress;)Ljava/net/ServerSocket;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ServerSocketFactory, createServerSocket, $ServerSocket*, int32_t, int32_t, $InetAddress*), "java.io.IOException"},
	{"getDefault", "()Ljavax/net/ServerSocketFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(ServerSocketFactory, getDefault, ServerSocketFactory*)},
	{}
};

$ClassInfo _ServerSocketFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ServerSocketFactory",
	"java.lang.Object",
	nullptr,
	_ServerSocketFactory_FieldInfo_,
	_ServerSocketFactory_MethodInfo_
};

$Object* allocate$ServerSocketFactory($Class* clazz) {
	return $of($alloc(ServerSocketFactory));
}

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
	$init(ServerSocketFactory);
	return ServerSocketFactory::theFactory;
}

$ServerSocket* ServerSocketFactory::createServerSocket() {
	$throwNew($SocketException, "Unbound server sockets not implemented"_s);
	$shouldNotReachHere();
}

ServerSocketFactory::ServerSocketFactory() {
}

$Class* ServerSocketFactory::load$($String* name, bool initialize) {
	$loadClass(ServerSocketFactory, name, initialize, &_ServerSocketFactory_ClassInfo_, allocate$ServerSocketFactory);
	return class$;
}

$Class* ServerSocketFactory::class$ = nullptr;

	} // net
} // javax