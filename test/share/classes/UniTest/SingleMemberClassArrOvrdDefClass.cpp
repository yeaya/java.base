#include <UniTest/SingleMemberClassArrOvrdDefClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberClassArrOvrdDefClass_Attribute_var$1[] = {
	{'c', "Ljava/util/Map;"},
	{'-'}
};

$NamedAttribute SingleMemberClassArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberClassArrOvrdDefClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberClassArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberClassArrayDef;", SingleMemberClassArrOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberClassArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberClassArrOvrdDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberClassArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberClassArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberClassArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberClassArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberClassArrOvrdDefClass));
}

void SingleMemberClassArrOvrdDefClass::init$() {
}

SingleMemberClassArrOvrdDefClass::SingleMemberClassArrOvrdDefClass() {
}

$Class* SingleMemberClassArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassArrOvrdDefClass, name, initialize, &_SingleMemberClassArrOvrdDefClass_ClassInfo_, allocate$SingleMemberClassArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberClassArrOvrdDefClass::class$ = nullptr;

} // UniTest