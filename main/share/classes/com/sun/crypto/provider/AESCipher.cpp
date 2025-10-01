#include <com/sun/crypto/provider/AESCipher.h>

#include <com/sun/crypto/provider/AESConstants.h>
#include <com/sun/crypto/provider/AESCrypt.h>
#include <com/sun/crypto/provider/CipherCore.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/CipherSpi.h>
#include <jcpp.h>

#undef AES_BLOCK_SIZE

using $AESConstants = ::com::sun::crypto::provider::AESConstants;
using $AESCrypt = ::com::sun::crypto::provider::AESCrypt;
using $CipherCore = ::com::sun::crypto::provider::CipherCore;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $CipherSpi = ::javax::crypto::CipherSpi;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _AESCipher_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/CipherCore;", nullptr, $PRIVATE, $field(AESCipher, core)},
	{"fixedKeySize", "I", nullptr, $PRIVATE | $FINAL, $field(AESCipher, fixedKeySize)},
	{}
};

$MethodInfo _AESCipher_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(AESCipher::*)(int32_t)>(&AESCipher::init$))},
	{"checkKeySize", "(Ljava/security/Key;I)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($Key*,int32_t)>(&AESCipher::checkKeySize)), "java.security.InvalidKeyException"},
	{"engineDoFinal", "([BII)[B", nullptr, $PROTECTED, nullptr, "javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"engineDoFinal", "([BII[BI)I", nullptr, $PROTECTED, nullptr, "javax.crypto.IllegalBlockSizeException,javax.crypto.ShortBufferException,javax.crypto.BadPaddingException"},
	{"engineDoFinal", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I", nullptr, $PROTECTED, nullptr, "javax.crypto.ShortBufferException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"engineGetBlockSize", "()I", nullptr, $PROTECTED},
	{"engineGetIV", "()[B", nullptr, $PROTECTED},
	{"engineGetKeySize", "(Ljava/security/Key;)I", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException"},
	{"engineGetOutputSize", "(I)I", nullptr, $PROTECTED},
	{"engineGetParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED},
	{"engineInit", "(ILjava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException"},
	{"engineInit", "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineSetMode", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.security.NoSuchAlgorithmException"},
	{"engineSetPadding", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "javax.crypto.NoSuchPaddingException"},
	{"engineUnwrap", "([BLjava/lang/String;I)Ljava/security/Key;", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.NoSuchAlgorithmException"},
	{"engineUpdate", "([BII)[B", nullptr, $PROTECTED},
	{"engineUpdate", "([BII[BI)I", nullptr, $PROTECTED, nullptr, "javax.crypto.ShortBufferException"},
	{"engineWrap", "(Ljava/security/Key;)[B", nullptr, $PROTECTED, nullptr, "javax.crypto.IllegalBlockSizeException,java.security.InvalidKeyException"},
	{}
};

$InnerClassInfo _AESCipher_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.AESCipher$AES256_CFB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES256_CFB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES192_CFB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES192_CFB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES128_CFB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES128_CFB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES256_OFB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES256_OFB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES192_OFB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES192_OFB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES128_OFB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES128_OFB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES256_CBC_NoPadding", "com.sun.crypto.provider.AESCipher", "AES256_CBC_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES192_CBC_NoPadding", "com.sun.crypto.provider.AESCipher", "AES192_CBC_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES128_CBC_NoPadding", "com.sun.crypto.provider.AESCipher", "AES128_CBC_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES256_ECB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES256_ECB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES192_ECB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES192_ECB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$AES128_ECB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES128_ECB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$OidImpl", "com.sun.crypto.provider.AESCipher", "OidImpl", $STATIC | $ABSTRACT},
	{"com.sun.crypto.provider.AESCipher$General", "com.sun.crypto.provider.AESCipher", "General", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _AESCipher_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.crypto.provider.AESCipher",
	"javax.crypto.CipherSpi",
	nullptr,
	_AESCipher_FieldInfo_,
	_AESCipher_MethodInfo_,
	nullptr,
	nullptr,
	_AESCipher_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.AESCipher$AES256_CFB_NoPadding,com.sun.crypto.provider.AESCipher$AES192_CFB_NoPadding,com.sun.crypto.provider.AESCipher$AES128_CFB_NoPadding,com.sun.crypto.provider.AESCipher$AES256_OFB_NoPadding,com.sun.crypto.provider.AESCipher$AES192_OFB_NoPadding,com.sun.crypto.provider.AESCipher$AES128_OFB_NoPadding,com.sun.crypto.provider.AESCipher$AES256_CBC_NoPadding,com.sun.crypto.provider.AESCipher$AES192_CBC_NoPadding,com.sun.crypto.provider.AESCipher$AES128_CBC_NoPadding,com.sun.crypto.provider.AESCipher$AES256_ECB_NoPadding,com.sun.crypto.provider.AESCipher$AES192_ECB_NoPadding,com.sun.crypto.provider.AESCipher$AES128_ECB_NoPadding,com.sun.crypto.provider.AESCipher$OidImpl,com.sun.crypto.provider.AESCipher$General"
};

$Object* allocate$AESCipher($Class* clazz) {
	return $of($alloc(AESCipher));
}

void AESCipher::checkKeySize($Key* key, int32_t fixedKeySize) {
	$init(AESCipher);
	if (fixedKeySize != -1) {
		if (key == nullptr) {
			$throwNew($InvalidKeyException, "The key must not be null"_s);
		}
		$var($bytes, value, $nc(key)->getEncoded());
		if (value == nullptr) {
			$throwNew($InvalidKeyException, "Key encoding must not be null"_s);
		} else {
			$Arrays::fill(value, (int8_t)0);
			if ($nc(value)->length != fixedKeySize) {
				$throwNew($InvalidKeyException, $$str({"The key must be "_s, $$str(fixedKeySize), " bytes"_s}));
			}
		}
	}
}

void AESCipher::init$(int32_t keySize) {
	$CipherSpi::init$();
	$set(this, core, nullptr);
	$set(this, core, $new($CipherCore, $$new($AESCrypt), $AESConstants::AES_BLOCK_SIZE));
	this->fixedKeySize = keySize;
}

void AESCipher::engineSetMode($String* mode) {
	$nc(this->core)->setMode(mode);
}

void AESCipher::engineSetPadding($String* paddingScheme) {
	$nc(this->core)->setPadding(paddingScheme);
}

int32_t AESCipher::engineGetBlockSize() {
	return $AESConstants::AES_BLOCK_SIZE;
}

int32_t AESCipher::engineGetOutputSize(int32_t inputLen) {
	return $nc(this->core)->getOutputSize(inputLen);
}

$bytes* AESCipher::engineGetIV() {
	return $nc(this->core)->getIV();
}

$AlgorithmParameters* AESCipher::engineGetParameters() {
	return $nc(this->core)->getParameters("AES"_s);
}

void AESCipher::engineInit(int32_t opmode, $Key* key, $SecureRandom* random) {
	checkKeySize(key, this->fixedKeySize);
	$nc(this->core)->init(opmode, key, random);
}

void AESCipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	checkKeySize(key, this->fixedKeySize);
	$nc(this->core)->init(opmode, key, params, random);
}

void AESCipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
	checkKeySize(key, this->fixedKeySize);
	$nc(this->core)->init(opmode, key, params, random);
}

$bytes* AESCipher::engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen) {
	return $nc(this->core)->update(input, inputOffset, inputLen);
}

int32_t AESCipher::engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {
	return $nc(this->core)->update(input, inputOffset, inputLen, output, outputOffset);
}

$bytes* AESCipher::engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen) {
	$var($bytes, out, $nc(this->core)->doFinal(input, inputOffset, inputLen));
	return out;
}

int32_t AESCipher::engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {
	int32_t outLen = $nc(this->core)->doFinal(input, inputOffset, inputLen, output, outputOffset);
	return outLen;
}

int32_t AESCipher::engineGetKeySize($Key* key) {
	$var($bytes, encoded, $nc(key)->getEncoded());
	$Arrays::fill(encoded, (int8_t)0);
	if (!$AESCrypt::isKeySizeValid($nc(encoded)->length)) {
		$throwNew($InvalidKeyException, $$str({"Invalid AES key length: "_s, $$str($nc(encoded)->length), " bytes"_s}));
	}
	return $Math::multiplyExact($nc(encoded)->length, 8);
}

$bytes* AESCipher::engineWrap($Key* key) {
	return $nc(this->core)->wrap(key);
}

$Key* AESCipher::engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) {
	return $nc(this->core)->unwrap(wrappedKey, wrappedKeyAlgorithm, wrappedKeyType);
}

int32_t AESCipher::engineDoFinal($ByteBuffer* input, $ByteBuffer* output) {
	return $CipherSpi::engineDoFinal(input, output);
}

AESCipher::AESCipher() {
}

$Class* AESCipher::load$($String* name, bool initialize) {
	$loadClass(AESCipher, name, initialize, &_AESCipher_ClassInfo_, allocate$AESCipher);
	return class$;
}

$Class* AESCipher::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com