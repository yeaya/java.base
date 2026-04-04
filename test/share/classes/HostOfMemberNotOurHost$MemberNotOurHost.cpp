#include <HostOfMemberNotOurHost$MemberNotOurHost.h>
#include <HostOfMemberNotOurHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostOfMemberNotOurHost$MemberNotOurHost::init$() {
}

HostOfMemberNotOurHost$MemberNotOurHost::HostOfMemberNotOurHost$MemberNotOurHost() {
}

$Class* HostOfMemberNotOurHost$MemberNotOurHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostOfMemberNotOurHost$MemberNotOurHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostOfMemberNotOurHost$MemberNotOurHost", "HostOfMemberNotOurHost", "MemberNotOurHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostOfMemberNotOurHost$MemberNotOurHost",
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
		"HostOfMemberNotOurHost"
	};
	$loadClass(HostOfMemberNotOurHost$MemberNotOurHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostOfMemberNotOurHost$MemberNotOurHost);
	});
	return class$;
}

$Class* HostOfMemberNotOurHost$MemberNotOurHost::class$ = nullptr;