#include <sun/security/ssl/Authenticator$DTLSNullAuthenticator.h>
#include <sun/security/ssl/Authenticator$DTLSAuthenticator.h>
#include <sun/security/ssl/Authenticator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator$DTLSAuthenticator = ::sun::security::ssl::Authenticator$DTLSAuthenticator;

namespace sun {
	namespace security {
		namespace ssl {

void Authenticator$DTLSNullAuthenticator::init$() {
	$Authenticator$DTLSAuthenticator::init$($$new($bytes, 8));
}

Authenticator$DTLSNullAuthenticator::Authenticator$DTLSNullAuthenticator() {
}

$Class* Authenticator$DTLSNullAuthenticator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Authenticator$DTLSNullAuthenticator, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$DTLSNullAuthenticator", "sun.security.ssl.Authenticator", "DTLSNullAuthenticator", $PRIVATE | $STATIC},
		{"sun.security.ssl.Authenticator$DTLSAuthenticator", "sun.security.ssl.Authenticator", "DTLSAuthenticator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.Authenticator$DTLSNullAuthenticator",
		"sun.security.ssl.Authenticator$DTLSAuthenticator",
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
	$loadClass(Authenticator$DTLSNullAuthenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$DTLSNullAuthenticator);
	});
	return class$;
}

$Class* Authenticator$DTLSNullAuthenticator::class$ = nullptr;

		} // ssl
	} // security
} // sun