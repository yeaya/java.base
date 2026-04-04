#include <java/net/CookiePolicy$2.h>
#include <java/net/HttpCookie.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;
using $URI = ::java::net::URI;

namespace java {
	namespace net {

void CookiePolicy$2::init$() {
}

bool CookiePolicy$2::shouldAccept($URI* uri, $HttpCookie* cookie) {
	return false;
}

CookiePolicy$2::CookiePolicy$2() {
}

$Class* CookiePolicy$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CookiePolicy$2, init$, void)},
		{"shouldAccept", "(Ljava/net/URI;Ljava/net/HttpCookie;)Z", nullptr, $PUBLIC, $virtualMethod(CookiePolicy$2, shouldAccept, bool, $URI*, $HttpCookie*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.CookiePolicy",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.CookiePolicy$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.CookiePolicy$2",
		"java.lang.Object",
		"java.net.CookiePolicy",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.net.CookiePolicy"
	};
	$loadClass(CookiePolicy$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CookiePolicy$2);
	});
	return class$;
}

$Class* CookiePolicy$2::class$ = nullptr;

	} // net
} // java