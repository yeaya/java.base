#include <java/util/function/ToIntBiFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* ToIntBiFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsInt", "(Ljava/lang/Object;Ljava/lang/Object;)I", "(TT;TU;)I", $PUBLIC | $ABSTRACT, $virtualMethod(ToIntBiFunction, applyAsInt, int32_t, Object$*, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.ToIntBiFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ToIntBiFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToIntBiFunction);
	});
	return class$;
}

$Class* ToIntBiFunction::class$ = nullptr;

		} // function
	} // util
} // java