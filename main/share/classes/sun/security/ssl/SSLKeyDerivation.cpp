#include <sun/security/ssl/SSLKeyDerivation.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;

namespace sun {
	namespace security {
		namespace ssl {

$Class* SSLKeyDerivation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"deriveKey", "(Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SSLKeyDerivation, deriveKey, $SecretKey*, $String*, $AlgorithmParameterSpec*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLKeyDerivation",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SSLKeyDerivation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyDerivation);
	});
	return class$;
}

$Class* SSLKeyDerivation::class$ = nullptr;

		} // ssl
	} // security
} // sun