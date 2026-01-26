#include <UniTest/SingleMemberByteAcceptDefClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _SingleMemberByteAcceptDefClass_Annotations_[] = {
	{"LUniTest/SingleMemberByteWithDef;", nullptr},
	{}
};

$MethodInfo _SingleMemberByteAcceptDefClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(SingleMemberByteAcceptDefClass, init$, void)},
	{}
};

$ClassInfo _SingleMemberByteAcceptDefClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.SingleMemberByteAcceptDefClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleMemberByteAcceptDefClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SingleMemberByteAcceptDefClass_Annotations_
};

$Object* allocate$SingleMemberByteAcceptDefClass($Class* clazz) {
	return $of($alloc(SingleMemberByteAcceptDefClass));
}

void SingleMemberByteAcceptDefClass::init$() {
}

SingleMemberByteAcceptDefClass::SingleMemberByteAcceptDefClass() {
}

$Class* SingleMemberByteAcceptDefClass::load$($String* name, bool initialize) {
	$loadClass(SingleMemberByteAcceptDefClass, name, initialize, &_SingleMemberByteAcceptDefClass_ClassInfo_, allocate$SingleMemberByteAcceptDefClass);
	return class$;
}

$Class* SingleMemberByteAcceptDefClass::class$ = nullptr;

} // UniTest