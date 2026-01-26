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

$FieldInfo _AuthCacheValue_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AuthCacheValue, serialVersionUID)},
	{"cache", "Lsun/net/www/protocol/http/AuthCache;", nullptr, $PROTECTED | $STATIC, $staticField(AuthCacheValue, cache)},
	{}
};

$MethodInfo _AuthCacheValue_MethodInfo_[] = {
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

$InnerClassInfo _AuthCacheValue_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.AuthCacheValue$Type", "sun.net.www.protocol.http.AuthCacheValue", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _AuthCacheValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.www.protocol.http.AuthCacheValue",
	"java.lang.Object",
	"java.io.Serializable",
	_AuthCacheValue_FieldInfo_,
	_AuthCacheValue_MethodInfo_,
	nullptr,
	nullptr,
	_AuthCacheValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.AuthCacheValue$Type"
};

$Object* allocate$AuthCacheValue($Class* clazz) {
	return $of($alloc(AuthCacheValue));
}

$AuthCache* AuthCacheValue::cache = nullptr;

void AuthCacheValue::setAuthCache($AuthCache* map) {
	$init(AuthCacheValue);
	$assignStatic(AuthCacheValue::cache, map);
}

void AuthCacheValue::init$() {
}

void clinit$AuthCacheValue($Class* class$) {
	$assignStatic(AuthCacheValue::cache, $new($AuthCacheImpl));
}

AuthCacheValue::AuthCacheValue() {
}

$Class* AuthCacheValue::load$($String* name, bool initialize) {
	$loadClass(AuthCacheValue, name, initialize, &_AuthCacheValue_ClassInfo_, clinit$AuthCacheValue, allocate$AuthCacheValue);
	return class$;
}

$Class* AuthCacheValue::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun