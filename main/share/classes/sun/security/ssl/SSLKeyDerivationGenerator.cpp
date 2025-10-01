#include <sun/security/ssl/SSLKeyDerivationGenerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLKeyDerivationGenerator_MethodInfo_[] = {
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SSLKeyDerivationGenerator_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLKeyDerivationGenerator",
	nullptr,
	nullptr,
	nullptr,
	_SSLKeyDerivationGenerator_MethodInfo_
};

$Object* allocate$SSLKeyDerivationGenerator($Class* clazz) {
	return $of($alloc(SSLKeyDerivationGenerator));
}

$Class* SSLKeyDerivationGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLKeyDerivationGenerator, name, initialize, &_SSLKeyDerivationGenerator_ClassInfo_, allocate$SSLKeyDerivationGenerator);
	return class$;
}

$Class* SSLKeyDerivationGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun