#include <Equals2A.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Equals2A::init$() {
}

$Object* Equals2A::m() {
	return this;
}

Equals2A::Equals2A() {
}

$Class* Equals2A::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Equals2A, init$, void)},
		{"m", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Equals2A, m, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Equals2A",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Equals2A, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Equals2A);
	});
	return class$;
}

$Class* Equals2A::class$ = nullptr;