#include <UniTest/SingleMemberShortArrOvrdDefClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberShortArrOvrdDefClass_Attribute_var$1[] = {
	{'S', "2"},
	{'-'}
};

$NamedAttribute SingleMemberShortArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberShortArrOvrdDefClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberShortArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberShortArrayDef;", SingleMemberShortArrOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberShortArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberShortArrOvrdDefClass::*)()>(&SingleMemberShortArrOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberShortArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberShortArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberShortArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberShortArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberShortArrOvrdDefClass));
}

void SingleMemberShortArrOvrdDefClass::init$() {
}

SingleMemberShortArrOvrdDefClass::SingleMemberShortArrOvrdDefClass() {
}

$Class* SingleMemberShortArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortArrOvrdDefClass, name, initialize, &_SingleMemberShortArrOvrdDefClass_ClassInfo_, allocate$SingleMemberShortArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberShortArrOvrdDefClass::class$ = nullptr;

} // UniTest