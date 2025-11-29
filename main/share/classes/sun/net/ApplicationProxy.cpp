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

$MethodInfo _ApplicationProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/net/Proxy;)V", nullptr, $PRIVATE, $method(static_cast<void(ApplicationProxy::*)($Proxy*)>(&ApplicationProxy::init$))},
	{"create", "(Ljava/net/Proxy;)Lsun/net/ApplicationProxy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ApplicationProxy*(*)($Proxy*)>(&ApplicationProxy::create))},
	{}
};

$ClassInfo _ApplicationProxy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.net.ApplicationProxy",
	"java.net.Proxy",
	nullptr,
	nullptr,
	_ApplicationProxy_MethodInfo_
};

$Object* allocate$ApplicationProxy($Class* clazz) {
	return $of($alloc(ApplicationProxy));
}

void ApplicationProxy::init$($Proxy* proxy) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(ApplicationProxy, name, initialize, &_ApplicationProxy_ClassInfo_, allocate$ApplicationProxy);
	return class$;
}

$Class* ApplicationProxy::class$ = nullptr;

	} // net
} // sun