#include <java/security/spec/RSAMultiPrimePrivateCrtKeySpec.h>

#include <java/math/BigInteger.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/RSAOtherPrimeInfo.h>
#include <java/security/spec/RSAPrivateKeySpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $RSAOtherPrimeInfoArray = $Array<::java::security::spec::RSAOtherPrimeInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $RSAPrivateKeySpec = ::java::security::spec::RSAPrivateKeySpec;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _RSAMultiPrimePrivateCrtKeySpec_FieldInfo_[] = {
	{"publicExponent", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAMultiPrimePrivateCrtKeySpec, publicExponent)},
	{"primeP", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAMultiPrimePrivateCrtKeySpec, primeP)},
	{"primeQ", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAMultiPrimePrivateCrtKeySpec, primeQ)},
	{"primeExponentP", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAMultiPrimePrivateCrtKeySpec, primeExponentP)},
	{"primeExponentQ", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAMultiPrimePrivateCrtKeySpec, primeExponentQ)},
	{"crtCoefficient", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAMultiPrimePrivateCrtKeySpec, crtCoefficient)},
	{"otherPrimeInfo", "[Ljava/security/spec/RSAOtherPrimeInfo;", nullptr, $PRIVATE | $FINAL, $field(RSAMultiPrimePrivateCrtKeySpec, otherPrimeInfo)},
	{}
};

