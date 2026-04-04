#include <java/util/function/BooleanSupplier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* BooleanSupplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAsBoolean", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BooleanSupplier, getAsBoolean, bool)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.BooleanSupplier",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(BooleanSupplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BooleanSupplier);
	});
	return class$;
}

$Class* BooleanSupplier::class$ = nullptr;

		} // function
	} // util
} // java