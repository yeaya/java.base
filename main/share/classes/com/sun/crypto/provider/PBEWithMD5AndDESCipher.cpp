#include <com/sun/crypto/provider/PBEWithMD5AndDESCipher.h>

#include <com/sun/crypto/provider/PBES1Core.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/CipherSpi.h>
#include <javax/crypto/NoSuchPaddingException.h>
#include <jcpp.h>

using $PBES1Core = ::com::sun::crypto::provider::PBES1Core;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $CipherSpi = ::javax::crypto::CipherSpi;
using $NoSuchPaddingException = ::javax::crypto::NoSuchPaddingException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _PBEWithMD5AndDESCipher_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/PBES1Core;", nullptr, $PRIVATE, $field(PBEWithMD5AndDESCipher, core)},
	{}
};

$MethodInfo _PBEWithMD5AndDESCipher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PBEWithMD5AndDESCipher::*)()>(&PBEWithMD5AndDESCipher::init$)), "java.security.NoSuchAlgorithmException,javax.crypto.NoSuchPaddingException"},
	{"engineDoFinal", "([BII)[B", nullptr, $PROTECTED, nullptr, "javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"engineDoFinal", "([BII[BI)I", nullptr, $PROTECTED, nullptr, "javax.crypto.ShortBufferException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
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

$ClassInfo _PBEWithMD5AndDESCipher_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PBEWithMD5AndDESCipher",
	"javax.crypto.CipherSpi",
	nullptr,
	_PBEWithMD5AndDESCipher_FieldInfo_,
	_PBEWithMD5AndDESCipher_MethodInfo_
};

$Object* allocate$PBEWithMD5AndDESCipher($Class* clazz) {
	return $of($alloc(PBEWithMD5AndDESCipher));
}

void PBEWithMD5AndDESCipher::init$() {
	$CipherSpi::init$();
	$set(this, core, $new($PBES1Core, "DES"_s));
}

void PBEWithMD5AndDESCipher::engineSetMode($String* mode) {
	if ((mode != nullptr) && (!mode->equalsIgnoreCase("CBC"_s))) {
		$throwNew($NoSuchAlgorithmException, $$str({"Invalid cipher mode: "_s, mode}));
	}
}

void PBEWithMD5AndDESCipher::engineSetPadding($String* paddingScheme) {
	if ((paddingScheme != nullptr) && (!paddingScheme->equalsIgnoreCase("PKCS5Padding"_s))) {
		$throwNew($NoSuchPaddingException, $$str({"Invalid padding scheme: "_s, paddingScheme}));
	}
}

int32_t PBEWithMD5AndDESCipher::engineGetBlockSize() {
	return $nc(this->core)->getBlockSize();
}

int32_t PBEWithMD5AndDESCipher::engineGetOutputSize(int32_t inputLen) {
	return $nc(this->core)->getOutputSize(inputLen);
}

$bytes* PBEWithMD5AndDESCipher::engineGetIV() {
	return $nc(this->core)->getIV();
}

$AlgorithmParameters* PBEWithMD5AndDESCipher::engineGetParameters() {
	return $nc(this->core)->getParameters();
}

void PBEWithMD5AndDESCipher::engineInit(int32_t opmode, $Key* key, $SecureRandom* random) {
	try {
		engineInit(opmode, key, ($AlgorithmParameterSpec*)nullptr, random);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, ie, $catch());
		$var($InvalidKeyException, ike, $new($InvalidKeyException, "requires PBE parameters"_s));
		ike->initCause(ie);
		$throw(ike);
	}
}

void PBEWithMD5AndDESCipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	$nc(this->core)->init(opmode, key, params, random);
}

void PBEWithMD5AndDESCipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
	$nc(this->core)->init(opmode, key, params, random);
}

$bytes* PBEWithMD5AndDESCipher::engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen) {
	return $nc(this->core)->update(input, inputOffset, inputLen);
}

int32_t PBEWithMD5AndDESCipher::engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {
	return $nc(this->core)->update(input, inputOffset, inputLen, output, outputOffset);
}

$bytes* PBEWithMD5AndDESCipher::engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen) {
	return $nc(this->core)->doFinal(input, inputOffset, inputLen);
}

int32_t PBEWithMD5AndDESCipher::engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {
	return $nc(this->core)->doFinal(input, inputOffset, inputLen, output, outputOffset);
}

int32_t PBEWithMD5AndDESCipher::engineGetKeySize($Key* key) {
	return 56;
}

$bytes* PBEWithMD5AndDESCipher::engineWrap($Key* key) {
	return $nc(this->core)->wrap(key);
}

$Key* PBEWithMD5AndDESCipher::engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) {
	$var($bytes, encodedKey, nullptr);
	return $nc(this->core)->unwrap(wrappedKey, wrappedKeyAlgorithm, wrappedKeyType);
}

PBEWithMD5AndDESCipher::PBEWithMD5AndDESCipher() {
}

$Class* PBEWithMD5AndDESCipher::load$($String* name, bool initialize) {
	$loadClass(PBEWithMD5AndDESCipher, name, initialize, &_PBEWithMD5AndDESCipher_ClassInfo_, allocate$PBEWithMD5AndDESCipher);
	return class$;
}

$Class* PBEWithMD5AndDESCipher::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com