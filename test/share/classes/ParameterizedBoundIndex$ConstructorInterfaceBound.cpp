#include <ParameterizedBoundIndex$ConstructorInterfaceBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$ConstructorInterfaceBound::init$() {
}

ParameterizedBoundIndex$ConstructorInterfaceBound::ParameterizedBoundIndex$ConstructorInterfaceBound() {
}

$Class* ParameterizedBoundIndex$ConstructorInterfaceBound::load$($String* name, bool initialize) {
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", "<T::Ljava/lang/Runnable;>()V", 0, $method(ParameterizedBoundIndex$ConstructorInterfaceBound, init$, void), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$ConstructorInterfaceBound", "ParameterizedBoundIndex", "ConstructorInterfaceBound", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$ConstructorInterfaceBound",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ParameterizedBoundIndex"
	};
	$loadClass(ParameterizedBoundIndex$ConstructorInterfaceBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$ConstructorInterfaceBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$ConstructorInterfaceBound::class$ = nullptr;