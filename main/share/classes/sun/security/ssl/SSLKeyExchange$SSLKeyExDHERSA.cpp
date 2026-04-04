#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHERSA.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef DHE
#undef KE
#undef RSA

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

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHERSA::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHERSA::init$() {
}

void SSLKeyExchange$SSLKeyExDHERSA::clinit$($Class* clazz) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHERSA::KE, $new($SSLKeyExchange, $($List::of($X509Authentication::RSA)), $SSLKeyExchange$T12KeyAgreement::DHE));
}

SSLKeyExchange$SSLKeyExDHERSA::SSLKeyExchange$SSLKeyExDHERSA() {
}

$Class* SSLKeyExchange$SSLKeyExDHERSA::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHERSA, KE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExDHERSA, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSA", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHERSA", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSA",
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
	$loadClass(SSLKeyExchange$SSLKeyExDHERSA, name, initialize, &classInfo$$, SSLKeyExchange$SSLKeyExDHERSA::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$SSLKeyExDHERSA);
	});
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHERSA::class$ = nullptr;

		} // ssl
	} // security
} // sun