#include <HostWithDuplicateMembers$Member2.h>

#include <HostWithDuplicateMembers.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HostWithDuplicateMembers = ::HostWithDuplicateMembers;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _HostWithDuplicateMembers$Member2_InnerClassesInfo_[] = {
	{"HostWithDuplicateMembers$Member2", "HostWithDuplicateMembers", "Member2", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HostWithDuplicateMembers$Member2_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"HostWithDuplicateMembers$Member2",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_HostWithDuplicateMembers$Member2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HostWithDuplicateMembers"
};

$Object* allocate$HostWithDuplicateMembers$Member2($Class* clazz) {
	return $of($alloc(HostWithDuplicateMembers$Member2));
}

$Class* HostWithDuplicateMembers$Member2::load$($String* name, bool initialize) {
	$loadClass(HostWithDuplicateMembers$Member2, name, initialize, &_HostWithDuplicateMembers$Member2_ClassInfo_, allocate$HostWithDuplicateMembers$Member2);
	return class$;
}

$Class* HostWithDuplicateMembers$Member2::class$ = nullptr;