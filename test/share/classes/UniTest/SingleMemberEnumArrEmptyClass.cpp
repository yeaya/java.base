#include <UniTest/SingleMemberEnumArrEmptyClass.h>

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

$Attribute SingleMemberEnumArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberEnumArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberEnumArrEmptyClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberEnumArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrEmptyClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberEnumArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberEnumArrEmptyClass::*)()>(&SingleMemberEnumArrEmptyClass::init$))},
	{}
};

$ClassInfo _SingleMemberEnumArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberEnumArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberEnumArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberEnumArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberEnumArrEmptyClass));
}

void SingleMemberEnumArrEmptyClass::init$() {
}

SingleMemberEnumArrEmptyClass::SingleMemberEnumArrEmptyClass() {
}

$Class* SingleMemberEnumArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumArrEmptyClass, name, initialize, &_SingleMemberEnumArrEmptyClass_ClassInfo_, allocate$SingleMemberEnumArrEmptyClass);
	return class$;
}

$Class* SingleMemberEnumArrEmptyClass::class$ = nullptr;

} // UniTest