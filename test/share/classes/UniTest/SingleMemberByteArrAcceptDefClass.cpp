#include <UniTest/SingleMemberByteArrAcceptDefClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

void SingleMemberByteArrAcceptDefClass::init$() {
}

SingleMemberByteArrAcceptDefClass::SingleMemberByteArrAcceptDefClass() {
}

$Class* SingleMemberByteArrAcceptDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberByteArrAcceptDefClass, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberByteArrayDef;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberByteArrAcceptDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberByteArrAcceptDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberByteArrAcceptDefClass);
	});
	return class$;
}

$Class* SingleMemberByteArrAcceptDefClass::class$ = nullptr;

} // UniTest