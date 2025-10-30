#include <com/sun/crypto/provider/BlowfishKeyGenerator.h>

#include <com/sun/crypto/provider/SunJCE.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/KeyGeneratorSpi.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <jcpp.h>

using $SunJCE = ::com::sun::crypto::provider::SunJCE;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $KeyGeneratorSpi = ::javax::crypto::KeyGeneratorSpi;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _BlowfishKeyGenerator_FieldInfo_[] = {
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(BlowfishKeyGenerator, random)},
	{"keysize", "I", nullptr, $PRIVATE, $field(BlowfishKeyGenerator, keysize)},
	{}
};

$MethodInfo _BlowfishKeyGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BlowfishKeyGenerator::*)()>(&BlowfishKeyGenerator::init$))},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _BlowfishKeyGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.BlowfishKeyGenerator",
	"javax.crypto.KeyGeneratorSpi",
	nullptr,
	_BlowfishKeyGenerator_FieldInfo_,
	_BlowfishKeyGenerator_MethodInfo_
};

$Object* allocate$BlowfishKeyGenerator($Class* clazz) {
	return $of($alloc(BlowfishKeyGenerator));
}

void BlowfishKeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, random, nullptr);
	this->keysize = 16;
}

void BlowfishKeyGenerator::engineInit($SecureRandom* random) {
	$set(this, random, random);
}

void BlowfishKeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$throwNew($InvalidAlgorithmParameterException, "Blowfish key generation does not take any parameters"_s);
}

void BlowfishKeyGenerator::engineInit(int32_t keysize, $SecureRandom* random) {
	if (((keysize % 8) != 0) || (keysize < 32) || (keysize > 448)) {
		$throwNew($InvalidParameterException, "Keysize must be multiple of 8, and can only range from 32 to 448 (inclusive)"_s);
	}
	this->keysize = keysize / 8;
	this->engineInit(random);
}

$SecretKey* BlowfishKeyGenerator::engineGenerateKey() {
	$useLocalCurrentObjectStackCache();
	if (this->random == nullptr) {
		$set(this, random, $SunJCE::getRandom());
	}
	$var($bytes, keyBytes, $new($bytes, this->keysize));
	$nc(this->random)->nextBytes(keyBytes);
	{
		$var($Throwable, var$0, nullptr);
		$var($SecretKey, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $new($SecretKeySpec, keyBytes, "Blowfish"_s));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Arrays::fill(keyBytes, (int8_t)0);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

BlowfishKeyGenerator::BlowfishKeyGenerator() {
}

$Class* BlowfishKeyGenerator::load$($String* name, bool initialize) {
	$loadClass(BlowfishKeyGenerator, name, initialize, &_BlowfishKeyGenerator_ClassInfo_, allocate$BlowfishKeyGenerator);
	return class$;
}

$Class* BlowfishKeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com