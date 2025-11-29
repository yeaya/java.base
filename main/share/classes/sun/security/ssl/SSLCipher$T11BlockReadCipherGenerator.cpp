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

$MethodInfo _SSLCipher$T11BlockReadCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$T11BlockReadCipherGenerator::*)()>(&SSLCipher$T11BlockReadCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$T11BlockReadCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$T11BlockReadCipherGenerator", "sun.security.ssl.SSLCipher", "T11BlockReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$ReadCipherGenerator", "sun.security.ssl.SSLCipher", "ReadCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$T11BlockReadCipherGenerator$BlockReadCipher", "sun.security.ssl.SSLCipher$T11BlockReadCipherGenerator", "BlockReadCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$T11BlockReadCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$T11BlockReadCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$ReadCipherGenerator",
	nullptr,
	_SSLCipher$T11BlockReadCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$T11BlockReadCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$T11BlockReadCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$T11BlockReadCipherGenerator));
}

void SSLCipher$T11BlockReadCipherGenerator::init$() {
}

$SSLCipher$SSLReadCipher* SSLCipher$T11BlockReadCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T11BlockReadCipherGenerator$BlockReadCipher, authenticator, protocolVersion, sslCipher, algorithm, key, params, random);
}

SSLCipher$T11BlockReadCipherGenerator::SSLCipher$T11BlockReadCipherGenerator() {
}

$Class* SSLCipher$T11BlockReadCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$T11BlockReadCipherGenerator, name, initialize, &_SSLCipher$T11BlockReadCipherGenerator_ClassInfo_, allocate$SSLCipher$T11BlockReadCipherGenerator);
	return class$;
}

$Class* SSLCipher$T11BlockReadCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun