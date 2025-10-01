#include <sun/net/www/protocol/http/AuthenticatorKeys.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Authenticator.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <sun/net/www/protocol/http/AuthenticatorKeys$AuthenticatorKeyAccess.h>
#include <jcpp.h>

#undef IDS
#undef DEFAULT

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

$FieldInfo _AuthenticatorKeys_FieldInfo_[] = {
	{"DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthenticatorKeys, DEFAULT)},
	{"IDS", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthenticatorKeys, IDS)},
	{"authenticatorKeyAccess", "Lsun/net/www/protocol/http/AuthenticatorKeys$AuthenticatorKeyAccess;", nullptr, $PRIVATE | $STATIC, $staticField(AuthenticatorKeys, authenticatorKeyAccess)},
	{}
};

$MethodInfo _AuthenticatorKeys_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AuthenticatorKeys::*)()>(&AuthenticatorKeys::init$))},
	{"computeKey", "(Ljava/net/Authenticator;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Authenticator*)>(&AuthenticatorKeys::computeKey))},
	{"getKey", "(Ljava/net/Authenticator;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Authenticator*)>(&AuthenticatorKeys::getKey))},
	{"setAuthenticatorKeyAccess", "(Lsun/net/www/protocol/http/AuthenticatorKeys$AuthenticatorKeyAccess;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($AuthenticatorKeys$AuthenticatorKeyAccess*)>(&AuthenticatorKeys::setAuthenticatorKeyAccess))},
	{}
};

$InnerClassInfo _AuthenticatorKeys_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.AuthenticatorKeys$AuthenticatorKeyAccess", "sun.net.www.protocol.http.AuthenticatorKeys", "AuthenticatorKeyAccess", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AuthenticatorKeys_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.net.www.protocol.http.AuthenticatorKeys",
	"java.lang.Object",
	nullptr,
	_AuthenticatorKeys_FieldInfo_,
	_AuthenticatorKeys_MethodInfo_,
	nullptr,
	nullptr,
	_AuthenticatorKeys_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.AuthenticatorKeys$AuthenticatorKeyAccess"
};

$Object* allocate$AuthenticatorKeys($Class* clazz) {
	return $of($alloc(AuthenticatorKeys));
}

$String* AuthenticatorKeys::DEFAULT = nullptr;
$AtomicLong* AuthenticatorKeys::IDS = nullptr;
$AuthenticatorKeys$AuthenticatorKeyAccess* AuthenticatorKeys::authenticatorKeyAccess = nullptr;

void AuthenticatorKeys::init$() {
	$throwNew($InternalError, "Trying to instantiate static class"_s);
}

$String* AuthenticatorKeys::computeKey($Authenticator* a) {
	$init(AuthenticatorKeys);
	$var($String, var$2, $$str({$$str($System::identityHashCode(a)), "-"_s}));
	$var($String, var$1, $$concat(var$2, $$str($nc(AuthenticatorKeys::IDS)->incrementAndGet())));
	$var($String, var$0, $$concat(var$1, "@"));
	return $concat(var$0, $($nc($of(a))->getClass()->getName()));
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

void clinit$AuthenticatorKeys($Class* class$) {
	$assignStatic(AuthenticatorKeys::DEFAULT, "default"_s);
	$assignStatic(AuthenticatorKeys::IDS, $new($AtomicLong));
}

AuthenticatorKeys::AuthenticatorKeys() {
}

$Class* AuthenticatorKeys::load$($String* name, bool initialize) {
	$loadClass(AuthenticatorKeys, name, initialize, &_AuthenticatorKeys_ClassInfo_, clinit$AuthenticatorKeys, allocate$AuthenticatorKeys);
	return class$;
}

$Class* AuthenticatorKeys::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun