#include <UniTest/SingleMemberCharArrOvrdDefClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberCharArrOvrdDefClass_Attribute_var$1[] = {
	{'C', "5"},
	{'-'}
};

$NamedAttribute SingleMemberCharArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberCharArrOvrdDefClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberCharArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberCharArrayDef;", SingleMemberCharArrOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberCharArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberCharArrOvrdDefClass::*)()>(&SingleMemberCharArrOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberCharArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberCharArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberCharArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberCharArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberCharArrOvrdDefClass));
}

void SingleMemberCharArrOvrdDefClass::init$() {
}

SingleMemberCharArrOvrdDefClass::SingleMemberCharArrOvrdDefClass() {
}

$Class* SingleMemberCharArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharArrOvrdDefClass, name, initialize, &_SingleMemberCharArrOvrdDefClass_ClassInfo_, allocate$SingleMemberCharArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberCharArrOvrdDefClass::class$ = nullptr;

} // UniTest