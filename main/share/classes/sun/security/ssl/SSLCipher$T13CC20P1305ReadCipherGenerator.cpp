#include <sun/security/ssl/SSLCipher$T13CC20P1305ReadCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher.h>
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
using $SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher = ::sun::security::ssl::SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$T13CC20P1305ReadCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$T13CC20P1305ReadCipherGenerator::*)()>(&SSLCipher$T13CC20P1305ReadCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$T13CC20P1305ReadCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$T13CC20P1305ReadCipherGenerator", "sun.security.ssl.SSLCipher", "T13CC20P1305ReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$ReadCipherGenerator", "sun.security.ssl.SSLCipher", "ReadCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher", "sun.security.ssl.SSLCipher$T13CC20P1305ReadCipherGenerator", "CC20P1305ReadCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$T13CC20P1305ReadCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$T13CC20P1305ReadCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$ReadCipherGenerator",
	nullptr,
	_SSLCipher$T13CC20P1305ReadCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$T13CC20P1305ReadCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$T13CC20P1305ReadCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$T13CC20P1305ReadCipherGenerator));
}

void SSLCipher$T13CC20P1305ReadCipherGenerator::init$() {
}

$SSLCipher$SSLReadCipher* SSLCipher$T13CC20P1305ReadCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, authenticator, protocolVersion, sslCipher, algorithm, key, params, random);
}

SSLCipher$T13CC20P1305ReadCipherGenerator::SSLCipher$T13CC20P1305ReadCipherGenerator() {
}

$Class* SSLCipher$T13CC20P1305ReadCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$T13CC20P1305ReadCipherGenerator, name, initialize, &_SSLCipher$T13CC20P1305ReadCipherGenerator_ClassInfo_, allocate$SSLCipher$T13CC20P1305ReadCipherGenerator);
	return class$;
}

$Class* SSLCipher$T13CC20P1305ReadCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun