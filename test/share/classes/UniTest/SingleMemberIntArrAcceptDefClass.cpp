#include <UniTest/SingleMemberIntArrAcceptDefClass.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberIntArrAcceptDefClass::*)()>(&SingleMemberIntArrAcceptDefClass::init$))},
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