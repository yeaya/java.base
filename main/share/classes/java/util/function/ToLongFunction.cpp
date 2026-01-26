#include <java/util/function/ToLongFunction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _ToLongFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _ToLongFunction_MethodInfo_[] = {
	{"applyAsLong", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC | $ABSTRACT, $virtualMethod(ToLongFunction, applyAsLong, int64_t, Object$*)},
	{}
};

$ClassInfo _ToLongFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.ToLongFunction",
	nullptr,
	nullptr,
	nullptr,
	_ToLongFunction_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_ToLongFunction_Annotations_
};

$Object* allocate$ToLongFunction($Class* clazz) {
	return $of($alloc(ToLongFunction));
}

$Class* ToLongFunction::load$($String* name, bool initialize) {
	$loadClass(ToLongFunction, name, initialize, &_ToLongFunction_ClassInfo_, allocate$ToLongFunction);
	return class$;
}

$Class* ToLongFunction::class$ = nullptr;

		} // function
	} // util
} // java