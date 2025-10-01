#include <java/security/spec/ECPoint.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef POINT_INFINITY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _ECPoint_FieldInfo_[] = {
	{"x", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(ECPoint, x)},
	{"y", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(ECPoint, y)},
	{"POINT_INFINITY", "Ljava/security/spec/ECPoint;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ECPoint, POINT_INFINITY)},
	{}
};

$MethodInfo _ECPoint_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECPoint::*)()>(&ECPoint::init$))},
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(ECPoint::*)($BigInteger*,$BigInteger*)>(&ECPoint::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAffineX", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getAffineY", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ECPoint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.ECPoint",
	"java.lang.Object",
	nullptr,
	_ECPoint_FieldInfo_,
	_ECPoint_MethodInfo_
};

$Object* allocate$ECPoint($Class* clazz) {
	return $of($alloc(ECPoint));
}


ECPoint* ECPoint::POINT_INFINITY = nullptr;

void ECPoint::init$() {
	$set(this, x, nullptr);
	$set(this, y, nullptr);
}

void ECPoint::init$($BigInteger* x, $BigInteger* y) {
	if ((x == nullptr) || (y == nullptr)) {
		$throwNew($NullPointerException, "affine coordinate x or y is null"_s);
	}
	$set(this, x, x);
	$set(this, y, y);
}

$BigInteger* ECPoint::getAffineX() {
	return this->x;
}

$BigInteger* ECPoint::getAffineY() {
	return this->y;
}

bool ECPoint::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (this == ECPoint::POINT_INFINITY) {
		return false;
	}
	$var(ECPoint, other, nullptr);
	bool var$1 = $instanceOf(ECPoint, obj);
	if (var$1) {
		$assign(other, $cast(ECPoint, obj));
		var$1 = true;
	}
	bool var$0 = var$1;
	if (var$0) {
		bool var$2 = ($nc(this->x)->equals($nc(other)->x));
		var$0 = (var$2 && ($nc(this->y)->equals($nc(other)->y)));
	}
	return var$0;
}

int32_t ECPoint::hashCode() {
	if (this == ECPoint::POINT_INFINITY) {
		return 0;
	}
	int32_t var$0 = $nc(this->x)->hashCode();
	return $sl(var$0, 5 + $nc(this->y)->hashCode());
}

void clinit$ECPoint($Class* class$) {
	$assignStatic(ECPoint::POINT_INFINITY, $new(ECPoint));
}

ECPoint::ECPoint() {
}

$Class* ECPoint::load$($String* name, bool initialize) {
	$loadClass(ECPoint, name, initialize, &_ECPoint_ClassInfo_, clinit$ECPoint, allocate$ECPoint);
	return class$;
}

$Class* ECPoint::class$ = nullptr;

		} // spec
	} // security
} // java