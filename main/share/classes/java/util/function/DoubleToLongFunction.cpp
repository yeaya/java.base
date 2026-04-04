#include <java/util/function/DoubleToLongFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* DoubleToLongFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsLong", "(D)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleToLongFunction, applyAsLong, int64_t, double)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.DoubleToLongFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DoubleToLongFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleToLongFunction);
	});
	return class$;
}

$Class* DoubleToLongFunction::class$ = nullptr;

		} // function
	} // util
} // java