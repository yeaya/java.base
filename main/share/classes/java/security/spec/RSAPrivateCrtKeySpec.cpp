#include <java/security/spec/RSAPrivateCrtKeySpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/RSAPrivateKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $RSAPrivateKeySpec = ::java::security::spec::RSAPrivateKeySpec;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _RSAPrivateCrtKeySpec_FieldInfo_[] = {
	{"publicExponent", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateCrtKeySpec, publicExponent)},
	{"primeP", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateCrtKeySpec, primeP)},
	{"primeQ", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateCrtKeySpec, primeQ)},
	{"primeExponentP", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateCrtKeySpec, primeExponentP)},
	{"primeExponentQ", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateCrtKeySpec, primeExponentQ)},
	{"crtCoefficient", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateCrtKeySpec, crtCoefficient)},
	{}
};

$MethodInfo _RSAPrivateCrtKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAPrivateCrtKeySpec::*)($BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*)>(&RSAPrivateCrtKeySpec::init$))},
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAPrivateCrtKeySpec::*)($BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*,$AlgorithmParameterSpec*)>(&RSAPrivateCrtKeySpec::init$))},
	{"getCrtCoefficient", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getPrimeExponentP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getPrimeExponentQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getPrimeP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getPrimeQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RSAPrivateCrtKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.RSAPrivateCrtKeySpec",
	"java.security.spec.RSAPrivateKeySpec",
	nullptr,
	_RSAPrivateCrtKeySpec_FieldInfo_,
	_RSAPrivateCrtKeySpec_MethodInfo_
};

$Object* allocate$RSAPrivateCrtKeySpec($Class* clazz) {
	return $of($alloc(RSAPrivateCrtKeySpec));
}

void RSAPrivateCrtKeySpec::init$($BigInteger* modulus, $BigInteger* publicExponent, $BigInteger* privateExponent, $BigInteger* primeP, $BigInteger* primeQ, $BigInteger* primeExponentP, $BigInteger* primeExponentQ, $BigInteger* crtCoefficient) {
	RSAPrivateCrtKeySpec::init$(modulus, publicExponent, privateExponent, primeP, primeQ, primeExponentP, primeExponentQ, crtCoefficient, nullptr);
}

void RSAPrivateCrtKeySpec::init$($BigInteger* modulus, $BigInteger* publicExponent, $BigInteger* privateExponent, $BigInteger* primeP, $BigInteger* primeQ, $BigInteger* primeExponentP, $BigInteger* primeExponentQ, $BigInteger* crtCoefficient, $AlgorithmParameterSpec* keyParams) {
	$RSAPrivateKeySpec::init$(modulus, privateExponent, keyParams);
	$set(this, publicExponent, publicExponent);
	$set(this, primeP, primeP);
	$set(this, primeQ, primeQ);
	$set(this, primeExponentP, primeExponentP);
	$set(this, primeExponentQ, primeExponentQ);
	$set(this, crtCoefficient, crtCoefficient);
}

$BigInteger* RSAPrivateCrtKeySpec::getPublicExponent() {
	return this->publicExponent;
}

$BigInteger* RSAPrivateCrtKeySpec::getPrimeP() {
	return this->primeP;
}

$BigInteger* RSAPrivateCrtKeySpec::getPrimeQ() {
	return this->primeQ;
}

$BigInteger* RSAPrivateCrtKeySpec::getPrimeExponentP() {
	return this->primeExponentP;
}

$BigInteger* RSAPrivateCrtKeySpec::getPrimeExponentQ() {
	return this->primeExponentQ;
}

$BigInteger* RSAPrivateCrtKeySpec::getCrtCoefficient() {
	return this->crtCoefficient;
}

RSAPrivateCrtKeySpec::RSAPrivateCrtKeySpec() {
}

$Class* RSAPrivateCrtKeySpec::load$($String* name, bool initialize) {
	$loadClass(RSAPrivateCrtKeySpec, name, initialize, &_RSAPrivateCrtKeySpec_ClassInfo_, allocate$RSAPrivateCrtKeySpec);
	return class$;
}

$Class* RSAPrivateCrtKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java