#include <sun/security/ssl/SSLCipher$T13GcmReadCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher$T13GcmReadCipherGenerator$GcmReadCipher.h>
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
using $SSLCipher$T13GcmReadCipherGenerator$GcmReadCipher = ::sun::security::ssl::SSLCipher$T13GcmReadCipherGenerator$GcmReadCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$T13GcmReadCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$T13GcmReadCipherGenerator::*)()>(&SSLCipher$T13GcmReadCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$T13GcmReadCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$T13GcmReadCipherGenerator", "sun.security.ssl.SSLCipher", "T13GcmReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$ReadCipherGenerator", "sun.security.ssl.SSLCipher", "ReadCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$T13GcmReadCipherGenerator$GcmReadCipher", "sun.security.ssl.SSLCipher$T13GcmReadCipherGenerator", "GcmReadCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$T13GcmReadCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$T13GcmReadCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$ReadCipherGenerator",
	nullptr,
	_SSLCipher$T13GcmReadCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$T13GcmReadCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$T13GcmReadCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$T13GcmReadCipherGenerator));
}

void SSLCipher$T13GcmReadCipherGenerator::init$() {
}

$SSLCipher$SSLReadCipher* SSLCipher$T13GcmReadCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T13GcmReadCipherGenerator$GcmReadCipher, authenticator, protocolVersion, sslCipher, algorithm, key, params, random);
}

SSLCipher$T13GcmReadCipherGenerator::SSLCipher$T13GcmReadCipherGenerator() {
}

$Class* SSLCipher$T13GcmReadCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$T13GcmReadCipherGenerator, name, initialize, &_SSLCipher$T13GcmReadCipherGenerator_ClassInfo_, allocate$SSLCipher$T13GcmReadCipherGenerator);
	return class$;
}

$Class* SSLCipher$T13GcmReadCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun