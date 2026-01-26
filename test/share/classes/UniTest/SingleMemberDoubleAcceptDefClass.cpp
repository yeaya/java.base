#include <UniTest/SingleMemberDoubleAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberDoubleAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberDoubleWithDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberDoubleAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberDoubleAcceptDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberDoubleAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberDoubleAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberDoubleAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberDoubleAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberDoubleAcceptDefClass));
}

void SingleMemberDoubleAcceptDefClass::init$() {
}

SingleMemberDoubleAcceptDefClass::SingleMemberDoubleAcceptDefClass() {
}

$Class* SingleMemberDoubleAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleAcceptDefClass, name, initialize, &_SingleMemberDoubleAcceptDefClass_ClassInfo_, allocate$SingleMemberDoubleAcceptDefClass);
	return class$;
}

$Class* SingleMemberDoubleAcceptDefClass::class$ = nullptr;

} // UniTest