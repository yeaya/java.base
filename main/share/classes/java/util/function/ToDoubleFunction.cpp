#include <java/util/function/ToDoubleFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* ToDoubleFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsDouble", "(Ljava/lang/Object;)D", "(TT;)D", $PUBLIC | $ABSTRACT, $virtualMethod(ToDoubleFunction, applyAsDouble, double, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.ToDoubleFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ToDoubleFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToDoubleFunction);
	});
	return class$;
}

$Class* ToDoubleFunction::class$ = nullptr;

		} // function
	} // util
} // java