#include <java/security/spec/RSAKeyGenParameterSpec.h>
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

$BigInteger* RSAKeyGenParameterSpec::F0 = nullptr;
$BigInteger* RSAKeyGenParameterSpec::F4 = nullptr;

void RSAKeyGenParameterSpec::init$(int32_t keysize, $BigInteger* publicExponent) {
	RSAKeyGenParameterSpec::init$(keysize, publicExponent, nullptr);
}

void RSAKeyGenParameterSpec::init$(int32_t keysize, $BigInteger* publicExponent, $AlgorithmParameterSpec* keyParams) {
	this->keysize = keysize;
	$set(this, publicExponent, publicExponent);
	$set(this, keyParams, keyParams);
}

int32_t RSAKeyGenParameterSpec::getKeysize() {
	return this->keysize;
}

$BigInteger* RSAKeyGenParameterSpec::getPublicExponent() {
	return this->publicExponent;
}

$AlgorithmParameterSpec* RSAKeyGenParameterSpec::getKeyParams() {
	return this->keyParams;
}

void RSAKeyGenParameterSpec::clinit$($Class* clazz) {
	$assignStatic(RSAKeyGenParameterSpec::F0, $BigInteger::valueOf(3));
	$assignStatic(RSAKeyGenParameterSpec::F4, $BigInteger::valueOf(0x00010001));
}

RSAKeyGenParameterSpec::RSAKeyGenParameterSpec() {
}

$Class* RSAKeyGenParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"keysize", "I", nullptr, $PRIVATE, $field(RSAKeyGenParameterSpec, keysize)},
		{"publicExponent", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(RSAKeyGenParameterSpec, publicExponent)},
		{"keyParams", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE, $field(RSAKeyGenParameterSpec, keyParams)},
		{"F0", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RSAKeyGenParameterSpec, F0)},
		{"F4", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RSAKeyGenParameterSpec, F4)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/math/BigInteger;)V", nullptr, $PUBLIC, $method(RSAKeyGenParameterSpec, init$, void, int32_t, $BigInteger*)},
		{"<init>", "(ILjava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(RSAKeyGenParameterSpec, init$, void, int32_t, $BigInteger*, $AlgorithmParameterSpec*)},
		{"getKeyParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC, $virtualMethod(RSAKeyGenParameterSpec, getKeyParams, $AlgorithmParameterSpec*)},
		{"getKeysize", "()I", nullptr, $PUBLIC, $virtualMethod(RSAKeyGenParameterSpec, getKeysize, int32_t)},
		{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(RSAKeyGenParameterSpec, getPublicExponent, $BigInteger*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.RSAKeyGenParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RSAKeyGenParameterSpec, name, initialize, &classInfo$$, RSAKeyGenParameterSpec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RSAKeyGenParameterSpec);
	});
	return class$;
}

$Class* RSAKeyGenParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java