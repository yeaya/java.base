#include <HostOfMemberNotOurHost$MemberNotOurHost.h>

#include <HostOfMemberNotOurHost.h>
#include <jcpp.h>

using $HostOfMemberNotOurHost = ::HostOfMemberNotOurHost;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostOfMemberNotOurHost$MemberNotOurHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostOfMemberNotOurHost$MemberNotOurHost::*)()>(&HostOfMemberNotOurHost$MemberNotOurHost::init$))},
	{}
};

$InnerClassInfo _HostOfMemberNotOurHost$MemberNotOurHost_InnerClassesInfo_[] = {
	{"HostOfMemberNotOurHost$MemberNotOurHost", "HostOfMemberNotOurHost", "MemberNotOurHost", $STATIC},
	{}
};

$ClassInfo _HostOfMemberNotOurHost$MemberNotOurHost_ClassInfo_ = {
	$ACC_SUPER,
	"HostOfMemberNotOurHost$MemberNotOurHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostOfMemberNotOurHost$MemberNotOurHost_MethodInfo_,
	nullptr,
	nullptr,
	_HostOfMemberNotOurHost$MemberNotOurHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HostOfMemberNotOurHost"
};

$Object* allocate$HostOfMemberNotOurHost$MemberNotOurHost($Class* clazz) {
	return $of($alloc(HostOfMemberNotOurHost$MemberNotOurHost));
}

void HostOfMemberNotOurHost$MemberNotOurHost::init$() {
}

HostOfMemberNotOurHost$MemberNotOurHost::HostOfMemberNotOurHost$MemberNotOurHost() {
}

$Class* HostOfMemberNotOurHost$MemberNotOurHost::load$($String* name, bool initialize) {
	$loadClass(HostOfMemberNotOurHost$MemberNotOurHost, name, initialize, &_HostOfMemberNotOurHost$MemberNotOurHost_ClassInfo_, allocate$HostOfMemberNotOurHost$MemberNotOurHost);
	return class$;
}

$Class* HostOfMemberNotOurHost$MemberNotOurHost::class$ = nullptr;