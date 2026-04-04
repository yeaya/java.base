#include <sun/security/ssl/SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation$T13TrafficKeyDerivation.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLTrafficKeyDerivation$T13TrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation$T13TrafficKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

void SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator::init$() {
}

$SSLKeyDerivation* SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator::createKeyDerivation($HandshakeContext* context, $SecretKey* secretKey) {
	return $new($SSLTrafficKeyDerivation$T13TrafficKeyDerivation, context, secretKey);
}

SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator::SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator() {
}

$Class* SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator, init$, void)},
		{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, $virtualMethod(SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator, createKeyDerivation, $SSLKeyDerivation*, $HandshakeContext*, $SecretKey*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator", "sun.security.ssl.SSLTrafficKeyDerivation", "T13TrafficKeyDerivationGenerator", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator",
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
	$loadClass(SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator);
	});
	return class$;
}

$Class* SSLTrafficKeyDerivation$T13TrafficKeyDerivationGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun