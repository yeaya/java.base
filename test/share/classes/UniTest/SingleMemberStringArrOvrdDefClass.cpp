#include <UniTest/SingleMemberStringArrOvrdDefClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberStringArrOvrdDefClass::init$() {
}

SingleMemberStringArrOvrdDefClass::SingleMemberStringArrOvrdDefClass() {
}

$Class* SingleMemberStringArrOvrdDefClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberStringArrOvrdDefClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberStringArrayDef;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberStringArrOvrdDefClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberStringArrOvrdDefClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberStringArrOvrdDefClass);
	});
	return class$;
}

$Class* SingleMemberStringArrOvrdDefClass::class$ = nullptr;

} // UniTest