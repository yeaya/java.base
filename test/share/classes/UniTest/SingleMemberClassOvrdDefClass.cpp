#include <UniTest/SingleMemberClassOvrdDefClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberClassOvrdDefClass::init$() {
}

SingleMemberClassOvrdDefClass::SingleMemberClassOvrdDefClass() {
}

$Class* SingleMemberClassOvrdDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberClassOvrdDefClass, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberClassWithDef;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberClassOvrdDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberClassOvrdDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberClassOvrdDefClass);
	});
	return class$;
}

$Class* SingleMemberClassOvrdDefClass::class$ = nullptr;

} // UniTest