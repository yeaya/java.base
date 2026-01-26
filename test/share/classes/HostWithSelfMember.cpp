#include <HostWithSelfMember.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostWithSelfMember_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(HostWithSelfMember, init$, void)},
	{}
};

$InnerClassInfo _HostWithSelfMember_InnerClassesInfo_[] = {
	{"HostWithSelfMember$Member", "HostWithSelfMember", "Member", $STATIC},
	{}
};

$ClassInfo _HostWithSelfMember_ClassInfo_ = {
	$ACC_SUPER,
	"HostWithSelfMember",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostWithSelfMember_MethodInfo_,
	nullptr,
	nullptr,
	_HostWithSelfMember_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HostWithSelfMember$Member"
};

$Object* allocate$HostWithSelfMember($Class* clazz) {
	return $of($alloc(HostWithSelfMember));
}

void HostWithSelfMember::init$() {
}

HostWithSelfMember::HostWithSelfMember() {
}

$Class* HostWithSelfMember::load$($String* name, bool initialize) {
	$loadClass(HostWithSelfMember, name, initialize, &_HostWithSelfMember_ClassInfo_, allocate$HostWithSelfMember);
	return class$;
}

$Class* HostWithSelfMember::class$ = nullptr;