#include <UniTest/SingleMemberBooleanArrOneClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberBooleanArrOneClass::init$() {
}

SingleMemberBooleanArrOneClass::SingleMemberBooleanArrOneClass() {
}

$Class* SingleMemberBooleanArrOneClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberBooleanArrOneClass, init$, void)},
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
		{"LUniTest/SingleMemberBooleanArray;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberBooleanArrOneClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberBooleanArrOneClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberBooleanArrOneClass);
	});
	return class$;
}

$Class* SingleMemberBooleanArrOneClass::class$ = nullptr;

} // UniTest