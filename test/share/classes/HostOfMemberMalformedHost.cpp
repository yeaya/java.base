#include <HostOfMemberMalformedHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostOfMemberMalformedHost::init$() {
}

HostOfMemberMalformedHost::HostOfMemberMalformedHost() {
}

$Class* HostOfMemberMalformedHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostOfMemberMalformedHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostOfMemberMalformedHost$MemberMalformedHost", "HostOfMemberMalformedHost", "MemberMalformedHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostOfMemberMalformedHost",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HostOfMemberMalformedHost$MemberMalformedHost"
	};
	$loadClass(HostOfMemberMalformedHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostOfMemberMalformedHost);
	});
	return class$;
}

$Class* HostOfMemberMalformedHost::class$ = nullptr;