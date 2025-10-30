#include <UniTest/SingleMemberBooleanArrTwoClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberBooleanArrTwoClass_Attribute_var$1[] = {
	{'Z', "true"},
	{'Z', "false"},
	{'-'}
};

$NamedAttribute SingleMemberBooleanArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberBooleanArrTwoClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberBooleanArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrTwoClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberBooleanArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberBooleanArrTwoClass::*)()>(&SingleMemberBooleanArrTwoClass::init$))},
	{}
};

$ClassInfo _SingleMemberBooleanArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberBooleanArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberBooleanArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberBooleanArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberBooleanArrTwoClass));
}

void SingleMemberBooleanArrTwoClass::init$() {
}

SingleMemberBooleanArrTwoClass::SingleMemberBooleanArrTwoClass() {
}

$Class* SingleMemberBooleanArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanArrTwoClass, name, initialize, &_SingleMemberBooleanArrTwoClass_ClassInfo_, allocate$SingleMemberBooleanArrTwoClass);
	return class$;
}

$Class* SingleMemberBooleanArrTwoClass::class$ = nullptr;

} // UniTest