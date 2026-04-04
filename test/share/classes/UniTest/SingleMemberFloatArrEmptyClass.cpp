#include <UniTest/SingleMemberFloatArrEmptyClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberFloatArrEmptyClass::init$() {
}

SingleMemberFloatArrEmptyClass::SingleMemberFloatArrEmptyClass() {
}

$Class* SingleMemberFloatArrEmptyClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberFloatArrEmptyClass, init$, void)},
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
		{"LUniTest/SingleMemberFloatArray;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberFloatArrEmptyClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberFloatArrEmptyClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberFloatArrEmptyClass);
	});
	return class$;
}

$Class* SingleMemberFloatArrEmptyClass::class$ = nullptr;

} // UniTest