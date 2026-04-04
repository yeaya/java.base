#include <HostWithSelfMember$Member.h>
#include <HostWithSelfMember.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostWithSelfMember$Member::init$() {
}

HostWithSelfMember$Member::HostWithSelfMember$Member() {
}

$Class* HostWithSelfMember$Member::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostWithSelfMember$Member, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostWithSelfMember$Member", "HostWithSelfMember", "Member", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostWithSelfMember$Member",
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
		"HostWithSelfMember"
	};
	$loadClass(HostWithSelfMember$Member, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostWithSelfMember$Member);
	});
	return class$;
}

$Class* HostWithSelfMember$Member::class$ = nullptr;