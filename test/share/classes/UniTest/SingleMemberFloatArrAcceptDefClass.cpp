#include <UniTest/SingleMemberFloatArrAcceptDefClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

void SingleMemberFloatArrAcceptDefClass::init$() {
}

SingleMemberFloatArrAcceptDefClass::SingleMemberFloatArrAcceptDefClass() {
}

$Class* SingleMemberFloatArrAcceptDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberFloatArrAcceptDefClass, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberFloatArrAcceptDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberFloatArrAcceptDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberFloatArrAcceptDefClass);
	});
	return class$;
}

$Class* SingleMemberFloatArrAcceptDefClass::class$ = nullptr;

} // UniTest