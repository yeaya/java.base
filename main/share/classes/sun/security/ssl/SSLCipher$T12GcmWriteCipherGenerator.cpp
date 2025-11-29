#include <sun/security/ssl/SSLCipher$T12GcmWriteCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLCipher$T12GcmWriteCipherGenerator$GcmWriteCipher.h>
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
using $SSLCipher$T12GcmWriteCipherGenerator$GcmWriteCipher = ::sun::security::ssl::SSLCipher$T12GcmWriteCipherGenerator$GcmWriteCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$T12GcmWriteCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$T12GcmWriteCipherGenerator::*)()>(&SSLCipher$T12GcmWriteCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$T12GcmWriteCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$T12GcmWriteCipherGenerator", "sun.security.ssl.SSLCipher", "T12GcmWriteCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$WriteCipherGenerator", "sun.security.ssl.SSLCipher", "WriteCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$T12GcmWriteCipherGenerator$GcmWriteCipher", "sun.security.ssl.SSLCipher$T12GcmWriteCipherGenerator", "GcmWriteCipher", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$T12GcmWriteCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$T12GcmWriteCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$WriteCipherGenerator",
	nullptr,
	_SSLCipher$T12GcmWriteCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$T12GcmWriteCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$T12GcmWriteCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$T12GcmWriteCipherGenerator));
}

void SSLCipher$T12GcmWriteCipherGenerator::init$() {
}

$SSLCipher$SSLWriteCipher* SSLCipher$T12GcmWriteCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T12GcmWriteCipherGenerator$GcmWriteCipher, authenticator, protocolVersion, sslCipher, algorithm, key, params, random);
}

SSLCipher$T12GcmWriteCipherGenerator::SSLCipher$T12GcmWriteCipherGenerator() {
}

$Class* SSLCipher$T12GcmWriteCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$T12GcmWriteCipherGenerator, name, initialize, &_SSLCipher$T12GcmWriteCipherGenerator_ClassInfo_, allocate$SSLCipher$T12GcmWriteCipherGenerator);
	return class$;
}

$Class* SSLCipher$T12GcmWriteCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun