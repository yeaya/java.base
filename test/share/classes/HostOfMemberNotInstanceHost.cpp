#include <HostOfMemberNotInstanceHost.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostOfMemberNotInstanceHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostOfMemberNotInstanceHost::*)()>(&HostOfMemberNotInstanceHost::init$))},
	{}
};

$InnerClassInfo _HostOfMemberNotInstanceHost_InnerClassesInfo_[] = {
	{"HostOfMemberNotInstanceHost$MemberNotInstanceHost", "HostOfMemberNotInstanceHost", "MemberNotInstanceHost", $STATIC},
	{}
};

$ClassInfo _HostOfMemberNotInstanceHost_ClassInfo_ = {
	$ACC_SUPER,
	"HostOfMemberNotInstanceHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostOfMemberNotInstanceHost_MethodInfo_,
	nullptr,
	nullptr,
	_HostOfMemberNotInstanceHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HostOfMemberNotInstanceHost$MemberNotInstanceHost"
};

$Object* allocate$HostOfMemberNotInstanceHost($Class* clazz) {
	return $of($alloc(HostOfMemberNotInstanceHost));
}

void HostOfMemberNotInstanceHost::init$() {
}

HostOfMemberNotInstanceHost::HostOfMemberNotInstanceHost() {
}

$Class* HostOfMemberNotInstanceHost::load$($String* name, bool initialize) {
	$loadClass(HostOfMemberNotInstanceHost, name, initialize, &_HostOfMemberNotInstanceHost_ClassInfo_, allocate$HostOfMemberNotInstanceHost);
	return class$;
}

$Class* HostOfMemberNotInstanceHost::class$ = nullptr;