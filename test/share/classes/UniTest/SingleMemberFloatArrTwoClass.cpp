#include <UniTest/SingleMemberFloatArrTwoClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberFloatArrTwoClass_Attribute_var$1[] = {
	{'F', "6.0"},
	{'F', "7.0"},
	{'-'}
};

$NamedAttribute SingleMemberFloatArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberFloatArrTwoClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberFloatArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrTwoClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberFloatArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberFloatArrTwoClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberFloatArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberFloatArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberFloatArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberFloatArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberFloatArrTwoClass));
}

void SingleMemberFloatArrTwoClass::init$() {
}

SingleMemberFloatArrTwoClass::SingleMemberFloatArrTwoClass() {
}

$Class* SingleMemberFloatArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatArrTwoClass, name, initialize, &_SingleMemberFloatArrTwoClass_ClassInfo_, allocate$SingleMemberFloatArrTwoClass);
	return class$;
}

$Class* SingleMemberFloatArrTwoClass::class$ = nullptr;

} // UniTest