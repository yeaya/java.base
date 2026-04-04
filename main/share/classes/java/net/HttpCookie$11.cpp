#include <java/net/HttpCookie$11.h>
#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;

namespace java {
	namespace net {

void HttpCookie$11::init$() {
}

void HttpCookie$11::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	if ($nc(cookie)->getMaxAge() == -1) {
		int64_t delta = cookie->expiryDate2DeltaSeconds(attrValue);
		cookie->setMaxAge(delta > 0 ? delta : 0);
	}
}

HttpCookie$11::HttpCookie$11() {
}

$Class* HttpCookie$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HttpCookie$11, init$, void)},
		{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpCookie$11, assign, void, $HttpCookie*, $String*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.HttpCookie",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.HttpCookie$11", nullptr, nullptr, 0},
		{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.HttpCookie$11",
		"java.lang.Object",
		"java.net.HttpCookie$CookieAttributeAssignor",
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
	$loadClass(HttpCookie$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpCookie$11);
	});
	return class$;
}

$Class* HttpCookie$11::class$ = nullptr;

	} // net
} // java