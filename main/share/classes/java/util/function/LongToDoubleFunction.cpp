#include <java/util/function/LongToDoubleFunction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _LongToDoubleFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _LongToDoubleFunction_MethodInfo_[] = {
	{"applyAsDouble", "(J)D", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LongToDoubleFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.LongToDoubleFunction",
	nullptr,
	nullptr,
	nullptr,
	_LongToDoubleFunction_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_LongToDoubleFunction_Annotations_
};

$Object* allocate$LongToDoubleFunction($Class* clazz) {
	return $of($alloc(LongToDoubleFunction));
}

$Class* LongToDoubleFunction::load$($String* name, bool initialize) {
	$loadClass(LongToDoubleFunction, name, initialize, &_LongToDoubleFunction_ClassInfo_, allocate$LongToDoubleFunction);
	return class$;
}

$Class* LongToDoubleFunction::class$ = nullptr;

		} // function
	} // util
} // java