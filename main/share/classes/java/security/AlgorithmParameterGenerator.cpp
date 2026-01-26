#include <java/security/AlgorithmParameterGenerator.h>

#include <java/security/AlgorithmParameterGeneratorSpi.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/Security.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Objects.h>
#include <sun/security/jca/JCAUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterGeneratorSpi = ::java::security::AlgorithmParameterGeneratorSpi;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Provider = ::java::security::Provider;
using $SecureRandom = ::java::security::SecureRandom;
using $Security = ::java::security::Security;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Objects = ::java::util::Objects;
using $JCAUtil = ::sun::security::jca::JCAUtil;

namespace java {
	namespace security {

$FieldInfo _AlgorithmParameterGenerator_FieldInfo_[] = {
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(AlgorithmParameterGenerator, provider)},
	{"paramGenSpi", "Ljava/security/AlgorithmParameterGeneratorSpi;", nullptr, $PRIVATE, $field(AlgorithmParameterGenerator, paramGenSpi)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AlgorithmParameterGenerator, algorithm)},
	{}
};

$MethodInfo _AlgorithmParameterGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/security/AlgorithmParameterGeneratorSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(AlgorithmParameterGenerator, init$, void, $AlgorithmParameterGeneratorSpi*, $Provider*, $String*)},
	{"generateParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PUBLIC | $FINAL, $method(AlgorithmParameterGenerator, generateParameters, $AlgorithmParameters*)},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(AlgorithmParameterGenerator, getAlgorithm, $String*)},
	{"getInstance", "(Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;", nullptr, $PUBLIC | $STATIC, $staticMethod(AlgorithmParameterGenerator, getInstance, AlgorithmParameterGenerator*, $String*), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;", nullptr, $PUBLIC | $STATIC, $staticMethod(AlgorithmParameterGenerator, getInstance, AlgorithmParameterGenerator*, $String*, $String*), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameterGenerator;", nullptr, $PUBLIC | $STATIC, $staticMethod(AlgorithmParameterGenerator, getInstance, AlgorithmParameterGenerator*, $String*, $Provider*), "java.security.NoSuchAlgorithmException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(AlgorithmParameterGenerator, getProvider, $Provider*)},
	{"init", "(I)V", nullptr, $PUBLIC | $FINAL, $method(AlgorithmParameterGenerator, init, void, int32_t)},
	{"init", "(ILjava/security/SecureRandom;)V", nullptr, $PUBLIC | $FINAL, $method(AlgorithmParameterGenerator, init, void, int32_t, $SecureRandom*)},
	{"init", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC | $FINAL, $method(AlgorithmParameterGenerator, init, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
	{"init", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC | $FINAL, $method(AlgorithmParameterGenerator, init, void, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _AlgorithmParameterGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.AlgorithmParameterGenerator",
	"java.lang.Object",
	nullptr,
	_AlgorithmParameterGenerator_FieldInfo_,
	_AlgorithmParameterGenerator_MethodInfo_
};

$Object* allocate$AlgorithmParameterGenerator($Class* clazz) {
	return $of($alloc(AlgorithmParameterGenerator));
}

void AlgorithmParameterGenerator::init$($AlgorithmParameterGeneratorSpi* paramGenSpi, $Provider* provider, $String* algorithm) {
	$set(this, paramGenSpi, paramGenSpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
}

$String* AlgorithmParameterGenerator::getAlgorithm() {
	return this->algorithm;
}

AlgorithmParameterGenerator* AlgorithmParameterGenerator::getInstance($String* algorithm) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	try {
		$var($ObjectArray, objs, $Security::getImpl(algorithm, "AlgorithmParameterGenerator"_s, ($String*)nullptr));
		return $new(AlgorithmParameterGenerator, $cast($AlgorithmParameterGeneratorSpi, $nc(objs)->get(0)), $cast($Provider, objs->get(1)), algorithm);
	} catch ($NoSuchProviderException& e) {
		$throwNew($NoSuchAlgorithmException, $$str({algorithm, " not found"_s}));
	}
	$shouldNotReachHere();
}

AlgorithmParameterGenerator* AlgorithmParameterGenerator::getInstance($String* algorithm, $String* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	if (provider == nullptr || $nc(provider)->isEmpty()) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	$var($ObjectArray, objs, $Security::getImpl(algorithm, "AlgorithmParameterGenerator"_s, provider));
	return $new(AlgorithmParameterGenerator, $cast($AlgorithmParameterGeneratorSpi, $nc(objs)->get(0)), $cast($Provider, objs->get(1)), algorithm);
}

AlgorithmParameterGenerator* AlgorithmParameterGenerator::getInstance($String* algorithm, $Provider* provider) {
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "missing provider"_s);
	}
	$var($ObjectArray, objs, $Security::getImpl(algorithm, "AlgorithmParameterGenerator"_s, provider));
	return $new(AlgorithmParameterGenerator, $cast($AlgorithmParameterGeneratorSpi, $nc(objs)->get(0)), $cast($Provider, objs->get(1)), algorithm);
}

$Provider* AlgorithmParameterGenerator::getProvider() {
	return this->provider;
}

void AlgorithmParameterGenerator::init(int32_t size) {
	$nc(this->paramGenSpi)->engineInit(size, $($JCAUtil::getDefSecureRandom()));
}

void AlgorithmParameterGenerator::init(int32_t size, $SecureRandom* random) {
	$nc(this->paramGenSpi)->engineInit(size, random);
}

void AlgorithmParameterGenerator::init($AlgorithmParameterSpec* genParamSpec) {
	$nc(this->paramGenSpi)->engineInit(genParamSpec, $($JCAUtil::getDefSecureRandom()));
}

void AlgorithmParameterGenerator::init($AlgorithmParameterSpec* genParamSpec, $SecureRandom* random) {
	$nc(this->paramGenSpi)->engineInit(genParamSpec, random);
}

$AlgorithmParameters* AlgorithmParameterGenerator::generateParameters() {
	return $nc(this->paramGenSpi)->engineGenerateParameters();
}

AlgorithmParameterGenerator::AlgorithmParameterGenerator() {
}

$Class* AlgorithmParameterGenerator::load$($String* name, bool initialize) {
	$loadClass(AlgorithmParameterGenerator, name, initialize, &_AlgorithmParameterGenerator_ClassInfo_, allocate$AlgorithmParameterGenerator);
	return class$;
}

$Class* AlgorithmParameterGenerator::class$ = nullptr;

	} // security
} // java