#include <sun/security/ssl/RSAKeyExchange.h>
#include <sun/security/ssl/RSAKeyExchange$EphemeralRSAPossessionGenerator.h>
#include <sun/security/ssl/RSAKeyExchange$RSAKAGenerator.h>
#include <sun/security/ssl/SSLKeyAgreementGenerator.h>
#include <sun/security/ssl/SSLPossessionGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSAKeyExchange$EphemeralRSAPossessionGenerator = ::sun::security::ssl::RSAKeyExchange$EphemeralRSAPossessionGenerator;
using $RSAKeyExchange$RSAKAGenerator = ::sun::security::ssl::RSAKeyExchange$RSAKAGenerator;
using $SSLKeyAgreementGenerator = ::sun::security::ssl::SSLKeyAgreementGenerator;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$SSLPossessionGenerator* RSAKeyExchange::poGenerator = nullptr;
$SSLKeyAgreementGenerator* RSAKeyExchange::kaGenerator = nullptr;

void RSAKeyExchange::init$() {
}

void RSAKeyExchange::clinit$($Class* clazz) {
	$assignStatic(RSAKeyExchange::poGenerator, $new($RSAKeyExchange$EphemeralRSAPossessionGenerator));
	$assignStatic(RSAKeyExchange::kaGenerator, $new($RSAKeyExchange$RSAKAGenerator));
}

RSAKeyExchange::RSAKeyExchange() {
}

$Class* RSAKeyExchange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"poGenerator", "Lsun/security/ssl/SSLPossessionGenerator;", nullptr, $STATIC | $FINAL, $staticField(RSAKeyExchange, poGenerator)},
		{"kaGenerator", "Lsun/security/ssl/SSLKeyAgreementGenerator;", nullptr, $STATIC | $FINAL, $staticField(RSAKeyExchange, kaGenerator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RSAKeyExchange, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.RSAKeyExchange$RSAKAGenerator", "sun.security.ssl.RSAKeyExchange", "RSAKAGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RSAKeyExchange$RSAPremasterSecret", "sun.security.ssl.RSAKeyExchange", "RSAPremasterSecret", $STATIC | $FINAL},
		{"sun.security.ssl.RSAKeyExchange$EphemeralRSAPossessionGenerator", "sun.security.ssl.RSAKeyExchange", "EphemeralRSAPossessionGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.RSAKeyExchange$EphemeralRSACredentials", "sun.security.ssl.RSAKeyExchange", "EphemeralRSACredentials", $STATIC | $FINAL},
		{"sun.security.ssl.RSAKeyExchange$EphemeralRSAPossession", "sun.security.ssl.RSAKeyExchange", "EphemeralRSAPossession", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.RSAKeyExchange",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.RSAKeyExchange$RSAKAGenerator,sun.security.ssl.RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation,sun.security.ssl.RSAKeyExchange$RSAPremasterSecret,sun.security.ssl.RSAKeyExchange$EphemeralRSAPossessionGenerator,sun.security.ssl.RSAKeyExchange$EphemeralRSACredentials,sun.security.ssl.RSAKeyExchange$EphemeralRSAPossession"
	};
	$loadClass(RSAKeyExchange, name, initialize, &classInfo$$, RSAKeyExchange::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RSAKeyExchange);
	});
	return class$;
}

$Class* RSAKeyExchange::class$ = nullptr;

		} // ssl
	} // security
} // sun