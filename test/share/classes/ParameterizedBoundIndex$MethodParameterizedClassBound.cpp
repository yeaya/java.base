#include <ParameterizedBoundIndex$MethodParameterizedClassBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$MethodParameterizedClassBound::init$() {
}

void ParameterizedBoundIndex$MethodParameterizedClassBound::m() {
}

ParameterizedBoundIndex$MethodParameterizedClassBound::ParameterizedBoundIndex$MethodParameterizedClassBound() {
}

$Class* ParameterizedBoundIndex$MethodParameterizedClassBound::load$($String* name, bool initialize) {
	$TypeAnnotation mmethodTypeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ParameterizedBoundIndex$MethodParameterizedClassBound, init$, void)},
		{"m", "()V", "<T:Ljava/util/ArrayList<*>;>()V", 0, $virtualMethod(ParameterizedBoundIndex$MethodParameterizedClassBound, m, void), nullptr, nullptr, nullptr, mmethodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$MethodParameterizedClassBound", "ParameterizedBoundIndex", "MethodParameterizedClassBound", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$MethodParameterizedClassBound",
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
	$loadClass(ParameterizedBoundIndex$MethodParameterizedClassBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$MethodParameterizedClassBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$MethodParameterizedClassBound::class$ = nullptr;