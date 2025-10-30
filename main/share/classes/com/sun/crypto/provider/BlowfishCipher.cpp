#include <com/sun/crypto/provider/BlowfishCipher.h>

#include <com/sun/crypto/provider/BlowfishConstants.h>
#include <com/sun/crypto/provider/BlowfishCrypt.h>
#include <com/sun/crypto/provider/CipherCore.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Math.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/CipherSpi.h>
#include <jcpp.h>

#undef BLOWFISH_BLOCK_SIZE

using $BlowfishConstants = ::com::sun::crypto::provider::BlowfishConstants;
using $BlowfishCrypt = ::com::sun::crypto::provider::BlowfishCrypt;
using $CipherCore = ::com::sun::crypto::provider::CipherCore;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $CipherSpi = ::javax::crypto::CipherSpi;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _BlowfishCipher_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/CipherCore;", nullptr, $PRIVATE, $field(BlowfishCipher, core)},
	{}
};

$MethodInfo _BlowfishCipher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BlowfishCipher::*)()>(&BlowfishCipher::init$))},
	{"engineDoFinal", "([BII)[B", nullptr, $PROTECTED, nullptr, "javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"engineDoFinal", "([BII[BI)I", nullptr, $PROTECTED, nullptr, "javax.crypto.IllegalBlockSizeException,javax.crypto.ShortBufferException,javax.crypto.BadPaddingException"},
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

$ClassInfo _BlowfishCipher_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.BlowfishCipher",
	"javax.crypto.CipherSpi",
	nullptr,
	_BlowfishCipher_FieldInfo_,
	_BlowfishCipher_MethodInfo_
};

$Object* allocate$BlowfishCipher($Class* clazz) {
	return $of($alloc(BlowfishCipher));
}

void BlowfishCipher::init$() {
	$CipherSpi::init$();
	$set(this, core, nullptr);
	$set(this, core, $new($CipherCore, $$new($BlowfishCrypt), $BlowfishConstants::BLOWFISH_BLOCK_SIZE));
}

void BlowfishCipher::engineSetMode($String* mode) {
	$nc(this->core)->setMode(mode);
}

void BlowfishCipher::engineSetPadding($String* paddingScheme) {
	$nc(this->core)->setPadding(paddingScheme);
}

int32_t BlowfishCipher::engineGetBlockSize() {
	return $BlowfishConstants::BLOWFISH_BLOCK_SIZE;
}

int32_t BlowfishCipher::engineGetOutputSize(int32_t inputLen) {
	return $nc(this->core)->getOutputSize(inputLen);
}

$bytes* BlowfishCipher::engineGetIV() {
	return $nc(this->core)->getIV();
}

$AlgorithmParameters* BlowfishCipher::engineGetParameters() {
	return $nc(this->core)->getParameters("Blowfish"_s);
}

void BlowfishCipher::engineInit(int32_t opmode, $Key* key, $SecureRandom* random) {
	$nc(this->core)->init(opmode, key, random);
}

void BlowfishCipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	$nc(this->core)->init(opmode, key, params, random);
}

void BlowfishCipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
	$nc(this->core)->init(opmode, key, params, random);
}

$bytes* BlowfishCipher::engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen) {
	return $nc(this->core)->update(input, inputOffset, inputLen);
}

int32_t BlowfishCipher::engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {
	return $nc(this->core)->update(input, inputOffset, inputLen, output, outputOffset);
}

$bytes* BlowfishCipher::engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen) {
	return $nc(this->core)->doFinal(input, inputOffset, inputLen);
}

int32_t BlowfishCipher::engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {
	return $nc(this->core)->doFinal(input, inputOffset, inputLen, output, outputOffset);
}

int32_t BlowfishCipher::engineGetKeySize($Key* key) {
	$var($bytes, encodedKey, $nc(key)->getEncoded());
	$Arrays::fill(encodedKey, (int8_t)0);
	return $Math::multiplyExact($nc(encodedKey)->length, 8);
}

$bytes* BlowfishCipher::engineWrap($Key* key) {
	return $nc(this->core)->wrap(key);
}

$Key* BlowfishCipher::engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) {
	return $nc(this->core)->unwrap(wrappedKey, wrappedKeyAlgorithm, wrappedKeyType);
}

BlowfishCipher::BlowfishCipher() {
}

$Class* BlowfishCipher::load$($String* name, bool initialize) {
	$loadClass(BlowfishCipher, name, initialize, &_BlowfishCipher_ClassInfo_, allocate$BlowfishCipher);
	return class$;
}

$Class* BlowfishCipher::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com