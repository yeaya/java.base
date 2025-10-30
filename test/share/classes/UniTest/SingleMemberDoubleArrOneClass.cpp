#include <UniTest/SingleMemberDoubleArrOneClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberDoubleArrOneClass_Attribute_var$1[] = {
	{'D', "7.0"},
	{'-'}
};

$NamedAttribute SingleMemberDoubleArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberDoubleArrOneClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberDoubleArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrOneClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberDoubleArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberDoubleArrOneClass::*)()>(&SingleMemberDoubleArrOneClass::init$))},
	{}
};

$ClassInfo _SingleMemberDoubleArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberDoubleArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberDoubleArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleArrOneClass_Annotations_
};

$Object* allocate$SingleMemberDoubleArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberDoubleArrOneClass));
}

void SingleMemberDoubleArrOneClass::init$() {
}

SingleMemberDoubleArrOneClass::SingleMemberDoubleArrOneClass() {
}

$Class* SingleMemberDoubleArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleArrOneClass, name, initialize, &_SingleMemberDoubleArrOneClass_ClassInfo_, allocate$SingleMemberDoubleArrOneClass);
	return class$;
}

$Class* SingleMemberDoubleArrOneClass::class$ = nullptr;

} // UniTest