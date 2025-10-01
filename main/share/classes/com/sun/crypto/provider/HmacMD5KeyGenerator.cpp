#include <com/sun/crypto/provider/HmacMD5KeyGenerator.h>

#include <com/sun/crypto/provider/SunJCE.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _HmacMD5KeyGenerator_FieldInfo_[] = {
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(HmacMD5KeyGenerator, random)},
	{"keysize", "I", nullptr, $PRIVATE, $field(HmacMD5KeyGenerator, keysize)},
	{}
};

$MethodInfo _HmacMD5KeyGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HmacMD5KeyGenerator::*)()>(&HmacMD5KeyGenerator::init$))},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _HmacMD5KeyGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.HmacMD5KeyGenerator",
	"javax.crypto.KeyGeneratorSpi",
	nullptr,
	_HmacMD5KeyGenerator_FieldInfo_,
	_HmacMD5KeyGenerator_MethodInfo_
};

$Object* allocate$HmacMD5KeyGenerator($Class* clazz) {
	return $of($alloc(HmacMD5KeyGenerator));
}

void HmacMD5KeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, random, nullptr);
	this->keysize = 64;
}

void HmacMD5KeyGenerator::engineInit($SecureRandom* random) {
	$set(this, random, random);
}

void HmacMD5KeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$throwNew($InvalidAlgorithmParameterException, "HMAC-MD5 key generation does not take any parameters"_s);
}

void HmacMD5KeyGenerator::engineInit(int32_t keysize, $SecureRandom* random) {
	this->keysize = (keysize + 7) / 8;
	this->engineInit(random);
}

$SecretKey* HmacMD5KeyGenerator::engineGenerateKey() {
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
			$assign(var$2, $new($SecretKeySpec, keyBytes, "HmacMD5"_s));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
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

HmacMD5KeyGenerator::HmacMD5KeyGenerator() {
}

$Class* HmacMD5KeyGenerator::load$($String* name, bool initialize) {
	$loadClass(HmacMD5KeyGenerator, name, initialize, &_HmacMD5KeyGenerator_ClassInfo_, allocate$HmacMD5KeyGenerator);
	return class$;
}

$Class* HmacMD5KeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com