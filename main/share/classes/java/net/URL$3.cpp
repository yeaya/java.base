#include <java/net/URL$3.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;

namespace java {
	namespace net {

void URL$3::init$() {
}

$URLStreamHandler* URL$3::getHandler($URL* u) {
	return $nc(u)->handler;
}

URL$3::URL$3() {
}

$Class* URL$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(URL$3, init$, void)},
		{"getHandler", "(Ljava/net/URL;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC, $virtualMethod(URL$3, getHandler, $URLStreamHandler*, $URL*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.URL",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URL$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URL$3",
		"java.lang.Object",
		"jdk.internal.access.JavaNetURLAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.URL"
	};
	$loadClass(URL$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URL$3);
	});
	return class$;
}

$Class* URL$3::class$ = nullptr;

	} // net
} // java