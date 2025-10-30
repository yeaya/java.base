#include <HostOfMemberNotInstanceHost$MemberNotInstanceHost.h>

#include <HostOfMemberNotInstanceHost.h>
#include <jcpp.h>

using $HostOfMemberNotInstanceHost = ::HostOfMemberNotInstanceHost;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _HostOfMemberNotInstanceHost$MemberNotInstanceHost_FieldInfo_[] = {
	{"oa", "[Ljava/lang/Object;", nullptr, 0, $field(HostOfMemberNotInstanceHost$MemberNotInstanceHost, oa)},
	{}
};

$MethodInfo _HostOfMemberNotInstanceHost$MemberNotInstanceHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostOfMemberNotInstanceHost$MemberNotInstanceHost::*)()>(&HostOfMemberNotInstanceHost$MemberNotInstanceHost::init$))},
	{}
};

$InnerClassInfo _HostOfMemberNotInstanceHost$MemberNotInstanceHost_InnerClassesInfo_[] = {
	{"HostOfMemberNotInstanceHost$MemberNotInstanceHost", "HostOfMemberNotInstanceHost", "MemberNotInstanceHost", $STATIC},
	{}
};

$ClassInfo _HostOfMemberNotInstanceHost$MemberNotInstanceHost_ClassInfo_ = {
	$ACC_SUPER,
	"HostOfMemberNotInstanceHost$MemberNotInstanceHost",
	"java.lang.Object",
	nullptr,
	_HostOfMemberNotInstanceHost$MemberNotInstanceHost_FieldInfo_,
	_HostOfMemberNotInstanceHost$MemberNotInstanceHost_MethodInfo_,
	nullptr,
	nullptr,
	_HostOfMemberNotInstanceHost$MemberNotInstanceHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HostOfMemberNotInstanceHost"
};

$Object* allocate$HostOfMemberNotInstanceHost$MemberNotInstanceHost($Class* clazz) {
	return $of($alloc(HostOfMemberNotInstanceHost$MemberNotInstanceHost));
}

void HostOfMemberNotInstanceHost$MemberNotInstanceHost::init$() {
}

HostOfMemberNotInstanceHost$MemberNotInstanceHost::HostOfMemberNotInstanceHost$MemberNotInstanceHost() {
}

$Class* HostOfMemberNotInstanceHost$MemberNotInstanceHost::load$($String* name, bool initialize) {
	$loadClass(HostOfMemberNotInstanceHost$MemberNotInstanceHost, name, initialize, &_HostOfMemberNotInstanceHost$MemberNotInstanceHost_ClassInfo_, allocate$HostOfMemberNotInstanceHost$MemberNotInstanceHost);
	return class$;
}

$Class* HostOfMemberNotInstanceHost$MemberNotInstanceHost::class$ = nullptr;