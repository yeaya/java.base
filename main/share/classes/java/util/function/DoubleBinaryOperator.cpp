#include <java/util/function/DoubleBinaryOperator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _DoubleBinaryOperator_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _DoubleBinaryOperator_MethodInfo_[] = {
	{"applyAsDouble", "(DD)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleBinaryOperator, applyAsDouble, double, double, double)},
	{}
};

$ClassInfo _DoubleBinaryOperator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.DoubleBinaryOperator",
	nullptr,
	nullptr,
	nullptr,
	_DoubleBinaryOperator_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DoubleBinaryOperator_Annotations_
};

$Object* allocate$DoubleBinaryOperator($Class* clazz) {
	return $of($alloc(DoubleBinaryOperator));
}

$Class* DoubleBinaryOperator::load$($String* name, bool initialize) {
	$loadClass(DoubleBinaryOperator, name, initialize, &_DoubleBinaryOperator_ClassInfo_, allocate$DoubleBinaryOperator);
	return class$;
}

$Class* DoubleBinaryOperator::class$ = nullptr;

		} // function
	} // util
} // java