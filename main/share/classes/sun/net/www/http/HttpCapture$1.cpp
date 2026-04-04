#include <sun/net/www/http/HttpCapture$1.h>
#include <sun/net/NetProperties.h>
#include <sun/net/www/http/HttpCapture.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetProperties = ::sun::net::NetProperties;

namespace sun {
	namespace net {
		namespace www {
			namespace http {

void HttpCapture$1::init$() {
}

$Object* HttpCapture$1::run() {
	return $of($NetProperties::get("sun.net.http.captureRules"_s));
}

HttpCapture$1::HttpCapture$1() {
}

$Class* HttpCapture$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HttpCapture$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpCapture$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.www.http.HttpCapture",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.http.HttpCapture$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.www.http.HttpCapture$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.www.http.HttpCapture"
	};
	$loadClass(HttpCapture$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpCapture$1);
	});
	return class$;
}

$Class* HttpCapture$1::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun