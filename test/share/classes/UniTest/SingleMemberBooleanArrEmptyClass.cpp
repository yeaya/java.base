#include <UniTest/SingleMemberBooleanArrEmptyClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberBooleanArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberBooleanArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberBooleanArrEmptyClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberBooleanArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrEmptyClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberBooleanArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberBooleanArrEmptyClass::*)()>(&SingleMemberBooleanArrEmptyClass::init$))},
	{}
};

$ClassInfo _SingleMemberBooleanArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberBooleanArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberBooleanArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberBooleanArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberBooleanArrEmptyClass));
}

void SingleMemberBooleanArrEmptyClass::init$() {
}

SingleMemberBooleanArrEmptyClass::SingleMemberBooleanArrEmptyClass() {
}

$Class* SingleMemberBooleanArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanArrEmptyClass, name, initialize, &_SingleMemberBooleanArrEmptyClass_ClassInfo_, allocate$SingleMemberBooleanArrEmptyClass);
	return class$;
}

$Class* SingleMemberBooleanArrEmptyClass::class$ = nullptr;

} // UniTest