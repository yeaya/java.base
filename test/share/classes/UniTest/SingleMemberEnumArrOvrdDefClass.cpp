#include <UniTest/SingleMemberEnumArrOvrdDefClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberEnumArrOvrdDefClass_Attribute_var$1[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'-'}
};

$NamedAttribute SingleMemberEnumArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberEnumArrOvrdDefClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberEnumArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberEnumArrayDef;", SingleMemberEnumArrOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberEnumArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberEnumArrOvrdDefClass::*)()>(&SingleMemberEnumArrOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberEnumArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberEnumArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberEnumArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberEnumArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberEnumArrOvrdDefClass));
}

void SingleMemberEnumArrOvrdDefClass::init$() {
}

SingleMemberEnumArrOvrdDefClass::SingleMemberEnumArrOvrdDefClass() {
}

$Class* SingleMemberEnumArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumArrOvrdDefClass, name, initialize, &_SingleMemberEnumArrOvrdDefClass_ClassInfo_, allocate$SingleMemberEnumArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberEnumArrOvrdDefClass::class$ = nullptr;

} // UniTest