#include <UniTest/SingleMemberClassArrTwoClass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberClassArrTwoClass::init$() {
}

SingleMemberClassArrTwoClass::SingleMemberClassArrTwoClass() {
}

$Class* SingleMemberClassArrTwoClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberClassArrTwoClass, init$, void)},
		{}
	};
	$Attribute $attribute[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberClassArrTwoClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberClassArrTwoClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberClassArrTwoClass);
	});
	return class$;
}

$Class* SingleMemberClassArrTwoClass::class$ = nullptr;

} // UniTest