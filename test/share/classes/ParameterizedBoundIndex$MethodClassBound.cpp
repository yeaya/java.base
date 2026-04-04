#include <ParameterizedBoundIndex$MethodClassBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$MethodClassBound::init$() {
}

void ParameterizedBoundIndex$MethodClassBound::m() {
}

ParameterizedBoundIndex$MethodClassBound::ParameterizedBoundIndex$MethodClassBound() {
}

$Class* ParameterizedBoundIndex$MethodClassBound::load$($String* name, bool initialize) {
	$TypeAnnotation mmethodTypeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ParameterizedBoundIndex$MethodClassBound, init$, void)},
		{"m", "()V", "<T:Ljava/lang/Void;>()V", 0, $virtualMethod(ParameterizedBoundIndex$MethodClassBound, m, void), nullptr, nullptr, nullptr, mmethodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$MethodClassBound", "ParameterizedBoundIndex", "MethodClassBound", $STATIC},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$MethodClassBound",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Void;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		typeAnnotations$$,
		nullptr,
		"ParameterizedBoundIndex"
	};
	$loadClass(ParameterizedBoundIndex$MethodClassBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$MethodClassBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$MethodClassBound::class$ = nullptr;