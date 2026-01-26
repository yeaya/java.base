#include <java/util/function/ToLongBiFunction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _ToLongBiFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _ToLongBiFunction_MethodInfo_[] = {
	{"applyAsLong", "(Ljava/lang/Object;Ljava/lang/Object;)J", "(TT;TU;)J", $PUBLIC | $ABSTRACT, $virtualMethod(ToLongBiFunction, applyAsLong, int64_t, Object$*, Object$*)},
	{}
};

$ClassInfo _ToLongBiFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.ToLongBiFunction",
	nullptr,
	nullptr,
	nullptr,
	_ToLongBiFunction_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_ToLongBiFunction_Annotations_
};

$Object* allocate$ToLongBiFunction($Class* clazz) {
	return $of($alloc(ToLongBiFunction));
}

$Class* ToLongBiFunction::load$($String* name, bool initialize) {
	$loadClass(ToLongBiFunction, name, initialize, &_ToLongBiFunction_ClassInfo_, allocate$ToLongBiFunction);
	return class$;
}

$Class* ToLongBiFunction::class$ = nullptr;

		} // function
	} // util
} // java