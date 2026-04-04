#include <com/sun/crypto/provider/DESKeyGenerator.h>
#include <com/sun/crypto/provider/DESKey.h>
#include <com/sun/crypto/provider/SunJCE.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/KeyGeneratorSpi.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/DESKeySpec.h>
#include <jcpp.h>

#undef DES_KEY_LEN

using $DESKey = ::com::sun::crypto::provider::DESKey;
using $SunJCE = ::com::sun::crypto::provider::SunJCE;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $KeyGeneratorSpi = ::javax::crypto::KeyGeneratorSpi;
using $SecretKey = ::javax::crypto::SecretKey;
using $DESKeySpec = ::javax::crypto::spec::DESKeySpec;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void DESKeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, random, nullptr);
}

void DESKeyGenerator::engineInit($SecureRandom* random) {
	$set(this, random, random);
}

void DESKeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$throwNew($InvalidAlgorithmParameterException, "DES key generation does not take any parameters"_s);
}

void DESKeyGenerator::engineInit(int32_t keysize, $SecureRandom* random) {
	if (keysize != 56) {
		$throwNew($InvalidParameterException, "Wrong keysize: must be equal to 56"_s);
	}
	this->engineInit(random);
}

$SecretKey* DESKeyGenerator::engineGenerateKey() {
	$useLocalObjectStack();
	$var($DESKey, desKey, nullptr);
	if (this->random == nullptr) {
		$set(this, random, $SunJCE::getRandom());
	}
	try {
		$var($bytes, key, $new($bytes, $DESKeySpec::DES_KEY_LEN));
		do {
			$nc(this->random)->nextBytes(key);
			setParityBit(key, 0);
		} while ($DESKeySpec::isWeak(key, 0));
		$assign(desKey, $new($DESKey, key));
		$Arrays::fill(key, (int8_t)0);
	} catch ($InvalidKeyException& e) {
	}
	return desKey;
}

void DESKeyGenerator::setParityBit($bytes* key, int32_t offset) {
	$init(DESKeyGenerator);
	if (key == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $DESKeySpec::DES_KEY_LEN; ++i) {
		int32_t b = $nc(key)->get(offset) & 0xfe;
		b |= ($Integer::bitCount(b) & 1) ^ 1;
		key->set(offset++, (int8_t)b);
	}
}

DESKeyGenerator::DESKeyGenerator() {
}

$Class* DESKeyGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(DESKeyGenerator, random)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DESKeyGenerator, init$, void)},
		{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(DESKeyGenerator, engineGenerateKey, $SecretKey*)},
		{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(DESKeyGenerator, engineInit, void, $SecureRandom*)},
		{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(DESKeyGenerator, engineInit, void, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidAlgorithmParameterException"},
		{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(DESKeyGenerator, engineInit, void, int32_t, $SecureRandom*)},
		{"setParityBit", "([BI)V", nullptr, $STATIC, $staticMethod(DESKeyGenerator, setParityBit, void, $bytes*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.DESKeyGenerator",
		"javax.crypto.KeyGeneratorSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DESKeyGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DESKeyGenerator);
	});
	return class$;
}

$Class* DESKeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com