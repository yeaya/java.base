#include <UniTest/scalarTypesAcceptDefaultClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {

$CompoundAttribute _scalarTypesAcceptDefaultClass_Annotations_[] = {
	{"LUniTest/ScalarTypesWithDefault;", nullptr},
	{}
};

$MethodInfo _scalarTypesAcceptDefaultClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(scalarTypesAcceptDefaultClass, init$, void)},
	{}
};

$ClassInfo _scalarTypesAcceptDefaultClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.scalarTypesAcceptDefaultClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_scalarTypesAcceptDefaultClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_scalarTypesAcceptDefaultClass_Annotations_
};

$Object* allocate$scalarTypesAcceptDefaultClass($Class* clazz) {
	return $of($alloc(scalarTypesAcceptDefaultClass));
}

void scalarTypesAcceptDefaultClass::init$() {
}

scalarTypesAcceptDefaultClass::scalarTypesAcceptDefaultClass() {
}

$Class* scalarTypesAcceptDefaultClass::load$($String* name, bool initialize) {
	$loadClass(scalarTypesAcceptDefaultClass, name, initialize, &_scalarTypesAcceptDefaultClass_ClassInfo_, allocate$scalarTypesAcceptDefaultClass);
	return class$;
}

$Class* scalarTypesAcceptDefaultClass::class$ = nullptr;

} // UniTest