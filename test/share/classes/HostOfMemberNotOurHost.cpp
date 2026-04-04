#include <HostOfMemberNotOurHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostOfMemberNotOurHost::init$() {
}

HostOfMemberNotOurHost::HostOfMemberNotOurHost() {
}

$Class* HostOfMemberNotOurHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostOfMemberNotOurHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostOfMemberNotOurHost$MemberNotOurHost", "HostOfMemberNotOurHost", "MemberNotOurHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostOfMemberNotOurHost",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HostOfMemberNotOurHost$MemberNotOurHost"
	};
	$loadClass(HostOfMemberNotOurHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostOfMemberNotOurHost);
	});
	return class$;
}

$Class* HostOfMemberNotOurHost::class$ = nullptr;