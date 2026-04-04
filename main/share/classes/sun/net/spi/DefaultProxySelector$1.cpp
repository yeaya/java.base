#include <sun/net/spi/DefaultProxySelector$1.h>
#include <sun/net/NetProperties.h>
#include <sun/net/spi/DefaultProxySelector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetProperties = ::sun::net::NetProperties;

namespace sun {
	namespace net {
		namespace spi {

void DefaultProxySelector$1::init$() {
}

$Object* DefaultProxySelector$1::run() {
	return $of($NetProperties::getBoolean("java.net.useSystemProxies"_s));
}

DefaultProxySelector$1::DefaultProxySelector$1() {
}

$Class* DefaultProxySelector$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultProxySelector$1, init$, void)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(DefaultProxySelector$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.spi.DefaultProxySelector",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.spi.DefaultProxySelector$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.spi.DefaultProxySelector$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.spi.DefaultProxySelector"
	};
	$loadClass(DefaultProxySelector$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultProxySelector$1);
	});
	return class$;
}

$Class* DefaultProxySelector$1::class$ = nullptr;

		} // spi
	} // net
} // sun