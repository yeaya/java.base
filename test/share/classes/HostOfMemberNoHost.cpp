#include <HostOfMemberNoHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostOfMemberNoHost::init$() {
}

HostOfMemberNoHost::HostOfMemberNoHost() {
}

$Class* HostOfMemberNoHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostOfMemberNoHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostOfMemberNoHost$MemberNoHost", "HostOfMemberNoHost", "MemberNoHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostOfMemberNoHost",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HostOfMemberNoHost$MemberNoHost"
	};
	$loadClass(HostOfMemberNoHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostOfMemberNoHost);
	});
	return class$;
}

$Class* HostOfMemberNoHost::class$ = nullptr;