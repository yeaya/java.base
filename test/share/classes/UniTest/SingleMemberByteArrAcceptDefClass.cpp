#include <UniTest/SingleMemberByteArrAcceptDefClass.h>

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
$CompoundAttribute _SingleMemberByteArrAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberByteArrayDef;", nullptr},
	{}
};


$MethodInfo _SingleMemberByteArrAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberByteArrAcceptDefClass::*)()>(&SingleMemberByteArrAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberByteArrAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberByteArrAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberByteArrAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteArrAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberByteArrAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberByteArrAcceptDefClass));
}

void SingleMemberByteArrAcceptDefClass::init$() {
}

SingleMemberByteArrAcceptDefClass::SingleMemberByteArrAcceptDefClass() {
}

$Class* SingleMemberByteArrAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteArrAcceptDefClass, name, initialize, &_SingleMemberByteArrAcceptDefClass_ClassInfo_, allocate$SingleMemberByteArrAcceptDefClass);
	return class$;
}

$Class* SingleMemberByteArrAcceptDefClass::class$ = nullptr;

} // UniTest