#include <com/sun/crypto/provider/KeyGeneratorCore$ARCFOURKeyGenerator.h>
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

void KeyGeneratorCore$ARCFOURKeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, core, $new($KeyGeneratorCore, "ARCFOUR"_s, 128));
}

void KeyGeneratorCore$ARCFOURKeyGenerator::engineInit($SecureRandom* random) {
	this->core->implInit(random);
}

void KeyGeneratorCore$ARCFOURKeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	this->core->implInit(params, random);
}

void KeyGeneratorCore$ARCFOURKeyGenerator::engineInit(int32_t keySize, $SecureRandom* random) {
	if ((keySize < 40) || (keySize > 1024)) {
		$throwNew($InvalidParameterException, "Key length for ARCFOUR must be between 40 and 1024 bits"_s);
	}
	this->core->implInit(keySize, random);
}

$SecretKey* KeyGeneratorCore$ARCFOURKeyGenerator::engineGenerateKey() {
	return this->core->implGenerateKey();
}

KeyGeneratorCore$ARCFOURKeyGenerator::KeyGeneratorCore$ARCFOURKeyGenerator() {
}

$Class* KeyGeneratorCore$ARCFOURKeyGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"core", "Lcom/sun/crypto/provider/KeyGeneratorCore;", nullptr, $PRIVATE | $FINAL, $field(KeyGeneratorCore$ARCFOURKeyGenerator, core)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyGeneratorCore$ARCFOURKeyGenerator, init$, void)},
		{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$ARCFOURKeyGenerator, engineGenerateKey, $SecretKey*)},
		{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$ARCFOURKeyGenerator, engineInit, void, $SecureRandom*)},
		{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$ARCFOURKeyGenerator, engineInit, void, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidAlgorithmParameterException"},
		{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(KeyGeneratorCore$ARCFOURKeyGenerator, engineInit, void, int32_t, $SecureRandom*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.KeyGeneratorCore$ARCFOURKeyGenerator", "com.sun.crypto.provider.KeyGeneratorCore", "ARCFOURKeyGenerator", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.KeyGeneratorCore$ARCFOURKeyGenerator",
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
	$loadClass(KeyGeneratorCore$ARCFOURKeyGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyGeneratorCore$ARCFOURKeyGenerator);
	});
	return class$;
}

$Class* KeyGeneratorCore$ARCFOURKeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com