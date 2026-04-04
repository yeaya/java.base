#include <UniTest/SingleMemberByteArrTwoClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberByteArrTwoClass::init$() {
}

SingleMemberByteArrTwoClass::SingleMemberByteArrTwoClass() {
}

$Class* SingleMemberByteArrTwoClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberByteArrTwoClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberByteArrTwoClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberByteArrTwoClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberByteArrTwoClass);
	});
	return class$;
}

$Class* SingleMemberByteArrTwoClass::class$ = nullptr;

} // UniTest