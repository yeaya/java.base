#include <UniTest/SingleMemberBooleanArrEmptyClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberBooleanArrEmptyClass::init$() {
}

SingleMemberBooleanArrEmptyClass::SingleMemberBooleanArrEmptyClass() {
}

$Class* SingleMemberBooleanArrEmptyClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberBooleanArrEmptyClass, init$, void)},
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
		{"LUniTest/SingleMemberBooleanArray;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberBooleanArrEmptyClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberBooleanArrEmptyClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberBooleanArrEmptyClass);
	});
	return class$;
}

$Class* SingleMemberBooleanArrEmptyClass::class$ = nullptr;

} // UniTest