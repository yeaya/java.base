#include <UniTest/SingleMemberBooleanArrOvrdDefClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberBooleanArrOvrdDefClass::init$() {
}

SingleMemberBooleanArrOvrdDefClass::SingleMemberBooleanArrOvrdDefClass() {
}

$Class* SingleMemberBooleanArrOvrdDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberBooleanArrOvrdDefClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberBooleanArrOvrdDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberBooleanArrOvrdDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberBooleanArrOvrdDefClass);
	});
	return class$;
}

$Class* SingleMemberBooleanArrOvrdDefClass::class$ = nullptr;

} // UniTest