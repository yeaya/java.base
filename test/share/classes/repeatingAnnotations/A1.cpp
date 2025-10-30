#include <repeatingAnnotations/A1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace repeatingAnnotations {

$NamedAttribute A1_Attribute_var$0[] = {
	{"value", 'I', "10"},
	{}
};

$CompoundAttribute _A1_Annotations_[] = {
	{"LrepeatingAnnotations/Ann;", A1_Attribute_var$0},
	{}
};

$MethodInfo _A1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(A1::*)()>(&A1::init$))},
	{}
};

$ClassInfo _A1_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.A1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_A1_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_A1_Annotations_
};

$Object* allocate$A1($Class* clazz) {
	return $of($alloc(A1));
}

void A1::init$() {
}

A1::A1() {
}

$Class* A1::load$($String* name, bool initialize) {
	$loadClass(A1, name, initialize, &_A1_ClassInfo_, allocate$A1);
	return class$;
}

$Class* A1::class$ = nullptr;

} // repeatingAnnotations