#include <UniTest/SingleMemberEnumArrEmptyClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberEnumArrEmptyClass::init$() {
}

SingleMemberEnumArrEmptyClass::SingleMemberEnumArrEmptyClass() {
}

$Class* SingleMemberEnumArrEmptyClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberEnumArrEmptyClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
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
		"UniTest.SingleMemberEnumArrEmptyClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberEnumArrEmptyClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberEnumArrEmptyClass);
	});
	return class$;
}

$Class* SingleMemberEnumArrEmptyClass::class$ = nullptr;

} // UniTest