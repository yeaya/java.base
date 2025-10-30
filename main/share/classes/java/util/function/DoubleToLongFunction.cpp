#include <java/util/function/DoubleToLongFunction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _DoubleToLongFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _DoubleToLongFunction_MethodInfo_[] = {
	{"applyAsLong", "(D)J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DoubleToLongFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.DoubleToLongFunction",
	nullptr,
	nullptr,
	nullptr,
	_DoubleToLongFunction_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DoubleToLongFunction_Annotations_
};

$Object* allocate$DoubleToLongFunction($Class* clazz) {
	return $of($alloc(DoubleToLongFunction));
}

$Class* DoubleToLongFunction::load$($String* name, bool initialize) {
	$loadClass(DoubleToLongFunction, name, initialize, &_DoubleToLongFunction_ClassInfo_, allocate$DoubleToLongFunction);
	return class$;
}

$Class* DoubleToLongFunction::class$ = nullptr;

		} // function
	} // util
} // java