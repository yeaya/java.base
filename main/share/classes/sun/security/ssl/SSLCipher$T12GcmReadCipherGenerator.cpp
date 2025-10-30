#include <sun/security/ssl/SSLCipher$T12GcmReadCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher.h>
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
using $SSLCipher$ReadCipherGenerator = ::sun::security::ssl::SSLCipher$ReadCipherGenerator;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;
using $SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher = ::sun::security::ssl::SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$T12GcmReadCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$T12GcmReadCipherGenerator::*)()>(&SSLCipher$T12GcmReadCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$T12GcmReadCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$T12GcmReadCipherGenerator", "sun.security.ssl.SSLCipher", "T12GcmReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$ReadCipherGenerator", "sun.security.ssl.SSLCipher", "ReadCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher", "sun.security.ssl.SSLCipher$T12GcmReadCipherGenerator", "GcmReadCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$T12GcmReadCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$T12GcmReadCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$ReadCipherGenerator",
	nullptr,
	_SSLCipher$T12GcmReadCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$T12GcmReadCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$T12GcmReadCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$T12GcmReadCipherGenerator));
}

void SSLCipher$T12GcmReadCipherGenerator::init$() {
}

$SSLCipher$SSLReadCipher* SSLCipher$T12GcmReadCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T12GcmReadCipherGenerator$GcmReadCipher, authenticator, protocolVersion, sslCipher, algorithm, key, params, random);
}

SSLCipher$T12GcmReadCipherGenerator::SSLCipher$T12GcmReadCipherGenerator() {
}

$Class* SSLCipher$T12GcmReadCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$T12GcmReadCipherGenerator, name, initialize, &_SSLCipher$T12GcmReadCipherGenerator_ClassInfo_, allocate$SSLCipher$T12GcmReadCipherGenerator);
	return class$;
}

$Class* SSLCipher$T12GcmReadCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun