#include <UniTest/SingleMemberDoubleOvrdDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberDoubleOvrdDefClass_Attribute_var$0[] = {
	{"value", 'D', "7.0"},
	{}
};

$CompoundAttribute _SingleMemberDoubleOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberDoubleWithDef;", SingleMemberDoubleOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberDoubleOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberDoubleOvrdDefClass::*)()>(&SingleMemberDoubleOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberDoubleOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberDoubleOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberDoubleOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberDoubleOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberDoubleOvrdDefClass));
}

void SingleMemberDoubleOvrdDefClass::init$() {
}

SingleMemberDoubleOvrdDefClass::SingleMemberDoubleOvrdDefClass() {
}

$Class* SingleMemberDoubleOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleOvrdDefClass, name, initialize, &_SingleMemberDoubleOvrdDefClass_ClassInfo_, allocate$SingleMemberDoubleOvrdDefClass);
	return class$;
}

$Class* SingleMemberDoubleOvrdDefClass::class$ = nullptr;

} // UniTest