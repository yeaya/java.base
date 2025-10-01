#include <repeatingAnnotations/C2.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <repeatingAnnotations/C1.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $C1 = ::repeatingAnnotations::C1;

namespace repeatingAnnotations {

$NamedAttribute C2_Attribute_var$3[] = {
	{"value", 'I', "20"},
	{}
};

$CompoundAttribute C2_CompoundAttribute_var$2 = {
	"LrepeatingAnnotations/Ann;", C2_Attribute_var$3
};

$NamedAttribute C2_Attribute_var$5[] = {
	{"value", 'I', "21"},
	{}
};

$CompoundAttribute C2_CompoundAttribute_var$4 = {
	"LrepeatingAnnotations/Ann;", C2_Attribute_var$5
};

$Attribute C2_Attribute_var$1[] = {
	{'@', &C2_CompoundAttribute_var$2},
	{'@', &C2_CompoundAttribute_var$4},
	{'-'}
};

$NamedAttribute C2_Attribute_var$0[] = {
	{"value", '[', C2_Attribute_var$1},
	{}
};
$CompoundAttribute _C2_Annotations_[] = {
	{"LrepeatingAnnotations/AnnCont;", C2_Attribute_var$0},
	{}
};


$MethodInfo _C2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(C2::*)()>(&C2::init$))},
	{}
};

$ClassInfo _C2_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.C2",
	"repeatingAnnotations.C1",
	nullptr,
	nullptr,
	_C2_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_C2_Annotations_
};

$Object* allocate$C2($Class* clazz) {
	return $of($alloc(C2));
}

void C2::init$() {
	$C1::init$();
}

C2::C2() {
}

$Class* C2::load$($String* name, bool initialize) {
	$loadClass(C2, name, initialize, &_C2_ClassInfo_, allocate$C2);
	return class$;
}

$Class* C2::class$ = nullptr;

} // repeatingAnnotations