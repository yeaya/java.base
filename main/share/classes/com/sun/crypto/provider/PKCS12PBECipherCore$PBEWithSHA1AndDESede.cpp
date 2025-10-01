#include <com/sun/crypto/provider/PKCS12PBECipherCore$PBEWithSHA1AndDESede.h>

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

$FieldInfo _PKCS12PBECipherCore$PBEWithSHA1AndDESede_FieldInfo_[] = {
	{"core", "Lcom/sun/crypto/provider/PKCS12PBECipherCore;", nullptr, $PRIVATE | $FINAL, $field(PKCS12PBECipherCore$PBEWithSHA1AndDESede, core)},
	{}
};

$MethodInfo _PKCS12PBECipherCore$PBEWithSHA1AndDESede_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PKCS12PBECipherCore$PBEWithSHA1AndDESede::*)()>(&PKCS12PBECipherCore$PBEWithSHA1AndDESede::init$)), "java.security.NoSuchAlgorithmException"},
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

$InnerClassInfo _PKCS12PBECipherCore$PBEWithSHA1AndDESede_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.PKCS12PBECipherCore$PBEWithSHA1AndDESede", "com.sun.crypto.provider.PKCS12PBECipherCore", "PBEWithSHA1AndDESede", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PKCS12PBECipherCore$PBEWithSHA1AndDESede_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.PKCS12PBECipherCore$PBEWithSHA1AndDESede",
	"javax.crypto.CipherSpi",
	nullptr,
	_PKCS12PBECipherCore$PBEWithSHA1AndDESede_FieldInfo_,
	_PKCS12PBECipherCore$PBEWithSHA1AndDESede_MethodInfo_,
	nullptr,
	nullptr,
	_PKCS12PBECipherCore$PBEWithSHA1AndDESede_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.PKCS12PBECipherCore"
};

$Object* allocate$PKCS12PBECipherCore$PBEWithSHA1AndDESede($Class* clazz) {
	return $of($alloc(PKCS12PBECipherCore$PBEWithSHA1AndDESede));
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::init$() {
	$CipherSpi::init$();
	$set(this, core, $new($PKCS12PBECipherCore, "DESede"_s, 24));
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineDoFinal($bytes* in, int32_t inOff, int32_t inLen) {
	return $nc(this->core)->implDoFinal(in, inOff, inLen);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineDoFinal($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	return $nc(this->core)->implDoFinal(in, inOff, inLen, out, outOff);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineGetBlockSize() {
	return $nc(this->core)->implGetBlockSize();
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineGetIV() {
	return $nc(this->core)->implGetIV();
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineGetKeySize($Key* key) {
	return $nc(this->core)->implGetKeySize(key);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineGetOutputSize(int32_t inLen) {
	return $nc(this->core)->implGetOutputSize(inLen);
}

$AlgorithmParameters* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineGetParameters() {
	return $nc(this->core)->implGetParameters();
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineInit(int32_t opmode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	$nc(this->core)->implInit(opmode, key, params, random);
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineInit(int32_t opmode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
	$nc(this->core)->implInit(opmode, key, params, random);
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineInit(int32_t opmode, $Key* key, $SecureRandom* random) {
	$nc(this->core)->implInit(opmode, key, random);
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineSetMode($String* mode) {
	$nc(this->core)->implSetMode(mode);
}

void PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineSetPadding($String* paddingScheme) {
	$nc(this->core)->implSetPadding(paddingScheme);
}

$Key* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineUnwrap($bytes* wrappedKey, $String* wrappedKeyAlgorithm, int32_t wrappedKeyType) {
	return $nc(this->core)->implUnwrap(wrappedKey, wrappedKeyAlgorithm, wrappedKeyType);
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineUpdate($bytes* in, int32_t inOff, int32_t inLen) {
	return $nc(this->core)->implUpdate(in, inOff, inLen);
}

int32_t PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineUpdate($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	return $nc(this->core)->implUpdate(in, inOff, inLen, out, outOff);
}

$bytes* PKCS12PBECipherCore$PBEWithSHA1AndDESede::engineWrap($Key* key) {
	return $nc(this->core)->implWrap(key);
}

PKCS12PBECipherCore$PBEWithSHA1AndDESede::PKCS12PBECipherCore$PBEWithSHA1AndDESede() {
}

$Class* PKCS12PBECipherCore$PBEWithSHA1AndDESede::load$($String* name, bool initialize) {
	$loadClass(PKCS12PBECipherCore$PBEWithSHA1AndDESede, name, initialize, &_PKCS12PBECipherCore$PBEWithSHA1AndDESede_ClassInfo_, allocate$PKCS12PBECipherCore$PBEWithSHA1AndDESede);
	return class$;
}

$Class* PKCS12PBECipherCore$PBEWithSHA1AndDESede::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com