$MethodInfo _RSAMultiPrimePrivateCrtKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[Ljava/security/spec/RSAOtherPrimeInfo;)V", nullptr, $PUBLIC, $method(RSAMultiPrimePrivateCrtKeySpec, init$, void, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $RSAOtherPrimeInfoArray*)},
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;[Ljava/security/spec/RSAOtherPrimeInfo;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(RSAMultiPrimePrivateCrtKeySpec, init$, void, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*, $RSAOtherPrimeInfoArray*, $AlgorithmParameterSpec*)},
	{"getCrtCoefficient", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(RSAMultiPrimePrivateCrtKeySpec, getCrtCoefficient, $BigInteger*)},
	{"getOtherPrimeInfo", "()[Ljava/security/spec/RSAOtherPrimeInfo;", nullptr, $PUBLIC, $virtualMethod(RSAMultiPrimePrivateCrtKeySpec, getOtherPrimeInfo, $RSAOtherPrimeInfoArray*)},
	{"getPrimeExponentP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(RSAMultiPrimePrivateCrtKeySpec, getPrimeExponentP, $BigInteger*)},
	{"getPrimeExponentQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(RSAMultiPrimePrivateCrtKeySpec, getPrimeExponentQ, $BigInteger*)},
	{"getPrimeP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(RSAMultiPrimePrivateCrtKeySpec, getPrimeP, $BigInteger*)},
	{"getPrimeQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(RSAMultiPrimePrivateCrtKeySpec, getPrimeQ, $BigInteger*)},
	{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(RSAMultiPrimePrivateCrtKeySpec, getPublicExponent, $BigInteger*)},
	{}
};

$ClassInfo _RSAMultiPrimePrivateCrtKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.RSAMultiPrimePrivateCrtKeySpec",
	"java.security.spec.RSAPrivateKeySpec",
	nullptr,
	_RSAMultiPrimePrivateCrtKeySpec_FieldInfo_,
	_RSAMultiPrimePrivateCrtKeySpec_MethodInfo_
};

$Object* allocate$RSAMultiPrimePrivateCrtKeySpec($Class* clazz) {
	return $of($alloc(RSAMultiPrimePrivateCrtKeySpec));
}

void RSAMultiPrimePrivateCrtKeySpec::init$($BigInteger* modulus, $BigInteger* publicExponent, $BigInteger* privateExponent, $BigInteger* primeP, $BigInteger* primeQ, $BigInteger* primeExponentP, $BigInteger* primeExponentQ, $BigInteger* crtCoefficient, $RSAOtherPrimeInfoArray* otherPrimeInfo) {
	RSAMultiPrimePrivateCrtKeySpec::init$(modulus, publicExponent, privateExponent, primeP, primeQ, primeExponentP, primeExponentQ, crtCoefficient, otherPrimeInfo, nullptr);
}

void RSAMultiPrimePrivateCrtKeySpec::init$($BigInteger* modulus, $BigInteger* publicExponent, $BigInteger* privateExponent, $BigInteger* primeP, $BigInteger* primeQ, $BigInteger* primeExponentP, $BigInteger* primeExponentQ, $BigInteger* crtCoefficient, $RSAOtherPrimeInfoArray* otherPrimeInfo, $AlgorithmParameterSpec* keyParams) {
	$RSAPrivateKeySpec::init$(modulus, privateExponent, keyParams);
	$Objects::requireNonNull($of(modulus), "the modulus parameter must be non-null"_s);
	$Objects::requireNonNull($of(privateExponent), "the privateExponent parameter must be non-null"_s);
	$set(this, publicExponent, $cast($BigInteger, $Objects::requireNonNull($of(publicExponent), "the publicExponent parameter must be non-null"_s)));
	$set(this, primeP, $cast($BigInteger, $Objects::requireNonNull($of(primeP), "the primeP parameter must be non-null"_s)));
	$set(this, primeQ, $cast($BigInteger, $Objects::requireNonNull($of(primeQ), "the primeQ parameter must be non-null"_s)));
	$set(this, primeExponentP, $cast($BigInteger, $Objects::requireNonNull($of(primeExponentP), "the primeExponentP parameter must be non-null"_s)));
	$set(this, primeExponentQ, $cast($BigInteger, $Objects::requireNonNull($of(primeExponentQ), "the primeExponentQ parameter must be non-null"_s)));
	$set(this, crtCoefficient, $cast($BigInteger, $Objects::requireNonNull($of(crtCoefficient), "the crtCoefficient parameter must be non-null"_s)));
	if (otherPrimeInfo == nullptr) {
		$set(this, otherPrimeInfo, nullptr);
	} else if ($nc(otherPrimeInfo)->length == 0) {
		$throwNew($IllegalArgumentException, "the otherPrimeInfo parameter must not be empty"_s);
	} else {
		$set(this, otherPrimeInfo, $cast($RSAOtherPrimeInfoArray, otherPrimeInfo->clone()));
	}
}

$BigInteger* RSAMultiPrimePrivateCrtKeySpec::getPublicExponent() {
	return this->publicExponent;
}

$BigInteger* RSAMultiPrimePrivateCrtKeySpec::getPrimeP() {
	return this->primeP;
}

$BigInteger* RSAMultiPrimePrivateCrtKeySpec::getPrimeQ() {
	return this->primeQ;
}

$BigInteger* RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentP() {
	return this->primeExponentP;
}

$BigInteger* RSAMultiPrimePrivateCrtKeySpec::getPrimeExponentQ() {
	return this->primeExponentQ;
}

$BigInteger* RSAMultiPrimePrivateCrtKeySpec::getCrtCoefficient() {
	return this->crtCoefficient;
}

$RSAOtherPrimeInfoArray* RSAMultiPrimePrivateCrtKeySpec::getOtherPrimeInfo() {
	if (this->otherPrimeInfo == nullptr) {
		return nullptr;
	}
	return $cast($RSAOtherPrimeInfoArray, $nc(this->otherPrimeInfo)->clone());
}

RSAMultiPrimePrivateCrtKeySpec::RSAMultiPrimePrivateCrtKeySpec() {
}

$Class* RSAMultiPrimePrivateCrtKeySpec::load$($String* name, bool initialize) {
	$loadClass(RSAMultiPrimePrivateCrtKeySpec, name, initialize, &_RSAMultiPrimePrivateCrtKeySpec_ClassInfo_, allocate$RSAMultiPrimePrivateCrtKeySpec);
	return class$;
}

$Class* RSAMultiPrimePrivateCrtKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java