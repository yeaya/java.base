#include <UniTest/SingleMemberLongArrOvrdDefClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberLongArrOvrdDefClass::init$() {
}

SingleMemberLongArrOvrdDefClass::SingleMemberLongArrOvrdDefClass() {
}

$Class* SingleMemberLongArrOvrdDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberLongArrOvrdDefClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberLongArrayDef;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberLongArrOvrdDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberLongArrOvrdDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberLongArrOvrdDefClass);
	});
	return class$;
}

$Class* SingleMemberLongArrOvrdDefClass::class$ = nullptr;

} // UniTest