#include <java/util/function/DoubleSupplier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* DoubleSupplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAsDouble", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleSupplier, getAsDouble, double)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.DoubleSupplier",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DoubleSupplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DoubleSupplier);
	});
	return class$;
}

$Class* DoubleSupplier::class$ = nullptr;

		} // function
	} // util
} // java