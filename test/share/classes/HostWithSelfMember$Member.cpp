#include <HostWithSelfMember$Member.h>

#include <HostWithSelfMember.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostWithSelfMember$Member_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostWithSelfMember$Member::*)()>(&HostWithSelfMember$Member::init$))},
	{}
};

$InnerClassInfo _HostWithSelfMember$Member_InnerClassesInfo_[] = {
	{"HostWithSelfMember$Member", "HostWithSelfMember", "Member", $STATIC},
	{}
};

$ClassInfo _HostWithSelfMember$Member_ClassInfo_ = {
	$ACC_SUPER,
	"HostWithSelfMember$Member",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostWithSelfMember$Member_MethodInfo_,
	nullptr,
	nullptr,
	_HostWithSelfMember$Member_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HostWithSelfMember"
};

$Object* allocate$HostWithSelfMember$Member($Class* clazz) {
	return $of($alloc(HostWithSelfMember$Member));
}

void HostWithSelfMember$Member::init$() {
}

HostWithSelfMember$Member::HostWithSelfMember$Member() {
}

$Class* HostWithSelfMember$Member::load$($String* name, bool initialize) {
	$loadClass(HostWithSelfMember$Member, name, initialize, &_HostWithSelfMember$Member_ClassInfo_, allocate$HostWithSelfMember$Member);
	return class$;
}

$Class* HostWithSelfMember$Member::class$ = nullptr;