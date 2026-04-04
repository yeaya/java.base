#include <UniTest/SingleMemberStringArrTwoClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberStringArrTwoClass::init$() {
}

SingleMemberStringArrTwoClass::SingleMemberStringArrTwoClass() {
}

$Class* SingleMemberStringArrTwoClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberStringArrTwoClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberStringArrTwoClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberStringArrTwoClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberStringArrTwoClass);
	});
	return class$;
}

$Class* SingleMemberStringArrTwoClass::class$ = nullptr;

} // UniTest