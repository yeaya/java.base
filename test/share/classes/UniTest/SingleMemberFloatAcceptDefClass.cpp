#include <UniTest/SingleMemberFloatAcceptDefClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

void SingleMemberFloatAcceptDefClass::init$() {
}

SingleMemberFloatAcceptDefClass::SingleMemberFloatAcceptDefClass() {
}

$Class* SingleMemberFloatAcceptDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberFloatAcceptDefClass, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberFloatWithDef;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberFloatAcceptDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberFloatAcceptDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberFloatAcceptDefClass);
	});
	return class$;
}

$Class* SingleMemberFloatAcceptDefClass::class$ = nullptr;

} // UniTest