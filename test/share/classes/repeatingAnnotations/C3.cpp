#include <repeatingAnnotations/C3.h>

#include <repeatingAnnotations/C2.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $C2 = ::repeatingAnnotations::C2;

namespace repeatingAnnotations {

$NamedAttribute C3_Attribute_var$3[] = {
	{"value", 'I', "20"},
	{}
};

$CompoundAttribute C3_CompoundAttribute_var$2 = {
"LrepeatingAnnotations/Ann;", C3_Attribute_var$3
};

$NamedAttribute C3_Attribute_var$5[] = {
	{"value", 'I', "21"},
	{}
};

$CompoundAttribute C3_CompoundAttribute_var$4 = {
"LrepeatingAnnotations/Ann;", C3_Attribute_var$5
};

$Attribute C3_Attribute_var$1[] = {
	{'@', &C3_CompoundAttribute_var$2},
	{'@', &C3_CompoundAttribute_var$4},
	{'-'}
};

$NamedAttribute C3_Attribute_var$0[] = {
	{"value", '[', C3_Attribute_var$1},
	{}
};

$CompoundAttribute _C3_Annotations_[] = {
	{"LrepeatingAnnotations/ExpectedAssociated;", C3_Attribute_var$0},
	{}
};

$MethodInfo _C3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(C3::*)()>(&C3::init$))},
	{}
};

$ClassInfo _C3_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.C3",
	"repeatingAnnotations.C2",
	nullptr,
	nullptr,
	_C3_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_C3_Annotations_
};

$Object* allocate$C3($Class* clazz) {
	return $of($alloc(C3));
}

void C3::init$() {
	$C2::init$();
}

C3::C3() {
}

$Class* C3::load$($String* name, bool initialize) {
	$loadClass(C3, name, initialize, &_C3_ClassInfo_, allocate$C3);
	return class$;
}

$Class* C3::class$ = nullptr;

} // repeatingAnnotations