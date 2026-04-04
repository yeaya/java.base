#include <sun/security/ssl/SSLKeyExchange$SSLKeyExDHEDSSExport.h>
#include <java/util/List.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <sun/security/ssl/X509Authentication.h>
#include <jcpp.h>

#undef DHE_EXPORT
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

$SSLKeyExchange* SSLKeyExchange$SSLKeyExDHEDSSExport::KE = nullptr;

void SSLKeyExchange$SSLKeyExDHEDSSExport::init$() {
}

void SSLKeyExchange$SSLKeyExDHEDSSExport::clinit$($Class* clazz) {
	$init($X509Authentication);
	$init($SSLKeyExchange$T12KeyAgreement);
	$assignStatic(SSLKeyExchange$SSLKeyExDHEDSSExport::KE, $new($SSLKeyExchange, $($List::of($X509Authentication::DSA)), $SSLKeyExchange$T12KeyAgreement::DHE_EXPORT));
}

SSLKeyExchange$SSLKeyExDHEDSSExport::SSLKeyExchange$SSLKeyExDHEDSSExport() {
}

$Class* SSLKeyExchange$SSLKeyExDHEDSSExport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KE", "Lsun/security/ssl/SSLKeyExchange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLKeyExchange$SSLKeyExDHEDSSExport, KE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLKeyExchange$SSLKeyExDHEDSSExport, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSSExport", "sun.security.ssl.SSLKeyExchange", "SSLKeyExDHEDSSExport", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLKeyExchange$SSLKeyExDHEDSSExport",
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
	$loadClass(SSLKeyExchange$SSLKeyExDHEDSSExport, name, initialize, &classInfo$$, SSLKeyExchange$SSLKeyExDHEDSSExport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$SSLKeyExDHEDSSExport);
	});
	return class$;
}

$Class* SSLKeyExchange$SSLKeyExDHEDSSExport::class$ = nullptr;

		} // ssl
	} // security
} // sun