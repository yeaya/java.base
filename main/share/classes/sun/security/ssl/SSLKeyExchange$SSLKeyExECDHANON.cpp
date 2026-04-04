#include <sun/security/ssl/SSLKeyExchange$SSLKeyExECDHANON.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <jcpp.h>

#undef ECDHE
#undef KE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $SSLKeyExchange = ::sun::security::ssl::SSLKeyExchange;
using $SSLKeyExchange$T12KeyAgreement = ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement;

namespace sun {
	namespace security {
		namespace ssl {

$SSLKeyExchange* SSLKeyExchange$SSLKeyExECDHANON::KE = nullptr;

void SSLKeyExchange$SSLKeyExECDHANON::init$() {
}

void SSLKeyExchange$SSLKeyExECDHANON::clinit$($Class* clazz) {
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExECDHANON::KE, $new($SSLKeyExchange, nullptr, $SSLKeyExchange$T12KeyAgreement::ECDHE));
}

SSLKeyExchange$SSLKeyExECDHANON::SSLKeyExchange$SSLKeyExECDHANON() {
}

$Class* SSLKeyExchange$SSLKeyExECDHANON::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExECDHANON, KE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExECDHANON, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHANON", "sun.security.ssl.SSLKeyExchange", "SSLKeyExECDHANON", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLKeyExchange$SSLKeyExECDHANON",
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
	$loadClass(SSLKeyExchange$SSLKeyExECDHANON, name, initialize, &classInfo$$, SSLKeyExchange$SSLKeyExECDHANON::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$SSLKeyExECDHANON);
	});
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExECDHANON::class$ = nullptr;

		} // ssl
	} // security
} // sun