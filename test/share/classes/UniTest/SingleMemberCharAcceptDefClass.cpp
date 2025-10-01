#include <UniTest/SingleMemberCharAcceptDefClass.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {
$CompoundAttribute _SingleMemberCharAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberCharWithDef;", nullptr},
	{}
};


$MethodInfo _SingleMemberCharAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberCharAcceptDefClass::*)()>(&SingleMemberCharAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberCharAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberCharAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberCharAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberCharAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberCharAcceptDefClass));
}

void SingleMemberCharAcceptDefClass::init$() {
}

SingleMemberCharAcceptDefClass::SingleMemberCharAcceptDefClass() {
}

$Class* SingleMemberCharAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharAcceptDefClass, name, initialize, &_SingleMemberCharAcceptDefClass_ClassInfo_, allocate$SingleMemberCharAcceptDefClass);
	return class$;
}

$Class* SingleMemberCharAcceptDefClass::class$ = nullptr;

} // UniTest