#include <UniTest/SingleMemberShortOvrdDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberShortOvrdDefClass_Attribute_var$0[] = {
	{"value", 'S', "2"},
	{}
};

$CompoundAttribute _SingleMemberShortOvrdDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberShortWithDef;", SingleMemberShortOvrdDefClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberShortOvrdDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberShortOvrdDefClass::*)()>(&SingleMemberShortOvrdDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberShortOvrdDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberShortOvrdDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberShortOvrdDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberShortOvrdDefClass_Annotations_
};

$Object* allocate$SingleMemberShortOvrdDefClass($Class* clazz) {
	return $of($alloc(SingleMemberShortOvrdDefClass));
}

void SingleMemberShortOvrdDefClass::init$() {
}

SingleMemberShortOvrdDefClass::SingleMemberShortOvrdDefClass() {
}

$Class* SingleMemberShortOvrdDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberShortOvrdDefClass, name, initialize, &_SingleMemberShortOvrdDefClass_ClassInfo_, allocate$SingleMemberShortOvrdDefClass);
	return class$;
}

$Class* SingleMemberShortOvrdDefClass::class$ = nullptr;

} // UniTest