#include <sun/security/ssl/SSLCipher$StreamWriteCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher.h>
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
using $SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher = ::sun::security::ssl::SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$StreamWriteCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SSLCipher$StreamWriteCipherGenerator, init$, void)},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, $PUBLIC, $virtualMethod(SSLCipher$StreamWriteCipherGenerator, createCipher, $SSLCipher$SSLWriteCipher*, $SSLCipher*, $Authenticator*, $ProtocolVersion*, $String*, $Key*, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$StreamWriteCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$StreamWriteCipherGenerator", "sun.security.ssl.SSLCipher", "StreamWriteCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$WriteCipherGenerator", "sun.security.ssl.SSLCipher", "WriteCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher", "sun.security.ssl.SSLCipher$StreamWriteCipherGenerator", "StreamWriteCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$StreamWriteCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$StreamWriteCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$WriteCipherGenerator",
	nullptr,
	_SSLCipher$StreamWriteCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$StreamWriteCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$StreamWriteCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$StreamWriteCipherGenerator));
}

void SSLCipher$StreamWriteCipherGenerator::init$() {
}

$SSLCipher$SSLWriteCipher* SSLCipher$StreamWriteCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher, authenticator, protocolVersion, algorithm, key, params, random);
}

SSLCipher$StreamWriteCipherGenerator::SSLCipher$StreamWriteCipherGenerator() {
}

$Class* SSLCipher$StreamWriteCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$StreamWriteCipherGenerator, name, initialize, &_SSLCipher$StreamWriteCipherGenerator_ClassInfo_, allocate$SSLCipher$StreamWriteCipherGenerator);
	return class$;
}

$Class* SSLCipher$StreamWriteCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun