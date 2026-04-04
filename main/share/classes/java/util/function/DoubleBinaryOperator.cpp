#include <java/util/function/DoubleBinaryOperator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* DoubleBinaryOperator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsDouble", "(DD)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleBinaryOperator, applyAsDouble, double, double, double)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.DoubleBinaryOperator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DoubleBinaryOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleBinaryOperator);
	});
	return class$;
}

$Class* DoubleBinaryOperator::class$ = nullptr;

		} // function
	} // util
} // java