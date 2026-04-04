#include <java/util/function/LongToIntFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* LongToIntFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsInt", "(J)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongToIntFunction, applyAsInt, int32_t, int64_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.LongToIntFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LongToIntFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongToIntFunction);
	});
	return class$;
}

$Class* LongToIntFunction::class$ = nullptr;

		} // function
	} // util
} // java