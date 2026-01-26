#include <repeatingAnnotations/A3.h>

#include <repeatingAnnotations/A2.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $A2 = ::repeatingAnnotations::A2;

namespace repeatingAnnotations {

$NamedAttribute A3_Attribute_var$3[] = {
	{"value", 'I', "20"},
	{}
};

$CompoundAttribute A3_CompoundAttribute_var$2 = {
"LrepeatingAnnotations/Ann;", A3_Attribute_var$3
};

$Attribute A3_Attribute_var$1[] = {
	{'@', &A3_CompoundAttribute_var$2},
	{'-'}
};

$NamedAttribute A3_Attribute_var$0[] = {
	{"value", '[', A3_Attribute_var$1},
	{}
};

$CompoundAttribute _A3_Annotations_[] = {
	{"LrepeatingAnnotations/ExpectedAssociated;", A3_Attribute_var$0},
	{}
};

$MethodInfo _A3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(A3, init$, void)},
	{}
};

$ClassInfo _A3_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.A3",
	"repeatingAnnotations.A2",
	nullptr,
	nullptr,
	_A3_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_A3_Annotations_
};

$Object* allocate$A3($Class* clazz) {
	return $of($alloc(A3));
}

void A3::init$() {
	$A2::init$();
}

A3::A3() {
}

$Class* A3::load$($String* name, bool initialize) {
	$loadClass(A3, name, initialize, &_A3_ClassInfo_, allocate$A3);
	return class$;
}

$Class* A3::class$ = nullptr;

} // repeatingAnnotations