#include <sun/net/ApplicationProxy.h>
#include <java/net/Proxy$Type.h>
#include <java/net/Proxy.h>
#include <java/net/SocketAddress.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::net::Proxy;
using $Proxy$Type = ::java::net::Proxy$Type;

namespace sun {
	namespace net {

void ApplicationProxy::init$($Proxy* proxy) {
	$useLocalObjectStack();
	$var($Proxy$Type, var$0, $nc(proxy)->type());
	$Proxy::init$(var$0, $(proxy->address()));
}

ApplicationProxy* ApplicationProxy::create($Proxy* proxy) {
	$init(ApplicationProxy);
	return $new(ApplicationProxy, proxy);
}

ApplicationProxy::ApplicationProxy() {
}

$Class* ApplicationProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/Proxy;)V", nullptr, $PRIVATE, $method(ApplicationProxy, init$, void, $Proxy*)},
		{"create", "(Ljava/net/Proxy;)Lsun/net/ApplicationProxy;", nullptr, $PUBLIC | $STATIC, $staticMethod(ApplicationProxy, create, ApplicationProxy*, $Proxy*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.net.ApplicationProxy",
		"java.net.Proxy",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ApplicationProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ApplicationProxy);
	});
	return class$;
}

$Class* ApplicationProxy::class$ = nullptr;

	} // net
} // sun