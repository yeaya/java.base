#include <UniTest/SingleMemberByteArrTwoClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberByteArrTwoClass_Attribute_var$1[] = {
	{'B', "1"},
	{'B', "2"},
	{'-'}
};

$NamedAttribute SingleMemberByteArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberByteArrTwoClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberByteArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrTwoClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberByteArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberByteArrTwoClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberByteArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberByteArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberByteArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberByteArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberByteArrTwoClass));
}

void SingleMemberByteArrTwoClass::init$() {
}

SingleMemberByteArrTwoClass::SingleMemberByteArrTwoClass() {
}

$Class* SingleMemberByteArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteArrTwoClass, name, initialize, &_SingleMemberByteArrTwoClass_ClassInfo_, allocate$SingleMemberByteArrTwoClass);
	return class$;
}

$Class* SingleMemberByteArrTwoClass::class$ = nullptr;

} // UniTest