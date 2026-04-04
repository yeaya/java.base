#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* Supplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(Supplier, get, $Object*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.Supplier",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Supplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Supplier);
	});
	return class$;
}

$Class* Supplier::class$ = nullptr;

		} // function
	} // util
} // java