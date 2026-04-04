#include <T8032697_anotherpkg/T8032697_A.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace T8032697_anotherpkg {

void T8032697_A::init$() {
}

int32_t T8032697_A::f() {
	return 2;
}

T8032697_A::T8032697_A() {
}

$Class* T8032697_A::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(T8032697_A, init$, void)},
		{"f", "()I", nullptr, $PROTECTED | $FINAL, $method(T8032697_A, f, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"T8032697_anotherpkg.T8032697_A",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(T8032697_A, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(T8032697_A);
	});
	return class$;
}

$Class* T8032697_A::class$ = nullptr;

} // T8032697_anotherpkg