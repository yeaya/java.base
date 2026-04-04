#include <repeatingAnnotations/A2.h>
#include <repeatingAnnotations/A1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $A1 = ::repeatingAnnotations::A1;

namespace repeatingAnnotations {

void A2::init$() {
	$A1::init$();
}

A2::A2() {
}

$Class* A2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(A2, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'I', "20"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LrepeatingAnnotations/Ann;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"repeatingAnnotations.A2",
		"repeatingAnnotations.A1",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(A2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(A2);
	});
	return class$;
}

$Class* A2::class$ = nullptr;

} // repeatingAnnotations