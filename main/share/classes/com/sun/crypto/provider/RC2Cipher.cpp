#include <com/sun/crypto/provider/RC2Cipher.h>

#include <com/sun/crypto/provider/CipherCore.h>
#include <com/sun/crypto/provider/RC2Crypt.h>
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
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <java/util/Arrays.h>
#include <javax/crypto/CipherSpi.h>
#include <javax/crypto/spec/RC2ParameterSpec.h>
#include <jcpp.h>

using $CipherCore = ::com::sun::crypto::provider::CipherCore;
using $RC2Crypt = ::com::sun::crypto::provider::RC2Crypt;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $Key = ::java::security::Key;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $Arrays = ::java::util::Arrays;
using $CipherSpi = ::javax::crypto::CipherSpi;
using $RC2ParameterSpec = ::javax::crypto::spec::RC2ParameterSpec;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _RC2Cipher_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/CipherCore;", nullptr, $PRIVATE | $FINAL, $field(RC2Cipher, core)},
	{"embeddedCipher", "Lcom/sun/crypto/provider/RC2Crypt;", nullptr, $PRIVATE | $FINAL, $field(RC2Cipher, embeddedCipher)},
	{}
};

$MethodInfo _RC2Cipher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RC2Cipher::*)()>(&RC2Cipher::init$))},
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

$ClassInfo _RC2Cipher_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.RC2Cipher",
	"javax.crypto.CipherSpi",
	nullptr,
	_RC2Cipher_FieldInfo_,
	_RC2Cipher_MethodInfo_
};

$Object* allocate$RC2Cipher($Class* clazz) {
	return $of($alloc(RC2Cipher));
}

void RC2Cipher::init$() {
	$CipherSpi::init$();
	$set(this, embeddedCipher, $new($RC2Crypt));
	$set(this, core, $new($CipherCore, this->embeddedCipher, 8));
}

void RC2Cipher::engineSetMode($String* mode) {
	$nc(this->core)->setMode(mode);
}

void RC2Cipher::engineSetPadding($String* paddingScheme) {
	$nc(this->core)->setPadding(paddingScheme);
}

int32_t RC2Cipher::engineGetBlockSize() {
	return 8;
}

int32_t RC2Cipher::engineGetOutputSize(int32_t inputLen) {
	return $nc(this->core)->getOutputSize(inputLen);
}

$bytes* RC2Cipher::engineGetIV() {
	return $nc(this->core)->getIV();
}

$AlgorithmParameters* RC2Cipher::engineGetParameters() {
	return $nc(this->core)->getParameters("RC2"_s);
}

void RC2Cipher::engineInit(int32_t opmode, $Key* key, $SecureRandom* random) {
	$nc(this->embeddedCipher)->initEffectiveKeyBits(0);
	$nc(this->core)->init(opmode, key, random);
}

void RC2Cipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	if (params != nullptr && $instanceOf($RC2ParameterSpec, params)) {
		$nc(this->embeddedCipher)->initEffectiveKeyBits($nc(($cast($RC2ParameterSpec, params)))->getEffectiveKeyBits());
	} else {
		$nc(this->embeddedCipher)->initEffectiveKeyBits(0);
	}
	$nc(this->core)->init(opmode, key, params, random);
}

void RC2Cipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
	if (params != nullptr && $nc($(params->getAlgorithm()))->equals("RC2"_s)) {
		try {
			$load($RC2ParameterSpec);
			$var($RC2ParameterSpec, rc2Params, $cast($RC2ParameterSpec, params->getParameterSpec($RC2ParameterSpec::class$)));
			engineInit(opmode, key, static_cast<$AlgorithmParameterSpec*>(rc2Params), random);
		} catch ($InvalidParameterSpecException&) {
			$var($InvalidParameterSpecException, ipse, $catch());
			$throwNew($InvalidAlgorithmParameterException, "Wrong parameter type: RC2 expected"_s);
		}
	} else {
		$nc(this->embeddedCipher)->initEffectiveKeyBits(0);
		$nc(this->core)->init(opmode, key, params, random);
	}
}

$bytes* RC2Cipher::engineUpdate($bytes* in, int32_t inOfs, int32_t inLen) {
	return $nc(this->core)->update(in, inOfs, inLen);
}

int32_t RC2Cipher::engineUpdate($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	return $nc(this->core)->update(in, inOfs, inLen, out, outOfs);
}

$bytes* RC2Cipher::engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen) {
	return $nc(this->core)->doFinal(in, inOfs, inLen);
}

int32_t RC2Cipher::engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	return $nc(this->core)->doFinal(in, inOfs, inLen, out, outOfs);
}

int32_t RC2Cipher::engineGetKeySize($Key* key) {
	$var($bytes, keyBytes, $CipherCore::getKeyBytes(key));
	$Arrays::fill(keyBytes, (int8_t)0);
	$RC2Crypt::checkKey($($nc(key)->getAlgorithm()), $nc(keyBytes)->length);
	return $nc(keyBytes)->length << 3;
}

$bytes* RC2Cipher::engineWrap($Key* key) {
	return $nc(this->core)->wrap(key);
}

$Key* RC2Cipher::engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) {
	return $nc(this->core)->unwrap(wrappedKey, wrappedKeyAlgorithm, wrappedKeyType);
}

RC2Cipher::RC2Cipher() {
}

$Class* RC2Cipher::load$($String* name, bool initialize) {
	$loadClass(RC2Cipher, name, initialize, &_RC2Cipher_ClassInfo_, allocate$RC2Cipher);
	return class$;
}

$Class* RC2Cipher::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com