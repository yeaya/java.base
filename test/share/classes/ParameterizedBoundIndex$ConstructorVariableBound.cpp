#include <ParameterizedBoundIndex$ConstructorVariableBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$ConstructorVariableBound::init$() {
}

ParameterizedBoundIndex$ConstructorVariableBound::ParameterizedBoundIndex$ConstructorVariableBound() {
}

$Class* ParameterizedBoundIndex$ConstructorVariableBound::load$($String* name, bool initialize) {
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", "<T:Ljava/lang/Object;S:TT;>()V", 0, $method(ParameterizedBoundIndex$ConstructorVariableBound, init$, void), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$ConstructorVariableBound", "ParameterizedBoundIndex", "ConstructorVariableBound", $STATIC},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 1, bound_index = 0"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$ConstructorVariableBound",
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
	$loadClass(ParameterizedBoundIndex$ConstructorVariableBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$ConstructorVariableBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$ConstructorVariableBound::class$ = nullptr;