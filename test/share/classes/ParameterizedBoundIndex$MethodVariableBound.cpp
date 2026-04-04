#include <ParameterizedBoundIndex$MethodVariableBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$MethodVariableBound::init$() {
}

void ParameterizedBoundIndex$MethodVariableBound::m() {
}

ParameterizedBoundIndex$MethodVariableBound::ParameterizedBoundIndex$MethodVariableBound() {
}

$Class* ParameterizedBoundIndex$MethodVariableBound::load$($String* name, bool initialize) {
	$TypeAnnotation mmethodTypeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ParameterizedBoundIndex$MethodVariableBound, init$, void)},
		{"m", "()V", "<T:Ljava/lang/Object;S:TT;>()V", 0, $virtualMethod(ParameterizedBoundIndex$MethodVariableBound, m, void), nullptr, nullptr, nullptr, mmethodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$MethodVariableBound", "ParameterizedBoundIndex", "MethodVariableBound", $STATIC},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 0"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$MethodVariableBound",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;S:TT;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		typeAnnotations$$,
		nullptr,
		"ParameterizedBoundIndex"
	};
	$loadClass(ParameterizedBoundIndex$MethodVariableBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$MethodVariableBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$MethodVariableBound::class$ = nullptr;