#include <com/sun/crypto/provider/DESCipher.h>

#include <com/sun/crypto/provider/CipherCore.h>
#include <com/sun/crypto/provider/DESConstants.h>
#include <com/sun/crypto/provider/DESCrypt.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/CipherSpi.h>
#include <jcpp.h>

#undef DES_BLOCK_SIZE

using $CipherCore = ::com::sun::crypto::provider::CipherCore;
using $DESConstants = ::com::sun::crypto::provider::DESConstants;
using $DESCrypt = ::com::sun::crypto::provider::DESCrypt;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$FieldInfo _DESCipher_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/CipherCore;", nullptr, $PRIVATE, $field(DESCipher, core)},
	{}
};

$MethodInfo _DESCipher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DESCipher::*)()>(&DESCipher::init$))},
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

$ClassInfo _DESCipher_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.DESCipher",
	"javax.crypto.CipherSpi",
	nullptr,
	_DESCipher_FieldInfo_,
	_DESCipher_MethodInfo_
};

$Object* allocate$DESCipher($Class* clazz) {
	return $of($alloc(DESCipher));
}

void DESCipher::init$() {
	$CipherSpi::init$();
	$set(this, core, nullptr);
	$set(this, core, $new($CipherCore, $$new($DESCrypt), $DESConstants::DES_BLOCK_SIZE));
}

void DESCipher::engineSetMode($String* mode) {
	$nc(this->core)->setMode(mode);
}

void DESCipher::engineSetPadding($String* paddingScheme) {
	$nc(this->core)->setPadding(paddingScheme);
}

int32_t DESCipher::engineGetBlockSize() {
	return $DESConstants::DES_BLOCK_SIZE;
}

int32_t DESCipher::engineGetOutputSize(int32_t inputLen) {
	return $nc(this->core)->getOutputSize(inputLen);
}

$bytes* DESCipher::engineGetIV() {
	return $nc(this->core)->getIV();
}

$AlgorithmParameters* DESCipher::engineGetParameters() {
	return $nc(this->core)->getParameters("DES"_s);
}

void DESCipher::engineInit(int32_t opmode, $Key* key, $SecureRandom* random) {
	$nc(this->core)->init(opmode, key, random);
}

void DESCipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	$nc(this->core)->init(opmode, key, params, random);
}

void DESCipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
	$nc(this->core)->init(opmode, key, params, random);
}

$bytes* DESCipher::engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen) {
	return $nc(this->core)->update(input, inputOffset, inputLen);
}

int32_t DESCipher::engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {
	return $nc(this->core)->update(input, inputOffset, inputLen, output, outputOffset);
}

$bytes* DESCipher::engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen) {
	return $nc(this->core)->doFinal(input, inputOffset, inputLen);
}

int32_t DESCipher::engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {
	return $nc(this->core)->doFinal(input, inputOffset, inputLen, output, outputOffset);
}

int32_t DESCipher::engineGetKeySize($Key* key) {
	$var($bytes, encoded, $nc(key)->getEncoded());
	$Arrays::fill(encoded, (int8_t)0);
	if ($nc(encoded)->length != 8) {
		$throwNew($InvalidKeyException, $$str({"Invalid key length: "_s, $$str(encoded->length), " bytes"_s}));
	}
	return 56;
}

$bytes* DESCipher::engineWrap($Key* key) {
	return $nc(this->core)->wrap(key);
}

$Key* DESCipher::engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) {
	return $nc(this->core)->unwrap(wrappedKey, wrappedKeyAlgorithm, wrappedKeyType);
}

DESCipher::DESCipher() {
}

$Class* DESCipher::load$($String* name, bool initialize) {
	$loadClass(DESCipher, name, initialize, &_DESCipher_ClassInfo_, allocate$DESCipher);
	return class$;
}

$Class* DESCipher::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com