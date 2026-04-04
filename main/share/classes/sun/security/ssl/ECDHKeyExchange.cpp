#include <sun/security/ssl/ECDHKeyExchange.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHEKAGenerator.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHEPossessionGenerator.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHEXDHKAGenerator.h>
#include <sun/security/ssl/ECDHKeyExchange$ECDHKAGenerator.h>
#include <sun/security/ssl/SSLKeyAgreementGenerator.h>
#include <sun/security/ssl/SSLPossessionGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ECDHKeyExchange$ECDHEKAGenerator = ::sun::security::ssl::ECDHKeyExchange$ECDHEKAGenerator;
using $ECDHKeyExchange$ECDHEPossessionGenerator = ::sun::security::ssl::ECDHKeyExchange$ECDHEPossessionGenerator;
using $ECDHKeyExchange$ECDHEXDHKAGenerator = ::sun::security::ssl::ECDHKeyExchange$ECDHEXDHKAGenerator;
using $ECDHKeyExchange$ECDHKAGenerator = ::sun::security::ssl::ECDHKeyExchange$ECDHKAGenerator;
using $SSLKeyAgreementGenerator = ::sun::security::ssl::SSLKeyAgreementGenerator;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$SSLPossessionGenerator* ECDHKeyExchange::poGenerator = nullptr;
$SSLKeyAgreementGenerator* ECDHKeyExchange::ecdhKAGenerator = nullptr;
$SSLKeyAgreementGenerator* ECDHKeyExchange::ecdheKAGenerator = nullptr;
$SSLKeyAgreementGenerator* ECDHKeyExchange::ecdheXdhKAGenerator = nullptr;

void ECDHKeyExchange::init$() {
}

void ECDHKeyExchange::clinit$($Class* clazz) {
	$assignStatic(ECDHKeyExchange::poGenerator, $new($ECDHKeyExchange$ECDHEPossessionGenerator));
	$assignStatic(ECDHKeyExchange::ecdhKAGenerator, $new($ECDHKeyExchange$ECDHKAGenerator));
	$assignStatic(ECDHKeyExchange::ecdheKAGenerator, $new($ECDHKeyExchange$ECDHEKAGenerator));
	$assignStatic(ECDHKeyExchange::ecdheXdhKAGenerator, $new($ECDHKeyExchange$ECDHEXDHKAGenerator));
}

ECDHKeyExchange::ECDHKeyExchange() {
}

$Class* ECDHKeyExchange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"poGenerator", "Lsun/security/ssl/SSLPossessionGenerator;", nullptr, $STATIC | $FINAL, $staticField(ECDHKeyExchange, poGenerator)},
		{"ecdhKAGenerator", "Lsun/security/ssl/SSLKeyAgreementGenerator;", nullptr, $STATIC | $FINAL, $staticField(ECDHKeyExchange, ecdhKAGenerator)},
		{"ecdheKAGenerator", "Lsun/security/ssl/SSLKeyAgreementGenerator;", nullptr, $STATIC | $FINAL, $staticField(ECDHKeyExchange, ecdheKAGenerator)},
		{"ecdheXdhKAGenerator", "Lsun/security/ssl/SSLKeyAgreementGenerator;", nullptr, $STATIC | $FINAL, $staticField(ECDHKeyExchange, ecdheXdhKAGenerator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ECDHKeyExchange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECDHKeyExchange$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"sun.security.ssl.ECDHKeyExchange$ECDHEXDHKAGenerator", "sun.security.ssl.ECDHKeyExchange", "ECDHEXDHKAGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ECDHKeyExchange$ECDHEKAGenerator", "sun.security.ssl.ECDHKeyExchange", "ECDHEKAGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ECDHKeyExchange$ECDHKAGenerator", "sun.security.ssl.ECDHKeyExchange", "ECDHKAGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ECDHKeyExchange$ECDHEPossessionGenerator", "sun.security.ssl.ECDHKeyExchange", "ECDHEPossessionGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.ECDHKeyExchange$ECDHEPossession", "sun.security.ssl.ECDHKeyExchange", "ECDHEPossession", $STATIC | $FINAL},
		{"sun.security.ssl.ECDHKeyExchange$ECDHECredentials", "sun.security.ssl.ECDHKeyExchange", "ECDHECredentials", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ECDHKeyExchange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.ECDHKeyExchange$1,sun.security.ssl.ECDHKeyExchange$ECDHEXDHKAGenerator,sun.security.ssl.ECDHKeyExchange$ECDHEKAGenerator,sun.security.ssl.ECDHKeyExchange$ECDHKAGenerator,sun.security.ssl.ECDHKeyExchange$ECDHEPossessionGenerator,sun.security.ssl.ECDHKeyExchange$ECDHEPossession,sun.security.ssl.ECDHKeyExchange$ECDHECredentials"
	};
	$loadClass(ECDHKeyExchange, name, initialize, &classInfo$$, ECDHKeyExchange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ECDHKeyExchange);
	});
	return class$;
}

$Class* ECDHKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun