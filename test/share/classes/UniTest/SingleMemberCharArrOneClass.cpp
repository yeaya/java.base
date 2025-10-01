#include <UniTest/SingleMemberCharArrOneClass.h>

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

$Attribute SingleMemberCharArrOneClass_Attribute_var$1[] = {
	{'C', "5"},
	{'-'}
};

$NamedAttribute SingleMemberCharArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberCharArrOneClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberCharArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrOneClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberCharArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberCharArrOneClass::*)()>(&SingleMemberCharArrOneClass::init$))},
	{}
};

$ClassInfo _SingleMemberCharArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberCharArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberCharArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharArrOneClass_Annotations_
};

$Object* allocate$SingleMemberCharArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberCharArrOneClass));
}

void SingleMemberCharArrOneClass::init$() {
}

SingleMemberCharArrOneClass::SingleMemberCharArrOneClass() {
}

$Class* SingleMemberCharArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharArrOneClass, name, initialize, &_SingleMemberCharArrOneClass_ClassInfo_, allocate$SingleMemberCharArrOneClass);
	return class$;
}

$Class* SingleMemberCharArrOneClass::class$ = nullptr;

} // UniTest