#include <UniTest/SingleMemberCharClass.h>

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

$NamedAttribute SingleMemberCharClass_Attribute_var$0[] = {
	{"value", 'C', "5"},
	{}
};
$CompoundAttribute _SingleMemberCharClass_Annotations_[] = {
	{"LUniTest/SingleMemberChar;", SingleMemberCharClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberCharClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberCharClass::*)()>(&SingleMemberCharClass::init$))},
	{}
};

$ClassInfo _SingleMemberCharClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberCharClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberCharClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharClass_Annotations_
};

$Object* allocate$SingleMemberCharClass($Class* clazz) {
	return $of($alloc(SingleMemberCharClass));
}

void SingleMemberCharClass::init$() {
}

SingleMemberCharClass::SingleMemberCharClass() {
}

$Class* SingleMemberCharClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharClass, name, initialize, &_SingleMemberCharClass_ClassInfo_, allocate$SingleMemberCharClass);
	return class$;
}

$Class* SingleMemberCharClass::class$ = nullptr;

} // UniTest