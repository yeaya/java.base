#include <java/net/HttpCookie$12.h>
#include <java/net/HttpCookie.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;
using $List = ::java::util::List;

namespace java {
	namespace net {

void HttpCookie$12::init$() {
}

$List* HttpCookie$12::parse($String* header) {
	return $HttpCookie::parse(header, true);
}

$String* HttpCookie$12::header($HttpCookie* cookie) {
	return $nc(cookie)->header$;
}

HttpCookie$12::HttpCookie$12() {
}

$Class* HttpCookie$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HttpCookie$12, init$, void)},
		{"header", "(Ljava/net/HttpCookie;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpCookie$12, header, $String*, $HttpCookie*)},
		{"parse", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/net/HttpCookie;>;", $PUBLIC, $virtualMethod(HttpCookie$12, parse, $List*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.HttpCookie",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.HttpCookie$12", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.HttpCookie$12",
		"java.lang.Object",
		"jdk.internal.access.JavaNetHttpCookieAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.HttpCookie"
	};
	$loadClass(HttpCookie$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpCookie$12);
	});
	return class$;
}

$Class* HttpCookie$12::class$ = nullptr;

	} // net
} // java