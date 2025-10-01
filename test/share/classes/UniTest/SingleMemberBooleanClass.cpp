#include <UniTest/SingleMemberBooleanClass.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberBooleanClass_Attribute_var$0[] = {
	{"value", 'Z', "true"},
	{}
};
$CompoundAttribute _SingleMemberBooleanClass_Annotations_[] = {
	{"LUniTest/SingleMemberBoolean;", SingleMemberBooleanClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberBooleanClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberBooleanClass::*)()>(&SingleMemberBooleanClass::init$))},
	{}
};

$ClassInfo _SingleMemberBooleanClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberBooleanClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberBooleanClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanClass_Annotations_
};

$Object* allocate$SingleMemberBooleanClass($Class* clazz) {
	return $of($alloc(SingleMemberBooleanClass));
}

void SingleMemberBooleanClass::init$() {
}

SingleMemberBooleanClass::SingleMemberBooleanClass() {
}

$Class* SingleMemberBooleanClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanClass, name, initialize, &_SingleMemberBooleanClass_ClassInfo_, allocate$SingleMemberBooleanClass);
	return class$;
}

$Class* SingleMemberBooleanClass::class$ = nullptr;

} // UniTest