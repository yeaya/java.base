#include <UniTest/SingleMemberByteClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

$NamedAttribute SingleMemberByteClass_Attribute_var$0[] = {
	{"value", 'B', "1"},
	{}
};

$CompoundAttribute _SingleMemberByteClass_Annotations_[] = {
	{"LUniTest/SingleMemberByte;", SingleMemberByteClass_Attribute_var$0},
	{}
};

$MethodInfo _SingleMemberByteClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberByteClass::*)()>(&SingleMemberByteClass::init$))},
	{}
};

$ClassInfo _SingleMemberByteClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberByteClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberByteClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteClass_Annotations_
};

$Object* allocate$SingleMemberByteClass($Class* clazz) {
	return $of($alloc(SingleMemberByteClass));
}

void SingleMemberByteClass::init$() {
}

SingleMemberByteClass::SingleMemberByteClass() {
}

$Class* SingleMemberByteClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteClass, name, initialize, &_SingleMemberByteClass_ClassInfo_, allocate$SingleMemberByteClass);
	return class$;
}

$Class* SingleMemberByteClass::class$ = nullptr;

} // UniTest