#include <UniTest/SingleMemberEnumAcceptDefClass.h>

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
$CompoundAttribute _SingleMemberEnumAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberEnumWithDef;", nullptr},
	{}
};


$MethodInfo _SingleMemberEnumAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberEnumAcceptDefClass::*)()>(&SingleMemberEnumAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberEnumAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberEnumAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberEnumAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberEnumAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberEnumAcceptDefClass));
}

void SingleMemberEnumAcceptDefClass::init$() {
}

SingleMemberEnumAcceptDefClass::SingleMemberEnumAcceptDefClass() {
}

$Class* SingleMemberEnumAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumAcceptDefClass, name, initialize, &_SingleMemberEnumAcceptDefClass_ClassInfo_, allocate$SingleMemberEnumAcceptDefClass);
	return class$;
}

$Class* SingleMemberEnumAcceptDefClass::class$ = nullptr;

} // UniTest