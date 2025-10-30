#include <repeatingAnnotations/B2.h>

#include <repeatingAnnotations/B1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $B1 = ::repeatingAnnotations::B1;

namespace repeatingAnnotations {

$NamedAttribute B2_Attribute_var$0[] = {
	{"value", 'I', "20"},
	{}
};

$CompoundAttribute _B2_Annotations_[] = {
	{"LrepeatingAnnotations/Ann;", B2_Attribute_var$0},
	{}
};

$MethodInfo _B2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(B2::*)()>(&B2::init$))},
	{}
};

$ClassInfo _B2_ClassInfo_ = {
	$ACC_SUPER,
	"repeatingAnnotations.B2",
	"repeatingAnnotations.B1",
	nullptr,
	nullptr,
	_B2_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_B2_Annotations_
};

$Object* allocate$B2($Class* clazz) {
	return $of($alloc(B2));
}

void B2::init$() {
	$B1::init$();
}

B2::B2() {
}

$Class* B2::load$($String* name, bool initialize) {
	$loadClass(B2, name, initialize, &_B2_ClassInfo_, allocate$B2);
	return class$;
}

$Class* B2::class$ = nullptr;

} // repeatingAnnotations