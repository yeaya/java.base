#include <java/util/function/DoubleToIntFunction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _DoubleToIntFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _DoubleToIntFunction_MethodInfo_[] = {
	{"applyAsInt", "(D)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleToIntFunction, applyAsInt, int32_t, double)},
	{}
};

$ClassInfo _DoubleToIntFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.DoubleToIntFunction",
	nullptr,
	nullptr,
	nullptr,
	_DoubleToIntFunction_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DoubleToIntFunction_Annotations_
};

$Object* allocate$DoubleToIntFunction($Class* clazz) {
	return $of($alloc(DoubleToIntFunction));
}

$Class* DoubleToIntFunction::load$($String* name, bool initialize) {
	$loadClass(DoubleToIntFunction, name, initialize, &_DoubleToIntFunction_ClassInfo_, allocate$DoubleToIntFunction);
	return class$;
}

$Class* DoubleToIntFunction::class$ = nullptr;

		} // function
	} // util
} // java