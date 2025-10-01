#include <UniTest/SingleMemberClassOvrdDefClass.h>

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

$NamedAttribute SingleMemberClassOvrdDefClass_Attribute_var$0[] = {
	{"value", 'c', "Ljava/util/Map;"},
	{}
};
$CompoundAttribute _SingleMemberClassOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberClassWithDef;", SingleMemberClassOvrdDefClass_Attribute_var$0},
	{}
};


$MethodInfo _SingleMemberClassOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberClassOvrdDefClass::*)()>(&SingleMemberClassOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberClassOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberClassOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberClassOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberClassOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberClassOvrdDefClass));
}

void SingleMemberClassOvrdDefClass::init$() {
}

SingleMemberClassOvrdDefClass::SingleMemberClassOvrdDefClass() {
}

$Class* SingleMemberClassOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassOvrdDefClass, name, initialize, &_SingleMemberClassOvrdDefClass_ClassInfo_, allocate$SingleMemberClassOvrdDefClass);
	return class$;
}

$Class* SingleMemberClassOvrdDefClass::class$ = nullptr;

} // UniTest