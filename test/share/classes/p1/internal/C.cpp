#include <p1/internal/C.h>
#include <jcpp.h>

#undef C

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {
	namespace internal {

void C::init$() {
}

C::C() {
}

$Class* C::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(C, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p1.internal.C",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(C, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C);
	});
	return class$;
}

$Class* C::class$ = nullptr;

	} // internal
} // p1