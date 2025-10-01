#include <UniTest/SingleMemberDoubleArrTwoClass.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberDoubleArrTwoClass_Attribute_var$1[] = {
	{'D', "7.0"},
	{'D', "8.0"},
	{'-'}
};

$NamedAttribute SingleMemberDoubleArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberDoubleArrTwoClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberDoubleArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrTwoClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberDoubleArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberDoubleArrTwoClass::*)()>(&SingleMemberDoubleArrTwoClass::init$))},
	{}
};

$ClassInfo _SingleMemberDoubleArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberDoubleArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberDoubleArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberDoubleArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberDoubleArrTwoClass));
}

void SingleMemberDoubleArrTwoClass::init$() {
}

SingleMemberDoubleArrTwoClass::SingleMemberDoubleArrTwoClass() {
}

$Class* SingleMemberDoubleArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleArrTwoClass, name, initialize, &_SingleMemberDoubleArrTwoClass_ClassInfo_, allocate$SingleMemberDoubleArrTwoClass);
	return class$;
}

$Class* SingleMemberDoubleArrTwoClass::class$ = nullptr;

} // UniTest