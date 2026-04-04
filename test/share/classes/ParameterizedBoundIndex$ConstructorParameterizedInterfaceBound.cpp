#include <ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound::init$() {
}

ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound::ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound() {
}

$Class* ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound::load$($String* name, bool initialize) {
	$TypeAnnotation init$methodTypeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "METHOD_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", "<T::Ljava/util/List<*>;>()V", 0, $method(ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound, init$, void), nullptr, nullptr, nullptr, init$methodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound", "ParameterizedBoundIndex", "ConstructorParameterizedInterfaceBound", $STATIC},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound",
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
	$loadClass(ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$ConstructorParameterizedInterfaceBound::class$ = nullptr;