#include <java/util/function/DoubleFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* DoubleFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(D)Ljava/lang/Object;", "(D)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(DoubleFunction, apply, $Object*, double)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.DoubleFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DoubleFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleFunction);
	});
	return class$;
}

$Class* DoubleFunction::class$ = nullptr;

		} // function
	} // util
} // java