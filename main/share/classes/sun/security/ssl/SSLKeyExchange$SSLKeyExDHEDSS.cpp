#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHEDSS.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef DHE
#undef DSA
#undef KE

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

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHEDSS::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHEDSS::init$() {
}

void SSLKeyExchange$SSLKeyExDHEDSS::clinit$($Class* clazz) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHEDSS::KE, $new($SSLKeyExchange, $($List::of($X509Authentication::DSA)), $SSLKeyExchange$T12KeyAgreement::DHE));
}

SSLKeyExchange$SSLKeyExDHEDSS::SSLKeyExchange$SSLKeyExDHEDSS() {
}

$Class* SSLKeyExchange$SSLKeyExDHEDSS::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHEDSS, KE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExDHEDSS, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSS", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHEDSS", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSS",
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
	$loadClass(SSLKeyExchange$SSLKeyExDHEDSS, name, initialize, &classInfo$$, SSLKeyExchange$SSLKeyExDHEDSS::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$SSLKeyExDHEDSS);
	});
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHEDSS::class$ = nullptr;

		} // ssl
	} // security
} // sun