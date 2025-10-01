#include <javax/crypto/NullCipherSpi.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/CipherSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $CipherSpi = ::javax::crypto::CipherSpi;

namespace javax {
	namespace crypto {

$MethodInfo _NullCipherSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(NullCipherSpi::*)()>(&NullCipherSpi::init$))},
	{"engineDoFinal", "([BII)[B", nullptr, $PROTECTED},
	{"engineDoFinal", "([BII[BI)I", nullptr, $PROTECTED},
	{"engineGetBlockSize", "()I", nullptr, $PROTECTED},
	{"engineGetIV", "()[B", nullptr, $PROTECTED},
	{"engineGetKeySize", "(Ljava/security/Key;)I", nullptr, $PROTECTED},
	{"engineGetOutputSize", "(I)I", nullptr, $PROTECTED},
	{"engineGetParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED},
	{"engineInit", "(ILjava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineInit", "(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED},
	{"engineSetMode", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"engineSetPadding", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"engineUpdate", "([BII)[B", nullptr, $PROTECTED},
	{"engineUpdate", "([BII[BI)I", nullptr, $PROTECTED},
	{}
};

$ClassInfo _NullCipherSpi_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.NullCipherSpi",
	"javax.crypto.CipherSpi",
	nullptr,
	nullptr,
	_NullCipherSpi_MethodInfo_
};

$Object* allocate$NullCipherSpi($Class* clazz) {
	return $of($alloc(NullCipherSpi));
}

void NullCipherSpi::init$() {
	$CipherSpi::init$();
}

void NullCipherSpi::engineSetMode($String* mode) {
}

void NullCipherSpi::engineSetPadding($String* padding) {
}

int32_t NullCipherSpi::engineGetBlockSize() {
	return 1;
}

int32_t NullCipherSpi::engineGetOutputSize(int32_t inputLen) {
	return inputLen;
}

$bytes* NullCipherSpi::engineGetIV() {
	$var($bytes, x, $new($bytes, 8));
	return x;
}

$AlgorithmParameters* NullCipherSpi::engineGetParameters() {
	return nullptr;
}

void NullCipherSpi::engineInit(int32_t mode, $Key* key, $SecureRandom* random) {
}

void NullCipherSpi::engineInit(int32_t mode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
}

void NullCipherSpi::engineInit(int32_t mode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
}

$bytes* NullCipherSpi::engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen) {
	if (input == nullptr) {
		return nullptr;
	}
	$var($bytes, x, $new($bytes, inputLen));
	$System::arraycopy(input, inputOffset, x, 0, inputLen);
	return x;
}

int32_t NullCipherSpi::engineUpdate($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {
	if (input == nullptr) {
		return 0;
	}
	$System::arraycopy(input, inputOffset, output, outputOffset, inputLen);
	return inputLen;
}

$bytes* NullCipherSpi::engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen) {
	return engineUpdate(input, inputOffset, inputLen);
}

int32_t NullCipherSpi::engineDoFinal($bytes* input, int32_t inputOffset, int32_t inputLen, $bytes* output, int32_t outputOffset) {
	return engineUpdate(input, inputOffset, inputLen, output, outputOffset);
}

int32_t NullCipherSpi::engineGetKeySize($Key* key) {
	return 0;
}

NullCipherSpi::NullCipherSpi() {
}

$Class* NullCipherSpi::load$($String* name, bool initialize) {
	$loadClass(NullCipherSpi, name, initialize, &_NullCipherSpi_ClassInfo_, allocate$NullCipherSpi);
	return class$;
}

$Class* NullCipherSpi::class$ = nullptr;

	} // crypto
} // javax