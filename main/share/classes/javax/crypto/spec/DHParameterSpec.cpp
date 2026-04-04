#include <javax/crypto/spec/DHParameterSpec.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace javax {
	namespace crypto {
		namespace spec {

void DHParameterSpec::init$($BigInteger* p, $BigInteger* g) {
	$set(this, p, p);
	$set(this, g, g);
	this->l = 0;
}

void DHParameterSpec::init$($BigInteger* p, $BigInteger* g, int32_t l) {
	$set(this, p, p);
	$set(this, g, g);
	this->l = l;
}

$BigInteger* DHParameterSpec::getP() {
	return this->p;
}

$BigInteger* DHParameterSpec::getG() {
	return this->g;
}

int32_t DHParameterSpec::getL() {
	return this->l;
}

DHParameterSpec::DHParameterSpec() {
}

$Class* DHParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHParameterSpec, p)},
		{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHParameterSpec, g)},
		{"l", "I", nullptr, $PRIVATE, $field(DHParameterSpec, l)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(DHParameterSpec, init$, void, $BigInteger*, $BigInteger*)},
		{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;I)V", nullptr, $PUBLIC, $method(DHParameterSpec, init$, void, $BigInteger*, $BigInteger*, int32_t)},
		{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DHParameterSpec, getG, $BigInteger*)},
		{"getL", "()I", nullptr, $PUBLIC, $virtualMethod(DHParameterSpec, getL, int32_t)},
		{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DHParameterSpec, getP, $BigInteger*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.spec.DHParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DHParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DHParameterSpec);
	});
	return class$;
}

$Class* DHParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax