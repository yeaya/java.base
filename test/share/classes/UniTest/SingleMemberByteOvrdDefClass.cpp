#include <UniTest/SingleMemberByteOvrdDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberByteOvrdDefClass_Attribute_var$0[] = {
	{"value", 'B', "1"},
	{}
};

$CompoundAttribute _SingleMemberByteOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberByteWithDef;", SingleMemberByteOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberByteOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberByteOvrdDefClass::*)()>(&SingleMemberByteOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberByteOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberByteOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberByteOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberByteOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberByteOvrdDefClass));
}

void SingleMemberByteOvrdDefClass::init$() {
}

SingleMemberByteOvrdDefClass::SingleMemberByteOvrdDefClass() {
}

$Class* SingleMemberByteOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteOvrdDefClass, name, initialize, &_SingleMemberByteOvrdDefClass_ClassInfo_, allocate$SingleMemberByteOvrdDefClass);
	return class$;
}

$Class* SingleMemberByteOvrdDefClass::class$ = nullptr;

} // UniTest