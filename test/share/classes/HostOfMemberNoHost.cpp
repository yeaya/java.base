#include <HostOfMemberNoHost.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostOfMemberNoHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HostOfMemberNoHost, init$, void)},
	{}
};

$InnerClassInfo _HostOfMemberNoHost_InnerClassesInfo_[] = {
	{"HostOfMemberNoHost$MemberNoHost", "HostOfMemberNoHost", "MemberNoHost", $STATIC},
	{}
};

$ClassInfo _HostOfMemberNoHost_ClassInfo_ = {
	$ACC_SUPER,
	"HostOfMemberNoHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostOfMemberNoHost_MethodInfo_,
	nullptr,
	nullptr,
	_HostOfMemberNoHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HostOfMemberNoHost$MemberNoHost"
};

$Object* allocate$HostOfMemberNoHost($Class* clazz) {
	return $of($alloc(HostOfMemberNoHost));
}

void HostOfMemberNoHost::init$() {
}

HostOfMemberNoHost::HostOfMemberNoHost() {
}

$Class* HostOfMemberNoHost::load$($String* name, bool initialize) {
	$loadClass(HostOfMemberNoHost, name, initialize, &_HostOfMemberNoHost_ClassInfo_, allocate$HostOfMemberNoHost);
	return class$;
}

$Class* HostOfMemberNoHost::class$ = nullptr;