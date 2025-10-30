#include <UniTest/SingleMemberFloatArrEmptyClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberFloatArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberFloatArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberFloatArrEmptyClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberFloatArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrEmptyClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberFloatArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberFloatArrEmptyClass::*)()>(&SingleMemberFloatArrEmptyClass::init$))},
	{}
};

$ClassInfo _SingleMemberFloatArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberFloatArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberFloatArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberFloatArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberFloatArrEmptyClass));
}

void SingleMemberFloatArrEmptyClass::init$() {
}

SingleMemberFloatArrEmptyClass::SingleMemberFloatArrEmptyClass() {
}

$Class* SingleMemberFloatArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatArrEmptyClass, name, initialize, &_SingleMemberFloatArrEmptyClass_ClassInfo_, allocate$SingleMemberFloatArrEmptyClass);
	return class$;
}

$Class* SingleMemberFloatArrEmptyClass::class$ = nullptr;

} // UniTest