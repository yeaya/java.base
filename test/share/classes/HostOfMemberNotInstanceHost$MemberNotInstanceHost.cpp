#include <HostOfMemberNotInstanceHost$MemberNotInstanceHost.h>
#include <HostOfMemberNotInstanceHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HostOfMemberNotInstanceHost$MemberNotInstanceHost::init$() {
}

HostOfMemberNotInstanceHost$MemberNotInstanceHost::HostOfMemberNotInstanceHost$MemberNotInstanceHost() {
}

$Class* HostOfMemberNotInstanceHost$MemberNotInstanceHost::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"oa", "[Ljava/lang/Object;", nullptr, 0, $field(HostOfMemberNotInstanceHost$MemberNotInstanceHost, oa)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HostOfMemberNotInstanceHost$MemberNotInstanceHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HostOfMemberNotInstanceHost$MemberNotInstanceHost", "HostOfMemberNotInstanceHost", "MemberNotInstanceHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HostOfMemberNotInstanceHost$MemberNotInstanceHost",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HostOfMemberNotInstanceHost"
	};
	$loadClass(HostOfMemberNotInstanceHost$MemberNotInstanceHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HostOfMemberNotInstanceHost$MemberNotInstanceHost);
	});
	return class$;
}

$Class* HostOfMemberNotInstanceHost$MemberNotInstanceHost::class$ = nullptr;