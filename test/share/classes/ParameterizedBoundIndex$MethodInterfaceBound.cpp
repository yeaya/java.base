#include <ParameterizedBoundIndex$MethodInterfaceBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$MethodInterfaceBound::init$() {
}

void ParameterizedBoundIndex$MethodInterfaceBound::m() {
}

ParameterizedBoundIndex$MethodInterfaceBound::ParameterizedBoundIndex$MethodInterfaceBound() {
}

$Class* ParameterizedBoundIndex$MethodInterfaceBound::load$($String* name, bool initialize) {
	$TypeAnnotation mmethodTypeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ParameterizedBoundIndex$MethodInterfaceBound, init$, void)},
		{"m", "()V", "<T::Ljava/lang/Runnable;>()V", 0, $virtualMethod(ParameterizedBoundIndex$MethodInterfaceBound, m, void), nullptr, nullptr, nullptr, mmethodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$MethodInterfaceBound", "ParameterizedBoundIndex", "MethodInterfaceBound", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$MethodInterfaceBound",
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
	$loadClass(ParameterizedBoundIndex$MethodInterfaceBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$MethodInterfaceBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$MethodInterfaceBound::class$ = nullptr;