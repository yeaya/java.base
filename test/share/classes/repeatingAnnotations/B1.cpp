#include <repeatingAnnotations/B1.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace repeatingAnnotations {

$NamedAttribute B1_Attribute_var$3[] = {
	{"value", 'I', "10"},
	{}
};

$CompoundAttribute B1_CompoundAttribute_var$2 = {
"LrepeatingAnnotations/Ann;", B1_Attribute_var$3
};

$NamedAttribute B1_Attribute_var$5[] = {
	{"value", 'I', "11"},
	{}
};

$CompoundAttribute B1_CompoundAttribute_var$4 = {
"LrepeatingAnnotations/Ann;", B1_Attribute_var$5
};

$Attribute B1_Attribute_var$1[] = {
	{'@', &B1_CompoundAttribute_var$2},
	{'@', &B1_CompoundAttribute_var$4},
	{'-'}
};

$NamedAttribute B1_Attribute_var$0[] = {
	{"value", '[', B1_Attribute_var$1},
	{}
};

$CompoundAttribute _B1_Annotations_[] = {
	{"LrepeatingAnnotations/AnnCont;", B1_Attribute_var$0},
	{}
};

$MethodInfo _B1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(B1, init$, void)},
	{}
};

$ClassInfo _B1_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.B1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_B1_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_B1_Annotations_
};

$Object* allocate$B1($Class* clazz) {
	return $of($alloc(B1));
}

void B1::init$() {
}

B1::B1() {
}

$Class* B1::load$($String* name, bool initialize) {
	$loadClass(B1, name, initialize, &_B1_ClassInfo_, allocate$B1);
	return class$;
}

$Class* B1::class$ = nullptr;

} // repeatingAnnotations