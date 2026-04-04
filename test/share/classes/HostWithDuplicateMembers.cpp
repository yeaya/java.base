#include <HostWithDuplicateMembers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostWithDuplicateMembers::init$() {
}

HostWithDuplicateMembers::HostWithDuplicateMembers() {
}

$Class* HostWithDuplicateMembers::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostWithDuplicateMembers, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostWithDuplicateMembers$Member2", "HostWithDuplicateMembers", "Member2", $STATIC | $INTERFACE | $ABSTRACT},
		{"HostWithDuplicateMembers$Member1", "HostWithDuplicateMembers", "Member1", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostWithDuplicateMembers",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HostWithDuplicateMembers$Member2,HostWithDuplicateMembers$Member1"
	};
	$loadClass(HostWithDuplicateMembers, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostWithDuplicateMembers);
	});
	return class$;
}

$Class* HostWithDuplicateMembers::class$ = nullptr;