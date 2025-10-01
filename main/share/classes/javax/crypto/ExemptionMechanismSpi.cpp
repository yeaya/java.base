#include <javax/crypto/ExemptionMechanismSpi.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExemptionMechanismSpi::*)()>(&ExemptionMechanismSpi::init$))},
	{"engineGenExemptionBlob", "()[B", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.crypto.ExemptionMechanismException"},
	{"engineGenExemptionBlob", "([BI)I", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.crypto.ShortBufferException,javax.crypto.ExemptionMechanismException"},
	{"engineGetOutputSize", "(I)I", nullptr, $PROTECTED | $ABSTRACT},
	{"engineInit", "(Ljava/security/Key;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException,javax.crypto.ExemptionMechanismException"},
	{"engineInit", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException,javax.crypto.ExemptionMechanismException"},
	{"engineInit", "(Ljava/security/Key;Ljava/security/AlgorithmParameters;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException,javax.crypto.ExemptionMechanismException"},
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