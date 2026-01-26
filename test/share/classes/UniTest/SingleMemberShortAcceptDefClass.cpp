#include <UniTest/SingleMemberShortAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberShortAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberShortWithDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberShortAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberShortAcceptDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberShortAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberShortAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberShortAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberShortAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberShortAcceptDefClass));
}

void SingleMemberShortAcceptDefClass::init$() {
}

SingleMemberShortAcceptDefClass::SingleMemberShortAcceptDefClass() {
}

$Class* SingleMemberShortAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortAcceptDefClass, name, initialize, &_SingleMemberShortAcceptDefClass_ClassInfo_, allocate$SingleMemberShortAcceptDefClass);
	return class$;
}

$Class* SingleMemberShortAcceptDefClass::class$ = nullptr;

} // UniTest