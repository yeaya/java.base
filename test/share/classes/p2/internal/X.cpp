#include <p2/internal/X.h>
#include <jcpp.h>

#undef X

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p2 {
	namespace internal {

void X::init$() {
}

X::X() {
}

$Class* X::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p2.internal.X",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(X, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X);
	});
	return class$;
}

$Class* X::class$ = nullptr;

	} // internal
} // p2