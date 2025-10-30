#include <UniTest/SingleMemberCharOvrdDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberCharOvrdDefClass_Attribute_var$0[] = {
	{"value", 'C', "5"},
	{}
};

$CompoundAttribute _SingleMemberCharOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberCharWithDef;", SingleMemberCharOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberCharOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberCharOvrdDefClass::*)()>(&SingleMemberCharOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberCharOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberCharOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberCharOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberCharOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberCharOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberCharOvrdDefClass));
}

void SingleMemberCharOvrdDefClass::init$() {
}

SingleMemberCharOvrdDefClass::SingleMemberCharOvrdDefClass() {
}

$Class* SingleMemberCharOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberCharOvrdDefClass, name, initialize, &_SingleMemberCharOvrdDefClass_ClassInfo_, allocate$SingleMemberCharOvrdDefClass);
	return class$;
}

$Class* SingleMemberCharOvrdDefClass::class$ = nullptr;

} // UniTest