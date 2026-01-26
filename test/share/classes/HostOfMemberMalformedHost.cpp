#include <HostOfMemberMalformedHost.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostOfMemberMalformedHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HostOfMemberMalformedHost, init$, void)},
	{}
};

$InnerClassInfo _HostOfMemberMalformedHost_InnerClassesInfo_[] = {
	{"HostOfMemberMalformedHost$MemberMalformedHost", "HostOfMemberMalformedHost", "MemberMalformedHost", $STATIC},
	{}
};

$ClassInfo _HostOfMemberMalformedHost_ClassInfo_ = {
	$ACC_SUPER,
	"HostOfMemberMalformedHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostOfMemberMalformedHost_MethodInfo_,
	nullptr,
	nullptr,
	_HostOfMemberMalformedHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HostOfMemberMalformedHost$MemberMalformedHost"
};

$Object* allocate$HostOfMemberMalformedHost($Class* clazz) {
	return $of($alloc(HostOfMemberMalformedHost));
}

void HostOfMemberMalformedHost::init$() {
}

HostOfMemberMalformedHost::HostOfMemberMalformedHost() {
}

$Class* HostOfMemberMalformedHost::load$($String* name, bool initialize) {
	$loadClass(HostOfMemberMalformedHost, name, initialize, &_HostOfMemberMalformedHost_ClassInfo_, allocate$HostOfMemberMalformedHost);
	return class$;
}

$Class* HostOfMemberMalformedHost::class$ = nullptr;