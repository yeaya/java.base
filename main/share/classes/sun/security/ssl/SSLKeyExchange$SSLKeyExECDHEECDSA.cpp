#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHEECDSA.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef EC
#undef ECDHE
#undef EDDSA
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

$SSLKeyExchange* SSLKeyExchange$SSLKeyExECDHEECDSA::KE = nullptr;

void SSLKeyExchange$SSLKeyExECDHEECDSA::init$() {
}

void SSLKeyExchange$SSLKeyExECDHEECDSA::clinit$($Class* clazz) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExECDHEECDSA::KE, $new($SSLKeyExchange, $($List::of($X509Authentication::EC, $X509Authentication::EDDSA)), $SSLKeyExchange$T12KeyAgreement::ECDHE));
}

SSLKeyExchange$SSLKeyExECDHEECDSA::SSLKeyExchange$SSLKeyExECDHEECDSA() {
}

$Class* SSLKeyExchange$SSLKeyExECDHEECDSA::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExECDHEECDSA, KE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExECDHEECDSA, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHEECDSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHEECDSA", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHEECDSA",
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
	$loadClass(SSLKeyExchange$SSLKeyExECDHEECDSA, name, initialize, &classInfo$$, SSLKeyExchange$SSLKeyExECDHEECDSA::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$SSLKeyExECDHEECDSA);
	});
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExECDHEECDSA::class$ = nullptr;

		} // ssl
	} // security
} // sun