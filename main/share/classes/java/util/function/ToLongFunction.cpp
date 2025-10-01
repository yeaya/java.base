#include <java/util/function/ToLongFunction.h>

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
$CompoundAttribute _ToLongFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _ToLongFunction_MethodInfo_[] = {
	{"applyAsLong", "(Ljava/lang/Object;)J", "(TT;)J", $PUBLIC | $ABSTRACT},
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