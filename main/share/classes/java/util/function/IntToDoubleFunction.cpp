#include <java/util/function/IntToDoubleFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* IntToDoubleFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsDouble", "(I)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntToDoubleFunction, applyAsDouble, double, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.IntToDoubleFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(IntToDoubleFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntToDoubleFunction);
	});
	return class$;
}

$Class* IntToDoubleFunction::class$ = nullptr;

		} // function
	} // util
} // java