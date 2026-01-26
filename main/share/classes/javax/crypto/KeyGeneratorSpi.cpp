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

$MethodInfo _KeyGeneratorSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(KeyGeneratorSpi, init$, void)},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyGeneratorSpi, engineGenerateKey, $SecretKey*)},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyGeneratorSpi, engineInit, void, $SecureRandom*)},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyGeneratorSpi, engineInit, void, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(KeyGeneratorSpi, engineInit, void, int32_t, $SecureRandom*)},
	{}
};

$ClassInfo _KeyGeneratorSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.crypto.KeyGeneratorSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_KeyGeneratorSpi_MethodInfo_
};

$Object* allocate$KeyGeneratorSpi($Class* clazz) {
	return $of($alloc(KeyGeneratorSpi));
}

void KeyGeneratorSpi::init$() {
}

KeyGeneratorSpi::KeyGeneratorSpi() {
}

$Class* KeyGeneratorSpi::load$($String* name, bool initialize) {
	$loadClass(KeyGeneratorSpi, name, initialize, &_KeyGeneratorSpi_ClassInfo_, allocate$KeyGeneratorSpi);
	return class$;
}

$Class* KeyGeneratorSpi::class$ = nullptr;

	} // crypto
} // javax