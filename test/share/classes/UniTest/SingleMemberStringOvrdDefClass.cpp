#include <UniTest/SingleMemberStringOvrdDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberStringOvrdDefClass_Attribute_var$0[] = {
	{"value", 's', "custom"},
	{}
};

$CompoundAttribute _SingleMemberStringOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberStringWithDef;", SingleMemberStringOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberStringOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberStringOvrdDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberStringOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberStringOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberStringOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberStringOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberStringOvrdDefClass));
}

void SingleMemberStringOvrdDefClass::init$() {
}

SingleMemberStringOvrdDefClass::SingleMemberStringOvrdDefClass() {
}

$Class* SingleMemberStringOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringOvrdDefClass, name, initialize, &_SingleMemberStringOvrdDefClass_ClassInfo_, allocate$SingleMemberStringOvrdDefClass);
	return class$;
}

$Class* SingleMemberStringOvrdDefClass::class$ = nullptr;

} // UniTest