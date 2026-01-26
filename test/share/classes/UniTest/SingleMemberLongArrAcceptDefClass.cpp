#include <UniTest/SingleMemberLongArrAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberLongArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberLongArrayDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberLongArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberLongArrAcceptDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberLongArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberLongArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberLongArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberLongArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberLongArrAcceptDefClass));
}

void SingleMemberLongArrAcceptDefClass::init$() {
}

SingleMemberLongArrAcceptDefClass::SingleMemberLongArrAcceptDefClass() {
}

$Class* SingleMemberLongArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongArrAcceptDefClass, name, initialize, &_SingleMemberLongArrAcceptDefClass_ClassInfo_, allocate$SingleMemberLongArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberLongArrAcceptDefClass::class$ = nullptr;

} // UniTest