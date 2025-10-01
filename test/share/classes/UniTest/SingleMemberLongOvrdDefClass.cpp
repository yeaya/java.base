#include <UniTest/SingleMemberLongOvrdDefClass.h>

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

$NamedAttribute SingleMemberLongOvrdDefClass_Attribute_var$0[] = {
	{"value", 'J', "4"},
	{}
};
$CompoundAttribute _SingleMemberLongOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberLongWithDef;", SingleMemberLongOvrdDefClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberLongOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberLongOvrdDefClass::*)()>(&SingleMemberLongOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberLongOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberLongOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberLongOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberLongOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberLongOvrdDefClass));
}

void SingleMemberLongOvrdDefClass::init$() {
}

SingleMemberLongOvrdDefClass::SingleMemberLongOvrdDefClass() {
}

$Class* SingleMemberLongOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongOvrdDefClass, name, initialize, &_SingleMemberLongOvrdDefClass_ClassInfo_, allocate$SingleMemberLongOvrdDefClass);
	return class$;
}

$Class* SingleMemberLongOvrdDefClass::class$ = nullptr;

} // UniTest