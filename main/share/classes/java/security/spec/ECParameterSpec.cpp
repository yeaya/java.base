#include <java/security/spec/ECParameterSpec.h>

#include <java/math/BigInteger.h>
#include <java/security/spec/ECPoint.h>
#include <java/security/spec/EllipticCurve.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;
using $ECPoint = ::java::security::spec::ECPoint;
using $EllipticCurve = ::java::security::spec::EllipticCurve;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _ECParameterSpec_FieldInfo_[] = {
	{"curve", "Ljava/security/spec/EllipticCurve;", nullptr, $PRIVATE | $FINAL, $field(ECParameterSpec, curve)},
	{"g", "Ljava/security/spec/ECPoint;", nullptr, $PRIVATE | $FINAL, $field(ECParameterSpec, g)},
	{"n", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(ECParameterSpec, n)},
	{"h", "I", nullptr, $PRIVATE | $FINAL, $field(ECParameterSpec, h)},
	{}
};

$MethodInfo _ECParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V", nullptr, $PUBLIC, $method(static_cast<void(ECParameterSpec::*)($EllipticCurve*,$ECPoint*,$BigInteger*,int32_t)>(&ECParameterSpec::init$))},
	{"getCofactor", "()I", nullptr, $PUBLIC},
	{"getCurve", "()Ljava/security/spec/EllipticCurve;", nullptr, $PUBLIC},
	{"getGenerator", "()Ljava/security/spec/ECPoint;", nullptr, $PUBLIC},
	{"getOrder", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ECParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.ECParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_ECParameterSpec_FieldInfo_,
	_ECParameterSpec_MethodInfo_
};

$Object* allocate$ECParameterSpec($Class* clazz) {
	return $of($alloc(ECParameterSpec));
}

void ECParameterSpec::init$($EllipticCurve* curve, $ECPoint* g, $BigInteger* n, int32_t h) {
	if (curve == nullptr) {
		$throwNew($NullPointerException, "curve is null"_s);
	}
	if (g == nullptr) {
		$throwNew($NullPointerException, "g is null"_s);
	}
	if (n == nullptr) {
		$throwNew($NullPointerException, "n is null"_s);
	}
	if ($nc(n)->signum() != 1) {
		$throwNew($IllegalArgumentException, "n is not positive"_s);
	}
	if (h <= 0) {
		$throwNew($IllegalArgumentException, "h is not positive"_s);
	}
	$set(this, curve, curve);
	$set(this, g, g);
	$set(this, n, n);
	this->h = h;
}

$EllipticCurve* ECParameterSpec::getCurve() {
	return this->curve;
}

$ECPoint* ECParameterSpec::getGenerator() {
	return this->g;
}

$BigInteger* ECParameterSpec::getOrder() {
	return this->n;
}

int32_t ECParameterSpec::getCofactor() {
	return this->h;
}

ECParameterSpec::ECParameterSpec() {
}

$Class* ECParameterSpec::load$($String* name, bool initialize) {
	$loadClass(ECParameterSpec, name, initialize, &_ECParameterSpec_ClassInfo_, allocate$ECParameterSpec);
	return class$;
}

$Class* ECParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java