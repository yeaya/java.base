#include <HostOfMemberNoHost$MemberNoHost.h>
#include <HostOfMemberNoHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostOfMemberNoHost$MemberNoHost::init$() {
}

HostOfMemberNoHost$MemberNoHost::HostOfMemberNoHost$MemberNoHost() {
}

$Class* HostOfMemberNoHost$MemberNoHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostOfMemberNoHost$MemberNoHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostOfMemberNoHost$MemberNoHost", "HostOfMemberNoHost", "MemberNoHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostOfMemberNoHost$MemberNoHost",
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
		"HostOfMemberNoHost"
	};
	$loadClass(HostOfMemberNoHost$MemberNoHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostOfMemberNoHost$MemberNoHost);
	});
	return class$;
}

$Class* HostOfMemberNoHost$MemberNoHost::class$ = nullptr;