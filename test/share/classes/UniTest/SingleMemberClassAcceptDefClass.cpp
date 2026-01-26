#include <UniTest/SingleMemberClassAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberClassAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberClassWithDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberClassAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberClassAcceptDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberClassAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberClassAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberClassAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberClassAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberClassAcceptDefClass));
}

void SingleMemberClassAcceptDefClass::init$() {
}

SingleMemberClassAcceptDefClass::SingleMemberClassAcceptDefClass() {
}

$Class* SingleMemberClassAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassAcceptDefClass, name, initialize, &_SingleMemberClassAcceptDefClass_ClassInfo_, allocate$SingleMemberClassAcceptDefClass);
	return class$;
}

$Class* SingleMemberClassAcceptDefClass::class$ = nullptr;

} // UniTest