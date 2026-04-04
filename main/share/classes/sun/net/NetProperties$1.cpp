#include <sun/net/NetProperties$1.h>
#include <sun/net/NetProperties.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetProperties = ::sun::net::NetProperties;

namespace sun {
	namespace net {

void NetProperties$1::init$() {
}

$Object* NetProperties$1::run() {
	$NetProperties::loadDefaultProperties();
	return nullptr;
}

NetProperties$1::NetProperties$1() {
}

$Class* NetProperties$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NetProperties$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(NetProperties$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.NetProperties",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.NetProperties$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.NetProperties$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.NetProperties"
	};
	$loadClass(NetProperties$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetProperties$1);
	});
	return class$;
}

$Class* NetProperties$1::class$ = nullptr;

	} // net
} // sun