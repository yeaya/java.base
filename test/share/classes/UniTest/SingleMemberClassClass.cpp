#include <UniTest/SingleMemberClassClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberClassClass_Attribute_var$0[] = {
	{"value", 'c', "Ljava/util/Map;"},
	{}
};

$CompoundAttribute _SingleMemberClassClass_Annotations_[] = {
	{"LUniTest/SingleMemberClass;", SingleMemberClassClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberClassClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberClassClass::*)()>(&SingleMemberClassClass::init$))},
	{}
};

$ClassInfo _SingleMemberClassClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberClassClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberClassClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberClassClass_Annotations_
};

$Object* allocate$SingleMemberClassClass($Class* clazz) {
	return $of($alloc(SingleMemberClassClass));
}

void SingleMemberClassClass::init$() {
}

SingleMemberClassClass::SingleMemberClassClass() {
}

$Class* SingleMemberClassClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberClassClass, name, initialize, &_SingleMemberClassClass_ClassInfo_, allocate$SingleMemberClassClass);
	return class$;
}

$Class* SingleMemberClassClass::class$ = nullptr;

} // UniTest