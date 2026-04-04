#include <sun/security/ssl/XDHKeyExchange.h>
#include <sun/security/ssl/SSLKeyAgreementGenerator.h>
#include <sun/security/ssl/XDHKeyExchange$XDHEKAGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLKeyAgreementGenerator = ::sun::security::ssl::SSLKeyAgreementGenerator;
using $XDHKeyExchange$XDHEKAGenerator = ::sun::security::ssl::XDHKeyExchange$XDHEKAGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$SSLKeyAgreementGenerator* XDHKeyExchange::xdheKAGenerator = nullptr;

void XDHKeyExchange::init$() {
}

void XDHKeyExchange::clinit$($Class* clazz) {
	$assignStatic(XDHKeyExchange::xdheKAGenerator, $new($XDHKeyExchange$XDHEKAGenerator));
}

XDHKeyExchange::XDHKeyExchange() {
}

$Class* XDHKeyExchange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xdheKAGenerator", "Lsun/security/ssl/SSLKeyAgreementGenerator;", nullptr, $STATIC | $FINAL, $staticField(XDHKeyExchange, xdheKAGenerator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XDHKeyExchange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.XDHKeyExchange$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"sun.security.ssl.XDHKeyExchange$XDHEKAGenerator", "sun.security.ssl.XDHKeyExchange", "XDHEKAGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.XDHKeyExchange$XDHEPossession", "sun.security.ssl.XDHKeyExchange", "XDHEPossession", $STATIC | $FINAL},
		{"sun.security.ssl.XDHKeyExchange$XDHECredentials", "sun.security.ssl.XDHKeyExchange", "XDHECredentials", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.XDHKeyExchange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.XDHKeyExchange$1,sun.security.ssl.XDHKeyExchange$XDHEKAGenerator,sun.security.ssl.XDHKeyExchange$XDHEPossession,sun.security.ssl.XDHKeyExchange$XDHECredentials"
	};
	$loadClass(XDHKeyExchange, name, initialize, &classInfo$$, XDHKeyExchange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XDHKeyExchange);
	});
	return class$;
}

$Class* XDHKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun