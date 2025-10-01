#include <UniTest/SingleMemberStringArrOvrdDefClass.h>

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

$Attribute SingleMemberStringArrOvrdDefClass_Attribute_var$1[] = {
	{'s', "custom"},
	{'-'}
};

$NamedAttribute SingleMemberStringArrOvrdDefClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberStringArrOvrdDefClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberStringArrOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberStringArrayDef;", SingleMemberStringArrOvrdDefClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberStringArrOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberStringArrOvrdDefClass::*)()>(&SingleMemberStringArrOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberStringArrOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberStringArrOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberStringArrOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringArrOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberStringArrOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberStringArrOvrdDefClass));
}

void SingleMemberStringArrOvrdDefClass::init$() {
}

SingleMemberStringArrOvrdDefClass::SingleMemberStringArrOvrdDefClass() {
}

$Class* SingleMemberStringArrOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringArrOvrdDefClass, name, initialize, &_SingleMemberStringArrOvrdDefClass_ClassInfo_, allocate$SingleMemberStringArrOvrdDefClass);
	return class$;
}

$Class* SingleMemberStringArrOvrdDefClass::class$ = nullptr;

} // UniTest