#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHERSAOrPSS.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef DHE
#undef KE
#undef RSA_OR_PSS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLKeyExchange$T12KeyAgreement = ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement;
using $X509Authentication = ::sun::security::ssl::X509Authentication;

namespace sun {
	namespace security {
		namespace ssl {

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHERSAOrPSS::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHERSAOrPSS::init$() {
}

void SSLKeyExchange$SSLKeyExDHERSAOrPSS::clinit$($Class* clazz) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHERSAOrPSS::KE, $new($SSLKeyExchange, $($List::of($X509Authentication::RSA_OR_PSS)), $SSLKeyExchange$T12KeyAgreement::DHE));
}

SSLKeyExchange$SSLKeyExDHERSAOrPSS::SSLKeyExchange$SSLKeyExDHERSAOrPSS() {
}

$Class* SSLKeyExchange$SSLKeyExDHERSAOrPSS::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHERSAOrPSS, KE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExDHERSAOrPSS, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAOrPSS", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHERSAOrPSS", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAOrPSS",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLKeyExchange"
	};
	$loadClass(SSLKeyExchange$SSLKeyExDHERSAOrPSS, name, initialize, &classInfo$$, SSLKeyExchange$SSLKeyExDHERSAOrPSS::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$SSLKeyExDHERSAOrPSS);
	});
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHERSAOrPSS::class$ = nullptr;

		} // ssl
	} // security
} // sun