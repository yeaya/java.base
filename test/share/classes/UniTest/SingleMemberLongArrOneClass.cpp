#include <UniTest/SingleMemberLongArrOneClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberLongArrOneClass_Attribute_var$1[] = {
	{'J', "4"},
	{'-'}
};

$NamedAttribute SingleMemberLongArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberLongArrOneClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberLongArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrOneClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberLongArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberLongArrOneClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberLongArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberLongArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberLongArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongArrOneClass_Annotations_
};

$Object* allocate$SingleMemberLongArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberLongArrOneClass));
}

void SingleMemberLongArrOneClass::init$() {
}

SingleMemberLongArrOneClass::SingleMemberLongArrOneClass() {
}

$Class* SingleMemberLongArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongArrOneClass, name, initialize, &_SingleMemberLongArrOneClass_ClassInfo_, allocate$SingleMemberLongArrOneClass);
	return class$;
}

$Class* SingleMemberLongArrOneClass::class$ = nullptr;

} // UniTest