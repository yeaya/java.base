#include <UniTest/SingleMemberStringArrAcceptDefClass.h>

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
$CompoundAttribute _SingleMemberStringArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberStringArrayDef;", nullptr},
	{}
};


$MethodInfo _SingleMemberStringArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberStringArrAcceptDefClass::*)()>(&SingleMemberStringArrAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberStringArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberStringArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberStringArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberStringArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberStringArrAcceptDefClass));
}

void SingleMemberStringArrAcceptDefClass::init$() {
}

SingleMemberStringArrAcceptDefClass::SingleMemberStringArrAcceptDefClass() {
}

$Class* SingleMemberStringArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringArrAcceptDefClass, name, initialize, &_SingleMemberStringArrAcceptDefClass_ClassInfo_, allocate$SingleMemberStringArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberStringArrAcceptDefClass::class$ = nullptr;

} // UniTest