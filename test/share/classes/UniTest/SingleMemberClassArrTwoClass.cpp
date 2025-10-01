#include <UniTest/SingleMemberClassArrTwoClass.h>

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

$Attribute SingleMemberClassArrTwoClass_Attribute_var$1[] = {
	{'c', "Ljava/util/Map;"},
	{'c', "Ljava/util/Set;"},
	{'-'}
};

$NamedAttribute SingleMemberClassArrTwoClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberClassArrTwoClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberClassArrTwoClass_Annotations_[] = {
	{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrTwoClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberClassArrTwoClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberClassArrTwoClass::*)()>(&SingleMemberClassArrTwoClass::init$))},
	{}
};

$ClassInfo _SingleMemberClassArrTwoClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberClassArrTwoClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberClassArrTwoClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassArrTwoClass_Annotations_
};

$Object* allocate$SingleMemberClassArrTwoClass($Class* clazz) {
	return $of($alloc(SingleMemberClassArrTwoClass));
}

void SingleMemberClassArrTwoClass::init$() {
}

SingleMemberClassArrTwoClass::SingleMemberClassArrTwoClass() {
}

$Class* SingleMemberClassArrTwoClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassArrTwoClass, name, initialize, &_SingleMemberClassArrTwoClass_ClassInfo_, allocate$SingleMemberClassArrTwoClass);
	return class$;
}

$Class* SingleMemberClassArrTwoClass::class$ = nullptr;

} // UniTest