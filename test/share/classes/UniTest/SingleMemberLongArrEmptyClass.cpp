#include <UniTest/SingleMemberLongArrEmptyClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberLongArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberLongArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberLongArrEmptyClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberLongArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrEmptyClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberLongArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberLongArrEmptyClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberLongArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberLongArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberLongArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberLongArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberLongArrEmptyClass));
}

void SingleMemberLongArrEmptyClass::init$() {
}

SingleMemberLongArrEmptyClass::SingleMemberLongArrEmptyClass() {
}

$Class* SingleMemberLongArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongArrEmptyClass, name, initialize, &_SingleMemberLongArrEmptyClass_ClassInfo_, allocate$SingleMemberLongArrEmptyClass);
	return class$;
}

$Class* SingleMemberLongArrEmptyClass::class$ = nullptr;

} // UniTest