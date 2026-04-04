#include <java/net/SocketImplFactory.h>
#include <java/net/SocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SocketImpl = ::java::net::SocketImpl;

namespace java {
	namespace net {

$Class* SocketImplFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createSocketImpl", "()Ljava/net/SocketImpl;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SocketImplFactory, createSocketImpl, $SocketImpl*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.SocketImplFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SocketImplFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SocketImplFactory);
	});
	return class$;
}

$Class* SocketImplFactory::class$ = nullptr;

	} // net
} // java