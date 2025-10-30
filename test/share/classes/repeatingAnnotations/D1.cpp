#include <repeatingAnnotations/D1.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace repeatingAnnotations {

$NamedAttribute D1_Attribute_var$3[] = {
	{"value", 'I', "10"},
	{}
};

$CompoundAttribute D1_CompoundAttribute_var$2 = {
"LrepeatingAnnotations/Ann;", D1_Attribute_var$3
};

$NamedAttribute D1_Attribute_var$5[] = {
	{"value", 'I', "11"},
	{}
};

$CompoundAttribute D1_CompoundAttribute_var$4 = {
"LrepeatingAnnotations/Ann;", D1_Attribute_var$5
};

$Attribute D1_Attribute_var$1[] = {
	{'@', &D1_CompoundAttribute_var$2},
	{'@', &D1_CompoundAttribute_var$4},
	{'-'}
};

$NamedAttribute D1_Attribute_var$0[] = {
	{"value", '[', D1_Attribute_var$1},
	{}
};

$CompoundAttribute _D1_Annotations_[] = {
	{"LrepeatingAnnotations/AnnCont;", D1_Attribute_var$0},
	{}
};

$MethodInfo _D1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(D1::*)()>(&D1::init$))},
	{}
};

$ClassInfo _D1_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.D1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_D1_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_D1_Annotations_
};

$Object* allocate$D1($Class* clazz) {
	return $of($alloc(D1));
}

void D1::init$() {
}

D1::D1() {
}

$Class* D1::load$($String* name, bool initialize) {
	$loadClass(D1, name, initialize, &_D1_ClassInfo_, allocate$D1);
	return class$;
}

$Class* D1::class$ = nullptr;

} // repeatingAnnotations