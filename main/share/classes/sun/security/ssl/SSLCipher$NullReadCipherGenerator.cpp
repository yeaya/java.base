#include <sun/security/ssl/SSLCipher$NullReadCipherGenerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$NullReadCipherGenerator$NullReadCipher.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
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
using $SSLCipher$NullReadCipherGenerator$NullReadCipher = ::sun::security::ssl::SSLCipher$NullReadCipherGenerator$NullReadCipher;
using $SSLCipher$ReadCipherGenerator = ::sun::security::ssl::SSLCipher$ReadCipherGenerator;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$NullReadCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$NullReadCipherGenerator::*)()>(&SSLCipher$NullReadCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$NullReadCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$NullReadCipherGenerator", "sun.security.ssl.SSLCipher", "NullReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$ReadCipherGenerator", "sun.security.ssl.SSLCipher", "ReadCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$NullReadCipherGenerator$NullReadCipher", "sun.security.ssl.SSLCipher$NullReadCipherGenerator", "NullReadCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$NullReadCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$NullReadCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$ReadCipherGenerator",
	nullptr,
	_SSLCipher$NullReadCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$NullReadCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$NullReadCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$NullReadCipherGenerator));
}

void SSLCipher$NullReadCipherGenerator::init$() {
}

$SSLCipher$SSLReadCipher* SSLCipher$NullReadCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$NullReadCipherGenerator$NullReadCipher, authenticator, protocolVersion);
}

SSLCipher$NullReadCipherGenerator::SSLCipher$NullReadCipherGenerator() {
}

$Class* SSLCipher$NullReadCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$NullReadCipherGenerator, name, initialize, &_SSLCipher$NullReadCipherGenerator_ClassInfo_, allocate$SSLCipher$NullReadCipherGenerator);
	return class$;
}

$Class* SSLCipher$NullReadCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun