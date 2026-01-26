#include <UniTest/SingleMemberIntArrOvrdDefClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberIntArrOvrdDefClass_Attribute_var$1[] = {
	{'I', "3"},
	{'-'}
};

$NamedAttribute SingleMemberIntArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberIntArrOvrdDefClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberIntArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberIntArrayDef;", SingleMemberIntArrOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberIntArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberIntArrOvrdDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberIntArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberIntArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberIntArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberIntArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberIntArrOvrdDefClass));
}

void SingleMemberIntArrOvrdDefClass::init$() {
}

SingleMemberIntArrOvrdDefClass::SingleMemberIntArrOvrdDefClass() {
}

$Class* SingleMemberIntArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntArrOvrdDefClass, name, initialize, &_SingleMemberIntArrOvrdDefClass_ClassInfo_, allocate$SingleMemberIntArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberIntArrOvrdDefClass::class$ = nullptr;

} // UniTest