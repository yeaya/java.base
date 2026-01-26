#include <sun/security/ssl/SSLCipher$T13GcmWriteCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher.h>
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
using $SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher = ::sun::security::ssl::SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$T13GcmWriteCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SSLCipher$T13GcmWriteCipherGenerator, init$, void)},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, $PUBLIC, $virtualMethod(SSLCipher$T13GcmWriteCipherGenerator, createCipher, $SSLCipher$SSLWriteCipher*, $SSLCipher*, $Authenticator*, $ProtocolVersion*, $String*, $Key*, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$T13GcmWriteCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$T13GcmWriteCipherGenerator", "sun.security.ssl.SSLCipher", "T13GcmWriteCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$WriteCipherGenerator", "sun.security.ssl.SSLCipher", "WriteCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher", "sun.security.ssl.SSLCipher$T13GcmWriteCipherGenerator", "GcmWriteCipher", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$T13GcmWriteCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$T13GcmWriteCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$WriteCipherGenerator",
	nullptr,
	_SSLCipher$T13GcmWriteCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$T13GcmWriteCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$T13GcmWriteCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$T13GcmWriteCipherGenerator));
}

void SSLCipher$T13GcmWriteCipherGenerator::init$() {
}

$SSLCipher$SSLWriteCipher* SSLCipher$T13GcmWriteCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T13GcmWriteCipherGenerator$GcmWriteCipher, authenticator, protocolVersion, sslCipher, algorithm, key, params, random);
}

SSLCipher$T13GcmWriteCipherGenerator::SSLCipher$T13GcmWriteCipherGenerator() {
}

$Class* SSLCipher$T13GcmWriteCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$T13GcmWriteCipherGenerator, name, initialize, &_SSLCipher$T13GcmWriteCipherGenerator_ClassInfo_, allocate$SSLCipher$T13GcmWriteCipherGenerator);
	return class$;
}

$Class* SSLCipher$T13GcmWriteCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun