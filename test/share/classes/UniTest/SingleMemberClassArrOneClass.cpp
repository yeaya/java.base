#include <UniTest/SingleMemberClassArrOneClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberClassArrOneClass_Attribute_var$1[] = {
	{'c', "Ljava/util/Map;"},
	{'-'}
};

$NamedAttribute SingleMemberClassArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberClassArrOneClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberClassArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrOneClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberClassArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberClassArrOneClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberClassArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberClassArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberClassArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassArrOneClass_Annotations_
};

$Object* allocate$SingleMemberClassArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberClassArrOneClass));
}

void SingleMemberClassArrOneClass::init$() {
}

SingleMemberClassArrOneClass::SingleMemberClassArrOneClass() {
}

$Class* SingleMemberClassArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassArrOneClass, name, initialize, &_SingleMemberClassArrOneClass_ClassInfo_, allocate$SingleMemberClassArrOneClass);
	return class$;
}

$Class* SingleMemberClassArrOneClass::class$ = nullptr;

} // UniTest