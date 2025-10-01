#include <java/util/function/ToDoubleFunction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {
$CompoundAttribute _ToDoubleFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _ToDoubleFunction_MethodInfo_[] = {
	{"applyAsDouble", "(Ljava/lang/Object;)D", "(TT;)D", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ToDoubleFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.ToDoubleFunction",
	nullptr,
	nullptr,
	nullptr,
	_ToDoubleFunction_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_ToDoubleFunction_Annotations_
};

$Object* allocate$ToDoubleFunction($Class* clazz) {
	return $of($alloc(ToDoubleFunction));
}

$Class* ToDoubleFunction::load$($String* name, bool initialize) {
	$loadClass(ToDoubleFunction, name, initialize, &_ToDoubleFunction_ClassInfo_, allocate$ToDoubleFunction);
	return class$;
}

$Class* ToDoubleFunction::class$ = nullptr;

		} // function
	} // util
} // java