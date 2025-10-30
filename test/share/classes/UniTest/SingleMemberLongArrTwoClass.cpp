#include <UniTest/SingleMemberLongArrTwoClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberLongArrTwoClass_Attribute_var$1[] = {
	{'J', "4"},
	{'J', "5"},
	{'-'}
};

$NamedAttribute SingleMemberLongArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberLongArrTwoClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberLongArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrTwoClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberLongArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberLongArrTwoClass::*)()>(&SingleMemberLongArrTwoClass::init$))},
	{}
};

$ClassInfo _SingleMemberLongArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberLongArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberLongArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberLongArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberLongArrTwoClass));
}

void SingleMemberLongArrTwoClass::init$() {
}

SingleMemberLongArrTwoClass::SingleMemberLongArrTwoClass() {
}

$Class* SingleMemberLongArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongArrTwoClass, name, initialize, &_SingleMemberLongArrTwoClass_ClassInfo_, allocate$SingleMemberLongArrTwoClass);
	return class$;
}

$Class* SingleMemberLongArrTwoClass::class$ = nullptr;

} // UniTest