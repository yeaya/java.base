#include <UniTest/SingleMemberEnumArrTwoClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberEnumArrTwoClass::init$() {
}

SingleMemberEnumArrTwoClass::SingleMemberEnumArrTwoClass() {
}

$Class* SingleMemberEnumArrTwoClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberEnumArrTwoClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberEnumArrTwoClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberEnumArrTwoClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberEnumArrTwoClass);
	});
	return class$;
}

$Class* SingleMemberEnumArrTwoClass::class$ = nullptr;

} // UniTest