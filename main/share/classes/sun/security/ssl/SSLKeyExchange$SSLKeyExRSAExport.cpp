#include <sun/security/ssl/SSLKeyExchange$SSLKeyExRSAExport.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef KE
#undef RSA
#undef RSA_EXPORT

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

$SSLKeyExchange* SSLKeyExchange$SSLKeyExRSAExport::KE = nullptr;

void SSLKeyExchange$SSLKeyExRSAExport::init$() {
}

void SSLKeyExchange$SSLKeyExRSAExport::clinit$($Class* clazz) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExRSAExport::KE, $new($SSLKeyExchange, $($List::of($X509Authentication::RSA)), $SSLKeyExchange$T12KeyAgreement::RSA_EXPORT));
}

SSLKeyExchange$SSLKeyExRSAExport::SSLKeyExchange$SSLKeyExRSAExport() {
}

$Class* SSLKeyExchange$SSLKeyExRSAExport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExRSAExport, KE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExRSAExport, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$SSLKeyExRSAExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExRSAExport", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLKeyExchange$SSLKeyExRSAExport",
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
	$loadClass(SSLKeyExchange$SSLKeyExRSAExport, name, initialize, &classInfo$$, SSLKeyExchange$SSLKeyExRSAExport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$SSLKeyExRSAExport);
	});
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExRSAExport::class$ = nullptr;

		} // ssl
	} // security
} // sun