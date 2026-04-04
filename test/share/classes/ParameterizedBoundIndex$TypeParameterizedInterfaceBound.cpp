#include <ParameterizedBoundIndex$TypeParameterizedInterfaceBound.h>
#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

void ParameterizedBoundIndex$TypeParameterizedInterfaceBound::init$() {
}

ParameterizedBoundIndex$TypeParameterizedInterfaceBound::ParameterizedBoundIndex$TypeParameterizedInterfaceBound() {
}

$Class* ParameterizedBoundIndex$TypeParameterizedInterfaceBound::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ParameterizedBoundIndex$TypeParameterizedInterfaceBound, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedBoundIndex$TypeParameterizedInterfaceBound", "ParameterizedBoundIndex", "TypeParameterizedInterfaceBound", $STATIC},
		{}
	};
	$TypeAnnotation typeAnnotations$$[] = {
		{"LParameterizedBoundIndex$TypeAnnotation;", nullptr, "CLASS_TYPE_PARAMETER_BOUND, param_index = 0, bound_index = 1"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedBoundIndex$TypeParameterizedInterfaceBound",
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
	$loadClass(ParameterizedBoundIndex$TypeParameterizedInterfaceBound, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedBoundIndex$TypeParameterizedInterfaceBound);
	});
	return class$;
}

$Class* ParameterizedBoundIndex$TypeParameterizedInterfaceBound::class$ = nullptr;