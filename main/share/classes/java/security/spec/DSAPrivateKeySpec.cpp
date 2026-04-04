#include <java/security/spec/DSAPrivateKeySpec.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace security {
		namespace spec {

void DSAPrivateKeySpec::init$($BigInteger* x, $BigInteger* p, $BigInteger* q, $BigInteger* g) {
	$set(this, x, x);
	$set(this, p, p);
	$set(this, q, q);
	$set(this, g, g);
}

$BigInteger* DSAPrivateKeySpec::getX() {
	return this->x;
}

$BigInteger* DSAPrivateKeySpec::getP() {
	return this->p;
}

$BigInteger* DSAPrivateKeySpec::getQ() {
	return this->q;
}

$BigInteger* DSAPrivateKeySpec::getG() {
	return this->g;
}

DSAPrivateKeySpec::DSAPrivateKeySpec() {
}

$Class* DSAPrivateKeySpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"x", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPrivateKeySpec, x)},
		{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPrivateKeySpec, p)},
		{"q", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPrivateKeySpec, q)},
		{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPrivateKeySpec, g)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(DSAPrivateKeySpec, init$, void, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*)},
		{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAPrivateKeySpec, getG, $BigInteger*)},
		{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAPrivateKeySpec, getP, $BigInteger*)},
		{"getQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAPrivateKeySpec, getQ, $BigInteger*)},
		{"getX", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAPrivateKeySpec, getX, $BigInteger*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.DSAPrivateKeySpec",
		"java.lang.Object",
		"java.security.spec.KeySpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DSAPrivateKeySpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSAPrivateKeySpec);
	});
	return class$;
}

$Class* DSAPrivateKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java