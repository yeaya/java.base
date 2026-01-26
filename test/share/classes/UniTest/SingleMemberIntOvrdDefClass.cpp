#include <UniTest/SingleMemberIntOvrdDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberIntOvrdDefClass_Attribute_var$0[] = {
	{"value", 'I', "3"},
	{}
};

$CompoundAttribute _SingleMemberIntOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberIntWithDef;", SingleMemberIntOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberIntOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberIntOvrdDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberIntOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberIntOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberIntOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberIntOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberIntOvrdDefClass));
}

void SingleMemberIntOvrdDefClass::init$() {
}

SingleMemberIntOvrdDefClass::SingleMemberIntOvrdDefClass() {
}

$Class* SingleMemberIntOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntOvrdDefClass, name, initialize, &_SingleMemberIntOvrdDefClass_ClassInfo_, allocate$SingleMemberIntOvrdDefClass);
	return class$;
}

$Class* SingleMemberIntOvrdDefClass::class$ = nullptr;

} // UniTest