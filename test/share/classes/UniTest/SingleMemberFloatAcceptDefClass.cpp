#include <UniTest/SingleMemberFloatAcceptDefClass.h>

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
$CompoundAttribute _SingleMemberFloatAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberFloatWithDef;", nullptr},
	{}
};


$MethodInfo _SingleMemberFloatAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberFloatAcceptDefClass::*)()>(&SingleMemberFloatAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberFloatAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberFloatAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberFloatAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberFloatAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberFloatAcceptDefClass));
}

void SingleMemberFloatAcceptDefClass::init$() {
}

SingleMemberFloatAcceptDefClass::SingleMemberFloatAcceptDefClass() {
}

$Class* SingleMemberFloatAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatAcceptDefClass, name, initialize, &_SingleMemberFloatAcceptDefClass_ClassInfo_, allocate$SingleMemberFloatAcceptDefClass);
	return class$;
}

$Class* SingleMemberFloatAcceptDefClass::class$ = nullptr;

} // UniTest