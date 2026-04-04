#include <HostWithSelfMember.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostWithSelfMember::init$() {
}

HostWithSelfMember::HostWithSelfMember() {
}

$Class* HostWithSelfMember::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostWithSelfMember, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostWithSelfMember$Member", "HostWithSelfMember", "Member", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostWithSelfMember",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HostWithSelfMember$Member"
	};
	$loadClass(HostWithSelfMember, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostWithSelfMember);
	});
	return class$;
}

$Class* HostWithSelfMember::class$ = nullptr;