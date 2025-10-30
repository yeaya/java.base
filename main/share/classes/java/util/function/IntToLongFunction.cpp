#include <java/util/function/IntToLongFunction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _IntToLongFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _IntToLongFunction_MethodInfo_[] = {
	{"applyAsLong", "(I)J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IntToLongFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.IntToLongFunction",
	nullptr,
	nullptr,
	nullptr,
	_IntToLongFunction_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IntToLongFunction_Annotations_
};

$Object* allocate$IntToLongFunction($Class* clazz) {
	return $of($alloc(IntToLongFunction));
}

$Class* IntToLongFunction::load$($String* name, bool initialize) {
	$loadClass(IntToLongFunction, name, initialize, &_IntToLongFunction_ClassInfo_, allocate$IntToLongFunction);
	return class$;
}

$Class* IntToLongFunction::class$ = nullptr;

		} // function
	} // util
} // java