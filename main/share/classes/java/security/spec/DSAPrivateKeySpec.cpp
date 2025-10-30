#include <java/security/spec/DSAPrivateKeySpec.h>

#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $KeySpec = ::java::security::spec::KeySpec;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _DSAPrivateKeySpec_FieldInfo_[] = {
	{"x", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPrivateKeySpec, x)},
	{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPrivateKeySpec, p)},
	{"q", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPrivateKeySpec, q)},
	{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPrivateKeySpec, g)},
	{}
};

$MethodInfo _DSAPrivateKeySpec_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(DSAPrivateKeySpec::*)($BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*)>(&DSAPrivateKeySpec::init$))},
	{"getG", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getP", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getQ", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getX", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DSAPrivateKeySpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.DSAPrivateKeySpec",
	"java.lang.Object",
	"java.security.spec.KeySpec",
	_DSAPrivateKeySpec_FieldInfo_,
	_DSAPrivateKeySpec_MethodInfo_
};

$Object* allocate$DSAPrivateKeySpec($Class* clazz) {
	return $of($alloc(DSAPrivateKeySpec));
}

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
	$loadClass(DSAPrivateKeySpec, name, initialize, &_DSAPrivateKeySpec_ClassInfo_, allocate$DSAPrivateKeySpec);
	return class$;
}

$Class* DSAPrivateKeySpec::class$ = nullptr;

		} // spec
	} // security
} // java