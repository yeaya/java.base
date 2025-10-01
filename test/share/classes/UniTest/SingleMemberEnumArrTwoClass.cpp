#include <UniTest/SingleMemberEnumArrTwoClass.h>

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

$Attribute SingleMemberEnumArrTwoClass_Attribute_var$1[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'e', "LUniTest/Stooge; CURLY"},
	{'-'}
};

$NamedAttribute SingleMemberEnumArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberEnumArrTwoClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberEnumArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrTwoClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberEnumArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberEnumArrTwoClass::*)()>(&SingleMemberEnumArrTwoClass::init$))},
	{}
};

$ClassInfo _SingleMemberEnumArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberEnumArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberEnumArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberEnumArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberEnumArrTwoClass));
}

void SingleMemberEnumArrTwoClass::init$() {
}

SingleMemberEnumArrTwoClass::SingleMemberEnumArrTwoClass() {
}

$Class* SingleMemberEnumArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumArrTwoClass, name, initialize, &_SingleMemberEnumArrTwoClass_ClassInfo_, allocate$SingleMemberEnumArrTwoClass);
	return class$;
}

$Class* SingleMemberEnumArrTwoClass::class$ = nullptr;

} // UniTest