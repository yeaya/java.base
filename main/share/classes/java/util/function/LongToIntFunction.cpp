#include <java/util/function/LongToIntFunction.h>

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
$CompoundAttribute _LongToIntFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _LongToIntFunction_MethodInfo_[] = {
	{"applyAsInt", "(J)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LongToIntFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.LongToIntFunction",
	nullptr,
	nullptr,
	nullptr,
	_LongToIntFunction_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_LongToIntFunction_Annotations_
};

$Object* allocate$LongToIntFunction($Class* clazz) {
	return $of($alloc(LongToIntFunction));
}

$Class* LongToIntFunction::load$($String* name, bool initialize) {
	$loadClass(LongToIntFunction, name, initialize, &_LongToIntFunction_ClassInfo_, allocate$LongToIntFunction);
	return class$;
}

$Class* LongToIntFunction::class$ = nullptr;

		} // function
	} // util
} // java