#include <javax/crypto/spec/PBEParameterSpec.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace javax {
	namespace crypto {
		namespace spec {

void PBEParameterSpec::init$($bytes* salt, int32_t iterationCount) {
	$set(this, paramSpec, nullptr);
	$set(this, salt, $cast($bytes, $nc(salt)->clone()));
	this->iterationCount = iterationCount;
}

void PBEParameterSpec::init$($bytes* salt, int32_t iterationCount, $AlgorithmParameterSpec* paramSpec) {
	$set(this, paramSpec, nullptr);
	$set(this, salt, $cast($bytes, $nc(salt)->clone()));
	this->iterationCount = iterationCount;
	$set(this, paramSpec, paramSpec);
}

$bytes* PBEParameterSpec::getSalt() {
	return $cast($bytes, $nc(this->salt)->clone());
}

int32_t PBEParameterSpec::getIterationCount() {
	return this->iterationCount;
}

$AlgorithmParameterSpec* PBEParameterSpec::getParameterSpec() {
	return this->paramSpec;
}

PBEParameterSpec::PBEParameterSpec() {
}

$Class* PBEParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"salt", "[B", nullptr, $PRIVATE, $field(PBEParameterSpec, salt)},
		{"iterationCount", "I", nullptr, $PRIVATE, $field(PBEParameterSpec, iterationCount)},
		{"paramSpec", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE, $field(PBEParameterSpec, paramSpec)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BI)V", nullptr, $PUBLIC, $method(PBEParameterSpec, init$, void, $bytes*, int32_t)},
		{"<init>", "([BILjava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(PBEParameterSpec, init$, void, $bytes*, int32_t, $AlgorithmParameterSpec*)},
		{"getIterationCount", "()I", nullptr, $PUBLIC, $virtualMethod(PBEParameterSpec, getIterationCount, int32_t)},
		{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC, $virtualMethod(PBEParameterSpec, getParameterSpec, $AlgorithmParameterSpec*)},
		{"getSalt", "()[B", nullptr, $PUBLIC, $virtualMethod(PBEParameterSpec, getSalt, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.spec.PBEParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PBEParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PBEParameterSpec);
	});
	return class$;
}

$Class* PBEParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax