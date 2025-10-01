#include <UniTest/SingleMemberEnumArrOneClass.h>

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

$Attribute SingleMemberEnumArrOneClass_Attribute_var$1[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'-'}
};

$NamedAttribute SingleMemberEnumArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberEnumArrOneClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberEnumArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrOneClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberEnumArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberEnumArrOneClass::*)()>(&SingleMemberEnumArrOneClass::init$))},
	{}
};

$ClassInfo _SingleMemberEnumArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberEnumArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberEnumArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumArrOneClass_Annotations_
};

$Object* allocate$SingleMemberEnumArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberEnumArrOneClass));
}

void SingleMemberEnumArrOneClass::init$() {
}

SingleMemberEnumArrOneClass::SingleMemberEnumArrOneClass() {
}

$Class* SingleMemberEnumArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumArrOneClass, name, initialize, &_SingleMemberEnumArrOneClass_ClassInfo_, allocate$SingleMemberEnumArrOneClass);
	return class$;
}

$Class* SingleMemberEnumArrOneClass::class$ = nullptr;

} // UniTest