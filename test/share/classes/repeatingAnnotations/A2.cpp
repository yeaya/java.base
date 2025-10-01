#include <repeatingAnnotations/A2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <repeatingAnnotations/A1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $A1 = ::repeatingAnnotations::A1;

namespace repeatingAnnotations {

$NamedAttribute A2_Attribute_var$0[] = {
	{"value", 'I', "20"},
	{}
};
$CompoundAttribute _A2_Annotations_[] = {
	{"LrepeatingAnnotations/Ann;", A2_Attribute_var$0},
	{}
};


$MethodInfo _A2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(A2::*)()>(&A2::init$))},
	{}
};

$ClassInfo _A2_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.A2",
	"repeatingAnnotations.A1",
	nullptr,
	nullptr,
	_A2_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_A2_Annotations_
};

$Object* allocate$A2($Class* clazz) {
	return $of($alloc(A2));
}

void A2::init$() {
	$A1::init$();
}

A2::A2() {
}

$Class* A2::load$($String* name, bool initialize) {
	$loadClass(A2, name, initialize, &_A2_ClassInfo_, allocate$A2);
	return class$;
}

$Class* A2::class$ = nullptr;

} // repeatingAnnotations