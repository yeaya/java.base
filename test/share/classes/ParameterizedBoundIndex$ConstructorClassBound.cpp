#include <ParameterizedBoundIndex$ConstructorClassBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$ConstructorClassBound::init$() {
}

ParameterizedBoundIndex$ConstructorClassBound::ParameterizedBoundIndex$ConstructorClassBound() {
}

$Class* ParameterizedBoundIndex$ConstructorClassBound::load$($String* name, bool initialize) {
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", "<T:Ljava/lang/Void;>()V", 0, $method(ParameterizedBoundIndex$ConstructorClassBound, init$, void), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$ConstructorClassBound", "ParameterizedBoundIndex", "ConstructorClassBound", $STATIC},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 0"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$ConstructorClassBound",
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
	$loadClass(ParameterizedBoundIndex$ConstructorClassBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$ConstructorClassBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$ConstructorClassBound::class$ = nullptr;