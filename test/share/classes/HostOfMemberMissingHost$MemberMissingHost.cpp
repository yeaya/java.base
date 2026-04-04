#include <HostOfMemberMissingHost$MemberMissingHost.h>
#include <HostOfMemberMissingHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostOfMemberMissingHost$MemberMissingHost::init$() {
}

HostOfMemberMissingHost$MemberMissingHost::HostOfMemberMissingHost$MemberMissingHost() {
}

$Class* HostOfMemberMissingHost$MemberMissingHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostOfMemberMissingHost$MemberMissingHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostOfMemberMissingHost$MemberMissingHost", "HostOfMemberMissingHost", "MemberMissingHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostOfMemberMissingHost$MemberMissingHost",
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
		"HostOfMemberMissingHost"
	};
	$loadClass(HostOfMemberMissingHost$MemberMissingHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostOfMemberMissingHost$MemberMissingHost);
	});
	return class$;
}

$Class* HostOfMemberMissingHost$MemberMissingHost::class$ = nullptr;