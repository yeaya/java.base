#include <java/security/spec/EdECPoint.h>
#include <java/math/BigInteger.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {
		namespace spec {

void EdECPoint::init$(bool xOdd, $BigInteger* y) {
	$Objects::requireNonNull(y, "y must not be null"_s);
	this->xOdd = xOdd;
	$set(this, y, y);
}

bool EdECPoint::isXOdd() {
	return this->xOdd;
}

$BigInteger* EdECPoint::getY() {
	return this->y;
}

EdECPoint::EdECPoint() {
}

$Class* EdECPoint::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xOdd", "Z", nullptr, $PRIVATE | $FINAL, $field(EdECPoint, xOdd)},
		{"y", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(EdECPoint, y)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZLjava/math/BigInteger;)V", nullptr, $PUBLIC, $method(EdECPoint, init$, void, bool, $BigInteger*)},
		{"getY", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $method(EdECPoint, getY, $BigInteger*)},
		{"isXOdd", "()Z", nullptr, $PUBLIC, $method(EdECPoint, isXOdd, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.security.spec.EdECPoint",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EdECPoint, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EdECPoint);
	});
	return class$;
}

$Class* EdECPoint::class$ = nullptr;

		} // spec
	} // security
} // java