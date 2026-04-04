#include <java/net/CookieStore.h>
#include <java/net/HttpCookie.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;
using $URI = ::java::net::URI;
using $List = ::java::util::List;

namespace java {
	namespace net {

$Class* CookieStore::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(Ljava/net/URI;Ljava/net/HttpCookie;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CookieStore, add, void, $URI*, $HttpCookie*)},
		{"get", "(Ljava/net/URI;)Ljava/util/List;", "(Ljava/net/URI;)Ljava/util/List<Ljava/net/HttpCookie;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CookieStore, get, $List*, $URI*)},
		{"getCookies", "()Ljava/util/List;", "()Ljava/util/List<Ljava/net/HttpCookie;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CookieStore, getCookies, $List*)},
		{"getURIs", "()Ljava/util/List;", "()Ljava/util/List<Ljava/net/URI;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CookieStore, getURIs, $List*)},
		{"remove", "(Ljava/net/URI;Ljava/net/HttpCookie;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CookieStore, remove, bool, $URI*, $HttpCookie*)},
		{"removeAll", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CookieStore, removeAll, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.net.CookieStore",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CookieStore, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CookieStore);
	});
	return class$;
}

$Class* CookieStore::class$ = nullptr;

	} // net
} // java