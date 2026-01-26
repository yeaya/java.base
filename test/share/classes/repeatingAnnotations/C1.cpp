#include <repeatingAnnotations/C1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace repeatingAnnotations {

$NamedAttribute C1_Attribute_var$0[] = {
	{"value", 'I', "10"},
	{}
};

$CompoundAttribute _C1_Annotations_[] = {
	{"LrepeatingAnnotations/Ann;", C1_Attribute_var$0},
	{}
};

$MethodInfo _C1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(C1, init$, void)},
	{}
};

$ClassInfo _C1_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.C1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_C1_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_C1_Annotations_
};

$Object* allocate$C1($Class* clazz) {
	return $of($alloc(C1));
}

void C1::init$() {
}

C1::C1() {
}

$Class* C1::load$($String* name, bool initialize) {
	$loadClass(C1, name, initialize, &_C1_ClassInfo_, allocate$C1);
	return class$;
}

$Class* C1::class$ = nullptr;

} // repeatingAnnotations