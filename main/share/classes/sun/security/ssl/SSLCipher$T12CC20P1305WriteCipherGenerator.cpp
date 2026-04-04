#include <sun/security/ssl/SSLCipher$T12CC20P1305WriteCipherGenerator.h>
#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLCipher$T12CC20P1305WriteCipherGenerator$CC20P1305WriteCipher.h>
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
using $SSLCipher$SSLWriteCipher = ::sun::security::ssl::SSLCipher$SSLWriteCipher;
using $SSLCipher$T12CC20P1305WriteCipherGenerator$CC20P1305WriteCipher = ::sun::security::ssl::SSLCipher$T12CC20P1305WriteCipherGenerator$CC20P1305WriteCipher;

namespace sun {
	namespace security {
		namespace ssl {

void SSLCipher$T12CC20P1305WriteCipherGenerator::init$() {
}

$SSLCipher$SSLWriteCipher* SSLCipher$T12CC20P1305WriteCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T12CC20P1305WriteCipherGenerator$CC20P1305WriteCipher, authenticator, protocolVersion, sslCipher, algorithm, key, params, random);
}

SSLCipher$T12CC20P1305WriteCipherGenerator::SSLCipher$T12CC20P1305WriteCipherGenerator() {
}

$Class* SSLCipher$T12CC20P1305WriteCipherGenerator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLCipher$T12CC20P1305WriteCipherGenerator, init$, void)},
		{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, $PUBLIC, $virtualMethod(SSLCipher$T12CC20P1305WriteCipherGenerator, createCipher, $SSLCipher$SSLWriteCipher*, $SSLCipher*, $Authenticator*, $ProtocolVersion*, $String*, $Key*, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.GeneralSecurityException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLCipher$T12CC20P1305WriteCipherGenerator", "sun.security.ssl.SSLCipher", "T12CC20P1305WriteCipherGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLCipher$WriteCipherGenerator", "sun.security.ssl.SSLCipher", "WriteCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.security.ssl.SSLCipher$T12CC20P1305WriteCipherGenerator$CC20P1305WriteCipher", "sun.security.ssl.SSLCipher$T12CC20P1305WriteCipherGenerator", "CC20P1305WriteCipher", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLCipher$T12CC20P1305WriteCipherGenerator",
		"java.lang.Object",
		"sun.security.ssl.SSLCipher$WriteCipherGenerator",
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
	$loadClass(SSLCipher$T12CC20P1305WriteCipherGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLCipher$T12CC20P1305WriteCipherGenerator);
	});
	return class$;
}

$Class* SSLCipher$T12CC20P1305WriteCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun