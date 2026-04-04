#include <java/util/function/ToLongBiFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* ToLongBiFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsLong", "(Ljava/lang/Object;Ljava/lang/Object;)J", "(TT;TU;)J", $PUBLIC | $ABSTRACT, $virtualMethod(ToLongBiFunction, applyAsLong, int64_t, Object$*, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.ToLongBiFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ToLongBiFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToLongBiFunction);
	});
	return class$;
}

$Class* ToLongBiFunction::class$ = nullptr;

		} // function
	} // util
} // java