#include <sun/security/ssl/SSLCipher$T10BlockReadCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher$T10BlockReadCipherGenerator$BlockReadCipher.h>
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
using $SSLCipher$T10BlockReadCipherGenerator$BlockReadCipher = ::sun::security::ssl::SSLCipher$T10BlockReadCipherGenerator$BlockReadCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$T10BlockReadCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$T10BlockReadCipherGenerator::*)()>(&SSLCipher$T10BlockReadCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$T10BlockReadCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$T10BlockReadCipherGenerator", "sun.security.ssl.SSLCipher", "T10BlockReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$ReadCipherGenerator", "sun.security.ssl.SSLCipher", "ReadCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$T10BlockReadCipherGenerator$BlockReadCipher", "sun.security.ssl.SSLCipher$T10BlockReadCipherGenerator", "BlockReadCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$T10BlockReadCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$T10BlockReadCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$ReadCipherGenerator",
	nullptr,
	_SSLCipher$T10BlockReadCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$T10BlockReadCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$T10BlockReadCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$T10BlockReadCipherGenerator));
}

void SSLCipher$T10BlockReadCipherGenerator::init$() {
}

$SSLCipher$SSLReadCipher* SSLCipher$T10BlockReadCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T10BlockReadCipherGenerator$BlockReadCipher, authenticator, protocolVersion, algorithm, key, params, random);
}

SSLCipher$T10BlockReadCipherGenerator::SSLCipher$T10BlockReadCipherGenerator() {
}

$Class* SSLCipher$T10BlockReadCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$T10BlockReadCipherGenerator, name, initialize, &_SSLCipher$T10BlockReadCipherGenerator_ClassInfo_, allocate$SSLCipher$T10BlockReadCipherGenerator);
	return class$;
}

$Class* SSLCipher$T10BlockReadCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun