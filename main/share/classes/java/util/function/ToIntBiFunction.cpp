#include <java/util/function/ToIntBiFunction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _ToIntBiFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _ToIntBiFunction_MethodInfo_[] = {
	{"applyAsInt", "(Ljava/lang/Object;Ljava/lang/Object;)I", "(TT;TU;)I", $PUBLIC | $ABSTRACT, $virtualMethod(ToIntBiFunction, applyAsInt, int32_t, Object$*, Object$*)},
	{}
};

$ClassInfo _ToIntBiFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.ToIntBiFunction",
	nullptr,
	nullptr,
	nullptr,
	_ToIntBiFunction_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_ToIntBiFunction_Annotations_
};

$Object* allocate$ToIntBiFunction($Class* clazz) {
	return $of($alloc(ToIntBiFunction));
}

$Class* ToIntBiFunction::load$($String* name, bool initialize) {
	$loadClass(ToIntBiFunction, name, initialize, &_ToIntBiFunction_ClassInfo_, allocate$ToIntBiFunction);
	return class$;
}

$Class* ToIntBiFunction::class$ = nullptr;

		} // function
	} // util
} // java