#include <java/util/function/IntSupplier.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _IntSupplier_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _IntSupplier_MethodInfo_[] = {
	{"getAsInt", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IntSupplier, getAsInt, int32_t)},
	{}
};

$ClassInfo _IntSupplier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.IntSupplier",
	nullptr,
	nullptr,
	nullptr,
	_IntSupplier_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IntSupplier_Annotations_
};

$Object* allocate$IntSupplier($Class* clazz) {
	return $of($alloc(IntSupplier));
}

$Class* IntSupplier::load$($String* name, bool initialize) {
	$loadClass(IntSupplier, name, initialize, &_IntSupplier_ClassInfo_, allocate$IntSupplier);
	return class$;
}

$Class* IntSupplier::class$ = nullptr;

		} // function
	} // util
} // java