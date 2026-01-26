#include <javax/crypto/NullCipherSpi.h>

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
	{"<init>", "()V", nullptr, $PROTECTED, $method(NullCipherSpi, init$, void)},
	{"engineDoFinal", "([BII)[B", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineDoFinal, $bytes*, $bytes*, int32_t, int32_t)},
	{"engineDoFinal", "([BII[BI)I", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineDoFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
	{"engineGetBlockSize", "()I", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineGetBlockSize, int32_t)},
	{"engineGetIV", "()[B", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineGetIV, $bytes*)},
	{"engineGetKeySize", "(Ljava/security/Key;)I", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineGetKeySize, int32_t, $Key*)},
	{"engineGetOutputSize", "(I)I", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineGetOutputSize, int32_t, int32_t)},
	{"engineGetParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineGetParameters, $AlgorithmParameters*)},
	{"engineInit", "(ILjava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineInit, void, int32_t, $Key*, $SecureRandom*)},
	{"engineInit", "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineInit, void, int32_t, $Key*, $AlgorithmParameterSpec*, $SecureRandom*)},
	{"engineInit", "(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineInit, void, int32_t, $Key*, $AlgorithmParameters*, $SecureRandom*)},
	{"engineSetMode", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NullCipherSpi, engineSetMode, void, $String*)},
	{"engineSetPadding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(NullCipherSpi, engineSetPadding, void, $String*)},
	{"engineUpdate", "([BII)[B", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineUpdate, $bytes*, $bytes*, int32_t, int32_t)},
	{"engineUpdate", "([BII[BI)I", nullptr, $PROTECTED, $virtualMethod(NullCipherSpi, engineUpdate, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t)},
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