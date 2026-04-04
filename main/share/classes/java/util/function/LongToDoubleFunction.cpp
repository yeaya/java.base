#include <java/util/function/LongToDoubleFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* LongToDoubleFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsDouble", "(J)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongToDoubleFunction, applyAsDouble, double, int64_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.LongToDoubleFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LongToDoubleFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongToDoubleFunction);
	});
	return class$;
}

$Class* LongToDoubleFunction::class$ = nullptr;

		} // function
	} // util
} // java