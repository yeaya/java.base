#include <sun/security/ssl/Authenticator$SSLNullAuthenticator.h>
#include <sun/security/ssl/Authenticator$SSLAuthenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator$SSLAuthenticator = ::sun::security::ssl::Authenticator$SSLAuthenticator;

namespace sun {
	namespace security {
		namespace ssl {

void Authenticator$SSLNullAuthenticator::init$() {
	$Authenticator$SSLAuthenticator::init$($$new($bytes, 8));
}

Authenticator$SSLNullAuthenticator::Authenticator$SSLNullAuthenticator() {
}

$Class* Authenticator$SSLNullAuthenticator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Authenticator$SSLNullAuthenticator, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$SSLNullAuthenticator", "sun.security.ssl.Authenticator", "SSLNullAuthenticator", $PRIVATE | $STATIC},
		{"sun.security.ssl.Authenticator$SSLAuthenticator", "sun.security.ssl.Authenticator", "SSLAuthenticator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.Authenticator$SSLNullAuthenticator",
		"sun.security.ssl.Authenticator$SSLAuthenticator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.Authenticator"
	};
	$loadClass(Authenticator$SSLNullAuthenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$SSLNullAuthenticator);
	});
	return class$;
}

$Class* Authenticator$SSLNullAuthenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun