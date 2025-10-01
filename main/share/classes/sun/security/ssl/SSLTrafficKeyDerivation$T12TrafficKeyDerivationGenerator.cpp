#include <sun/security/ssl/SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::*)()>(&SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::init$))},
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator", "sun.security.ssl.SSLTrafficKeyDerivation", "T12TrafficKeyDerivationGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyDerivationGenerator",
	nullptr,
	_SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLTrafficKeyDerivation"
};

$Object* allocate$SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator($Class* clazz) {
	return $of($alloc(SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator));
}

void SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::init$() {
}

$SSLKeyDerivation* SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::createKeyDerivation($HandshakeContext* context, $SecretKey* secretKey) {
	return $new($SSLTrafficKeyDerivation$LegacyTrafficKeyDerivation, context, secretKey);
}

SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator() {
}

$Class* SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator, name, initialize, &_SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator_ClassInfo_, allocate$SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator);
	return class$;
}

$Class* SSLTrafficKeyDerivation$T12TrafficKeyDerivationGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun