#include <com/sun/crypto/provider/KeyGeneratorCore$ChaCha20KeyGenerator.h>
#include <com/sun/crypto/provider/KeyGeneratorCore.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/KeyGeneratorSpi.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $KeyGeneratorCore = ::com::sun::crypto::provider::KeyGeneratorCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $KeyGeneratorSpi = ::javax::crypto::KeyGeneratorSpi;
using $SecretKey = ::javax::crypto::SecretKey;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void KeyGeneratorCore$ChaCha20KeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, core, $new($KeyGeneratorCore, "ChaCha20"_s, 256));
}

void KeyGeneratorCore$ChaCha20KeyGenerator::engineInit($SecureRandom* random) {
	this->core->implInit(random);
}

void KeyGeneratorCore$ChaCha20KeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	this->core->implInit(params, random);
}

void KeyGeneratorCore$ChaCha20KeyGenerator::engineInit(int32_t keySize, $SecureRandom* random) {
	if (keySize != 256) {
		$throwNew($InvalidParameterException, "Key length for ChaCha20 must be 256 bits"_s);
	}
	this->core->implInit(keySize, random);
}

$SecretKey* KeyGeneratorCore$ChaCha20KeyGenerator::engineGenerateKey() {
	return this->core->implGenerateKey();
}

KeyGeneratorCore$ChaCha20KeyGenerator::KeyGeneratorCore$ChaCha20KeyGenerator() {
}

$Class* KeyGeneratorCore$ChaCha20KeyGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"core", "Lcom/sun/crypto/provider/KeyGeneratorCore;", nullptr, $PRIVATE | $FINAL, $field(KeyGeneratorCore$ChaCha20KeyGenerator, core)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyGeneratorCore$ChaCha20KeyGenerator, init$, void)},
		{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$ChaCha20KeyGenerator, engineGenerateKey, $SecretKey*)},
		{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$ChaCha20KeyGenerator, engineInit, void, $SecureRandom*)},
		{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$ChaCha20KeyGenerator, engineInit, void, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidAlgorithmParameterException"},
		{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$ChaCha20KeyGenerator, engineInit, void, int32_t, $SecureRandom*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.KeyGeneratorCore$ChaCha20KeyGenerator", "com.sun.crypto.provider.KeyGeneratorCore", "ChaCha20KeyGenerator", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.KeyGeneratorCore$ChaCha20KeyGenerator",
		"javax.crypto.KeyGeneratorSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.KeyGeneratorCore"
	};
	$loadClass(KeyGeneratorCore$ChaCha20KeyGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyGeneratorCore$ChaCha20KeyGenerator);
	});
	return class$;
}

$Class* KeyGeneratorCore$ChaCha20KeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com