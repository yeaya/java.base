#include <UniTest/SingleMemberStringClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberStringClass_Attribute_var$0[] = {
	{"value", 's', "custom"},
	{}
};

$CompoundAttribute _SingleMemberStringClass_Annotations_[] = {
	{"LUniTest/SingleMemberString;", SingleMemberStringClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberStringClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberStringClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberStringClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberStringClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberStringClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringClass_Annotations_
};

$Object* allocate$SingleMemberStringClass($Class* clazz) {
	return $of($alloc(SingleMemberStringClass));
}

void SingleMemberStringClass::init$() {
}

SingleMemberStringClass::SingleMemberStringClass() {
}

$Class* SingleMemberStringClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringClass, name, initialize, &_SingleMemberStringClass_ClassInfo_, allocate$SingleMemberStringClass);
	return class$;
}

$Class* SingleMemberStringClass::class$ = nullptr;

} // UniTest