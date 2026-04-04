#include <sun/net/www/protocol/http/AuthCacheValue.h>
#include <java/net/PasswordAuthentication.h>
#include <sun/net/www/protocol/http/AuthCache.h>
#include <sun/net/www/protocol/http/AuthCacheImpl.h>
#include <sun/net/www/protocol/http/AuthCacheValue$Type.h>
#include <sun/net/www/protocol/http/AuthScheme.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $AuthCache = ::sun::net::www::protocol::http::AuthCache;
using $AuthCacheImpl = ::sun::net::www::protocol::http::AuthCacheImpl;
using $AuthCacheValue$Type = ::sun::net::www::protocol::http::AuthCacheValue$Type;
using $AuthScheme = ::sun::net::www::protocol::http::AuthScheme;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$AuthCache* AuthCacheValue::cache = nullptr;

void AuthCacheValue::setAuthCache($AuthCache* map) {
	$init(AuthCacheValue);
	$assignStatic(AuthCacheValue::cache, map);
}

void AuthCacheValue::init$() {
}

void AuthCacheValue::clinit$($Class* clazz) {
	$assignStatic(AuthCacheValue::cache, $new($AuthCacheImpl));
}

AuthCacheValue::AuthCacheValue() {
}

$Class* AuthCacheValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AuthCacheValue, serialVersionUID)},
		{"cache", "Lsun/net/www/protocol/http/AuthCache;", nullptr, $PROTECTED | $STATIC, $staticField(AuthCacheValue, cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AuthCacheValue, init$, void)},
		{"credentials", "()Ljava/net/PasswordAuthentication;", nullptr, $ABSTRACT, $virtualMethod(AuthCacheValue, credentials, $PasswordAuthentication*)},
		{"getAuthScheme", "()Lsun/net/www/protocol/http/AuthScheme;", nullptr, $ABSTRACT, $virtualMethod(AuthCacheValue, getAuthScheme, $AuthScheme*)},
		{"getAuthType", "()Lsun/net/www/protocol/http/AuthCacheValue$Type;", nullptr, $ABSTRACT, $virtualMethod(AuthCacheValue, getAuthType, $AuthCacheValue$Type*)},
		{"getHost", "()Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(AuthCacheValue, getHost, $String*)},
		{"getPath", "()Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(AuthCacheValue, getPath, $String*)},
		{"getPort", "()I", nullptr, $ABSTRACT, $virtualMethod(AuthCacheValue, getPort, int32_t)},
		{"getProtocolScheme", "()Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(AuthCacheValue, getProtocolScheme, $String*)},
		{"getRealm", "()Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(AuthCacheValue, getRealm, $String*)},
		{"setAuthCache", "(Lsun/net/www/protocol/http/AuthCache;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthCacheValue, setAuthCache, void, $AuthCache*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.AuthCacheValue$Type", "sun.net.www.protocol.http.AuthCacheValue", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.net.www.protocol.http.AuthCacheValue",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.AuthCacheValue$Type"
	};
	$loadClass(AuthCacheValue, name, initialize, &classInfo$$, AuthCacheValue::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthCacheValue);
	});
	return class$;
}

$Class* AuthCacheValue::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun