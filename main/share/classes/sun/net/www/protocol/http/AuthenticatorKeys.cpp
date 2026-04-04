#include <sun/net/www/protocol/http/AuthenticatorKeys.h>
#include <java/lang/InternalError.h>
#include <java/net/Authenticator.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <sun/net/www/protocol/http/AuthenticatorKeys$AuthenticatorKeyAccess.h>
#include <jcpp.h>

#undef DEFAULT
#undef IDS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $AuthenticatorKeys$AuthenticatorKeyAccess = ::sun::net::www::protocol::http::AuthenticatorKeys$AuthenticatorKeyAccess;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$String* AuthenticatorKeys::DEFAULT = nullptr;
$AtomicLong* AuthenticatorKeys::IDS = nullptr;
$AuthenticatorKeys$AuthenticatorKeyAccess* AuthenticatorKeys::authenticatorKeyAccess = nullptr;

void AuthenticatorKeys::init$() {
	$throwNew($InternalError, "Trying to instantiate static class"_s);
}

$String* AuthenticatorKeys::computeKey($Authenticator* a) {
	$init(AuthenticatorKeys);
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($System::identityHashCode(a));
	var$0->append("-"_s);
	var$0->append(AuthenticatorKeys::IDS->incrementAndGet());
	var$0->append("@"_s);
	var$0->append($($nc($of(a))->getClass()->getName()));
	return $str(var$0);
}

$String* AuthenticatorKeys::getKey($Authenticator* authenticator) {
	$init(AuthenticatorKeys);
	if (authenticator == nullptr) {
		return AuthenticatorKeys::DEFAULT;
	}
	return $nc(AuthenticatorKeys::authenticatorKeyAccess)->getKey(authenticator);
}

void AuthenticatorKeys::setAuthenticatorKeyAccess($AuthenticatorKeys$AuthenticatorKeyAccess* access) {
	$init(AuthenticatorKeys);
	if (AuthenticatorKeys::authenticatorKeyAccess == nullptr && access != nullptr) {
		$assignStatic(AuthenticatorKeys::authenticatorKeyAccess, access);
	}
}

void AuthenticatorKeys::clinit$($Class* clazz) {
	$assignStatic(AuthenticatorKeys::DEFAULT, "default"_s);
	$assignStatic(AuthenticatorKeys::IDS, $new($AtomicLong));
}

AuthenticatorKeys::AuthenticatorKeys() {
}

$Class* AuthenticatorKeys::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthenticatorKeys, DEFAULT)},
		{"IDS", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthenticatorKeys, IDS)},
		{"authenticatorKeyAccess", "Lsun/net/www/protocol/http/AuthenticatorKeys$AuthenticatorKeyAccess;", nullptr, $PRIVATE | $STATIC, $staticField(AuthenticatorKeys, authenticatorKeyAccess)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AuthenticatorKeys, init$, void)},
		{"computeKey", "(Ljava/net/Authenticator;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthenticatorKeys, computeKey, $String*, $Authenticator*)},
		{"getKey", "(Ljava/net/Authenticator;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthenticatorKeys, getKey, $String*, $Authenticator*)},
		{"setAuthenticatorKeyAccess", "(Lsun/net/www/protocol/http/AuthenticatorKeys$AuthenticatorKeyAccess;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthenticatorKeys, setAuthenticatorKeyAccess, void, $AuthenticatorKeys$AuthenticatorKeyAccess*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.www.protocol.http.AuthenticatorKeys$AuthenticatorKeyAccess", "sun.net.www.protocol.http.AuthenticatorKeys", "AuthenticatorKeyAccess", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.net.www.protocol.http.AuthenticatorKeys",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.net.www.protocol.http.AuthenticatorKeys$AuthenticatorKeyAccess"
	};
	$loadClass(AuthenticatorKeys, name, initialize, &classInfo$$, AuthenticatorKeys::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AuthenticatorKeys);
	});
	return class$;
}

$Class* AuthenticatorKeys::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun