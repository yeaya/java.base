#include <java/security/spec/EllipticCurve.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/spec/ECField.h>
#include <java/security/spec/ECFieldF2m.h>
#include <java/security/spec/ECFieldFp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;
using $ECField = ::java::security::spec::ECField;
using $ECFieldF2m = ::java::security::spec::ECFieldF2m;
using $ECFieldFp = ::java::security::spec::ECFieldFp;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _EllipticCurve_FieldInfo_[] = {
	{"field", "Ljava/security/spec/ECField;", nullptr, $PRIVATE | $FINAL, $field(EllipticCurve, field)},
	{"a", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(EllipticCurve, a)},
	{"b", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(EllipticCurve, b)},
	{"seed", "[B", nullptr, $PRIVATE | $FINAL, $field(EllipticCurve, seed)},
	{}
};

$MethodInfo _EllipticCurve_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(EllipticCurve::*)($ECField*,$BigInteger*,$BigInteger*)>(&EllipticCurve::init$))},
	{"<init>", "(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/math/BigInteger;[B)V", nullptr, $PUBLIC, $method(static_cast<void(EllipticCurve::*)($ECField*,$BigInteger*,$BigInteger*,$bytes*)>(&EllipticCurve::init$))},
	{"checkValidity", "(Ljava/security/spec/ECField;Ljava/math/BigInteger;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ECField*,$BigInteger*,$String*)>(&EllipticCurve::checkValidity))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getA", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getB", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getField", "()Ljava/security/spec/ECField;", nullptr, $PUBLIC},
	{"getSeed", "()[B", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EllipticCurve_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.EllipticCurve",
	"java.lang.Object",
	nullptr,
	_EllipticCurve_FieldInfo_,
	_EllipticCurve_MethodInfo_
};

$Object* allocate$EllipticCurve($Class* clazz) {
	return $of($alloc(EllipticCurve));
}

void EllipticCurve::checkValidity($ECField* field, $BigInteger* c, $String* cName) {
	if ($instanceOf($ECFieldFp, field)) {
		$var($BigInteger, p, $nc(($cast($ECFieldFp, field)))->getP());
		if ($nc(p)->compareTo(c) != 1) {
			$throwNew($IllegalArgumentException, $$str({cName, " is too large"_s}));
		} else if ($nc(c)->signum() < 0) {
			$throwNew($IllegalArgumentException, $$str({cName, " is negative"_s}));
		}
	} else if ($instanceOf($ECFieldF2m, field)) {
		int32_t m = $nc(($cast($ECFieldF2m, field)))->getM();
		if ($nc(c)->bitLength() > m) {
			$throwNew($IllegalArgumentException, $$str({cName, " is too large"_s}));
		}
	}
}

void EllipticCurve::init$($ECField* field, $BigInteger* a, $BigInteger* b) {
	EllipticCurve::init$(field, a, b, nullptr);
}

void EllipticCurve::init$($ECField* field, $BigInteger* a, $BigInteger* b, $bytes* seed) {
	if (field == nullptr) {
		$throwNew($NullPointerException, "field is null"_s);
	}
	if (a == nullptr) {
		$throwNew($NullPointerException, "first coefficient is null"_s);
	}
	if (b == nullptr) {
		$throwNew($NullPointerException, "second coefficient is null"_s);
	}
	checkValidity(field, a, "first coefficient"_s);
	checkValidity(field, b, "second coefficient"_s);
	$set(this, field, field);
	$set(this, a, a);
	$set(this, b, b);
	if (seed != nullptr) {
		$set(this, seed, $cast($bytes, seed->clone()));
	} else {
		$set(this, seed, nullptr);
	}
}

$ECField* EllipticCurve::getField() {
	return this->field;
}

$BigInteger* EllipticCurve::getA() {
	return this->a;
}

$BigInteger* EllipticCurve::getB() {
	return this->b;
}

$bytes* EllipticCurve::getSeed() {
	if (this->seed == nullptr) {
		return nullptr;
	} else {
		return $cast($bytes, $nc(this->seed)->clone());
	}
}

bool EllipticCurve::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	$var(EllipticCurve, other, nullptr);
	bool var$3 = $instanceOf(EllipticCurve, obj);
	if (var$3) {
		$assign(other, $cast(EllipticCurve, obj));
		var$3 = true;
	}
	bool var$2 = var$3;
	bool var$1 = var$2 && $nc($of(this->field))->equals($nc(other)->field);
	bool var$0 = var$1 && $nc(this->a)->equals($nc(other)->a);
	return var$0 && $nc(this->b)->equals($nc(other)->b);
}

int32_t EllipticCurve::hashCode() {
	int32_t var$0 = $nc($of(this->field))->hashCode();
	int32_t var$1 = 6 + ($nc(this->a)->hashCode() << 4);
	return ($sl(var$0, var$1 + ($nc(this->b)->hashCode() << 2)));
}

EllipticCurve::EllipticCurve() {
}

$Class* EllipticCurve::load$($String* name, bool initialize) {
	$loadClass(EllipticCurve, name, initialize, &_EllipticCurve_ClassInfo_, allocate$EllipticCurve);
	return class$;
}

$Class* EllipticCurve::class$ = nullptr;

		} // spec
	} // security
} // java