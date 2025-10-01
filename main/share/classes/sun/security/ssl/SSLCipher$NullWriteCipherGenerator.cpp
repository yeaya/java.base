#include <sun/security/ssl/SSLCipher$NullWriteCipherGenerator.h>

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
#include <sun/security/ssl/SSLCipher$NullWriteCipherGenerator$NullWriteCipher.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
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
using $SSLCipher$NullWriteCipherGenerator$NullWriteCipher = ::sun::security::ssl::SSLCipher$NullWriteCipherGenerator$NullWriteCipher;
using $SSLCipher$SSLWriteCipher = ::sun::security::ssl::SSLCipher$SSLWriteCipher;
using $SSLCipher$WriteCipherGenerator = ::sun::security::ssl::SSLCipher$WriteCipherGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$NullWriteCipherGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLCipher$NullWriteCipherGenerator::*)()>(&SSLCipher$NullWriteCipherGenerator::init$))},
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$NullWriteCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$NullWriteCipherGenerator", "sun.security.ssl.SSLCipher", "NullWriteCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$WriteCipherGenerator", "sun.security.ssl.SSLCipher", "WriteCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.ssl.SSLCipher$NullWriteCipherGenerator$NullWriteCipher", "sun.security.ssl.SSLCipher$NullWriteCipherGenerator", "NullWriteCipher", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLCipher$NullWriteCipherGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$NullWriteCipherGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLCipher$WriteCipherGenerator",
	nullptr,
	_SSLCipher$NullWriteCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$NullWriteCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$NullWriteCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$NullWriteCipherGenerator));
}

void SSLCipher$NullWriteCipherGenerator::init$() {
}

$SSLCipher$SSLWriteCipher* SSLCipher$NullWriteCipherGenerator::createCipher($SSLCipher* sslCipher, $Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	return $new($SSLCipher$NullWriteCipherGenerator$NullWriteCipher, authenticator, protocolVersion);
}

SSLCipher$NullWriteCipherGenerator::SSLCipher$NullWriteCipherGenerator() {
}

$Class* SSLCipher$NullWriteCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$NullWriteCipherGenerator, name, initialize, &_SSLCipher$NullWriteCipherGenerator_ClassInfo_, allocate$SSLCipher$NullWriteCipherGenerator);
	return class$;
}

$Class* SSLCipher$NullWriteCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun