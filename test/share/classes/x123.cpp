#include <x123.h>
#include <InitArg.h>
#include <jcpp.h>

using $InitArg = ::InitArg;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void x123::init$() {
}

void x123::clinit$($Class* clazz) {
	{
		$init($InitArg);
		$InitArg::x123Initialized = true;
	}
}

x123::x123() {
}

$Class* x123::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(x123, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"x123",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(x123, name, initialize, &classInfo$$, x123::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(x123);
	});
	return class$;
}

$Class* x123::class$ = nullptr;