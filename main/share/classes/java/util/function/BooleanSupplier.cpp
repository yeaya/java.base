#include <java/util/function/BooleanSupplier.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _BooleanSupplier_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _BooleanSupplier_MethodInfo_[] = {
	{"getAsBoolean", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BooleanSupplier, getAsBoolean, bool)},
	{}
};

$ClassInfo _BooleanSupplier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.BooleanSupplier",
	nullptr,
	nullptr,
	nullptr,
	_BooleanSupplier_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_BooleanSupplier_Annotations_
};

$Object* allocate$BooleanSupplier($Class* clazz) {
	return $of($alloc(BooleanSupplier));
}

$Class* BooleanSupplier::load$($String* name, bool initialize) {
	$loadClass(BooleanSupplier, name, initialize, &_BooleanSupplier_ClassInfo_, allocate$BooleanSupplier);
	return class$;
}

$Class* BooleanSupplier::class$ = nullptr;

		} // function
	} // util
} // java