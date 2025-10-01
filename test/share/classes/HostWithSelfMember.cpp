#include <HostWithSelfMember.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostWithSelfMember_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostWithSelfMember::*)()>(&HostWithSelfMember::init$))},
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