#include <java/security/AlgorithmParameterGeneratorSpi.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace java {
	namespace security {

$MethodInfo _AlgorithmParameterGeneratorSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlgorithmParameterGeneratorSpi::*)()>(&AlgorithmParameterGeneratorSpi::init$))},
	{"engineGenerateParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineInit", "(ILjava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"engineInit", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _AlgorithmParameterGeneratorSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.AlgorithmParameterGeneratorSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AlgorithmParameterGeneratorSpi_MethodInfo_
};

$Object* allocate$AlgorithmParameterGeneratorSpi($Class* clazz) {
	return $of($alloc(AlgorithmParameterGeneratorSpi));
}

void AlgorithmParameterGeneratorSpi::init$() {
}

AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi() {
}

$Class* AlgorithmParameterGeneratorSpi::load$($String* name, bool initialize) {
	$loadClass(AlgorithmParameterGeneratorSpi, name, initialize, &_AlgorithmParameterGeneratorSpi_ClassInfo_, allocate$AlgorithmParameterGeneratorSpi);
	return class$;
}

$Class* AlgorithmParameterGeneratorSpi::class$ = nullptr;

	} // security
} // java