#include <sun/net/spi/DefaultProxySelector$2.h>
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

void DefaultProxySelector$2::init$() {
}

$Object* DefaultProxySelector$2::run() {
	return $of($NetProperties::getInteger("socksProxyVersion"_s, 5));
}

DefaultProxySelector$2::DefaultProxySelector$2() {
}

$Class* DefaultProxySelector$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultProxySelector$2, init$, void)},
		{"run", "()Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(DefaultProxySelector$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.spi.DefaultProxySelector",
		"socksProxyVersion",
		"()I"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.spi.DefaultProxySelector$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.spi.DefaultProxySelector$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.spi.DefaultProxySelector"
	};
	$loadClass(DefaultProxySelector$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultProxySelector$2);
	});
	return class$;
}

$Class* DefaultProxySelector$2::class$ = nullptr;

		} // spi
	} // net
} // sun