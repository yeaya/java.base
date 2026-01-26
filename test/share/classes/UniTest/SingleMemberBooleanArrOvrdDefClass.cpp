#include <UniTest/SingleMemberBooleanArrOvrdDefClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberBooleanArrOvrdDefClass_Attribute_var$1[] = {
	{'Z', "true"},
	{'-'}
};

$NamedAttribute SingleMemberBooleanArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberBooleanArrOvrdDefClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberBooleanArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberBooleanArrayDef;", SingleMemberBooleanArrOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberBooleanArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberBooleanArrOvrdDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberBooleanArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberBooleanArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberBooleanArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberBooleanArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberBooleanArrOvrdDefClass));
}

void SingleMemberBooleanArrOvrdDefClass::init$() {
}

SingleMemberBooleanArrOvrdDefClass::SingleMemberBooleanArrOvrdDefClass() {
}

$Class* SingleMemberBooleanArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanArrOvrdDefClass, name, initialize, &_SingleMemberBooleanArrOvrdDefClass_ClassInfo_, allocate$SingleMemberBooleanArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberBooleanArrOvrdDefClass::class$ = nullptr;

} // UniTest