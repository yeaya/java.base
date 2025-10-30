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

$MethodInfo _AuthCache_MethodInfo_[] = {
	{"get", "(Ljava/lang/String;Ljava/lang/String;)Lsun/net/www/protocol/http/AuthCacheValue;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/lang/String;Lsun/net/www/protocol/http/AuthCacheValue;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/String;Lsun/net/www/protocol/http/AuthCacheValue;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AuthCache_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.net.www.protocol.http.AuthCache",
	nullptr,
	nullptr,
	nullptr,
	_AuthCache_MethodInfo_
};

$Object* allocate$AuthCache($Class* clazz) {
	return $of($alloc(AuthCache));
}

$Class* AuthCache::load$($String* name, bool initialize) {
	$loadClass(AuthCache, name, initialize, &_AuthCache_ClassInfo_, allocate$AuthCache);
	return class$;
}

$Class* AuthCache::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun