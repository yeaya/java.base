#include <java/util/function/LongFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* LongFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(J)Ljava/lang/Object;", "(J)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(LongFunction, apply, $Object*, int64_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.LongFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LongFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongFunction);
	});
	return class$;
}

$Class* LongFunction::class$ = nullptr;

		} // function
	} // util
} // java