#include <javax/crypto/ExemptionMechanismSpi.h>

#include <java/security/AlgorithmParameters.h>
#include <java/security/Key.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $Key = ::java::security::Key;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace javax {
	namespace crypto {

$MethodInfo _ExemptionMechanismSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExemptionMechanismSpi, init$, void)},
	{"engineGenExemptionBlob", "()[B", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ExemptionMechanismSpi, engineGenExemptionBlob, $bytes*), "javax.crypto.ExemptionMechanismException"},
	{"engineGenExemptionBlob", "([BI)I", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ExemptionMechanismSpi, engineGenExemptionBlob, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,javax.crypto.ExemptionMechanismException"},
	{"engineGetOutputSize", "(I)I", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ExemptionMechanismSpi, engineGetOutputSize, int32_t, int32_t)},
	{"engineInit", "(Ljava/security/Key;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ExemptionMechanismSpi, engineInit, void, $Key*), "java.security.InvalidKeyException,javax.crypto.ExemptionMechanismException"},
	{"engineInit", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ExemptionMechanismSpi, engineInit, void, $Key*, $AlgorithmParameterSpec*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException,javax.crypto.ExemptionMechanismException"},
	{"engineInit", "(Ljava/security/Key;Ljava/security/AlgorithmParameters;)V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ExemptionMechanismSpi, engineInit, void, $Key*, $AlgorithmParameters*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException,javax.crypto.ExemptionMechanismException"},
	{}
};

$ClassInfo _ExemptionMechanismSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.crypto.ExemptionMechanismSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExemptionMechanismSpi_MethodInfo_
};

$Object* allocate$ExemptionMechanismSpi($Class* clazz) {
	return $of($alloc(ExemptionMechanismSpi));
}

void ExemptionMechanismSpi::init$() {
}

ExemptionMechanismSpi::ExemptionMechanismSpi() {
}

$Class* ExemptionMechanismSpi::load$($String* name, bool initialize) {
	$loadClass(ExemptionMechanismSpi, name, initialize, &_ExemptionMechanismSpi_ClassInfo_, allocate$ExemptionMechanismSpi);
	return class$;
}

$Class* ExemptionMechanismSpi::class$ = nullptr;

	} // crypto
} // javax