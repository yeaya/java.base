#include <UniTest/SingleMemberIntArrOneClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberIntArrOneClass_Attribute_var$1[] = {
	{'I', "3"},
	{'-'}
};

$NamedAttribute SingleMemberIntArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberIntArrOneClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberIntArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrOneClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberIntArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberIntArrOneClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberIntArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberIntArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberIntArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberIntArrOneClass_Annotations_
};

$Object* allocate$SingleMemberIntArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberIntArrOneClass));
}

void SingleMemberIntArrOneClass::init$() {
}

SingleMemberIntArrOneClass::SingleMemberIntArrOneClass() {
}

$Class* SingleMemberIntArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberIntArrOneClass, name, initialize, &_SingleMemberIntArrOneClass_ClassInfo_, allocate$SingleMemberIntArrOneClass);
	return class$;
}

$Class* SingleMemberIntArrOneClass::class$ = nullptr;

} // UniTest