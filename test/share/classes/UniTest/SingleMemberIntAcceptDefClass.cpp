#include <UniTest/SingleMemberIntAcceptDefClass.h>

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
$CompoundAttribute _SingleMemberIntAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberIntWithDef;", nullptr},
	{}
};


$MethodInfo _SingleMemberIntAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberIntAcceptDefClass::*)()>(&SingleMemberIntAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberIntAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberIntAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberIntAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberIntAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberIntAcceptDefClass));
}

void SingleMemberIntAcceptDefClass::init$() {
}

SingleMemberIntAcceptDefClass::SingleMemberIntAcceptDefClass() {
}

$Class* SingleMemberIntAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntAcceptDefClass, name, initialize, &_SingleMemberIntAcceptDefClass_ClassInfo_, allocate$SingleMemberIntAcceptDefClass);
	return class$;
}

$Class* SingleMemberIntAcceptDefClass::class$ = nullptr;

} // UniTest