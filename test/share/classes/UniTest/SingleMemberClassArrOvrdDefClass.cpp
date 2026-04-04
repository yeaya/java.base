#include <UniTest/SingleMemberClassArrOvrdDefClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberClassArrOvrdDefClass::init$() {
}

SingleMemberClassArrOvrdDefClass::SingleMemberClassArrOvrdDefClass() {
}

$Class* SingleMemberClassArrOvrdDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberClassArrOvrdDefClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberClassArrayDef;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberClassArrOvrdDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberClassArrOvrdDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberClassArrOvrdDefClass);
	});
	return class$;
}

$Class* SingleMemberClassArrOvrdDefClass::class$ = nullptr;

} // UniTest