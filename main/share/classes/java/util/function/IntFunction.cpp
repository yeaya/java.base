#include <java/util/function/IntFunction.h>

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
$CompoundAttribute _IntFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _IntFunction_MethodInfo_[] = {
	{"apply", "(I)Ljava/lang/Object;", "(I)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IntFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.IntFunction",
	nullptr,
	nullptr,
	nullptr,
	_IntFunction_MethodInfo_,
	"<R:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_IntFunction_Annotations_
};

$Object* allocate$IntFunction($Class* clazz) {
	return $of($alloc(IntFunction));
}

$Class* IntFunction::load$($String* name, bool initialize) {
	$loadClass(IntFunction, name, initialize, &_IntFunction_ClassInfo_, allocate$IntFunction);
	return class$;
}

$Class* IntFunction::class$ = nullptr;

		} // function
	} // util
} // java