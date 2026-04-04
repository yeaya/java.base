#include <UniTest/SingleMemberByteOvrdDefClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberByteOvrdDefClass::init$() {
}

SingleMemberByteOvrdDefClass::SingleMemberByteOvrdDefClass() {
}

$Class* SingleMemberByteOvrdDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberByteOvrdDefClass, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberByteWithDef;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberByteOvrdDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberByteOvrdDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberByteOvrdDefClass);
	});
	return class$;
}

$Class* SingleMemberByteOvrdDefClass::class$ = nullptr;

} // UniTest