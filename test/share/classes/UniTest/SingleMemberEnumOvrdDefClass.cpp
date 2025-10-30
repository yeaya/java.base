#include <UniTest/SingleMemberEnumOvrdDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberEnumOvrdDefClass_Attribute_var$0[] = {
	{"value", 'e', "LUniTest/Stooge; MOE"},
	{}
};

$CompoundAttribute _SingleMemberEnumOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberEnumWithDef;", SingleMemberEnumOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberEnumOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberEnumOvrdDefClass::*)()>(&SingleMemberEnumOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberEnumOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberEnumOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberEnumOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberEnumOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberEnumOvrdDefClass));
}

void SingleMemberEnumOvrdDefClass::init$() {
}

SingleMemberEnumOvrdDefClass::SingleMemberEnumOvrdDefClass() {
}

$Class* SingleMemberEnumOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumOvrdDefClass, name, initialize, &_SingleMemberEnumOvrdDefClass_ClassInfo_, allocate$SingleMemberEnumOvrdDefClass);
	return class$;
}

$Class* SingleMemberEnumOvrdDefClass::class$ = nullptr;

} // UniTest