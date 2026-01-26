#include <UniTest/SingleMemberFloatArrOvrdDefClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberFloatArrOvrdDefClass_Attribute_var$1[] = {
	{'F', "6.0"},
	{'-'}
};

$NamedAttribute SingleMemberFloatArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberFloatArrOvrdDefClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberFloatArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberFloatArrayDef;", SingleMemberFloatArrOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberFloatArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberFloatArrOvrdDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberFloatArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberFloatArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberFloatArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberFloatArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberFloatArrOvrdDefClass));
}

void SingleMemberFloatArrOvrdDefClass::init$() {
}

SingleMemberFloatArrOvrdDefClass::SingleMemberFloatArrOvrdDefClass() {
}

$Class* SingleMemberFloatArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatArrOvrdDefClass, name, initialize, &_SingleMemberFloatArrOvrdDefClass_ClassInfo_, allocate$SingleMemberFloatArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberFloatArrOvrdDefClass::class$ = nullptr;

} // UniTest