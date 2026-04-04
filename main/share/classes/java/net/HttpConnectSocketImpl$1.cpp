#include <java/net/HttpConnectSocketImpl$1.h>
#include <java/lang/reflect/Field.h>
#include <java/net/HttpConnectSocketImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpConnectSocketImpl = ::java::net::HttpConnectSocketImpl;

namespace java {
	namespace net {

void HttpConnectSocketImpl$1::init$() {
}

$Object* HttpConnectSocketImpl$1::run() {
	$beforeCallerSensitive();
	$init($HttpConnectSocketImpl);
	$nc($HttpConnectSocketImpl::httpField)->setAccessible(true);
	$nc($HttpConnectSocketImpl::serverSocketField)->setAccessible(true);
	return nullptr;
}

HttpConnectSocketImpl$1::HttpConnectSocketImpl$1() {
}

$Class* HttpConnectSocketImpl$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HttpConnectSocketImpl$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(HttpConnectSocketImpl$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.HttpConnectSocketImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.HttpConnectSocketImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.HttpConnectSocketImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.HttpConnectSocketImpl"
	};
	$loadClass(HttpConnectSocketImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpConnectSocketImpl$1);
	});
	return class$;
}

$Class* HttpConnectSocketImpl$1::class$ = nullptr;

	} // net
} // java