#include <java/security/spec/RSAPrivateKeySpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $KeySpec = ::java::security::spec::KeySpec;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _RSAPrivateKeySpec_FieldInfo_[] = {
	{"modulus", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateKeySpec, modulus)},
	{"privateExponent", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateKeySpec, privateExponent)},
	{"params", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateKeySpec, params)},
	{}
};

$MethodInfo _RSAPrivateKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAPrivateKeySpec::*)($BigInteger*,$BigInteger*)>(&RSAPrivateKeySpec::init$))},
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAPrivateKeySpec::*)($BigInteger*,$BigInteger*,$AlgorithmParameterSpec*)>(&RSAPrivateKeySpec::init$))},
	{"getModulus", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC},
	{"getPrivateExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RSAPrivateKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.RSAPrivateKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_RSAPrivateKeySpec_FieldInfo_,
	_RSAPrivateKeySpec_MethodInfo_
};

$Object* allocate$RSAPrivateKeySpec($Class* clazz) {
	return $of($alloc(RSAPrivateKeySpec));
}

void RSAPrivateKeySpec::init$($BigInteger* modulus, $BigInteger* privateExponent) {
	RSAPrivateKeySpec::init$(modulus, privateExponent, nullptr);
}

void RSAPrivateKeySpec::init$($BigInteger* modulus, $BigInteger* privateExponent, $AlgorithmParameterSpec* params) {
	$set(this, modulus, modulus);
	$set(this, privateExponent, privateExponent);
	$set(this, params, params);
}

$BigInteger* RSAPrivateKeySpec::getModulus() {
	return this->modulus;
}

$BigInteger* RSAPrivateKeySpec::getPrivateExponent() {
	return this->privateExponent;
}

$AlgorithmParameterSpec* RSAPrivateKeySpec::getParams() {
	return this->params;
}

RSAPrivateKeySpec::RSAPrivateKeySpec() {
}

$Class* RSAPrivateKeySpec::load$($String* name, bool initialize) {
	$loadClass(RSAPrivateKeySpec, name, initialize, &_RSAPrivateKeySpec_ClassInfo_, allocate$RSAPrivateKeySpec);
	return class$;
}

$Class* RSAPrivateKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java