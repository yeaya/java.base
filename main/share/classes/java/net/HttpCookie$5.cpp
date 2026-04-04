#include <java/net/HttpCookie$5.h>
#include <java/lang/NumberFormatException.h>
#include <java/net/HttpCookie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $HttpCookie = ::java::net::HttpCookie;

namespace java {
	namespace net {

void HttpCookie$5::init$() {
}

void HttpCookie$5::assign($HttpCookie* cookie, $String* attrName, $String* attrValue) {
	try {
		int64_t maxage = $Long::parseLong(attrValue);
		if ($nc(cookie)->getMaxAge() == -1) {
			cookie->setMaxAge(maxage);
		}
	} catch ($NumberFormatException& ignored) {
		$throwNew($IllegalArgumentException, "Illegal cookie max-age attribute"_s);
	}
}

HttpCookie$5::HttpCookie$5() {
}

$Class* HttpCookie$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HttpCookie$5, init$, void)},
		{"assign", "(Ljava/net/HttpCookie;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpCookie$5, assign, void, $HttpCookie*, $String*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.HttpCookie",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.HttpCookie$5", nullptr, nullptr, 0},
		{"java.net.HttpCookie$CookieAttributeAssignor", "java.net.HttpCookie", "CookieAttributeAssignor", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.HttpCookie$5",
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
	$loadClass(HttpCookie$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpCookie$5);
	});
	return class$;
}

$Class* HttpCookie$5::class$ = nullptr;

	} // net
} // java