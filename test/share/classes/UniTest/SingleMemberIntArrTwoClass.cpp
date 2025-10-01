#include <UniTest/SingleMemberIntArrTwoClass.h>

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

$Attribute SingleMemberIntArrTwoClass_Attribute_var$1[] = {
	{'I', "3"},
	{'I', "4"},
	{'-'}
};

$NamedAttribute SingleMemberIntArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberIntArrTwoClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberIntArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrTwoClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberIntArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberIntArrTwoClass::*)()>(&SingleMemberIntArrTwoClass::init$))},
	{}
};

$ClassInfo _SingleMemberIntArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberIntArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberIntArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberIntArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberIntArrTwoClass));
}

void SingleMemberIntArrTwoClass::init$() {
}

SingleMemberIntArrTwoClass::SingleMemberIntArrTwoClass() {
}

$Class* SingleMemberIntArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntArrTwoClass, name, initialize, &_SingleMemberIntArrTwoClass_ClassInfo_, allocate$SingleMemberIntArrTwoClass);
	return class$;
}

$Class* SingleMemberIntArrTwoClass::class$ = nullptr;

} // UniTest