#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHERSAOrPSS.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef ECDHE
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

$SSLKeyExchange* SSLKeyExchange$SSLKeyExECDHERSAOrPSS::KE = nullptr;

void SSLKeyExchange$SSLKeyExECDHERSAOrPSS::init$() {
}

void SSLKeyExchange$SSLKeyExECDHERSAOrPSS::clinit$($Class* clazz) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExECDHERSAOrPSS::KE, $new($SSLKeyExchange, $($List::of($X509Authentication::RSA_OR_PSS)), $SSLKeyExchange$T12KeyAgreement::ECDHE));
}

SSLKeyExchange$SSLKeyExECDHERSAOrPSS::SSLKeyExchange$SSLKeyExECDHERSAOrPSS() {
}

$Class* SSLKeyExchange$SSLKeyExECDHERSAOrPSS::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExECDHERSAOrPSS, KE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExECDHERSAOrPSS, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSAOrPSS", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHERSAOrPSS", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHERSAOrPSS",
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
	$loadClass(SSLKeyExchange$SSLKeyExECDHERSAOrPSS, name, initialize, &classInfo$$, SSLKeyExchange$SSLKeyExECDHERSAOrPSS::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$SSLKeyExECDHERSAOrPSS);
	});
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExECDHERSAOrPSS::class$ = nullptr;

		} // ssl
	} // security
} // sun