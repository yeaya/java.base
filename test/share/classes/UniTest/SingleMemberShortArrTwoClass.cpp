#include <UniTest/SingleMemberShortArrTwoClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberShortArrTwoClass_Attribute_var$1[] = {
	{'S', "2"},
	{'S', "3"},
	{'-'}
};

$NamedAttribute SingleMemberShortArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberShortArrTwoClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberShortArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrTwoClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberShortArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberShortArrTwoClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberShortArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberShortArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberShortArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberShortArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberShortArrTwoClass));
}

void SingleMemberShortArrTwoClass::init$() {
}

SingleMemberShortArrTwoClass::SingleMemberShortArrTwoClass() {
}

$Class* SingleMemberShortArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortArrTwoClass, name, initialize, &_SingleMemberShortArrTwoClass_ClassInfo_, allocate$SingleMemberShortArrTwoClass);
	return class$;
}

$Class* SingleMemberShortArrTwoClass::class$ = nullptr;

} // UniTest