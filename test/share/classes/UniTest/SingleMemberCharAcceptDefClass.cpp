#include <UniTest/SingleMemberCharAcceptDefClass.h>

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
	{"<init>", "()V", nullptr, 0, $method(SingleMemberCharAcceptDefClass, init$, void)},
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