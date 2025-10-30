#include <UniTest/SingleMemberCharArrAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberCharArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberCharArrayDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberCharArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberCharArrAcceptDefClass::*)()>(&SingleMemberCharArrAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberCharArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberCharArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberCharArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberCharArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberCharArrAcceptDefClass));
}

void SingleMemberCharArrAcceptDefClass::init$() {
}

SingleMemberCharArrAcceptDefClass::SingleMemberCharArrAcceptDefClass() {
}

$Class* SingleMemberCharArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharArrAcceptDefClass, name, initialize, &_SingleMemberCharArrAcceptDefClass_ClassInfo_, allocate$SingleMemberCharArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberCharArrAcceptDefClass::class$ = nullptr;

} // UniTest