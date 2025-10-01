#include <UniTest/SingleMemberBooleanArrOneClass.h>

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

$Attribute SingleMemberBooleanArrOneClass_Attribute_var$1[] = {
	{'Z', "true"},
	{'-'}
};

$NamedAttribute SingleMemberBooleanArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberBooleanArrOneClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberBooleanArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrOneClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberBooleanArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberBooleanArrOneClass::*)()>(&SingleMemberBooleanArrOneClass::init$))},
	{}
};

$ClassInfo _SingleMemberBooleanArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberBooleanArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberBooleanArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanArrOneClass_Annotations_
};

$Object* allocate$SingleMemberBooleanArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberBooleanArrOneClass));
}

void SingleMemberBooleanArrOneClass::init$() {
}

SingleMemberBooleanArrOneClass::SingleMemberBooleanArrOneClass() {
}

$Class* SingleMemberBooleanArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanArrOneClass, name, initialize, &_SingleMemberBooleanArrOneClass_ClassInfo_, allocate$SingleMemberBooleanArrOneClass);
	return class$;
}

$Class* SingleMemberBooleanArrOneClass::class$ = nullptr;

} // UniTest