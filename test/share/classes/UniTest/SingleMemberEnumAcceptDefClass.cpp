#include <UniTest/SingleMemberEnumAcceptDefClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

void SingleMemberEnumAcceptDefClass::init$() {
}

SingleMemberEnumAcceptDefClass::SingleMemberEnumAcceptDefClass() {
}

$Class* SingleMemberEnumAcceptDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberEnumAcceptDefClass, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberEnumWithDef;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberEnumAcceptDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberEnumAcceptDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberEnumAcceptDefClass);
	});
	return class$;
}

$Class* SingleMemberEnumAcceptDefClass::class$ = nullptr;

} // UniTest