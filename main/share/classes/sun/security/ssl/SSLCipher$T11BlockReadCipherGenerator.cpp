#include <sun/security/ssl/SSLCipher$T11BlockReadCipherGenerator.h>
#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher$T11BlockReadCipherGenerator$BlockReadCipher.h>
#include <sun/security/ssl/SSLCipher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher = ::sun::security::ssl::SSLCipher;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;
using $SSLCipher$T11BlockReadCipherGenerator$BlockReadCipher = ::sun::security::ssl::SSLCipher$T11BlockReadCipherGenerator$BlockReadCipher;

namespace sun {
	namespace security {
		namespace ssl {

void SSLCipher$T11BlockReadCipherGenerator::init$() {
}

$SSLCipher$SSLReadCipher* SSLCipher$T11BlockReadCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T11BlockReadCipherGenerator$BlockReadCipher, authenticator, protocolVersion, sslCipher, algorithm, key, params, random);
}

SSLCipher$T11BlockReadCipherGenerator::SSLCipher$T11BlockReadCipherGenerator() {
}

$Class* SSLCipher$T11BlockReadCipherGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLCipher$T11BlockReadCipherGenerator, init$, void)},
		{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, $PUBLIC, $virtualMethod(SSLCipher$T11BlockReadCipherGenerator, createCipher, $SSLCipher$SSLReadCipher*, $SSLCipher*, $Authenticator*, $ProtocolVersion*, $String*, $Key*, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.GeneralSecurityException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLCipher$T11BlockReadCipherGenerator", "sun.security.ssl.SSLCipher", "T11BlockReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLCipher$ReadCipherGenerator", "sun.security.ssl.SSLCipher", "ReadCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.security.ssl.SSLCipher$T11BlockReadCipherGenerator$BlockReadCipher", "sun.security.ssl.SSLCipher$T11BlockReadCipherGenerator", "BlockReadCipher", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLCipher$T11BlockReadCipherGenerator",
		"java.lang.Object",
		"sun.security.ssl.SSLCipher$ReadCipherGenerator",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLCipher"
	};
	$loadClass(SSLCipher$T11BlockReadCipherGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLCipher$T11BlockReadCipherGenerator);
	});
	return class$;
}

$Class* SSLCipher$T11BlockReadCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun