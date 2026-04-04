#include <ParameterizedBoundIndex$MethodParameterizedInterfaceBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$MethodParameterizedInterfaceBound::init$() {
}

void ParameterizedBoundIndex$MethodParameterizedInterfaceBound::m() {
}

ParameterizedBoundIndex$MethodParameterizedInterfaceBound::ParameterizedBoundIndex$MethodParameterizedInterfaceBound() {
}

$Class* ParameterizedBoundIndex$MethodParameterizedInterfaceBound::load$($String* name, bool initialize) {
	$TypeAnnotation mmethodTypeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ParameterizedBoundIndex$MethodParameterizedInterfaceBound, init$, void)},
		{"m", "()V", "<T::Ljava/util/List<*>;>()V", 0, $virtualMethod(ParameterizedBoundIndex$MethodParameterizedInterfaceBound, m, void), nullptr, nullptr, nullptr, mmethodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$MethodParameterizedInterfaceBound", "ParameterizedBoundIndex", "MethodParameterizedInterfaceBound", $STATIC},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$MethodParameterizedInterfaceBound",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T::Ljava/util/List<*>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		typeAnnotations$$,
		nullptr,
		"ParameterizedBoundIndex"
	};
	$loadClass(ParameterizedBoundIndex$MethodParameterizedInterfaceBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$MethodParameterizedInterfaceBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$MethodParameterizedInterfaceBound::class$ = nullptr;