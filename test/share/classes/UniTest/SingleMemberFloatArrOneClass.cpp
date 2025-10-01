#include <UniTest/SingleMemberFloatArrOneClass.h>

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

$Attribute SingleMemberFloatArrOneClass_Attribute_var$1[] = {
	{'F', "6.0"},
	{'-'}
};

$NamedAttribute SingleMemberFloatArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberFloatArrOneClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberFloatArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrOneClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberFloatArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberFloatArrOneClass::*)()>(&SingleMemberFloatArrOneClass::init$))},
	{}
};

$ClassInfo _SingleMemberFloatArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberFloatArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberFloatArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatArrOneClass_Annotations_
};

$Object* allocate$SingleMemberFloatArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberFloatArrOneClass));
}

void SingleMemberFloatArrOneClass::init$() {
}

SingleMemberFloatArrOneClass::SingleMemberFloatArrOneClass() {
}

$Class* SingleMemberFloatArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatArrOneClass, name, initialize, &_SingleMemberFloatArrOneClass_ClassInfo_, allocate$SingleMemberFloatArrOneClass);
	return class$;
}

$Class* SingleMemberFloatArrOneClass::class$ = nullptr;

} // UniTest