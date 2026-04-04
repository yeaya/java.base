#include <java/util/function/IntToLongFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* IntToLongFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsLong", "(I)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntToLongFunction, applyAsLong, int64_t, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.IntToLongFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(IntToLongFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntToLongFunction);
	});
	return class$;
}

$Class* IntToLongFunction::class$ = nullptr;

		} // function
	} // util
} // java