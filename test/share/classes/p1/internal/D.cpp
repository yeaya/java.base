#include <p1/internal/D.h>
#include <jcpp.h>

#undef D

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {
	namespace internal {

void D::init$() {
}

D::D() {
}

$Class* D::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(D, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"p1.internal.D",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(D, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(D);
	});
	return class$;
}

$Class* D::class$ = nullptr;

	} // internal
} // p1