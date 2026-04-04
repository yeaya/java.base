#include <sun/net/www/protocol/http/AuthCache.h>
#include <sun/net/www/protocol/http/AuthCacheValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AuthCacheValue = ::sun::net::www::protocol::http::AuthCacheValue;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$Class* AuthCache::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "(Ljava/lang/String;Ljava/lang/String;)Lsun/net/www/protocol/http/AuthCacheValue;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthCache, get, $AuthCacheValue*, $String*, $String*)},
		{"put", "(Ljava/lang/String;Lsun/net/www/protocol/http/AuthCacheValue;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthCache, put, void, $String*, $AuthCacheValue*)},
		{"remove", "(Ljava/lang/String;Lsun/net/www/protocol/http/AuthCacheValue;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthCache, remove, void, $String*, $AuthCacheValue*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.net.www.protocol.http.AuthCache",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AuthCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuthCache);
	});
	return class$;
}

$Class* AuthCache::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun