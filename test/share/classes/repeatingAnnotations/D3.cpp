#include <repeatingAnnotations/D3.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <repeatingAnnotations/D2.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $D2 = ::repeatingAnnotations::D2;

namespace repeatingAnnotations {

$NamedAttribute D3_Attribute_var$3[] = {
	{"value", 'I', "20"},
	{}
};

$CompoundAttribute D3_CompoundAttribute_var$2 = {
	"LrepeatingAnnotations/Ann;", D3_Attribute_var$3
};

$NamedAttribute D3_Attribute_var$5[] = {
	{"value", 'I', "21"},
	{}
};

$CompoundAttribute D3_CompoundAttribute_var$4 = {
	"LrepeatingAnnotations/Ann;", D3_Attribute_var$5
};

$Attribute D3_Attribute_var$1[] = {
	{'@', &D3_CompoundAttribute_var$2},
	{'@', &D3_CompoundAttribute_var$4},
	{'-'}
};

$NamedAttribute D3_Attribute_var$0[] = {
	{"value", '[', D3_Attribute_var$1},
	{}
};
$CompoundAttribute _D3_Annotations_[] = {
	{"LrepeatingAnnotations/ExpectedAssociated;", D3_Attribute_var$0},
	{}
};


$MethodInfo _D3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D3::*)()>(&D3::init$))},
	{}
};

$ClassInfo _D3_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.D3",
	"repeatingAnnotations.D2",
	nullptr,
	nullptr,
	_D3_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_D3_Annotations_
};

$Object* allocate$D3($Class* clazz) {
	return $of($alloc(D3));
}

void D3::init$() {
	$D2::init$();
}

D3::D3() {
}

$Class* D3::load$($String* name, bool initialize) {
	$loadClass(D3, name, initialize, &_D3_ClassInfo_, allocate$D3);
	return class$;
}

$Class* D3::class$ = nullptr;

} // repeatingAnnotations