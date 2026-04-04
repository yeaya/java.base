#include <UniTest/SingleMemberCharClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberCharClass::init$() {
}

SingleMemberCharClass::SingleMemberCharClass() {
}

$Class* SingleMemberCharClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberCharClass, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberChar;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberCharClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberCharClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberCharClass);
	});
	return class$;
}

$Class* SingleMemberCharClass::class$ = nullptr;

} // UniTest