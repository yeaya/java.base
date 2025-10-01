#include <UniTest/SingleMemberCharArrTwoClass.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberCharArrTwoClass_Attribute_var$1[] = {
	{'C', "5"},
	{'C', "6"},
	{'-'}
};

$NamedAttribute SingleMemberCharArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberCharArrTwoClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberCharArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrTwoClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberCharArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberCharArrTwoClass::*)()>(&SingleMemberCharArrTwoClass::init$))},
	{}
};

$ClassInfo _SingleMemberCharArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberCharArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberCharArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberCharArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberCharArrTwoClass));
}

void SingleMemberCharArrTwoClass::init$() {
}

SingleMemberCharArrTwoClass::SingleMemberCharArrTwoClass() {
}

$Class* SingleMemberCharArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharArrTwoClass, name, initialize, &_SingleMemberCharArrTwoClass_ClassInfo_, allocate$SingleMemberCharArrTwoClass);
	return class$;
}

$Class* SingleMemberCharArrTwoClass::class$ = nullptr;

} // UniTest