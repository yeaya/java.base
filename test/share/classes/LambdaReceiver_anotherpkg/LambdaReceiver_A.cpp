#include <LambdaReceiver_anotherpkg/LambdaReceiver_A.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace LambdaReceiver_anotherpkg {

void LambdaReceiver_A::init$() {
}

int32_t LambdaReceiver_A::f() {
	return 2;
}

LambdaReceiver_A::LambdaReceiver_A() {
}

$Class* LambdaReceiver_A::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaReceiver_A, init$, void)},
		{"f", "()I", nullptr, $PROTECTED | $FINAL, $method(LambdaReceiver_A, f, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LambdaReceiver_anotherpkg.LambdaReceiver_A",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LambdaReceiver_A, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaReceiver_A);
	});
	return class$;
}

$Class* LambdaReceiver_A::class$ = nullptr;

} // LambdaReceiver_anotherpkg