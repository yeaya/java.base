#include <HostOfMemberNoHost$MemberNoHost.h>

#include <HostOfMemberNoHost.h>
#include <jcpp.h>

using $HostOfMemberNoHost = ::HostOfMemberNoHost;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostOfMemberNoHost$MemberNoHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostOfMemberNoHost$MemberNoHost::*)()>(&HostOfMemberNoHost$MemberNoHost::init$))},
	{}
};

$InnerClassInfo _HostOfMemberNoHost$MemberNoHost_InnerClassesInfo_[] = {
	{"HostOfMemberNoHost$MemberNoHost", "HostOfMemberNoHost", "MemberNoHost", $STATIC},
	{}
};

$ClassInfo _HostOfMemberNoHost$MemberNoHost_ClassInfo_ = {
	$ACC_SUPER,
	"HostOfMemberNoHost$MemberNoHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostOfMemberNoHost$MemberNoHost_MethodInfo_,
	nullptr,
	nullptr,
	_HostOfMemberNoHost$MemberNoHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HostOfMemberNoHost"
};

$Object* allocate$HostOfMemberNoHost$MemberNoHost($Class* clazz) {
	return $of($alloc(HostOfMemberNoHost$MemberNoHost));
}

void HostOfMemberNoHost$MemberNoHost::init$() {
}

HostOfMemberNoHost$MemberNoHost::HostOfMemberNoHost$MemberNoHost() {
}

$Class* HostOfMemberNoHost$MemberNoHost::load$($String* name, bool initialize) {
	$loadClass(HostOfMemberNoHost$MemberNoHost, name, initialize, &_HostOfMemberNoHost$MemberNoHost_ClassInfo_, allocate$HostOfMemberNoHost$MemberNoHost);
	return class$;
}

$Class* HostOfMemberNoHost$MemberNoHost::class$ = nullptr;