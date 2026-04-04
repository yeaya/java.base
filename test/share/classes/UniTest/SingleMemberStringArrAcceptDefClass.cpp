#include <UniTest/SingleMemberStringArrAcceptDefClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

void SingleMemberStringArrAcceptDefClass::init$() {
}

SingleMemberStringArrAcceptDefClass::SingleMemberStringArrAcceptDefClass() {
}

$Class* SingleMemberStringArrAcceptDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberStringArrAcceptDefClass, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberStringArrayDef;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberStringArrAcceptDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberStringArrAcceptDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberStringArrAcceptDefClass);
	});
	return class$;
}

$Class* SingleMemberStringArrAcceptDefClass::class$ = nullptr;

} // UniTest