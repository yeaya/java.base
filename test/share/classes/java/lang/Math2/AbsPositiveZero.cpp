#include <java/lang/Math2/AbsPositiveZero.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/Float.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef POSITIVE_INFINITY
#undef NEGATIVE_INFINITY

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace Math2 {

$MethodInfo _AbsPositiveZero_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbsPositiveZero::*)()>(&AbsPositiveZero::init$))},
	{"isPositiveZero", "(F)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(float)>(&AbsPositiveZero::isPositiveZero))},
	{"isPositiveZero", "(D)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(double)>(&AbsPositiveZero::isPositiveZero))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AbsPositiveZero::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _AbsPositiveZero_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.Math2.AbsPositiveZero",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AbsPositiveZero_MethodInfo_
};

$Object* allocate$AbsPositiveZero($Class* clazz) {
	return $of($alloc(AbsPositiveZero));
}

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
	$init($Double);
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
	$init($Float);
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
	$loadClass(AbsPositiveZero, name, initialize, &_AbsPositiveZero_ClassInfo_, allocate$AbsPositiveZero);
	return class$;
}

$Class* AbsPositiveZero::class$ = nullptr;

		} // Math2
	} // lang
} // java