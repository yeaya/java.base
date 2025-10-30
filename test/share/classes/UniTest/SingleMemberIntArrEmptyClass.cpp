#include <UniTest/SingleMemberIntArrEmptyClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberIntArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberIntArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberIntArrEmptyClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberIntArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrEmptyClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberIntArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberIntArrEmptyClass::*)()>(&SingleMemberIntArrEmptyClass::init$))},
	{}
};

$ClassInfo _SingleMemberIntArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberIntArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberIntArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberIntArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberIntArrEmptyClass));
}

void SingleMemberIntArrEmptyClass::init$() {
}

SingleMemberIntArrEmptyClass::SingleMemberIntArrEmptyClass() {
}

$Class* SingleMemberIntArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntArrEmptyClass, name, initialize, &_SingleMemberIntArrEmptyClass_ClassInfo_, allocate$SingleMemberIntArrEmptyClass);
	return class$;
}

$Class* SingleMemberIntArrEmptyClass::class$ = nullptr;

} // UniTest