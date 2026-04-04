#include <ParameterAnnotations$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ParameterAnnotations$1::init$() {
}

ParameterAnnotations$1::ParameterAnnotations$1() {
}

$Class* ParameterAnnotations$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ParameterAnnotations$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ParameterAnnotations",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ParameterAnnotations$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ParameterAnnotations$1",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ParameterAnnotations"
	};
	$loadClass(ParameterAnnotations$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterAnnotations$1);
	});
	return class$;
}

$Class* ParameterAnnotations$1::class$ = nullptr;