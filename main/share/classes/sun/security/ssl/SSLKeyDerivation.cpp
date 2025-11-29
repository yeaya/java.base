#include <sun/security/ssl/SSLKeyDerivation.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLKeyDerivation_MethodInfo_[] = {
	{"deriveKey", "(Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SSLKeyDerivation_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLKeyDerivation",
	nullptr,
	nullptr,
	nullptr,
	_SSLKeyDerivation_MethodInfo_
};

$Object* allocate$SSLKeyDerivation($Class* clazz) {
	return $of($alloc(SSLKeyDerivation));
}

$Class* SSLKeyDerivation::load$($String* name, bool initialize) {
	$loadClass(SSLKeyDerivation, name, initialize, &_SSLKeyDerivation_ClassInfo_, allocate$SSLKeyDerivation);
	return class$;
}

$Class* SSLKeyDerivation::class$ = nullptr;

		} // ssl
	} // security
} // sun