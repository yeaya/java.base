#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHANONExport.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <jcpp.h>

#undef DHE_EXPORT
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

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHANONExport::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHANONExport::init$() {
}

void SSLKeyExchange$SSLKeyExDHANONExport::clinit$($Class* clazz) {
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHANONExport::KE, $new($SSLKeyExchange, nullptr, $SSLKeyExchange$T12KeyAgreement::DHE_EXPORT));
}

SSLKeyExchange$SSLKeyExDHANONExport::SSLKeyExchange$SSLKeyExDHANONExport() {
}

$Class* SSLKeyExchange$SSLKeyExDHANONExport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHANONExport, KE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExDHANONExport, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHANONExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHANONExport", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLKeyExchange$SSLKeyExDHANONExport",
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
	$loadClass(SSLKeyExchange$SSLKeyExDHANONExport, name, initialize, &classInfo$$, SSLKeyExchange$SSLKeyExDHANONExport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$SSLKeyExDHANONExport);
	});
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHANONExport::class$ = nullptr;

		} // ssl
	} // security
} // sun