#include <UniTest/markerClass.h>

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
$CompoundAttribute _markerClass_Annotations_[] = {
	{"LUniTest/Marker;", nullptr},
	{}
};


$MethodInfo _markerClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(markerClass::*)()>(&markerClass::init$))},
	{}
};

$ClassInfo _markerClass_ClassInfo_ = {
	$ACC_SUPER,
	"UniTest.markerClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_markerClass_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_markerClass_Annotations_
};

$Object* allocate$markerClass($Class* clazz) {
	return $of($alloc(markerClass));
}

void markerClass::init$() {
}

markerClass::markerClass() {
}

$Class* markerClass::load$($String* name, bool initialize) {
	$loadClass(markerClass, name, initialize, &_markerClass_ClassInfo_, allocate$markerClass);
	return class$;
}

$Class* markerClass::class$ = nullptr;

} // UniTest