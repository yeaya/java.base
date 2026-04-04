#include <java/lang/Math2/AbsPositiveZero.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace Math2 {

void AbsPositiveZero::init$() {
}

bool AbsPositiveZero::isPositiveZero(float f) {
	int32_t var$0 = $Float::floatToIntBits(f);
	return var$0 == $Float::floatToIntBits(0.0f);
}

bool AbsPositiveZero::isPositiveZero(double d) {
	int64_t var$0 = $Double::doubleToLongBits(d);
	return var$0 == $Double::doubleToLongBits(0.0);
}

void AbsPositiveZero::main($StringArray* args) {
	if (!isPositiveZero($Math::abs(-0.0))) {
		$throwNew($Exception, "abs(-0.0d) failed"_s);
	}
	if (!isPositiveZero($Math::abs(+0.0))) {
		$throwNew($Exception, "abs(+0.0d) failed"_s);
	}
	if ($Math::abs($Double::POSITIVE_INFINITY) != $Double::POSITIVE_INFINITY) {
		$throwNew($Exception, "abs(+Inf) failed"_s);
	}
	if ($Math::abs($Double::NEGATIVE_INFINITY) != $Double::POSITIVE_INFINITY) {
		$throwNew($Exception, "abs(-Inf) failed"_s);
	}
	double dnanval = $Math::abs($Double::NaN);
	if (dnanval == dnanval) {
		$throwNew($Exception, "abs(NaN) failed"_s);
	}
	if (!isPositiveZero($Math::abs(-0.0f))) {
		$throwNew($Exception, "abs(-0.0f) failed"_s);
	}
	if (!isPositiveZero($Math::abs(+0.0f))) {
		$throwNew($Exception, "abs(+0.0f) failed"_s);
	}
	if ($Math::abs($Float::POSITIVE_INFINITY) != $Float::POSITIVE_INFINITY) {
		$throwNew($Exception, "abs(+Inf) failed"_s);
	}
	if ($Math::abs($Float::NEGATIVE_INFINITY) != $Float::POSITIVE_INFINITY) {
		$throwNew($Exception, "abs(-Inf) failed"_s);
	}
	float fnanval = $Math::abs($Float::NaN);
	if (fnanval == fnanval) {
		$throwNew($Exception, "abs(NaN) failed"_s);
	}
}

AbsPositiveZero::AbsPositiveZero() {
}

$Class* AbsPositiveZero::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AbsPositiveZero, init$, void)},
		{"isPositiveZero", "(F)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(AbsPositiveZero, isPositiveZero, bool, float)},
		{"isPositiveZero", "(D)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(AbsPositiveZero, isPositiveZero, bool, double)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AbsPositiveZero, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.Math2.AbsPositiveZero",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AbsPositiveZero, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbsPositiveZero);
	});
	return class$;
}

$Class* AbsPositiveZero::class$ = nullptr;

		} // Math2
	} // lang
} // java