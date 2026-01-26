#include <java/util/function/IntBinaryOperator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _IntBinaryOperator_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _IntBinaryOperator_MethodInfo_[] = {
	{"applyAsInt", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntBinaryOperator, applyAsInt, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _IntBinaryOperator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.IntBinaryOperator",
	nullptr,
	nullptr,
	nullptr,
	_IntBinaryOperator_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IntBinaryOperator_Annotations_
};

$Object* allocate$IntBinaryOperator($Class* clazz) {
	return $of($alloc(IntBinaryOperator));
}

$Class* IntBinaryOperator::load$($String* name, bool initialize) {
	$loadClass(IntBinaryOperator, name, initialize, &_IntBinaryOperator_ClassInfo_, allocate$IntBinaryOperator);
	return class$;
}

$Class* IntBinaryOperator::class$ = nullptr;

		} // function
	} // util
} // java