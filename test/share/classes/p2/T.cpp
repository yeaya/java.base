#include <p2/T.h>
#include <jcpp.h>

#undef T

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p2 {

void T::init$() {
}

T::T() {
}

$Class* T::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(T, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p2.T",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(T, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(T);
	});
	return class$;
}

$Class* T::class$ = nullptr;

} // p2