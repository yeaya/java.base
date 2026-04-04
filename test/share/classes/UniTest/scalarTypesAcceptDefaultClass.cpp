#include <UniTest/scalarTypesAcceptDefaultClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

void scalarTypesAcceptDefaultClass::init$() {
}

scalarTypesAcceptDefaultClass::scalarTypesAcceptDefaultClass() {
}

$Class* scalarTypesAcceptDefaultClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(scalarTypesAcceptDefaultClass, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/ScalarTypesWithDefault;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.scalarTypesAcceptDefaultClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(scalarTypesAcceptDefaultClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(scalarTypesAcceptDefaultClass);
	});
	return class$;
}

$Class* scalarTypesAcceptDefaultClass::class$ = nullptr;

} // UniTest