#include <java/util/function/IntToDoubleFunction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {
$CompoundAttribute _IntToDoubleFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _IntToDoubleFunction_MethodInfo_[] = {
	{"applyAsDouble", "(I)D", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IntToDoubleFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.IntToDoubleFunction",
	nullptr,
	nullptr,
	nullptr,
	_IntToDoubleFunction_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IntToDoubleFunction_Annotations_
};

$Object* allocate$IntToDoubleFunction($Class* clazz) {
	return $of($alloc(IntToDoubleFunction));
}

$Class* IntToDoubleFunction::load$($String* name, bool initialize) {
	$loadClass(IntToDoubleFunction, name, initialize, &_IntToDoubleFunction_ClassInfo_, allocate$IntToDoubleFunction);
	return class$;
}

$Class* IntToDoubleFunction::class$ = nullptr;

		} // function
	} // util
} // java