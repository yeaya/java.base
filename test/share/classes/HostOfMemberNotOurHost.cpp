#include <HostOfMemberNotOurHost.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostOfMemberNotOurHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostOfMemberNotOurHost::*)()>(&HostOfMemberNotOurHost::init$))},
	{}
};

$InnerClassInfo _HostOfMemberNotOurHost_InnerClassesInfo_[] = {
	{"HostOfMemberNotOurHost$MemberNotOurHost", "HostOfMemberNotOurHost", "MemberNotOurHost", $STATIC},
	{}
};

$ClassInfo _HostOfMemberNotOurHost_ClassInfo_ = {
	$ACC_SUPER,
	"HostOfMemberNotOurHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostOfMemberNotOurHost_MethodInfo_,
	nullptr,
	nullptr,
	_HostOfMemberNotOurHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HostOfMemberNotOurHost$MemberNotOurHost"
};

$Object* allocate$HostOfMemberNotOurHost($Class* clazz) {
	return $of($alloc(HostOfMemberNotOurHost));
}

void HostOfMemberNotOurHost::init$() {
}

HostOfMemberNotOurHost::HostOfMemberNotOurHost() {
}

$Class* HostOfMemberNotOurHost::load$($String* name, bool initialize) {
	$loadClass(HostOfMemberNotOurHost, name, initialize, &_HostOfMemberNotOurHost_ClassInfo_, allocate$HostOfMemberNotOurHost);
	return class$;
}

$Class* HostOfMemberNotOurHost::class$ = nullptr;