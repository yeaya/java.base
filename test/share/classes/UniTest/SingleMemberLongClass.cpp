#include <UniTest/SingleMemberLongClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberLongClass_Attribute_var$0[] = {
	{"value", 'J', "4"},
	{}
};

$CompoundAttribute _SingleMemberLongClass_Annotations_[] = {
	{"LUniTest/SingleMemberLong;", SingleMemberLongClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberLongClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberLongClass::*)()>(&SingleMemberLongClass::init$))},
	{}
};

$ClassInfo _SingleMemberLongClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberLongClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberLongClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongClass_Annotations_
};

$Object* allocate$SingleMemberLongClass($Class* clazz) {
	return $of($alloc(SingleMemberLongClass));
}

void SingleMemberLongClass::init$() {
}

SingleMemberLongClass::SingleMemberLongClass() {
}

$Class* SingleMemberLongClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongClass, name, initialize, &_SingleMemberLongClass_ClassInfo_, allocate$SingleMemberLongClass);
	return class$;
}

$Class* SingleMemberLongClass::class$ = nullptr;

} // UniTest