#include <UniTest/SingleMemberStringAcceptDefClass.h>

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
$CompoundAttribute _SingleMemberStringAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberStringWithDef;", nullptr},
	{}
};


$MethodInfo _SingleMemberStringAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberStringAcceptDefClass::*)()>(&SingleMemberStringAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberStringAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberStringAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberStringAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberStringAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberStringAcceptDefClass));
}

void SingleMemberStringAcceptDefClass::init$() {
}

SingleMemberStringAcceptDefClass::SingleMemberStringAcceptDefClass() {
}

$Class* SingleMemberStringAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringAcceptDefClass, name, initialize, &_SingleMemberStringAcceptDefClass_ClassInfo_, allocate$SingleMemberStringAcceptDefClass);
	return class$;
}

$Class* SingleMemberStringAcceptDefClass::class$ = nullptr;

} // UniTest