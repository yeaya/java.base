#include <B6529759$a.h>
#include <B6529759.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;

void B6529759$a::init$() {
	$URLStreamHandler::init$();
}

$URLConnection* B6529759$a::openConnection($URL* u) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void B6529759$a::parseURL($URL* u, $String* spec, int32_t start, int32_t limit) {
	$throwNew($RuntimeException);
}

B6529759$a::B6529759$a() {
}

$Class* B6529759$a::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(B6529759$a, init$, void)},
		{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED, $virtualMethod(B6529759$a, openConnection, $URLConnection*, $URL*)},
		{"parseURL", "(Ljava/net/URL;Ljava/lang/String;II)V", nullptr, $PROTECTED, $virtualMethod(B6529759$a, parseURL, void, $URL*, $String*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"B6529759$a", "B6529759", "a", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"B6529759$a",
		"java.net.URLStreamHandler",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"B6529759"
	};
	$loadClass(B6529759$a, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B6529759$a);
	});
	return class$;
}

$Class* B6529759$a::class$ = nullptr;