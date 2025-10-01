#include <HostOfMemberMalformedHost$MemberMalformedHost.h>

#include <HostOfMemberMalformedHost.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HostOfMemberMalformedHost = ::HostOfMemberMalformedHost;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HostOfMemberMalformedHost$MemberMalformedHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HostOfMemberMalformedHost$MemberMalformedHost::*)()>(&HostOfMemberMalformedHost$MemberMalformedHost::init$))},
	{}
};

$InnerClassInfo _HostOfMemberMalformedHost$MemberMalformedHost_InnerClassesInfo_[] = {
	{"HostOfMemberMalformedHost$MemberMalformedHost", "HostOfMemberMalformedHost", "MemberMalformedHost", $STATIC},
	{}
};

$ClassInfo _HostOfMemberMalformedHost$MemberMalformedHost_ClassInfo_ = {
	$ACC_SUPER,
	"HostOfMemberMalformedHost$MemberMalformedHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HostOfMemberMalformedHost$MemberMalformedHost_MethodInfo_,
	nullptr,
	nullptr,
	_HostOfMemberMalformedHost$MemberMalformedHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HostOfMemberMalformedHost"
};

$Object* allocate$HostOfMemberMalformedHost$MemberMalformedHost($Class* clazz) {
	return $of($alloc(HostOfMemberMalformedHost$MemberMalformedHost));
}

void HostOfMemberMalformedHost$MemberMalformedHost::init$() {
}

HostOfMemberMalformedHost$MemberMalformedHost::HostOfMemberMalformedHost$MemberMalformedHost() {
}

$Class* HostOfMemberMalformedHost$MemberMalformedHost::load$($String* name, bool initialize) {
	$loadClass(HostOfMemberMalformedHost$MemberMalformedHost, name, initialize, &_HostOfMemberMalformedHost$MemberMalformedHost_ClassInfo_, allocate$HostOfMemberMalformedHost$MemberMalformedHost);
	return class$;
}

$Class* HostOfMemberMalformedHost$MemberMalformedHost::class$ = nullptr;