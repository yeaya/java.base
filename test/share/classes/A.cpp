#include <A.h>
#include <jcpp.h>

#undef A

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void A::init$() {
}

A::A() {
}

$Class* A::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(A, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"A$B", "A", "B", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"A",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"A$B"
	};
	$loadClass(A, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(A);
	});
	return class$;
}

$Class* A::class$ = nullptr;