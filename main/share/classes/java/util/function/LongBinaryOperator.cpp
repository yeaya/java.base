#include <java/util/function/LongBinaryOperator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _LongBinaryOperator_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _LongBinaryOperator_MethodInfo_[] = {
	{"applyAsLong", "(JJ)J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LongBinaryOperator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.LongBinaryOperator",
	nullptr,
	nullptr,
	nullptr,
	_LongBinaryOperator_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_LongBinaryOperator_Annotations_
};

$Object* allocate$LongBinaryOperator($Class* clazz) {
	return $of($alloc(LongBinaryOperator));
}

$Class* LongBinaryOperator::load$($String* name, bool initialize) {
	$loadClass(LongBinaryOperator, name, initialize, &_LongBinaryOperator_ClassInfo_, allocate$LongBinaryOperator);
	return class$;
}

$Class* LongBinaryOperator::class$ = nullptr;

		} // function
	} // util
} // java