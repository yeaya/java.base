#include <java/util/function/ToIntFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* ToIntFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsInt", "(Ljava/lang/Object;)I", "(TT;)I", $PUBLIC | $ABSTRACT, $virtualMethod(ToIntFunction, applyAsInt, int32_t, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.ToIntFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ToIntFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToIntFunction);
	});
	return class$;
}

$Class* ToIntFunction::class$ = nullptr;

		} // function
	} // util
} // java