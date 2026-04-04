#include <java/net/DatagramSocketImplFactory.h>
#include <java/net/DatagramSocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocketImpl = ::java::net::DatagramSocketImpl;

namespace java {
	namespace net {

$Class* DatagramSocketImplFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createDatagramSocketImpl", "()Ljava/net/DatagramSocketImpl;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DatagramSocketImplFactory, createDatagramSocketImpl, $DatagramSocketImpl*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.DatagramSocketImplFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DatagramSocketImplFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DatagramSocketImplFactory);
	});
	return class$;
}

$Class* DatagramSocketImplFactory::class$ = nullptr;

	} // net
} // java