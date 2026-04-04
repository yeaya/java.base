#include <HostOfMemberMissingHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostOfMemberMissingHost::init$() {
}

HostOfMemberMissingHost::HostOfMemberMissingHost() {
}

$Class* HostOfMemberMissingHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostOfMemberMissingHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostOfMemberMissingHost$MemberMissingHost", "HostOfMemberMissingHost", "MemberMissingHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostOfMemberMissingHost",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HostOfMemberMissingHost$MemberMissingHost"
	};
	$loadClass(HostOfMemberMissingHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostOfMemberMissingHost);
	});
	return class$;
}

$Class* HostOfMemberMissingHost::class$ = nullptr;