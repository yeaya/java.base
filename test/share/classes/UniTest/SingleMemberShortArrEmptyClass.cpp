#include <UniTest/SingleMemberShortArrEmptyClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberShortArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberShortArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberShortArrEmptyClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberShortArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrEmptyClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberShortArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberShortArrEmptyClass::*)()>(&SingleMemberShortArrEmptyClass::init$))},
	{}
};

$ClassInfo _SingleMemberShortArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberShortArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberShortArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberShortArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberShortArrEmptyClass));
}

void SingleMemberShortArrEmptyClass::init$() {
}

SingleMemberShortArrEmptyClass::SingleMemberShortArrEmptyClass() {
}

$Class* SingleMemberShortArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortArrEmptyClass, name, initialize, &_SingleMemberShortArrEmptyClass_ClassInfo_, allocate$SingleMemberShortArrEmptyClass);
	return class$;
}

$Class* SingleMemberShortArrEmptyClass::class$ = nullptr;

} // UniTest