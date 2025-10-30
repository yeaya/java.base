#include <UniTest/SingleMemberByteArrOvrdDefClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberByteArrOvrdDefClass_Attribute_var$1[] = {
	{'B', "1"},
	{'-'}
};

$NamedAttribute SingleMemberByteArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberByteArrOvrdDefClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberByteArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberByteArrayDef;", SingleMemberByteArrOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberByteArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberByteArrOvrdDefClass::*)()>(&SingleMemberByteArrOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberByteArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberByteArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberByteArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberByteArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberByteArrOvrdDefClass));
}

void SingleMemberByteArrOvrdDefClass::init$() {
}

SingleMemberByteArrOvrdDefClass::SingleMemberByteArrOvrdDefClass() {
}

$Class* SingleMemberByteArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteArrOvrdDefClass, name, initialize, &_SingleMemberByteArrOvrdDefClass_ClassInfo_, allocate$SingleMemberByteArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberByteArrOvrdDefClass::class$ = nullptr;

} // UniTest