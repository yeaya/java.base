#include <UniTest/SingleMemberShortArrAcceptDefClass.h>

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
$CompoundAttribute _SingleMemberShortArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberShortArrayDef;", nullptr},
	{}
};


$MethodInfo _SingleMemberShortArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberShortArrAcceptDefClass::*)()>(&SingleMemberShortArrAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberShortArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberShortArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberShortArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberShortArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberShortArrAcceptDefClass));
}

void SingleMemberShortArrAcceptDefClass::init$() {
}

SingleMemberShortArrAcceptDefClass::SingleMemberShortArrAcceptDefClass() {
}

$Class* SingleMemberShortArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortArrAcceptDefClass, name, initialize, &_SingleMemberShortArrAcceptDefClass_ClassInfo_, allocate$SingleMemberShortArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberShortArrAcceptDefClass::class$ = nullptr;

} // UniTest