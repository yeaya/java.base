#include <sun/security/ssl/RSAKeyExchange$EphemeralRSAPossessionGenerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyPair.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <java/security/interfaces/RSAPublicKey.h>
#include <sun/security/ssl/EphemeralKeyManager.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/RSAKeyExchange$EphemeralRSAPossession.h>
#include <sun/security/ssl/RSAKeyExchange.h>
#include <sun/security/ssl/SSLContextImpl.h>
#include <sun/security/ssl/SSLPossession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $KeyPair = ::java::security::KeyPair;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $SecureRandom = ::java::security::SecureRandom;
using $RSAPublicKey = ::java::security::interfaces::RSAPublicKey;
using $EphemeralKeyManager = ::sun::security::ssl::EphemeralKeyManager;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $RSAKeyExchange = ::sun::security::ssl::RSAKeyExchange;
using $RSAKeyExchange$EphemeralRSAPossession = ::sun::security::ssl::RSAKeyExchange$EphemeralRSAPossession;
using $SSLContextImpl = ::sun::security::ssl::SSLContextImpl;
using $SSLPossession = ::sun::security::ssl::SSLPossession;
using $SSLPossessionGenerator = ::sun::security::ssl::SSLPossessionGenerator;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _RSAKeyExchange$EphemeralRSAPossessionGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RSAKeyExchange$EphemeralRSAPossessionGenerator::*)()>(&RSAKeyExchange$EphemeralRSAPossessionGenerator::init$))},
	{"createPossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RSAKeyExchange$EphemeralRSAPossessionGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.RSAKeyExchange$EphemeralRSAPossessionGenerator", "sun.security.ssl.RSAKeyExchange", "EphemeralRSAPossessionGenerator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAKeyExchange$EphemeralRSAPossessionGenerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RSAKeyExchange$EphemeralRSAPossessionGenerator",
	"java.lang.Object",
	"sun.security.ssl.SSLPossessionGenerator",
	nullptr,
	_RSAKeyExchange$EphemeralRSAPossessionGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RSAKeyExchange$EphemeralRSAPossessionGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RSAKeyExchange"
};

$Object* allocate$RSAKeyExchange$EphemeralRSAPossessionGenerator($Class* clazz) {
	return $of($alloc(RSAKeyExchange$EphemeralRSAPossessionGenerator));
}

void RSAKeyExchange$EphemeralRSAPossessionGenerator::init$() {
}

$SSLPossession* RSAKeyExchange$EphemeralRSAPossessionGenerator::createPossession($HandshakeContext* context) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($EphemeralKeyManager, ekm, $nc($nc(context)->sslContext)->getEphemeralKeyManager());
		$var($KeyPair, kp, $nc(ekm)->getRSAKeyPair(true, $($nc(context->sslContext)->getSecureRandom())));
		if (kp != nullptr) {
			$var($PrivateKey, var$0, kp->getPrivate());
			return $new($RSAKeyExchange$EphemeralRSAPossession, var$0, $cast($RSAPublicKey, $(kp->getPublic())));
		} else {
			return nullptr;
		}
	} catch ($RuntimeException&) {
		$var($RuntimeException, rte, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

RSAKeyExchange$EphemeralRSAPossessionGenerator::RSAKeyExchange$EphemeralRSAPossessionGenerator() {
}

$Class* RSAKeyExchange$EphemeralRSAPossessionGenerator::load$($String* name, bool initialize) {
	$loadClass(RSAKeyExchange$EphemeralRSAPossessionGenerator, name, initialize, &_RSAKeyExchange$EphemeralRSAPossessionGenerator_ClassInfo_, allocate$RSAKeyExchange$EphemeralRSAPossessionGenerator);
	return class$;
}

$Class* RSAKeyExchange$EphemeralRSAPossessionGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun