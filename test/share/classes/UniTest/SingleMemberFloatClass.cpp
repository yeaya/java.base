#include <UniTest/SingleMemberFloatClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberFloatClass_Attribute_var$0[] = {
	{"value", 'F', "6.0"},
	{}
};

$CompoundAttribute _SingleMemberFloatClass_Annotations_[] = {
	{"LUniTest/SingleMemberFloat;", SingleMemberFloatClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberFloatClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberFloatClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberFloatClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberFloatClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberFloatClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberFloatClass_Annotations_
};

$Object* allocate$SingleMemberFloatClass($Class* clazz) {
	return $of($alloc(SingleMemberFloatClass));
}

void SingleMemberFloatClass::init$() {
}

SingleMemberFloatClass::SingleMemberFloatClass() {
}

$Class* SingleMemberFloatClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberFloatClass, name, initialize, &_SingleMemberFloatClass_ClassInfo_, allocate$SingleMemberFloatClass);
	return class$;
}

$Class* SingleMemberFloatClass::class$ = nullptr;

} // UniTest