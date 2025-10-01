#include <java/util/function/ToIntFunction.h>

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
$CompoundAttribute _ToIntFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _ToIntFunction_MethodInfo_[] = {
	{"applyAsInt", "(Ljava/lang/Object;)I", "(TT;)I", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ToIntFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.ToIntFunction",
	nullptr,
	nullptr,
	nullptr,
	_ToIntFunction_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_ToIntFunction_Annotations_
};

$Object* allocate$ToIntFunction($Class* clazz) {
	return $of($alloc(ToIntFunction));
}

$Class* ToIntFunction::load$($String* name, bool initialize) {
	$loadClass(ToIntFunction, name, initialize, &_ToIntFunction_ClassInfo_, allocate$ToIntFunction);
	return class$;
}

$Class* ToIntFunction::class$ = nullptr;

		} // function
	} // util
} // java