#include <java/util/function/ToLongFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* ToLongFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsLong", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC | $ABSTRACT, $virtualMethod(ToLongFunction, applyAsLong, int64_t, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.ToLongFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ToLongFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToLongFunction);
	});
	return class$;
}

$Class* ToLongFunction::class$ = nullptr;

		} // function
	} // util
} // java