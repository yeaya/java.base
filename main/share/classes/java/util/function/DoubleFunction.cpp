#include <java/util/function/DoubleFunction.h>

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
$CompoundAttribute _DoubleFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _DoubleFunction_MethodInfo_[] = {
	{"apply", "(D)Ljava/lang/Object;", "(D)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DoubleFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.DoubleFunction",
	nullptr,
	nullptr,
	nullptr,
	_DoubleFunction_MethodInfo_,
	"<R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_DoubleFunction_Annotations_
};

$Object* allocate$DoubleFunction($Class* clazz) {
	return $of($alloc(DoubleFunction));
}

$Class* DoubleFunction::load$($String* name, bool initialize) {
	$loadClass(DoubleFunction, name, initialize, &_DoubleFunction_ClassInfo_, allocate$DoubleFunction);
	return class$;
}

$Class* DoubleFunction::class$ = nullptr;

		} // function
	} // util
} // java