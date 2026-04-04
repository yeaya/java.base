#include <p1/internal/B.h>
#include <jcpp.h>

#undef B

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {
	namespace internal {

void B::init$() {
}

B::B() {
}

$Class* B::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(B, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p1.internal.B",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(B, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(B);
	});
	return class$;
}

$Class* B::class$ = nullptr;

	} // internal
} // p1