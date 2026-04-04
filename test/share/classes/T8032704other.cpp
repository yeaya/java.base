#include <T8032704other.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void T8032704other::init$() {
}

T8032704other::T8032704other() {
}

$Class* T8032704other::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(T8032704other, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"T8032704other",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(T8032704other, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(T8032704other);
	});
	return class$;
}

$Class* T8032704other::class$ = nullptr;