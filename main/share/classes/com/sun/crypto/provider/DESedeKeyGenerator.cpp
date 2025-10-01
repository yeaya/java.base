#include <com/sun/crypto/provider/DESedeKeyGenerator.h>

#include <com/sun/crypto/provider/DESKeyGenerator.h>
#include <com/sun/crypto/provider/DESedeKey.h>
#include <com/sun/crypto/provider/SunJCE.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/KeyGeneratorSpi.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/DESedeKeySpec.h>
#include <jcpp.h>

#undef DES_EDE_KEY_LEN

using $DESKeyGenerator = ::com::sun::crypto::provider::DESKeyGenerator;
using $DESedeKey = ::com::sun::crypto::provider::DESedeKey;
using $SunJCE = ::com::sun::crypto::provider::SunJCE;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $KeyGeneratorSpi = ::javax::crypto::KeyGeneratorSpi;
using $SecretKey = ::javax::crypto::SecretKey;
using $DESedeKeySpec = ::javax::crypto::spec::DESedeKeySpec;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _DESedeKeyGenerator_FieldInfo_[] = {
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(DESedeKeyGenerator, random)},
	{"keysize", "I", nullptr, $PRIVATE, $field(DESedeKeyGenerator, keysize)},
	{}
};

$MethodInfo _DESedeKeyGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DESedeKeyGenerator::*)()>(&DESedeKeyGenerator::init$))},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _DESedeKeyGenerator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.DESedeKeyGenerator",
	"javax.crypto.KeyGeneratorSpi",
	nullptr,
	_DESedeKeyGenerator_FieldInfo_,
	_DESedeKeyGenerator_MethodInfo_
};

$Object* allocate$DESedeKeyGenerator($Class* clazz) {
	return $of($alloc(DESedeKeyGenerator));
}

void DESedeKeyGenerator::init$() {
	$KeyGeneratorSpi::init$();
	$set(this, random, nullptr);
	this->keysize = 168;
}

void DESedeKeyGenerator::engineInit($SecureRandom* random) {
	$set(this, random, random);
}

void DESedeKeyGenerator::engineInit($AlgorithmParameterSpec* params, $SecureRandom* random) {
	$throwNew($InvalidAlgorithmParameterException, "Triple DES key generation does not take any parameters"_s);
}

void DESedeKeyGenerator::engineInit(int32_t keysize, $SecureRandom* random) {
	if ((keysize != 112) && (keysize != 168)) {
		$throwNew($InvalidParameterException, "Wrong keysize: must be equal to 112 or 168"_s);
	}
	this->keysize = keysize;
	this->engineInit(random);
}

$SecretKey* DESedeKeyGenerator::engineGenerateKey() {
	if (this->random == nullptr) {
		$set(this, random, $SunJCE::getRandom());
	}
	$var($bytes, rawkey, $new($bytes, $DESedeKeySpec::DES_EDE_KEY_LEN));
	if (this->keysize == 168) {
		$nc(this->random)->nextBytes(rawkey);
		$DESKeyGenerator::setParityBit(rawkey, 0);
		$DESKeyGenerator::setParityBit(rawkey, 8);
		$DESKeyGenerator::setParityBit(rawkey, 16);
	} else {
		$var($bytes, tmpkey, $new($bytes, 16));
		$nc(this->random)->nextBytes(tmpkey);
		$DESKeyGenerator::setParityBit(tmpkey, 0);
		$DESKeyGenerator::setParityBit(tmpkey, 8);
		$System::arraycopy(tmpkey, 0, rawkey, 0, tmpkey->length);
		$System::arraycopy(tmpkey, 0, rawkey, 16, 8);
		$Arrays::fill(tmpkey, (int8_t)0);
	}
	$var($DESedeKey, desEdeKey, nullptr);
	try {
		$assign(desEdeKey, $new($DESedeKey, rawkey));
	} catch ($InvalidKeyException&) {
		$var($InvalidKeyException, ike, $catch());
		$throwNew($RuntimeException, $(ike->getMessage()));
	}
	$Arrays::fill(rawkey, (int8_t)0);
	return desEdeKey;
}

DESedeKeyGenerator::DESedeKeyGenerator() {
}

$Class* DESedeKeyGenerator::load$($String* name, bool initialize) {
	$loadClass(DESedeKeyGenerator, name, initialize, &_DESedeKeyGenerator_ClassInfo_, allocate$DESedeKeyGenerator);
	return class$;
}

$Class* DESedeKeyGenerator::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com