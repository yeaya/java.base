#include <HostWithDuplicateMembers$Member1.h>
#include <HostWithDuplicateMembers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostWithDuplicateMembers$Member1::init$() {
}

HostWithDuplicateMembers$Member1::HostWithDuplicateMembers$Member1() {
}

$Class* HostWithDuplicateMembers$Member1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostWithDuplicateMembers$Member1, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostWithDuplicateMembers$Member1", "HostWithDuplicateMembers", "Member1", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostWithDuplicateMembers$Member1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HostWithDuplicateMembers"
	};
	$loadClass(HostWithDuplicateMembers$Member1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostWithDuplicateMembers$Member1);
	});
	return class$;
}

$Class* HostWithDuplicateMembers$Member1::class$ = nullptr;