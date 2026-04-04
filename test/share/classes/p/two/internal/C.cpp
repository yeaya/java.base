#include <p/two/internal/C.h>
#include <jcpp.h>

#undef C

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {
	namespace two {
		namespace internal {

int32_t C::m() {
	return 2;
}

$Class* C::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()I", nullptr, $PUBLIC, $virtualMethod(C, m, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"p.two.internal.C",
		nullptr,
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
	} // two
} // p