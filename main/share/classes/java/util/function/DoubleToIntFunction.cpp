#include <java/util/function/DoubleToIntFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* DoubleToIntFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsInt", "(D)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleToIntFunction, applyAsInt, int32_t, double)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.DoubleToIntFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DoubleToIntFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleToIntFunction);
	});
	return class$;
}

$Class* DoubleToIntFunction::class$ = nullptr;

		} // function
	} // util
} // java