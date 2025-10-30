#include <HostWithDuplicateMembers.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostWithDuplicateMembers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostWithDuplicateMembers::*)()>(&HostWithDuplicateMembers::init$))},
	{}
};

$InnerClassInfo _HostWithDuplicateMembers_InnerClassesInfo_[] = {
	{"HostWithDuplicateMembers$Member2", "HostWithDuplicateMembers", "Member2", $STATIC | $INTERFACE | $ABSTRACT},
	{"HostWithDuplicateMembers$Member1", "HostWithDuplicateMembers", "Member1", $STATIC},
	{}
};

$ClassInfo _HostWithDuplicateMembers_ClassInfo_ = {
	$ACC_SUPER,
	"HostWithDuplicateMembers",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostWithDuplicateMembers_MethodInfo_,
	nullptr,
	nullptr,
	_HostWithDuplicateMembers_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HostWithDuplicateMembers$Member2,HostWithDuplicateMembers$Member1"
};

$Object* allocate$HostWithDuplicateMembers($Class* clazz) {
	return $of($alloc(HostWithDuplicateMembers));
}

void HostWithDuplicateMembers::init$() {
}

HostWithDuplicateMembers::HostWithDuplicateMembers() {
}

$Class* HostWithDuplicateMembers::load$($String* name, bool initialize) {
	$loadClass(HostWithDuplicateMembers, name, initialize, &_HostWithDuplicateMembers_ClassInfo_, allocate$HostWithDuplicateMembers);
	return class$;
}

$Class* HostWithDuplicateMembers::class$ = nullptr;