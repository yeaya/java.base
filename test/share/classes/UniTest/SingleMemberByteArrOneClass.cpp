#include <UniTest/SingleMemberByteArrOneClass.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$Attribute SingleMemberByteArrOneClass_Attribute_var$1[] = {
	{'B', "1"},
	{'-'}
};

$NamedAttribute SingleMemberByteArrOneClass_Attribute_var$0[] = {
	{"value", '[', SingleMemberByteArrOneClass_Attribute_var$1},
	{}
};

$CompoundAttribute _SingleMemberByteArrOneClass_Annotations_[] = {
	{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrOneClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberByteArrOneClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberByteArrOneClass::*)()>(&SingleMemberByteArrOneClass::init$))},
	{}
};

$ClassInfo _SingleMemberByteArrOneClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberByteArrOneClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberByteArrOneClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteArrOneClass_Annotations_
};

$Object* allocate$SingleMemberByteArrOneClass($Class* clazz) {
	return $of($alloc(SingleMemberByteArrOneClass));
}

void SingleMemberByteArrOneClass::init$() {
}

SingleMemberByteArrOneClass::SingleMemberByteArrOneClass() {
}

$Class* SingleMemberByteArrOneClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteArrOneClass, name, initialize, &_SingleMemberByteArrOneClass_ClassInfo_, allocate$SingleMemberByteArrOneClass);
	return class$;
}

$Class* SingleMemberByteArrOneClass::class$ = nullptr;

} // UniTest