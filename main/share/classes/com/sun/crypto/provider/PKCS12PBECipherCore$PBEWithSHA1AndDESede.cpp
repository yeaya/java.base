#include <com/sun/crypto/provider/PKCS12PBECipherCore$PBEWithSHA1AndDESede.h>
#include <com/sun/crypto/provider/PKCS12PBECipherCore.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/CipherSpi.h>
#include <jcpp.h>

using $PKCS12PBECipherCore = ::com::sun::crypto::provider::PKCS12PBECipherCore;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $CipherSpi = ::javax::crypto::CipherSpi;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::init$() {
	$CipherSpi::init$();
	$set(this, core, $new($PKCS12PBECipherCore, "DESede"_s, 24));
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineDoFinal($bytes* in, int32_t inOff, int32_t inLen) {
	return this->core->implDoFinal(in, inOff, inLen);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineDoFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	return this->core->implDoFinal(in, inOff, inLen, out, outOff);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineGetBlockSize() {
	return this->core->implGetBlockSize();
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineGetIV() {
	return this->core->implGetIV();
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineGetKeySize($Key* key) {
	return this->core->implGetKeySize(key);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineGetOutputSize(int32_t inLen) {
	return this->core->implGetOutputSize(inLen);
}

$AlgorithmParameters* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineGetParameters() {
	return this->core->implGetParameters();
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineInit(int32_t opmode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	this->core->implInit(opmode, key, params, random);
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineInit(int32_t opmode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
	this->core->implInit(opmode, key, params, random);
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineInit(int32_t opmode, $Key* key, $SecureRandom* random) {
	this->core->implInit(opmode, key, random);
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineSetMode($String* mode) {
	this->core->implSetMode(mode);
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineSetPadding($String* paddingScheme) {
	this->core->implSetPadding(paddingScheme);
}

$Key* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) {
	return this->core->implUnwrap(wrappedKey, wrappedKeyAlgorithm, wrappedKeyType);
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineUpdate($bytes* in, int32_t inOff, int32_t inLen) {
	return this->core->implUpdate(in, inOff, inLen);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	return this->core->implUpdate(in, inOff, inLen, out, outOff);
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineWrap($Key* key) {
	return this->core->implWrap(key);
}

PKCS12PBECipherCore$PBEWithSHA1AndDESede::PKCS12PBECipherCore$PBEWithSHA1AndDESede() {
}

$Class* PKCS12PBECipherCore$PBEWithSHA1AndDESede::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"core", "Lcom/sun/crypto/provider/PKCS12PBECipherCore;", nullptr, $PRIVATE | $FINAL, $field(PKCS12PBECipherCore$PBEWithSHA1AndDESede, core)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PKCS12PBECipherCore$PBEWithSHA1AndDESede, init$, void), "java.security.NoSuchAlgorithmException"},
		{"engineDoFinal", "([BII)[B", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineDoFinal, $bytes*, $bytes*, int32_t, int32_t), "javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
		{"engineDoFinal", "([BII[BI)I", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineDoFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,javax.crypto.IllegalBlockSizeException,javax.crypto.BadPaddingException"},
		{"engineGetBlockSize", "()I", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineGetBlockSize, int32_t)},
		{"engineGetIV", "()[B", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineGetIV, $bytes*)},
		{"engineGetKeySize", "(Ljava/security/Key;)I", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineGetKeySize, int32_t, $Key*), "java.security.InvalidKeyException"},
		{"engineGetOutputSize", "(I)I", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineGetOutputSize, int32_t, int32_t)},
		{"engineGetParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineGetParameters, $AlgorithmParameters*)},
		{"engineInit", "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineInit, void, int32_t, $Key*, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
		{"engineInit", "(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineInit, void, int32_t, $Key*, $AlgorithmParameters*, $SecureRandom*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
		{"engineInit", "(ILjava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineInit, void, int32_t, $Key*, $SecureRandom*), "java.security.InvalidKeyException"},
		{"engineSetMode", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineSetMode, void, $String*), "java.security.NoSuchAlgorithmException"},
		{"engineSetPadding", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineSetPadding, void, $String*), "javax.crypto.NoSuchPaddingException"},
		{"engineUnwrap", "([BLjava/lang/String;I)Ljava/security/Key;", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineUnwrap, $Key*, $bytes*, $String*, int32_t), "java.security.InvalidKeyException,java.security.NoSuchAlgorithmException"},
		{"engineUpdate", "([BII)[B", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineUpdate, $bytes*, $bytes*, int32_t, int32_t)},
		{"engineUpdate", "([BII[BI)I", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineUpdate, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException"},
		{"engineWrap", "(Ljava/security/Key;)[B", nullptr, $PROTECTED, $virtualMethod(PKCS12PBECipherCore$PBEWithSHA1AndDESede, engineWrap, $bytes*, $Key*), "javax.crypto.IllegalBlockSizeException,java.security.InvalidKeyException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PKCS12PBECipherCore$PBEWithSHA1AndDESede", "com.sun.crypto.provider.PKCS12PBECipherCore", "PBEWithSHA1AndDESede", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.PKCS12PBECipherCore$PBEWithSHA1AndDESede",
		"javax.crypto.CipherSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.PKCS12PBECipherCore"
	};
	$loadClass(PKCS12PBECipherCore$PBEWithSHA1AndDESede, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKCS12PBECipherCore$PBEWithSHA1AndDESede);
	});
	return class$;
}

$Class* PKCS12PBECipherCore$PBEWithSHA1AndDESede::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com