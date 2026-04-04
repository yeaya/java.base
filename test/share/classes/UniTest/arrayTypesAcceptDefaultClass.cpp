#include <UniTest/arrayTypesAcceptDefaultClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

void arrayTypesAcceptDefaultClass::init$() {
}

arrayTypesAcceptDefaultClass::arrayTypesAcceptDefaultClass() {
}

$Class* arrayTypesAcceptDefaultClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(arrayTypesAcceptDefaultClass, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/ArrayTypesWithDefault;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.arrayTypesAcceptDefaultClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(arrayTypesAcceptDefaultClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(arrayTypesAcceptDefaultClass);
	});
	return class$;
}

$Class* arrayTypesAcceptDefaultClass::class$ = nullptr;

} // UniTest