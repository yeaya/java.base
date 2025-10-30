#include <UniTest/SingleMemberStringArrTwoClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberStringArrTwoClass_Attribute_var$1[] = {
	{'s', "custom"},
	{'s', "paint"},
	{'-'}
};

$NamedAttribute SingleMemberStringArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberStringArrTwoClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberStringArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrTwoClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberStringArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberStringArrTwoClass::*)()>(&SingleMemberStringArrTwoClass::init$))},
	{}
};

$ClassInfo _SingleMemberStringArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberStringArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberStringArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberStringArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberStringArrTwoClass));
}

void SingleMemberStringArrTwoClass::init$() {
}

SingleMemberStringArrTwoClass::SingleMemberStringArrTwoClass() {
}

$Class* SingleMemberStringArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringArrTwoClass, name, initialize, &_SingleMemberStringArrTwoClass_ClassInfo_, allocate$SingleMemberStringArrTwoClass);
	return class$;
}

$Class* SingleMemberStringArrTwoClass::class$ = nullptr;

} // UniTest