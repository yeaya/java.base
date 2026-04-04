#include <UniTest/SingleMemberDoubleArrEmptyClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberDoubleArrEmptyClass::init$() {
}

SingleMemberDoubleArrEmptyClass::SingleMemberDoubleArrEmptyClass() {
}

$Class* SingleMemberDoubleArrEmptyClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberDoubleArrEmptyClass, init$, void)},
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
		{"LUniTest/SingleMemberDoubleArray;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberDoubleArrEmptyClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberDoubleArrEmptyClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberDoubleArrEmptyClass);
	});
	return class$;
}

$Class* SingleMemberDoubleArrEmptyClass::class$ = nullptr;

} // UniTest