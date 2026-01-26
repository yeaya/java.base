#include <UniTest/SingleMemberBooleanAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberBooleanAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberBooleanWithDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberBooleanAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberBooleanAcceptDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberBooleanAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberBooleanAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberBooleanAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberBooleanAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberBooleanAcceptDefClass));
}

void SingleMemberBooleanAcceptDefClass::init$() {
}

SingleMemberBooleanAcceptDefClass::SingleMemberBooleanAcceptDefClass() {
}

$Class* SingleMemberBooleanAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanAcceptDefClass, name, initialize, &_SingleMemberBooleanAcceptDefClass_ClassInfo_, allocate$SingleMemberBooleanAcceptDefClass);
	return class$;
}

$Class* SingleMemberBooleanAcceptDefClass::class$ = nullptr;

} // UniTest