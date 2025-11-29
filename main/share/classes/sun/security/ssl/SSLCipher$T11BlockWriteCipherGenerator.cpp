#include <sun/security/ssl/SSLCipher$T11BlockWriteCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLCipher$T11BlockWriteCipherGenerator$BlockWriteCipher.h>
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
using $SSLCipher$T11BlockWriteCipherGenerator$BlockWriteCipher = ::sun::security::ssl::SSLCipher$T11BlockWriteCipherGenerator$BlockWriteCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$T11BlockWriteCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$T11BlockWriteCipherGenerator::*)()>(&SSLCipher$T11BlockWriteCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$T11BlockWriteCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$T11BlockWriteCipherGenerator", "sun.security.ssl.SSLCipher", "T11BlockWriteCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$WriteCipherGenerator", "sun.security.ssl.SSLCipher", "WriteCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$T11BlockWriteCipherGenerator$BlockWriteCipher", "sun.security.ssl.SSLCipher$T11BlockWriteCipherGenerator", "BlockWriteCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$T11BlockWriteCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$T11BlockWriteCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$WriteCipherGenerator",
	nullptr,
	_SSLCipher$T11BlockWriteCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$T11BlockWriteCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$T11BlockWriteCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$T11BlockWriteCipherGenerator));
}

void SSLCipher$T11BlockWriteCipherGenerator::init$() {
}

$SSLCipher$SSLWriteCipher* SSLCipher$T11BlockWriteCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T11BlockWriteCipherGenerator$BlockWriteCipher, authenticator, protocolVersion, sslCipher, algorithm, key, params, random);
}

SSLCipher$T11BlockWriteCipherGenerator::SSLCipher$T11BlockWriteCipherGenerator() {
}

$Class* SSLCipher$T11BlockWriteCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$T11BlockWriteCipherGenerator, name, initialize, &_SSLCipher$T11BlockWriteCipherGenerator_ClassInfo_, allocate$SSLCipher$T11BlockWriteCipherGenerator);
	return class$;
}

$Class* SSLCipher$T11BlockWriteCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun