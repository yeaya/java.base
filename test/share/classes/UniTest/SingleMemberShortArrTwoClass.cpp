#include <UniTest/SingleMemberShortArrTwoClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberShortArrTwoClass::init$() {
}

SingleMemberShortArrTwoClass::SingleMemberShortArrTwoClass() {
}

$Class* SingleMemberShortArrTwoClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberShortArrTwoClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberShortArrTwoClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberShortArrTwoClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberShortArrTwoClass);
	});
	return class$;
}

$Class* SingleMemberShortArrTwoClass::class$ = nullptr;

} // UniTest