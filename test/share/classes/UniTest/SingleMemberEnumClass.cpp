#include <UniTest/SingleMemberEnumClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberEnumClass_Attribute_var$0[] = {
	{"value", 'e', "LUniTest/Stooge; MOE"},
	{}
};

$CompoundAttribute _SingleMemberEnumClass_Annotations_[] = {
	{"LUniTest/SingleMemberEnum;", SingleMemberEnumClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberEnumClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberEnumClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberEnumClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberEnumClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberEnumClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberEnumClass_Annotations_
};

$Object* allocate$SingleMemberEnumClass($Class* clazz) {
	return $of($alloc(SingleMemberEnumClass));
}

void SingleMemberEnumClass::init$() {
}

SingleMemberEnumClass::SingleMemberEnumClass() {
}

$Class* SingleMemberEnumClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberEnumClass, name, initialize, &_SingleMemberEnumClass_ClassInfo_, allocate$SingleMemberEnumClass);
	return class$;
}

$Class* SingleMemberEnumClass::class$ = nullptr;

} // UniTest