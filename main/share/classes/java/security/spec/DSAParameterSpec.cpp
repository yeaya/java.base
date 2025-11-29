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

$FieldInfo _DSAParameterSpec_FieldInfo_[] = {
	{"p", "Ljava/math/BigInteger;", nullptr, 0, $field(DSAParameterSpec, p)},
	{"q", "Ljava/math/BigInteger;", nullptr, 0, $field(DSAParameterSpec, q)},
	{"g", "Ljava/math/BigInteger;", nullptr, 0, $field(DSAParameterSpec, g)},
	{}
};

$MethodInfo _DSAParameterSpec_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(DSAParameterSpec::*)($BigInteger*,$BigInteger*,$BigInteger*)>(&DSAParameterSpec::init$))},
	{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DSAParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.DSAParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec,java.security.interfaces.DSAParams",
	_DSAParameterSpec_FieldInfo_,
	_DSAParameterSpec_MethodInfo_
};

$Object* allocate$DSAParameterSpec($Class* clazz) {
	return $of($alloc(DSAParameterSpec));
}

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
	$loadClass(DSAParameterSpec, name, initialize, &_DSAParameterSpec_ClassInfo_, allocate$DSAParameterSpec);
	return class$;
}

$Class* DSAParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java