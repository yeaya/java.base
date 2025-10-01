#include <com/sun/crypto/provider/PKCS12PBECipherCore$PBEWithSHA1AndRC4_128.h>

#include <com/sun/crypto/provider/ARCFOURCipher.h>
#include <com/sun/crypto/provider/PKCS12PBECipherCore.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/CipherSpi.h>
#include <javax/crypto/NoSuchPaddingException.h>
#include <jcpp.h>

#undef RC4_KEYSIZE

using $ARCFOURCipher = ::com::sun::crypto::provider::ARCFOURCipher;
using $PKCS12PBECipherCore = ::com::sun::crypto::provider::PKCS12PBECipherCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
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

$FieldInfo _PKCS12PBECipherCore$PBEWithSHA1AndRC4_128_FieldInfo_[] = {
	{"RC4_KEYSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PKCS12PBECipherCore$PBEWithSHA1AndRC4_128, RC4_KEYSIZE)},
	{"core", "Lcom/sun/crypto/provider/PKCS12PBECipherCore;", nullptr, $PRIVATE | $FINAL, $field(PKCS12PBECipherCore$PBEWithSHA1AndRC4_128, core)},
	{"cipher", "Lcom/sun/crypto/provider/ARCFOURCipher;", nullptr, $PRIVATE | $FINAL, $field(PKCS12PBECipherCore$PBEWithSHA1AndRC4_128, cipher)},
	{}
};

$MethodInfo _PKCS12PBECipherCore$PBEWithSHA1AndRC4_128_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::*)()>(&PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::init$)), "java.security.NoSuchAlgorithmException"},
	{"engineDoFinal", "([BII)[B", nullptr, $PROTECTED, nullptr, "javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"engineDoFinal", "([BII[BI)I", nullptr, $PROTECTED, nullptr, "javax.crypto.ShortBufferException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
	{"engineGetBlockSize", "()I", nullptr, $PROTECTED},
	{"engineGetIV", "()[B", nullptr, $PROTECTED},
	{"engineGetKeySize", "(Ljava/security/Key;)I", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException"},
	{"engineGetOutputSize", "(I)I", nullptr, $PROTECTED},
	{"engineGetParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED},
	{"engineInit", "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException"},
	{"engineSetMode", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.security.NoSuchAlgorithmException"},
	{"engineSetPadding", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "javax.crypto.NoSuchPaddingException"},
	{"engineUnwrap", "([BLjava/lang/String;I)Ljava/security/Key;", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.NoSuchAlgorithmException"},
	{"engineUpdate", "([BII)[B", nullptr, $PROTECTED},
	{"engineUpdate", "([BII[BI)I", nullptr, $PROTECTED, nullptr, "javax.crypto.ShortBufferException"},
	{"engineWrap", "(Ljava/security/Key;)[B", nullptr, $PROTECTED, nullptr, "javax.crypto.IllegalBlockSizeException,java.security.InvalidKeyException"},
	{}
};

$InnerClassInfo _PKCS12PBECipherCore$PBEWithSHA1AndRC4_128_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PKCS12PBECipherCore$PBEWithSHA1AndRC4_128", "com.sun.crypto.provider.PKCS12PBECipherCore", "PBEWithSHA1AndRC4_128", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PKCS12PBECipherCore$PBEWithSHA1AndRC4_128_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PKCS12PBECipherCore$PBEWithSHA1AndRC4_128",
	"javax.crypto.CipherSpi",
	nullptr,
	_PKCS12PBECipherCore$PBEWithSHA1AndRC4_128_FieldInfo_,
	_PKCS12PBECipherCore$PBEWithSHA1AndRC4_128_MethodInfo_,
	nullptr,
	nullptr,
	_PKCS12PBECipherCore$PBEWithSHA1AndRC4_128_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PKCS12PBECipherCore"
};

$Object* allocate$PKCS12PBECipherCore$PBEWithSHA1AndRC4_128($Class* clazz) {
	return $of($alloc(PKCS12PBECipherCore$PBEWithSHA1AndRC4_128));
}

void PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::init$() {
	$CipherSpi::init$();
	$set(this, core, $new($PKCS12PBECipherCore, "RC4"_s, PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::RC4_KEYSIZE));
	$set(this, cipher, $new($ARCFOURCipher));
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineDoFinal($bytes* in, int32_t inOff, int32_t inLen) {
	return $nc(this->cipher)->engineDoFinal(in, inOff, inLen);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineDoFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	return $nc(this->cipher)->engineDoFinal(in, inOff, inLen, out, outOff);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineGetBlockSize() {
	return $nc(this->cipher)->engineGetBlockSize();
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineGetIV() {
	return $nc(this->cipher)->engineGetIV();
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineGetKeySize($Key* key) {
	return PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::RC4_KEYSIZE;
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineGetOutputSize(int32_t inLen) {
	return $nc(this->cipher)->engineGetOutputSize(inLen);
}

$AlgorithmParameters* PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineGetParameters() {
	return $nc(this->core)->implGetParameters();
}

void PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineInit(int32_t opmode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	$nc(this->core)->implInit(opmode, key, params, random, static_cast<$CipherSpi*>(this->cipher));
}

void PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineInit(int32_t opmode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
	$nc(this->core)->implInit(opmode, key, params, random, static_cast<$CipherSpi*>(this->cipher));
}

void PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineInit(int32_t opmode, $Key* key, $SecureRandom* random) {
	$nc(this->core)->implInit(opmode, key, random, static_cast<$CipherSpi*>(this->cipher));
}

void PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineSetMode($String* mode) {
	if ($nc(mode)->equalsIgnoreCase("ECB"_s) == false) {
		$throwNew($NoSuchAlgorithmException, $$str({"Unsupported mode "_s, mode}));
	}
}

void PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineSetPadding($String* paddingScheme) {
	if ($nc(paddingScheme)->equalsIgnoreCase("NoPadding"_s) == false) {
		$throwNew($NoSuchPaddingException, "Padding must be NoPadding"_s);
	}
}

$Key* PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) {
	return $nc(this->cipher)->engineUnwrap(wrappedKey, wrappedKeyAlgorithm, wrappedKeyType);
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineUpdate($bytes* in, int32_t inOff, int32_t inLen) {
	return $nc(this->cipher)->engineUpdate(in, inOff, inLen);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	return $nc(this->cipher)->engineUpdate(in, inOff, inLen, out, outOff);
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::engineWrap($Key* key) {
	return $nc(this->cipher)->engineWrap(key);
}

PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::PKCS12PBECipherCore$PBEWithSHA1AndRC4_128() {
}

$Class* PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::load$($String* name, bool initialize) {
	$loadClass(PKCS12PBECipherCore$PBEWithSHA1AndRC4_128, name, initialize, &_PKCS12PBECipherCore$PBEWithSHA1AndRC4_128_ClassInfo_, allocate$PKCS12PBECipherCore$PBEWithSHA1AndRC4_128);
	return class$;
}

$Class* PKCS12PBECipherCore$PBEWithSHA1AndRC4_128::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com