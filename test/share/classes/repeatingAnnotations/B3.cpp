#include <repeatingAnnotations/B3.h>

#include <repeatingAnnotations/B2.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $B2 = ::repeatingAnnotations::B2;

namespace repeatingAnnotations {

$NamedAttribute B3_Attribute_var$3[] = {
	{"value", 'I', "20"},
	{}
};

$CompoundAttribute B3_CompoundAttribute_var$2 = {
"LrepeatingAnnotations/Ann;", B3_Attribute_var$3
};

$Attribute B3_Attribute_var$1[] = {
	{'@', &B3_CompoundAttribute_var$2},
	{'-'}
};

$NamedAttribute B3_Attribute_var$0[] = {
	{"value", '[', B3_Attribute_var$1},
	{}
};

$CompoundAttribute _B3_Annotations_[] = {
	{"LrepeatingAnnotations/ExpectedAssociated;", B3_Attribute_var$0},
	{}
};

$MethodInfo _B3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(B3, init$, void)},
	{}
};

$ClassInfo _B3_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.B3",
	"repeatingAnnotations.B2",
	nullptr,
	nullptr,
	_B3_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_B3_Annotations_
};

$Object* allocate$B3($Class* clazz) {
	return $of($alloc(B3));
}

void B3::init$() {
	$B2::init$();
}

B3::B3() {
}

$Class* B3::load$($String* name, bool initialize) {
	$loadClass(B3, name, initialize, &_B3_ClassInfo_, allocate$B3);
	return class$;
}

$Class* B3::class$ = nullptr;

} // repeatingAnnotations