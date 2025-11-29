#include <java/security/spec/RSAPublicKeySpec.h>

#include <java/math/BigInteger.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _RSAPublicKeySpec_FieldInfo_[] = {
	{"modulus", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPublicKeySpec, modulus)},
	{"publicExponent", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPublicKeySpec, publicExponent)},
	{"params", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(RSAPublicKeySpec, params)},
	{}
};

$MethodInfo _RSAPublicKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAPublicKeySpec::*)($BigInteger*,$BigInteger*)>(&RSAPublicKeySpec::init$))},
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAPublicKeySpec::*)($BigInteger*,$BigInteger*,$AlgorithmParameterSpec*)>(&RSAPublicKeySpec::init$))},
	{"getModulus", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC},
	{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RSAPublicKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.RSAPublicKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_RSAPublicKeySpec_FieldInfo_,
	_RSAPublicKeySpec_MethodInfo_
};

$Object* allocate$RSAPublicKeySpec($Class* clazz) {
	return $of($alloc(RSAPublicKeySpec));
}

void RSAPublicKeySpec::init$($BigInteger* modulus, $BigInteger* publicExponent) {
	RSAPublicKeySpec::init$(modulus, publicExponent, nullptr);
}

void RSAPublicKeySpec::init$($BigInteger* modulus, $BigInteger* publicExponent, $AlgorithmParameterSpec* params) {
	$set(this, modulus, modulus);
	$set(this, publicExponent, publicExponent);
	$set(this, params, params);
}

$BigInteger* RSAPublicKeySpec::getModulus() {
	return this->modulus;
}

$BigInteger* RSAPublicKeySpec::getPublicExponent() {
	return this->publicExponent;
}

$AlgorithmParameterSpec* RSAPublicKeySpec::getParams() {
	return this->params;
}

RSAPublicKeySpec::RSAPublicKeySpec() {
}

$Class* RSAPublicKeySpec::load$($String* name, bool initialize) {
	$loadClass(RSAPublicKeySpec, name, initialize, &_RSAPublicKeySpec_ClassInfo_, allocate$RSAPublicKeySpec);
	return class$;
}

$Class* RSAPublicKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java