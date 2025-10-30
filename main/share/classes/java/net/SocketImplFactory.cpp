#include <java/net/SocketImplFactory.h>

#include <java/net/SocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketImpl = ::java::net::SocketImpl;

namespace java {
	namespace net {

$MethodInfo _SocketImplFactory_MethodInfo_[] = {
	{"createSocketImpl", "()Ljava/net/SocketImpl;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SocketImplFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.net.SocketImplFactory",
	nullptr,
	nullptr,
	nullptr,
	_SocketImplFactory_MethodInfo_
};

$Object* allocate$SocketImplFactory($Class* clazz) {
	return $of($alloc(SocketImplFactory));
}

$Class* SocketImplFactory::load$($String* name, bool initialize) {
	$loadClass(SocketImplFactory, name, initialize, &_SocketImplFactory_ClassInfo_, allocate$SocketImplFactory);
	return class$;
}

$Class* SocketImplFactory::class$ = nullptr;

	} // net
} // java