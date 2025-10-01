#include <UniTest/SingleMemberBooleanOvrdDefClass.h>

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

$NamedAttribute SingleMemberBooleanOvrdDefClass_Attribute_var$0[] = {
	{"value", 'Z', "true"},
	{}
};
$CompoundAttribute _SingleMemberBooleanOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberBooleanWithDef;", SingleMemberBooleanOvrdDefClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberBooleanOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberBooleanOvrdDefClass::*)()>(&SingleMemberBooleanOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberBooleanOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberBooleanOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberBooleanOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberBooleanOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberBooleanOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberBooleanOvrdDefClass));
}

void SingleMemberBooleanOvrdDefClass::init$() {
}

SingleMemberBooleanOvrdDefClass::SingleMemberBooleanOvrdDefClass() {
}

$Class* SingleMemberBooleanOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberBooleanOvrdDefClass, name, initialize, &_SingleMemberBooleanOvrdDefClass_ClassInfo_, allocate$SingleMemberBooleanOvrdDefClass);
	return class$;
}

$Class* SingleMemberBooleanOvrdDefClass::class$ = nullptr;

} // UniTest