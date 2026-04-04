#include <UniTest/SingleMemberDoubleArrOneClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberDoubleArrOneClass::init$() {
}

SingleMemberDoubleArrOneClass::SingleMemberDoubleArrOneClass() {
}

$Class* SingleMemberDoubleArrOneClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberDoubleArrOneClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberDoubleArrOneClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberDoubleArrOneClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberDoubleArrOneClass);
	});
	return class$;
}

$Class* SingleMemberDoubleArrOneClass::class$ = nullptr;

} // UniTest