#include <UniTest/SingleMemberDoubleClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberDoubleClass_Attribute_var$0[] = {
	{"value", 'D', "7.0"},
	{}
};

$CompoundAttribute _SingleMemberDoubleClass_Annotations_[] = {
	{"LUniTest/SingleMemberDouble;", SingleMemberDoubleClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberDoubleClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberDoubleClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberDoubleClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberDoubleClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberDoubleClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberDoubleClass_Annotations_
};

$Object* allocate$SingleMemberDoubleClass($Class* clazz) {
	return $of($alloc(SingleMemberDoubleClass));
}

void SingleMemberDoubleClass::init$() {
}

SingleMemberDoubleClass::SingleMemberDoubleClass() {
}

$Class* SingleMemberDoubleClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberDoubleClass, name, initialize, &_SingleMemberDoubleClass_ClassInfo_, allocate$SingleMemberDoubleClass);
	return class$;
}

$Class* SingleMemberDoubleClass::class$ = nullptr;

} // UniTest