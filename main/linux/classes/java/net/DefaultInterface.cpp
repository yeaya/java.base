#include <java/net/DefaultInterface.h>
#include <java/net/NetworkInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkInterface = ::java::net::NetworkInterface;

namespace java {
	namespace net {

void DefaultInterface::init$() {
}

$NetworkInterface* DefaultInterface::getDefault() {
	return nullptr;
}

DefaultInterface::DefaultInterface() {
}

$Class* DefaultInterface::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultInterface, init$, void)},
		{"getDefault", "()Ljava/net/NetworkInterface;", nullptr, $STATIC, $staticMethod(DefaultInterface, getDefault, $NetworkInterface*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.DefaultInterface",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DefaultInterface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultInterface);
	});
	return class$;
}

$Class* DefaultInterface::class$ = nullptr;

	} // net
} // java