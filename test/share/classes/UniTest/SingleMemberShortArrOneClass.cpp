#include <UniTest/SingleMemberShortArrOneClass.h>

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

$Attribute SingleMemberShortArrOneClass_Attribute_var$1[] = {
	{'S', "2"},
	{'-'}
};

$NamedAttribute SingleMemberShortArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberShortArrOneClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberShortArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrOneClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberShortArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberShortArrOneClass::*)()>(&SingleMemberShortArrOneClass::init$))},
	{}
};

$ClassInfo _SingleMemberShortArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberShortArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberShortArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortArrOneClass_Annotations_
};

$Object* allocate$SingleMemberShortArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberShortArrOneClass));
}

void SingleMemberShortArrOneClass::init$() {
}

SingleMemberShortArrOneClass::SingleMemberShortArrOneClass() {
}

$Class* SingleMemberShortArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortArrOneClass, name, initialize, &_SingleMemberShortArrOneClass_ClassInfo_, allocate$SingleMemberShortArrOneClass);
	return class$;
}

$Class* SingleMemberShortArrOneClass::class$ = nullptr;

} // UniTest