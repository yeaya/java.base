#include <UniTest/SingleMemberStringArrOneClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberStringArrOneClass_Attribute_var$1[] = {
	{'s', "custom"},
	{'-'}
};

$NamedAttribute SingleMemberStringArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberStringArrOneClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberStringArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrOneClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberStringArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberStringArrOneClass::*)()>(&SingleMemberStringArrOneClass::init$))},
	{}
};

$ClassInfo _SingleMemberStringArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberStringArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberStringArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberStringArrOneClass_Annotations_
};

$Object* allocate$SingleMemberStringArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberStringArrOneClass));
}

void SingleMemberStringArrOneClass::init$() {
}

SingleMemberStringArrOneClass::SingleMemberStringArrOneClass() {
}

$Class* SingleMemberStringArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberStringArrOneClass, name, initialize, &_SingleMemberStringArrOneClass_ClassInfo_, allocate$SingleMemberStringArrOneClass);
	return class$;
}

$Class* SingleMemberStringArrOneClass::class$ = nullptr;

} // UniTest