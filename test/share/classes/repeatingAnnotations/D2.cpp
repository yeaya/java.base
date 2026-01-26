#include <repeatingAnnotations/D2.h>

#include <repeatingAnnotations/D1.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $D1 = ::repeatingAnnotations::D1;

namespace repeatingAnnotations {

$NamedAttribute D2_Attribute_var$3[] = {
	{"value", 'I', "20"},
	{}
};

$CompoundAttribute D2_CompoundAttribute_var$2 = {
"LrepeatingAnnotations/Ann;", D2_Attribute_var$3
};

$NamedAttribute D2_Attribute_var$5[] = {
	{"value", 'I', "21"},
	{}
};

$CompoundAttribute D2_CompoundAttribute_var$4 = {
"LrepeatingAnnotations/Ann;", D2_Attribute_var$5
};

$Attribute D2_Attribute_var$1[] = {
	{'@', &D2_CompoundAttribute_var$2},
	{'@', &D2_CompoundAttribute_var$4},
	{'-'}
};

$NamedAttribute D2_Attribute_var$0[] = {
	{"value", '[', D2_Attribute_var$1},
	{}
};

$CompoundAttribute _D2_Annotations_[] = {
	{"LrepeatingAnnotations/AnnCont;", D2_Attribute_var$0},
	{}
};

$MethodInfo _D2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(D2, init$, void)},
	{}
};

$ClassInfo _D2_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.D2",
	"repeatingAnnotations.D1",
	nullptr,
	nullptr,
	_D2_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_D2_Annotations_
};

$Object* allocate$D2($Class* clazz) {
	return $of($alloc(D2));
}

void D2::init$() {
	$D1::init$();
}

D2::D2() {
}

$Class* D2::load$($String* name, bool initialize) {
	$loadClass(D2, name, initialize, &_D2_ClassInfo_, allocate$D2);
	return class$;
}

$Class* D2::class$ = nullptr;

} // repeatingAnnotations