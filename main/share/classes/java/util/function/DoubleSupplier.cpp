#include <java/util/function/DoubleSupplier.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _DoubleSupplier_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _DoubleSupplier_MethodInfo_[] = {
	{"getAsDouble", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DoubleSupplier, getAsDouble, double)},
	{}
};

$ClassInfo _DoubleSupplier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.DoubleSupplier",
	nullptr,
	nullptr,
	nullptr,
	_DoubleSupplier_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DoubleSupplier_Annotations_
};

$Object* allocate$DoubleSupplier($Class* clazz) {
	return $of($alloc(DoubleSupplier));
}

$Class* DoubleSupplier::load$($String* name, bool initialize) {
	$loadClass(DoubleSupplier, name, initialize, &_DoubleSupplier_ClassInfo_, allocate$DoubleSupplier);
	return class$;
}

$Class* DoubleSupplier::class$ = nullptr;

		} // function
	} // util
} // java