#include <java/util/function/IntFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* IntFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(I)Ljava/lang/Object;", "(I)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(IntFunction, apply, $Object*, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.IntFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(IntFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntFunction);
	});
	return class$;
}

$Class* IntFunction::class$ = nullptr;

		} // function
	} // util
} // java