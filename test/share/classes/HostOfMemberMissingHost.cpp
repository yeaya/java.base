#include <HostOfMemberMissingHost.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostOfMemberMissingHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostOfMemberMissingHost::*)()>(&HostOfMemberMissingHost::init$))},
	{}
};

$InnerClassInfo _HostOfMemberMissingHost_InnerClassesInfo_[] = {
	{"HostOfMemberMissingHost$MemberMissingHost", "HostOfMemberMissingHost", "MemberMissingHost", $STATIC},
	{}
};

$ClassInfo _HostOfMemberMissingHost_ClassInfo_ = {
	$ACC_SUPER,
	"HostOfMemberMissingHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostOfMemberMissingHost_MethodInfo_,
	nullptr,
	nullptr,
	_HostOfMemberMissingHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HostOfMemberMissingHost$MemberMissingHost"
};

$Object* allocate$HostOfMemberMissingHost($Class* clazz) {
	return $of($alloc(HostOfMemberMissingHost));
}

void HostOfMemberMissingHost::init$() {
}

HostOfMemberMissingHost::HostOfMemberMissingHost() {
}

$Class* HostOfMemberMissingHost::load$($String* name, bool initialize) {
	$loadClass(HostOfMemberMissingHost, name, initialize, &_HostOfMemberMissingHost_ClassInfo_, allocate$HostOfMemberMissingHost);
	return class$;
}

$Class* HostOfMemberMissingHost::class$ = nullptr;