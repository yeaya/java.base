#include <java/security/spec/RSAOtherPrimeInfo.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace security {
		namespace spec {

void RSAOtherPrimeInfo::init$($BigInteger* prime, $BigInteger* primeExponent, $BigInteger* crtCoefficient) {
	if (prime == nullptr) {
		$throwNew($NullPointerException, "the prime parameter must be non-null"_s);
	}
	if (primeExponent == nullptr) {
		$throwNew($NullPointerException, "the primeExponent parameter must be non-null"_s);
	}
	if (crtCoefficient == nullptr) {
		$throwNew($NullPointerException, "the crtCoefficient parameter must be non-null"_s);
	}
	$set(this, prime, prime);
	$set(this, primeExponent, primeExponent);
	$set(this, crtCoefficient, crtCoefficient);
}

$BigInteger* RSAOtherPrimeInfo::getPrime() {
	return this->prime;
}

$BigInteger* RSAOtherPrimeInfo::getExponent() {
	return this->primeExponent;
}

$BigInteger* RSAOtherPrimeInfo::getCrtCoefficient() {
	return this->crtCoefficient;
}

RSAOtherPrimeInfo::RSAOtherPrimeInfo() {
}

$Class* RSAOtherPrimeInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prime", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(RSAOtherPrimeInfo, prime)},
		{"primeExponent", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(RSAOtherPrimeInfo, primeExponent)},
		{"crtCoefficient", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(RSAOtherPrimeInfo, crtCoefficient)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(RSAOtherPrimeInfo, init$, void, $BigInteger*, $BigInteger*, $BigInteger*)},
		{"getCrtCoefficient", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $FINAL, $method(RSAOtherPrimeInfo, getCrtCoefficient, $BigInteger*)},
		{"getExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $FINAL, $method(RSAOtherPrimeInfo, getExponent, $BigInteger*)},
		{"getPrime", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $FINAL, $method(RSAOtherPrimeInfo, getPrime, $BigInteger*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.RSAOtherPrimeInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RSAOtherPrimeInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSAOtherPrimeInfo);
	});
	return class$;
}

$Class* RSAOtherPrimeInfo::class$ = nullptr;

		} // spec
	} // security
} // java