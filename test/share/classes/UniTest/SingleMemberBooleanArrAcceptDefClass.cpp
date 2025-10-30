#include <UniTest/SingleMemberBooleanArrAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberBooleanArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberBooleanArrayDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberBooleanArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberBooleanArrAcceptDefClass::*)()>(&SingleMemberBooleanArrAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberBooleanArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberBooleanArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberBooleanArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberBooleanArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberBooleanArrAcceptDefClass));
}

void SingleMemberBooleanArrAcceptDefClass::init$() {
}

SingleMemberBooleanArrAcceptDefClass::SingleMemberBooleanArrAcceptDefClass() {
}

$Class* SingleMemberBooleanArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanArrAcceptDefClass, name, initialize, &_SingleMemberBooleanArrAcceptDefClass_ClassInfo_, allocate$SingleMemberBooleanArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberBooleanArrAcceptDefClass::class$ = nullptr;

} // UniTest