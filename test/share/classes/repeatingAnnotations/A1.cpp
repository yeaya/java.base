#include <repeatingAnnotations/A1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace repeatingAnnotations {

void A1::init$() {
}

A1::A1() {
}

$Class* A1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(A1, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'I', "10"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LrepeatingAnnotations/Ann;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"repeatingAnnotations.A1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(A1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(A1);
	});
	return class$;
}

$Class* A1::class$ = nullptr;

} // repeatingAnnotations