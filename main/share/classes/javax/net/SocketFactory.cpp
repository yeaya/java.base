#include <javax/net/SocketFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketException.h>
#include <javax/net/DefaultSocketFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InetAddress = ::java::net::InetAddress;
using $Socket = ::java::net::Socket;
using $SocketException = ::java::net::SocketException;
using $DefaultSocketFactory = ::javax::net::DefaultSocketFactory;

namespace javax {
	namespace net {

$FieldInfo _SocketFactory_FieldInfo_[] = {
	{"theFactory", "Ljavax/net/SocketFactory;", nullptr, $PRIVATE | $STATIC, $staticField(SocketFactory, theFactory)},
	{}
};

$MethodInfo _SocketFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SocketFactory::*)()>(&SocketFactory::init$))},
	{"createSocket", "()Ljava/net/Socket;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createSocket", "(Ljava/lang/String;I)Ljava/net/Socket;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,java.net.UnknownHostException"},
	{"createSocket", "(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,java.net.UnknownHostException"},
	{"createSocket", "(Ljava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"createSocket", "(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getDefault", "()Ljavax/net/SocketFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SocketFactory*(*)()>(&SocketFactory::getDefault))},
	{}
};

$ClassInfo _SocketFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.SocketFactory",
	"java.lang.Object",
	nullptr,
	_SocketFactory_FieldInfo_,
	_SocketFactory_MethodInfo_
};

$Object* allocate$SocketFactory($Class* clazz) {
	return $of($alloc(SocketFactory));
}

SocketFactory* SocketFactory::theFactory = nullptr;

void SocketFactory::init$() {
}

SocketFactory* SocketFactory::getDefault() {
	$load(SocketFactory);
	$synchronized(SocketFactory::class$) {
		$init(SocketFactory);
		if (SocketFactory::theFactory == nullptr) {
			$assignStatic(SocketFactory::theFactory, $new($DefaultSocketFactory));
		}
	}
	$init(SocketFactory);
	return SocketFactory::theFactory;
}

$Socket* SocketFactory::createSocket() {
	$var($UnsupportedOperationException, uop, $new($UnsupportedOperationException));
	$var($SocketException, se, $new($SocketException, "Unconnected sockets not implemented"_s));
	se->initCause(uop);
	$throw(se);
	$shouldNotReachHere();
}

SocketFactory::SocketFactory() {
}

$Class* SocketFactory::load$($String* name, bool initialize) {
	$loadClass(SocketFactory, name, initialize, &_SocketFactory_ClassInfo_, allocate$SocketFactory);
	return class$;
}

$Class* SocketFactory::class$ = nullptr;

	} // net
} // javax