#include <UniTest/SingleMemberDoubleArrOvrdDefClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberDoubleArrOvrdDefClass_Attribute_var$1[] = {
	{'D', "7.0"},
	{'-'}
};

$NamedAttribute SingleMemberDoubleArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberDoubleArrOvrdDefClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberDoubleArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberDoubleArrayDef;", SingleMemberDoubleArrOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberDoubleArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberDoubleArrOvrdDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberDoubleArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberDoubleArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberDoubleArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberDoubleArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberDoubleArrOvrdDefClass));
}

void SingleMemberDoubleArrOvrdDefClass::init$() {
}

SingleMemberDoubleArrOvrdDefClass::SingleMemberDoubleArrOvrdDefClass() {
}

$Class* SingleMemberDoubleArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleArrOvrdDefClass, name, initialize, &_SingleMemberDoubleArrOvrdDefClass_ClassInfo_, allocate$SingleMemberDoubleArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberDoubleArrOvrdDefClass::class$ = nullptr;

} // UniTest