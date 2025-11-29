#include <sun/security/ssl/SSLCipher$T10BlockWriteCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher.h>
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
using $SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher = ::sun::security::ssl::SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$T10BlockWriteCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$T10BlockWriteCipherGenerator::*)()>(&SSLCipher$T10BlockWriteCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$T10BlockWriteCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$T10BlockWriteCipherGenerator", "sun.security.ssl.SSLCipher", "T10BlockWriteCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$WriteCipherGenerator", "sun.security.ssl.SSLCipher", "WriteCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher", "sun.security.ssl.SSLCipher$T10BlockWriteCipherGenerator", "BlockWriteCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$T10BlockWriteCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$T10BlockWriteCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$WriteCipherGenerator",
	nullptr,
	_SSLCipher$T10BlockWriteCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$T10BlockWriteCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$T10BlockWriteCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$T10BlockWriteCipherGenerator));
}

void SSLCipher$T10BlockWriteCipherGenerator::init$() {
}

$SSLCipher$SSLWriteCipher* SSLCipher$T10BlockWriteCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$T10BlockWriteCipherGenerator$BlockWriteCipher, authenticator, protocolVersion, algorithm, key, params, random);
}

SSLCipher$T10BlockWriteCipherGenerator::SSLCipher$T10BlockWriteCipherGenerator() {
}

$Class* SSLCipher$T10BlockWriteCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$T10BlockWriteCipherGenerator, name, initialize, &_SSLCipher$T10BlockWriteCipherGenerator_ClassInfo_, allocate$SSLCipher$T10BlockWriteCipherGenerator);
	return class$;
}

$Class* SSLCipher$T10BlockWriteCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun