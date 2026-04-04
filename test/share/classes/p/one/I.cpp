#include <p/one/I.h>
#include <jcpp.h>

#undef I

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {
	namespace one {

int32_t I::m() {
	return 1;
}

$Class* I::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"m", "()I", nullptr, $PUBLIC, $virtualMethod(I, m, int32_t)},
		{"run", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(I, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"p.one.I",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(I, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(I);
	});
	return class$;
}

$Class* I::class$ = nullptr;

	} // one
} // p