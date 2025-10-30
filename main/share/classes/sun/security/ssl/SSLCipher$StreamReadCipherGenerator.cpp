#include <sun/security/ssl/SSLCipher$StreamReadCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher$StreamReadCipherGenerator$StreamReadCipher.h>
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
using $SSLCipher$StreamReadCipherGenerator$StreamReadCipher = ::sun::security::ssl::SSLCipher$StreamReadCipherGenerator$StreamReadCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$StreamReadCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$StreamReadCipherGenerator::*)()>(&SSLCipher$StreamReadCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$StreamReadCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$StreamReadCipherGenerator", "sun.security.ssl.SSLCipher", "StreamReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$ReadCipherGenerator", "sun.security.ssl.SSLCipher", "ReadCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$StreamReadCipherGenerator$StreamReadCipher", "sun.security.ssl.SSLCipher$StreamReadCipherGenerator", "StreamReadCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$StreamReadCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$StreamReadCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$ReadCipherGenerator",
	nullptr,
	_SSLCipher$StreamReadCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$StreamReadCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$StreamReadCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$StreamReadCipherGenerator));
}

void SSLCipher$StreamReadCipherGenerator::init$() {
}

$SSLCipher$SSLReadCipher* SSLCipher$StreamReadCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$StreamReadCipherGenerator$StreamReadCipher, authenticator, protocolVersion, algorithm, key, params, random);
}

SSLCipher$StreamReadCipherGenerator::SSLCipher$StreamReadCipherGenerator() {
}

$Class* SSLCipher$StreamReadCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$StreamReadCipherGenerator, name, initialize, &_SSLCipher$StreamReadCipherGenerator_ClassInfo_, allocate$SSLCipher$StreamReadCipherGenerator);
	return class$;
}

$Class* SSLCipher$StreamReadCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun