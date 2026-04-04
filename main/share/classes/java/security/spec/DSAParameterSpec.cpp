#include <java/security/spec/DSAParameterSpec.h>
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

int32_t DSAParameterSpec::hashCode() {
	 return this->$AlgorithmParameterSpec::hashCode();
}

bool DSAParameterSpec::equals(Object$* obj) {
	 return this->$AlgorithmParameterSpec::equals(obj);
}

$Object* DSAParameterSpec::clone() {
	 return this->$AlgorithmParameterSpec::clone();
}

$String* DSAParameterSpec::toString() {
	 return this->$AlgorithmParameterSpec::toString();
}

void DSAParameterSpec::finalize() {
	this->$AlgorithmParameterSpec::finalize();
}

void DSAParameterSpec::init$($BigInteger* p, $BigInteger* q, $BigInteger* g) {
	$set(this, p, p);
	$set(this, q, q);
	$set(this, g, g);
}

$BigInteger* DSAParameterSpec::getP() {
	return this->p;
}

$BigInteger* DSAParameterSpec::getQ() {
	return this->q;
}

$BigInteger* DSAParameterSpec::getG() {
	return this->g;
}

DSAParameterSpec::DSAParameterSpec() {
}

$Class* DSAParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"p", "Ljava/math/BigInteger;", nullptr, 0, $field(DSAParameterSpec, p)},
		{"q", "Ljava/math/BigInteger;", nullptr, 0, $field(DSAParameterSpec, q)},
		{"g", "Ljava/math/BigInteger;", nullptr, 0, $field(DSAParameterSpec, g)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(DSAParameterSpec, init$, void, $BigInteger*, $BigInteger*, $BigInteger*)},
		{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAParameterSpec, getG, $BigInteger*)},
		{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAParameterSpec, getP, $BigInteger*)},
		{"getQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAParameterSpec, getQ, $BigInteger*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.spec.DSAParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec,java.security.interfaces.DSAParams",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DSAParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DSAParameterSpec));
	});
	return class$;
}

$Class* DSAParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java