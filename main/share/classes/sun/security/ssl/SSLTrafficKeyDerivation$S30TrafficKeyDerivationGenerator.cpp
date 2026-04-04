#include <sun/security/ssl/SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator.h>
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

void SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator::init$() {
}

$SSLKeyDerivation* SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator::createKeyDerivation($HandshakeContext* context, $SecretKey* secretKey) {
	return $new($SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation, context, secretKey);
}

SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator::SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator() {
}

$Class* SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator, init$, void)},
		{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, $virtualMethod(SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator, createKeyDerivation, $SSLKeyDerivation*, $HandshakeContext*, $SecretKey*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator", "sun.security.ssl.SSLTrafficKeyDerivation", "S30TrafficKeyDerivationGenerator", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator",
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
	$loadClass(SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator);
	});
	return class$;
}

$Class* SSLTrafficKeyDerivation$S30TrafficKeyDerivationGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun