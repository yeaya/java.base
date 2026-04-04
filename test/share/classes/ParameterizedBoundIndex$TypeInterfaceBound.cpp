#include <ParameterizedBoundIndex$TypeInterfaceBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$TypeInterfaceBound::init$() {
}

ParameterizedBoundIndex$TypeInterfaceBound::ParameterizedBoundIndex$TypeInterfaceBound() {
}

$Class* ParameterizedBoundIndex$TypeInterfaceBound::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ParameterizedBoundIndex$TypeInterfaceBound, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$TypeInterfaceBound", "ParameterizedBoundIndex", "TypeInterfaceBound", $STATIC},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$TypeInterfaceBound",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T::Ljava/lang/Runnable;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		typeAnnotations$$,
		nullptr,
		"ParameterizedBoundIndex"
	};
	$loadClass(ParameterizedBoundIndex$TypeInterfaceBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$TypeInterfaceBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$TypeInterfaceBound::class$ = nullptr;