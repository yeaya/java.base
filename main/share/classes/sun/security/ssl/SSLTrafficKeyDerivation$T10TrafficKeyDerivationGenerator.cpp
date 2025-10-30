#include <sun/security/ssl/SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator.h>

#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLKeyDerivationGenerator = ::sun::security::ssl::SSLKeyDerivationGenerator;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;
using $SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator::*)()>(&SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator::init$))},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator", "sun.security.ssl.SSLTrafficKeyDerivation", "T10TrafficKeyDerivationGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyDerivationGenerator",
	nullptr,
	_SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLTrafficKeyDerivation"
};

$Object* allocate$SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator($Class* clazz) {
	return $of($alloc(SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator));
}

void SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator::init$() {
}

$SSLKeyDerivation* SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator::createKeyDerivation($HandshakeContext* context, $SecretKey* secretKey) {
	return $new($SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation, context, secretKey);
}

SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator::SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator() {
}

$Class* SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator, name, initialize, &_SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator_ClassInfo_, allocate$SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator);
	return class$;
}

$Class* SSLTrafficKeyDerivation$T10TrafficKeyDerivationGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun