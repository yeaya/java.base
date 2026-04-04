#include <java/util/function/IntSupplier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* IntSupplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAsInt", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntSupplier, getAsInt, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.IntSupplier",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(IntSupplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntSupplier);
	});
	return class$;
}

$Class* IntSupplier::class$ = nullptr;

		} // function
	} // util
} // java