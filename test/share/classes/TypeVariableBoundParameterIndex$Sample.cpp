#include <TypeVariableBoundParameterIndex$Sample.h>
#include <TypeVariableBoundParameterIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void TypeVariableBoundParameterIndex$Sample::init$() {
}

TypeVariableBoundParameterIndex$Sample::TypeVariableBoundParameterIndex$Sample() {
}

$Class* TypeVariableBoundParameterIndex$Sample::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TypeVariableBoundParameterIndex$Sample, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeVariableBoundParameterIndex$Sample", "TypeVariableBoundParameterIndex", "Sample", $STATIC},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LTypeVariableBoundParameterIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1, location = (TYPE_ARGUMENT(0))"},
		{"LTypeVariableBoundParameterIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 1, location = (TYPE_ARGUMENT(0))"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TypeVariableBoundParameterIndex$Sample",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T::Ljava/util/concurrent/Callable<*>;S::Ljava/util/concurrent/Callable<*>;U::Ljava/util/concurrent/Callable<*>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		typeAnnotations$$,
		nullptr,
		"TypeVariableBoundParameterIndex"
	};
	$loadClass(TypeVariableBoundParameterIndex$Sample, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeVariableBoundParameterIndex$Sample);
	});
	return class$;
}

$Class* TypeVariableBoundParameterIndex$Sample::class$ = nullptr;