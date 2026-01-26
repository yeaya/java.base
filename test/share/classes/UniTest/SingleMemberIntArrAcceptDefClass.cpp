#include <UniTest/SingleMemberIntArrAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberIntArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberIntArrayDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberIntArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberIntArrAcceptDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberIntArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberIntArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberIntArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberIntArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberIntArrAcceptDefClass));
}

void SingleMemberIntArrAcceptDefClass::init$() {
}

SingleMemberIntArrAcceptDefClass::SingleMemberIntArrAcceptDefClass() {
}

$Class* SingleMemberIntArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntArrAcceptDefClass, name, initialize, &_SingleMemberIntArrAcceptDefClass_ClassInfo_, allocate$SingleMemberIntArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberIntArrAcceptDefClass::class$ = nullptr;

} // UniTest