#include <UniTest/SingleMemberClassClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberClassClass::init$() {
}

SingleMemberClassClass::SingleMemberClassClass() {
}

$Class* SingleMemberClassClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberClassClass, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberClass;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberClassClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberClassClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberClassClass);
	});
	return class$;
}

$Class* SingleMemberClassClass::class$ = nullptr;

} // UniTest