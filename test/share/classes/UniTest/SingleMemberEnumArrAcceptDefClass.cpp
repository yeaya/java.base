#include <UniTest/SingleMemberEnumArrAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberEnumArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberEnumArrayDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberEnumArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberEnumArrAcceptDefClass::*)()>(&SingleMemberEnumArrAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberEnumArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberEnumArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberEnumArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberEnumArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberEnumArrAcceptDefClass));
}

void SingleMemberEnumArrAcceptDefClass::init$() {
}

SingleMemberEnumArrAcceptDefClass::SingleMemberEnumArrAcceptDefClass() {
}

$Class* SingleMemberEnumArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumArrAcceptDefClass, name, initialize, &_SingleMemberEnumArrAcceptDefClass_ClassInfo_, allocate$SingleMemberEnumArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberEnumArrAcceptDefClass::class$ = nullptr;

} // UniTest