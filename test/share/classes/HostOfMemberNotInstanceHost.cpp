#include <HostOfMemberNotInstanceHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostOfMemberNotInstanceHost::init$() {
}

HostOfMemberNotInstanceHost::HostOfMemberNotInstanceHost() {
}

$Class* HostOfMemberNotInstanceHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostOfMemberNotInstanceHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostOfMemberNotInstanceHost$MemberNotInstanceHost", "HostOfMemberNotInstanceHost", "MemberNotInstanceHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostOfMemberNotInstanceHost",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HostOfMemberNotInstanceHost$MemberNotInstanceHost"
	};
	$loadClass(HostOfMemberNotInstanceHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostOfMemberNotInstanceHost);
	});
	return class$;
}

$Class* HostOfMemberNotInstanceHost::class$ = nullptr;