#include <Outer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Outer::init$() {
}

Outer::Outer() {
}

$Class* Outer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Outer, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Outer$Inner", "Outer", "Inner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Outer",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Outer$Inner"
	};
	$loadClass(Outer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Outer);
	});
	return class$;
}

$Class* Outer::class$ = nullptr;