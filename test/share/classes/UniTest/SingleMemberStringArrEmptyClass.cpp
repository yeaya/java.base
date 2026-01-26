#include <UniTest/SingleMemberStringArrEmptyClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberStringArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberStringArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberStringArrEmptyClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberStringArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrEmptyClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberStringArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberStringArrEmptyClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberStringArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberStringArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberStringArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberStringArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberStringArrEmptyClass));
}

void SingleMemberStringArrEmptyClass::init$() {
}

SingleMemberStringArrEmptyClass::SingleMemberStringArrEmptyClass() {
}

$Class* SingleMemberStringArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringArrEmptyClass, name, initialize, &_SingleMemberStringArrEmptyClass_ClassInfo_, allocate$SingleMemberStringArrEmptyClass);
	return class$;
}

$Class* SingleMemberStringArrEmptyClass::class$ = nullptr;

} // UniTest