#include <javax/crypto/KeyGeneratorSpi.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;

namespace javax {
	namespace crypto {

void KeyGeneratorSpi::init$() {
}

KeyGeneratorSpi::KeyGeneratorSpi() {
}

$Class* KeyGeneratorSpi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyGeneratorSpi, init$, void)},
		{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyGeneratorSpi, engineGenerateKey, $SecretKey*)},
		{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyGeneratorSpi, engineInit, void, $SecureRandom*)},
		{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyGeneratorSpi, engineInit, void, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidAlgorithmParameterException"},
		{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyGeneratorSpi, engineInit, void, int32_t, $SecureRandom*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.crypto.KeyGeneratorSpi",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(KeyGeneratorSpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyGeneratorSpi);
	});
	return class$;
}

$Class* KeyGeneratorSpi::class$ = nullptr;

	} // crypto
} // javax