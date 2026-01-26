#include <UniTest/SingleMemberByteArrEmptyClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberByteArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberByteArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberByteArrEmptyClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberByteArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrEmptyClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberByteArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberByteArrEmptyClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberByteArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberByteArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberByteArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberByteArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberByteArrEmptyClass));
}

void SingleMemberByteArrEmptyClass::init$() {
}

SingleMemberByteArrEmptyClass::SingleMemberByteArrEmptyClass() {
}

$Class* SingleMemberByteArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteArrEmptyClass, name, initialize, &_SingleMemberByteArrEmptyClass_ClassInfo_, allocate$SingleMemberByteArrEmptyClass);
	return class$;
}

$Class* SingleMemberByteArrEmptyClass::class$ = nullptr;

} // UniTest