#include <UniTest/SingleMemberDoubleArrAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberDoubleArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberDoubleArrayDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberDoubleArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberDoubleArrAcceptDefClass::*)()>(&SingleMemberDoubleArrAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberDoubleArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberDoubleArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberDoubleArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberDoubleArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberDoubleArrAcceptDefClass));
}

void SingleMemberDoubleArrAcceptDefClass::init$() {
}

SingleMemberDoubleArrAcceptDefClass::SingleMemberDoubleArrAcceptDefClass() {
}

$Class* SingleMemberDoubleArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleArrAcceptDefClass, name, initialize, &_SingleMemberDoubleArrAcceptDefClass_ClassInfo_, allocate$SingleMemberDoubleArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberDoubleArrAcceptDefClass::class$ = nullptr;

} // UniTest