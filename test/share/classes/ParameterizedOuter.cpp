#include <ParameterizedOuter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ParameterizedOuter::init$() {
}

ParameterizedOuter::ParameterizedOuter() {
}

$Class* ParameterizedOuter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ParameterizedOuter, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterizedOuter$ParameterizedInner", "ParameterizedOuter", "ParameterizedInner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterizedOuter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ParameterizedOuter$ParameterizedInner"
	};
	$loadClass(ParameterizedOuter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedOuter);
	});
	return class$;
}

$Class* ParameterizedOuter::class$ = nullptr;