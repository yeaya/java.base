#include <java/util/function/LongSupplier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* LongSupplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAsLong", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LongSupplier, getAsLong, int64_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.LongSupplier",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LongSupplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongSupplier);
	});
	return class$;
}

$Class* LongSupplier::class$ = nullptr;

		} // function
	} // util
} // java