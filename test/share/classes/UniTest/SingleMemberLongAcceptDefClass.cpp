#include <UniTest/SingleMemberLongAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberLongAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberLongWithDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberLongAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SingleMemberLongAcceptDefClass::*)()>(&SingleMemberLongAcceptDefClass::init$))},
	{}
};

$ClassInfo _SingleMemberLongAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberLongAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberLongAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberLongAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberLongAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberLongAcceptDefClass));
}

void SingleMemberLongAcceptDefClass::init$() {
}

SingleMemberLongAcceptDefClass::SingleMemberLongAcceptDefClass() {
}

$Class* SingleMemberLongAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberLongAcceptDefClass, name, initialize, &_SingleMemberLongAcceptDefClass_ClassInfo_, allocate$SingleMemberLongAcceptDefClass);
	return class$;
}

$Class* SingleMemberLongAcceptDefClass::class$ = nullptr;

} // UniTest