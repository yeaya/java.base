#include <HostOfMemberMissingHost$MemberMissingHost.h>

#include <HostOfMemberMissingHost.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostOfMemberMissingHost$MemberMissingHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostOfMemberMissingHost$MemberMissingHost::*)()>(&HostOfMemberMissingHost$MemberMissingHost::init$))},
	{}
};

$InnerClassInfo _HostOfMemberMissingHost$MemberMissingHost_InnerClassesInfo_[] = {
	{"HostOfMemberMissingHost$MemberMissingHost", "HostOfMemberMissingHost", "MemberMissingHost", $STATIC},
	{}
};

$ClassInfo _HostOfMemberMissingHost$MemberMissingHost_ClassInfo_ = {
	$ACC_SUPER,
	"HostOfMemberMissingHost$MemberMissingHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostOfMemberMissingHost$MemberMissingHost_MethodInfo_,
	nullptr,
	nullptr,
	_HostOfMemberMissingHost$MemberMissingHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HostOfMemberMissingHost"
};

$Object* allocate$HostOfMemberMissingHost$MemberMissingHost($Class* clazz) {
	return $of($alloc(HostOfMemberMissingHost$MemberMissingHost));
}

void HostOfMemberMissingHost$MemberMissingHost::init$() {
}

HostOfMemberMissingHost$MemberMissingHost::HostOfMemberMissingHost$MemberMissingHost() {
}

$Class* HostOfMemberMissingHost$MemberMissingHost::load$($String* name, bool initialize) {
	$loadClass(HostOfMemberMissingHost$MemberMissingHost, name, initialize, &_HostOfMemberMissingHost$MemberMissingHost_ClassInfo_, allocate$HostOfMemberMissingHost$MemberMissingHost);
	return class$;
}

$Class* HostOfMemberMissingHost$MemberMissingHost::class$ = nullptr;