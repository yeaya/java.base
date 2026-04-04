#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHERSAExport.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef DHE_EXPORT
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

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHERSAExport::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHERSAExport::init$() {
}

void SSLKeyExchange$SSLKeyExDHERSAExport::clinit$($Class* clazz) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHERSAExport::KE, $new($SSLKeyExchange, $($List::of($X509Authentication::RSA)), $SSLKeyExchange$T12KeyAgreement::DHE_EXPORT));
}

SSLKeyExchange$SSLKeyExDHERSAExport::SSLKeyExchange$SSLKeyExDHERSAExport() {
}

$Class* SSLKeyExchange$SSLKeyExDHERSAExport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHERSAExport, KE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExDHERSAExport, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHERSAExport", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLKeyExchange$SSLKeyExDHERSAExport",
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
	$loadClass(SSLKeyExchange$SSLKeyExDHERSAExport, name, initialize, &classInfo$$, SSLKeyExchange$SSLKeyExDHERSAExport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$SSLKeyExDHERSAExport);
	});
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHERSAExport::class$ = nullptr;

		} // ssl
	} // security
} // sun