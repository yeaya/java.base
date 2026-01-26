#include <UniTest/SingleMemberClassArrEmptyClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberClassArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberClassArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberClassArrEmptyClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberClassArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrEmptyClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberClassArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberClassArrEmptyClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberClassArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberClassArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberClassArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberClassArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberClassArrEmptyClass));
}

void SingleMemberClassArrEmptyClass::init$() {
}

SingleMemberClassArrEmptyClass::SingleMemberClassArrEmptyClass() {
}

$Class* SingleMemberClassArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassArrEmptyClass, name, initialize, &_SingleMemberClassArrEmptyClass_ClassInfo_, allocate$SingleMemberClassArrEmptyClass);
	return class$;
}

$Class* SingleMemberClassArrEmptyClass::class$ = nullptr;

} // UniTest