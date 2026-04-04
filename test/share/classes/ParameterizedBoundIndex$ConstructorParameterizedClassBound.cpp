#include <ParameterizedBoundIndex$ConstructorParameterizedClassBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$ConstructorParameterizedClassBound::init$() {
}

ParameterizedBoundIndex$ConstructorParameterizedClassBound::ParameterizedBoundIndex$ConstructorParameterizedClassBound() {
}

$Class* ParameterizedBoundIndex$ConstructorParameterizedClassBound::load$($String* name, bool initialize) {
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", "<T:Ljava/util/ArrayList<*>;>()V", 0, $method(ParameterizedBoundIndex$ConstructorParameterizedClassBound, init$, void), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$ConstructorParameterizedClassBound", "ParameterizedBoundIndex", "ConstructorParameterizedClassBound", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$ConstructorParameterizedClassBound",
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
	$loadClass(ParameterizedBoundIndex$ConstructorParameterizedClassBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$ConstructorParameterizedClassBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$ConstructorParameterizedClassBound::class$ = nullptr;