#include <UniTest/SingleMemberFloatArrAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberFloatArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberFloatArrayDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberFloatArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberFloatArrAcceptDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberFloatArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberFloatArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberFloatArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberFloatArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberFloatArrAcceptDefClass));
}

void SingleMemberFloatArrAcceptDefClass::init$() {
}

SingleMemberFloatArrAcceptDefClass::SingleMemberFloatArrAcceptDefClass() {
}

$Class* SingleMemberFloatArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatArrAcceptDefClass, name, initialize, &_SingleMemberFloatArrAcceptDefClass_ClassInfo_, allocate$SingleMemberFloatArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberFloatArrAcceptDefClass::class$ = nullptr;

} // UniTest