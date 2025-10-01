#include <UniTest/arrayTypesAcceptDefaultClass.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace UniTest {
$CompoundAttribute _arrayTypesAcceptDefaultClass_Annotations_[] = {
	{"LUniTest/ArrayTypesWithDefault;", nullptr},
	{}
};


$MethodInfo _arrayTypesAcceptDefaultClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(arrayTypesAcceptDefaultClass::*)()>(&arrayTypesAcceptDefaultClass::init$))},
	{}
};

$ClassInfo _arrayTypesAcceptDefaultClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.arrayTypesAcceptDefaultClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_arrayTypesAcceptDefaultClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_arrayTypesAcceptDefaultClass_Annotations_
};

$Object* allocate$arrayTypesAcceptDefaultClass($Class* clazz) {
	return $of($alloc(arrayTypesAcceptDefaultClass));
}

void arrayTypesAcceptDefaultClass::init$() {
}

arrayTypesAcceptDefaultClass::arrayTypesAcceptDefaultClass() {
}

$Class* arrayTypesAcceptDefaultClass::load$($String* name, bool initialize) {
	$loadClass(arrayTypesAcceptDefaultClass, name, initialize, &_arrayTypesAcceptDefaultClass_ClassInfo_, allocate$arrayTypesAcceptDefaultClass);
	return class$;
}

$Class* arrayTypesAcceptDefaultClass::class$ = nullptr;

} // UniTest