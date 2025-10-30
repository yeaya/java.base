#include <UniTest/SingleMemberDoubleArrEmptyClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberDoubleArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberDoubleArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberDoubleArrEmptyClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberDoubleArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrEmptyClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberDoubleArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberDoubleArrEmptyClass::*)()>(&SingleMemberDoubleArrEmptyClass::init$))},
	{}
};

$ClassInfo _SingleMemberDoubleArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberDoubleArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberDoubleArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberDoubleArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberDoubleArrEmptyClass));
}

void SingleMemberDoubleArrEmptyClass::init$() {
}

SingleMemberDoubleArrEmptyClass::SingleMemberDoubleArrEmptyClass() {
}

$Class* SingleMemberDoubleArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleArrEmptyClass, name, initialize, &_SingleMemberDoubleArrEmptyClass_ClassInfo_, allocate$SingleMemberDoubleArrEmptyClass);
	return class$;
}

$Class* SingleMemberDoubleArrEmptyClass::class$ = nullptr;

} // UniTest