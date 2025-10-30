#include <HostWithDuplicateMembers$Member1.h>

#include <HostWithDuplicateMembers.h>
#include <jcpp.h>

using $HostWithDuplicateMembers = ::HostWithDuplicateMembers;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostWithDuplicateMembers$Member1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostWithDuplicateMembers$Member1::*)()>(&HostWithDuplicateMembers$Member1::init$))},
	{}
};

$InnerClassInfo _HostWithDuplicateMembers$Member1_InnerClassesInfo_[] = {
	{"HostWithDuplicateMembers$Member1", "HostWithDuplicateMembers", "Member1", $STATIC},
	{}
};

$ClassInfo _HostWithDuplicateMembers$Member1_ClassInfo_ = {
	$ACC_SUPER,
	"HostWithDuplicateMembers$Member1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostWithDuplicateMembers$Member1_MethodInfo_,
	nullptr,
	nullptr,
	_HostWithDuplicateMembers$Member1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HostWithDuplicateMembers"
};

$Object* allocate$HostWithDuplicateMembers$Member1($Class* clazz) {
	return $of($alloc(HostWithDuplicateMembers$Member1));
}

void HostWithDuplicateMembers$Member1::init$() {
}

HostWithDuplicateMembers$Member1::HostWithDuplicateMembers$Member1() {
}

$Class* HostWithDuplicateMembers$Member1::load$($String* name, bool initialize) {
	$loadClass(HostWithDuplicateMembers$Member1, name, initialize, &_HostWithDuplicateMembers$Member1_ClassInfo_, allocate$HostWithDuplicateMembers$Member1);
	return class$;
}

$Class* HostWithDuplicateMembers$Member1::class$ = nullptr;