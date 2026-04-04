#include <repeatingAnnotations/C1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace repeatingAnnotations {

void C1::init$() {
}

C1::C1() {
}

$Class* C1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(C1, init$, void)},
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
		"repeatingAnnotations.C1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(C1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C1);
	});
	return class$;
}

$Class* C1::class$ = nullptr;

} // repeatingAnnotations