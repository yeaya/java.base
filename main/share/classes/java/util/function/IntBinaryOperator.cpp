#include <java/util/function/IntBinaryOperator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* IntBinaryOperator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsInt", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntBinaryOperator, applyAsInt, int32_t, int32_t, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.IntBinaryOperator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(IntBinaryOperator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntBinaryOperator);
	});
	return class$;
}

$Class* IntBinaryOperator::class$ = nullptr;

		} // function
	} // util
} // java