#include <sun/security/ssl/SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

void SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::init$() {
}

$SSLKeyDerivation* SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::createKeyDerivation($HandshakeContext* context, $SecretKey* secretKey) {
	return $new($SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation, context, secretKey);
}

SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator() {
}

$Class* SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator, init$, void)},
		{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, $virtualMethod(SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator, createKeyDerivation, $SSLKeyDerivation*, $HandshakeContext*, $SecretKey*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator", "sun.security.ssl.SSLTrafficKeyDerivation", "T12TrafficKeyDerivationGenerator", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator",
		"java.lang.Object",
		"sun.security.ssl.SSLKeyDerivationGenerator",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLTrafficKeyDerivation"
	};
	$loadClass(SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator);
	});
	return class$;
}

$Class* SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun