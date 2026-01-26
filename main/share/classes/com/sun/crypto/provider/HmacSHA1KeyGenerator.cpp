#include <com/sun/crypto/provider/HmacSHA1KeyGenerator.h>

#include <com/sun/crypto/provider/SunJCE.h>
#include <java/security/InvalidAlgorithmParameterException.h>
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

$FieldInfo _HmacSHA1KeyGenerator_FieldInfo_[] = {
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(HmacSHA1KeyGenerator, random)},
	{"keysize", "I", nullptr, $PRIVATE, $field(HmacSHA1KeyGenerator, keysize)},
	{}
};

$MethodInfo _HmacSHA1KeyGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HmacSHA1KeyGenerator, init$, void)},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, $virtualMethod(HmacSHA1KeyGenerator, engineGenerateKey, $SecretKey*)},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(HmacSHA1KeyGenerator, engineInit, void, $SecureRandom*)},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(HmacSHA1KeyGenerator, engineInit, void, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(HmacSHA1KeyGenerator, engineInit, void, int32_t, $SecureRandom*)},
	{}
};

$ClassInfo _HmacSHA1KeyGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacSHA1KeyGenerator",
	"javax.crypto.KeyGeneratorSpi",
	nullptr,
	_HmacSHA1KeyGenerator_FieldInfo_,
	_HmacSHA1KeyGenerator_MethodInfo_
};

$Object* allocate$HmacSHA1KeyGenerator($Class* clazz) {
	return $of($alloc(HmacSHA1KeyGenerator));
}

void HmacSHA1KeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, random, nullptr);
	this->keysize = 64;
}

void HmacSHA1KeyGenerator::engineInit($SecureRandom* random) {
	$set(this, random, random);
}

void HmacSHA1KeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$throwNew($InvalidAlgorithmParameterException, "HMAC-SHA1 key generation does not take any parameters"_s);
}

void HmacSHA1KeyGenerator::engineInit(int32_t keysize, $SecureRandom* random) {
	this->keysize = (keysize + 7) / 8;
	this->engineInit(random);
}

$SecretKey* HmacSHA1KeyGenerator::engineGenerateKey() {
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
			$assign(var$2, $new($SecretKeySpec, keyBytes, "HmacSHA1"_s));
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

HmacSHA1KeyGenerator::HmacSHA1KeyGenerator() {
}

$Class* HmacSHA1KeyGenerator::load$($String* name, bool initialize) {
	$loadClass(HmacSHA1KeyGenerator, name, initialize, &_HmacSHA1KeyGenerator_ClassInfo_, allocate$HmacSHA1KeyGenerator);
	return class$;
}

$Class* HmacSHA1KeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com