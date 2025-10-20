#include <com/sun/crypto/provider/AESKeyGenerator.h>

#include <com/sun/crypto/provider/AESCrypt.h>
#include <com/sun/crypto/provider/SunJCE.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/KeyGeneratorSpi.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <jcpp.h>

using $AESCrypt = ::com::sun::crypto::provider::AESCrypt;
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

$FieldInfo _AESKeyGenerator_FieldInfo_[] = {
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(AESKeyGenerator, random)},
	{"keySize", "I", nullptr, $PRIVATE, $field(AESKeyGenerator, keySize)},
	{}
};

$MethodInfo _AESKeyGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AESKeyGenerator::*)()>(&AESKeyGenerator::init$))},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _AESKeyGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.AESKeyGenerator",
	"javax.crypto.KeyGeneratorSpi",
	nullptr,
	_AESKeyGenerator_FieldInfo_,
	_AESKeyGenerator_MethodInfo_
};

$Object* allocate$AESKeyGenerator($Class* clazz) {
	return $of($alloc(AESKeyGenerator));
}

void AESKeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, random, nullptr);
	this->keySize = 16;
}

void AESKeyGenerator::engineInit($SecureRandom* random) {
	$set(this, random, random);
}

void AESKeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$throwNew($InvalidAlgorithmParameterException, "AES key generation does not take any parameters"_s);
}

void AESKeyGenerator::engineInit(int32_t keysize, $SecureRandom* random) {
	if (((keysize % 8) != 0) || (!$AESCrypt::isKeySizeValid(keysize / 8))) {
		$throwNew($InvalidParameterException, "Wrong keysize: must be equal to 128, 192 or 256"_s);
	}
	this->keySize = keysize / 8;
	this->engineInit(random);
}

$SecretKey* AESKeyGenerator::engineGenerateKey() {
	$useLocalCurrentObjectStackCache();
	$var($SecretKeySpec, aesKey, nullptr);
	if (this->random == nullptr) {
		$set(this, random, $SunJCE::getRandom());
	}
	$var($bytes, keyBytes, $new($bytes, this->keySize));
	$nc(this->random)->nextBytes(keyBytes);
	$assign(aesKey, $new($SecretKeySpec, keyBytes, "AES"_s));
	$Arrays::fill(keyBytes, (int8_t)0);
	return aesKey;
}

AESKeyGenerator::AESKeyGenerator() {
}

$Class* AESKeyGenerator::load$($String* name, bool initialize) {
	$loadClass(AESKeyGenerator, name, initialize, &_AESKeyGenerator_ClassInfo_, allocate$AESKeyGenerator);
	return class$;
}

$Class* AESKeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com