#include <UniTest/SingleMemberClassArrAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberClassArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberClassArrayDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberClassArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberClassArrAcceptDefClass::*)()>(&SingleMemberClassArrAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberClassArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberClassArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberClassArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberClassArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberClassArrAcceptDefClass));
}

void SingleMemberClassArrAcceptDefClass::init$() {
}

SingleMemberClassArrAcceptDefClass::SingleMemberClassArrAcceptDefClass() {
}

$Class* SingleMemberClassArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassArrAcceptDefClass, name, initialize, &_SingleMemberClassArrAcceptDefClass_ClassInfo_, allocate$SingleMemberClassArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberClassArrAcceptDefClass::class$ = nullptr;

} // UniTest