#include <java/util/function/LongBinaryOperator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* LongBinaryOperator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsLong", "(JJ)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongBinaryOperator, applyAsLong, int64_t, int64_t, int64_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.LongBinaryOperator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LongBinaryOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongBinaryOperator);
	});
	return class$;
}

$Class* LongBinaryOperator::class$ = nullptr;

		} // function
	} // util
} // java