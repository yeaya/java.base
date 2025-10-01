#include <java/util/function/LongFunction.h>

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
$CompoundAttribute _LongFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _LongFunction_MethodInfo_[] = {
	{"apply", "(J)Ljava/lang/Object;", "(J)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LongFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.LongFunction",
	nullptr,
	nullptr,
	nullptr,
	_LongFunction_MethodInfo_,
	"<R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_LongFunction_Annotations_
};

$Object* allocate$LongFunction($Class* clazz) {
	return $of($alloc(LongFunction));
}

$Class* LongFunction::load$($String* name, bool initialize) {
	$loadClass(LongFunction, name, initialize, &_LongFunction_ClassInfo_, allocate$LongFunction);
	return class$;
}

$Class* LongFunction::class$ = nullptr;

		} // function
	} // util
} // java