#include <UniTest/SingleMemberLongArrOvrdDefClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberLongArrOvrdDefClass_Attribute_var$1[] = {
	{'J', "4"},
	{'-'}
};

$NamedAttribute SingleMemberLongArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberLongArrOvrdDefClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberLongArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberLongArrayDef;", SingleMemberLongArrOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberLongArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberLongArrOvrdDefClass::*)()>(&SingleMemberLongArrOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberLongArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberLongArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberLongArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberLongArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberLongArrOvrdDefClass));
}

void SingleMemberLongArrOvrdDefClass::init$() {
}

SingleMemberLongArrOvrdDefClass::SingleMemberLongArrOvrdDefClass() {
}

$Class* SingleMemberLongArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongArrOvrdDefClass, name, initialize, &_SingleMemberLongArrOvrdDefClass_ClassInfo_, allocate$SingleMemberLongArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberLongArrOvrdDefClass::class$ = nullptr;

} // UniTest