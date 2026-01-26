#include <UniTest/SingleMemberShortClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberShortClass_Attribute_var$0[] = {
	{"value", 'S', "2"},
	{}
};

$CompoundAttribute _SingleMemberShortClass_Annotations_[] = {
	{"LUniTest/SingleMemberShort;", SingleMemberShortClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberShortClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberShortClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberShortClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberShortClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberShortClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortClass_Annotations_
};

$Object* allocate$SingleMemberShortClass($Class* clazz) {
	return $of($alloc(SingleMemberShortClass));
}

void SingleMemberShortClass::init$() {
}

SingleMemberShortClass::SingleMemberShortClass() {
}

$Class* SingleMemberShortClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortClass, name, initialize, &_SingleMemberShortClass_ClassInfo_, allocate$SingleMemberShortClass);
	return class$;
}

$Class* SingleMemberShortClass::class$ = nullptr;

} // UniTest