#include <CookieNegativeMaxAge.h>
#include <java/net/HttpCookie.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HttpCookie = ::java::net::HttpCookie;
using $List = ::java::util::List;

void CookieNegativeMaxAge::init$() {
}

void CookieNegativeMaxAge::main($StringArray* args) {
	$useLocalObjectStack();
	$var($HttpCookie, cookie, $new($HttpCookie, "testCookie"_s, "value"_s));
	cookie->setMaxAge($Integer::MIN_VALUE);
	if (cookie->hasExpired()) {
		$throwNew($RuntimeException, "Cookie has unexpectedly expired"_s);
	}
	$var($List, cookies, $HttpCookie::parse("Set-Cookie: expiredCookie=value; expires=Thu, 01 Jan 1970 00:00:00 GMT"_s));
	if ($nc(cookies)->size() == 1) {
		if ($$sure($HttpCookie, cookies->get(0))->getMaxAge() != 0) {
			$throwNew($RuntimeException, "Cookie maxAge expected to be 0"_s);
		}
	} else {
		$throwNew($RuntimeException, "Header was incorrectly parsed"_s);
	}
}

CookieNegativeMaxAge::CookieNegativeMaxAge() {
}

$Class* CookieNegativeMaxAge::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CookieNegativeMaxAge, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(CookieNegativeMaxAge, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CookieNegativeMaxAge",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CookieNegativeMaxAge, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CookieNegativeMaxAge);
	});
	return class$;
}

$Class* CookieNegativeMaxAge::class$ = nullptr;