#include <HostOfMemberMalformedHost$MemberMalformedHost.h>
#include <HostOfMemberMalformedHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostOfMemberMalformedHost$MemberMalformedHost::init$() {
}

HostOfMemberMalformedHost$MemberMalformedHost::HostOfMemberMalformedHost$MemberMalformedHost() {
}

$Class* HostOfMemberMalformedHost$MemberMalformedHost::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostOfMemberMalformedHost$MemberMalformedHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostOfMemberMalformedHost$MemberMalformedHost", "HostOfMemberMalformedHost", "MemberMalformedHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostOfMemberMalformedHost$MemberMalformedHost",
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
		"HostOfMemberMalformedHost"
	};
	$loadClass(HostOfMemberMalformedHost$MemberMalformedHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostOfMemberMalformedHost$MemberMalformedHost);
	});
	return class$;
}

$Class* HostOfMemberMalformedHost$MemberMalformedHost::class$ = nullptr;