#include <java/net/CookiePolicy.h>
#include <java/net/CookiePolicy$1.h>
#include <java/net/CookiePolicy$2.h>
#include <java/net/CookiePolicy$3.h>
#include <java/net/HttpCookie.h>
#include <java/net/URI.h>
#include <jcpp.h>

#undef ACCEPT_ALL
#undef ACCEPT_NONE
#undef ACCEPT_ORIGINAL_SERVER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CookiePolicy$1 = ::java::net::CookiePolicy$1;
using $CookiePolicy$2 = ::java::net::CookiePolicy$2;
using $CookiePolicy$3 = ::java::net::CookiePolicy$3;
using $HttpCookie = ::java::net::HttpCookie;
using $URI = ::java::net::URI;

namespace java {
	namespace net {

CookiePolicy* CookiePolicy::ACCEPT_ALL = nullptr;
CookiePolicy* CookiePolicy::ACCEPT_NONE = nullptr;
CookiePolicy* CookiePolicy::ACCEPT_ORIGINAL_SERVER = nullptr;

void CookiePolicy::clinit$($Class* clazz) {
	$assignStatic(CookiePolicy::ACCEPT_ALL, $new($CookiePolicy$1));
	$assignStatic(CookiePolicy::ACCEPT_NONE, $new($CookiePolicy$2));
	$assignStatic(CookiePolicy::ACCEPT_ORIGINAL_SERVER, $new($CookiePolicy$3));
}

$Class* CookiePolicy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ACCEPT_ALL", "Ljava/net/CookiePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CookiePolicy, ACCEPT_ALL)},
		{"ACCEPT_NONE", "Ljava/net/CookiePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CookiePolicy, ACCEPT_NONE)},
		{"ACCEPT_ORIGINAL_SERVER", "Ljava/net/CookiePolicy;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CookiePolicy, ACCEPT_ORIGINAL_SERVER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"shouldAccept", "(Ljava/net/URI;Ljava/net/HttpCookie;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CookiePolicy, shouldAccept, bool, $URI*, $HttpCookie*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.CookiePolicy$3", nullptr, nullptr, 0},
		{"java.net.CookiePolicy$2", nullptr, nullptr, 0},
		{"java.net.CookiePolicy$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.CookiePolicy",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.net.CookiePolicy$3,java.net.CookiePolicy$2,java.net.CookiePolicy$1"
	};
	$loadClass(CookiePolicy, name, initialize, &classInfo$$, CookiePolicy::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CookiePolicy);
	});
	return class$;
}

$Class* CookiePolicy::class$ = nullptr;

	} // net
} // java