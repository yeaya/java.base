#include <UniTest/SingleMemberCharArrEmptyClass.h>

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

$Attribute SingleMemberCharArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberCharArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberCharArrEmptyClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberCharArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrEmptyClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberCharArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberCharArrEmptyClass::*)()>(&SingleMemberCharArrEmptyClass::init$))},
	{}
};

$ClassInfo _SingleMemberCharArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberCharArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberCharArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberCharArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberCharArrEmptyClass));
}

void SingleMemberCharArrEmptyClass::init$() {
}

SingleMemberCharArrEmptyClass::SingleMemberCharArrEmptyClass() {
}

$Class* SingleMemberCharArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharArrEmptyClass, name, initialize, &_SingleMemberCharArrEmptyClass_ClassInfo_, allocate$SingleMemberCharArrEmptyClass);
	return class$;
}

$Class* SingleMemberCharArrEmptyClass::class$ = nullptr;

} // UniTest