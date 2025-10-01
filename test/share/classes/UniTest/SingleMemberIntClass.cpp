#include <UniTest/SingleMemberIntClass.h>

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

$NamedAttribute SingleMemberIntClass_Attribute_var$0[] = {
	{"value", 'I', "3"},
	{}
};
$CompoundAttribute _SingleMemberIntClass_Annotations_[] = {
	{"LUniTest/SingleMemberInt;", SingleMemberIntClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberIntClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberIntClass::*)()>(&SingleMemberIntClass::init$))},
	{}
};

$ClassInfo _SingleMemberIntClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberIntClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberIntClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntClass_Annotations_
};

$Object* allocate$SingleMemberIntClass($Class* clazz) {
	return $of($alloc(SingleMemberIntClass));
}

void SingleMemberIntClass::init$() {
}

SingleMemberIntClass::SingleMemberIntClass() {
}

$Class* SingleMemberIntClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntClass, name, initialize, &_SingleMemberIntClass_ClassInfo_, allocate$SingleMemberIntClass);
	return class$;
}

$Class* SingleMemberIntClass::class$ = nullptr;

} // UniTest