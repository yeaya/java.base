#include <java/util/function/ToDoubleBiFunction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* ToDoubleBiFunction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applyAsDouble", "(Ljava/lang/Object;Ljava/lang/Object;)D", "(TT;TU;)D", $PUBLIC | $ABSTRACT, $virtualMethod(ToDoubleBiFunction, applyAsDouble, double, Object$*, Object$*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.ToDoubleBiFunction",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ToDoubleBiFunction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToDoubleBiFunction);
	});
	return class$;
}

$Class* ToDoubleBiFunction::class$ = nullptr;

		} // function
	} // util
} // java