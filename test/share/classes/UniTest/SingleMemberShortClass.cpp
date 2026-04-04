#include <UniTest/SingleMemberShortClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

void SingleMemberShortClass::init$() {
}

SingleMemberShortClass::SingleMemberShortClass() {
}

$Class* SingleMemberShortClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SingleMemberShortClass, init$, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LUniTest/SingleMemberShort;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UniTest.SingleMemberShortClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SingleMemberShortClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleMemberShortClass);
	});
	return class$;
}

$Class* SingleMemberShortClass::class$ = nullptr;

} // UniTest