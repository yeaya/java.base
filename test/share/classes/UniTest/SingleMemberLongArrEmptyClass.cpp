#include <UniTest/SingleMemberLongArrEmptyClass.h>

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

$Attribute SingleMemberLongArrEmptyClass_Attribute_var$1[] = {
	{'-'}
};

$NamedAttribute SingleMemberLongArrEmptyClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberLongArrEmptyClass_Attribute_var$1},
	{}
};
$CompoundAttribute _SingleMemberLongArrEmptyClass_Annotations_[] = {
	{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrEmptyClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberLongArrEmptyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberLongArrEmptyClass::*)()>(&SingleMemberLongArrEmptyClass::init$))},
	{}
};

$ClassInfo _SingleMemberLongArrEmptyClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberLongArrEmptyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberLongArrEmptyClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongArrEmptyClass_Annotations_
};

$Object* allocate$SingleMemberLongArrEmptyClass($Class* clazz) {
	return $of($alloc(SingleMemberLongArrEmptyClass));
}

void SingleMemberLongArrEmptyClass::init$() {
}

SingleMemberLongArrEmptyClass::SingleMemberLongArrEmptyClass() {
}

$Class* SingleMemberLongArrEmptyClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongArrEmptyClass, name, initialize, &_SingleMemberLongArrEmptyClass_ClassInfo_, allocate$SingleMemberLongArrEmptyClass);
	return class$;
}

$Class* SingleMemberLongArrEmptyClass::class$ = nullptr;

} // UniTest