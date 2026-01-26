#include <java/security/spec/DSAPublicKeySpec.h>

#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _DSAPublicKeySpec_FieldInfo_[] = {
	{"y", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPublicKeySpec, y)},
	{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPublicKeySpec, p)},
	{"q", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPublicKeySpec, q)},
	{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPublicKeySpec, g)},
	{}
};

$MethodInfo _DSAPublicKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(DSAPublicKeySpec, init$, void, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*)},
	{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAPublicKeySpec, getG, $BigInteger*)},
	{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAPublicKeySpec, getP, $BigInteger*)},
	{"getQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAPublicKeySpec, getQ, $BigInteger*)},
	{"getY", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAPublicKeySpec, getY, $BigInteger*)},
	{}
};

$ClassInfo _DSAPublicKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.DSAPublicKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_DSAPublicKeySpec_FieldInfo_,
	_DSAPublicKeySpec_MethodInfo_
};

$Object* allocate$DSAPublicKeySpec($Class* clazz) {
	return $of($alloc(DSAPublicKeySpec));
}

void DSAPublicKeySpec::init$($BigInteger* y, $BigInteger* p, $BigInteger* q, $BigInteger* g) {
	$set(this, y, y);
	$set(this, p, p);
	$set(this, q, q);
	$set(this, g, g);
}

$BigInteger* DSAPublicKeySpec::getY() {
	return this->y;
}

$BigInteger* DSAPublicKeySpec::getP() {
	return this->p;
}

$BigInteger* DSAPublicKeySpec::getQ() {
	return this->q;
}

$BigInteger* DSAPublicKeySpec::getG() {
	return this->g;
}

DSAPublicKeySpec::DSAPublicKeySpec() {
}

$Class* DSAPublicKeySpec::load$($String* name, bool initialize) {
	$loadClass(DSAPublicKeySpec, name, initialize, &_DSAPublicKeySpec_ClassInfo_, allocate$DSAPublicKeySpec);
	return class$;
}

$Class* DSAPublicKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java