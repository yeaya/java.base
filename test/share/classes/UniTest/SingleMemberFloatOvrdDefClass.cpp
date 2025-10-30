#include <UniTest/SingleMemberFloatOvrdDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberFloatOvrdDefClass_Attribute_var$0[] = {
	{"value", 'F', "6.0"},
	{}
};

$CompoundAttribute _SingleMemberFloatOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberFloatWithDef;", SingleMemberFloatOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberFloatOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberFloatOvrdDefClass::*)()>(&SingleMemberFloatOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberFloatOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberFloatOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberFloatOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberFloatOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberFloatOvrdDefClass));
}

void SingleMemberFloatOvrdDefClass::init$() {
}

SingleMemberFloatOvrdDefClass::SingleMemberFloatOvrdDefClass() {
}

$Class* SingleMemberFloatOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatOvrdDefClass, name, initialize, &_SingleMemberFloatOvrdDefClass_ClassInfo_, allocate$SingleMemberFloatOvrdDefClass);
	return class$;
}

$Class* SingleMemberFloatOvrdDefClass::class$ = nullptr;

} // UniTest