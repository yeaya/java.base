#include <repeatingAnnotations/B2.h>
#include <repeatingAnnotations/B1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $B1 = ::repeatingAnnotations::B1;

namespace repeatingAnnotations {

void B2::init$() {
	$B1::init$();
}

B2::B2() {
}

$Class* B2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(B2, init$, void)},
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
		"repeatingAnnotations.B2",
		"repeatingAnnotations.B1",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(B2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B2);
	});
	return class$;
}

$Class* B2::class$ = nullptr;

} // repeatingAnnotations